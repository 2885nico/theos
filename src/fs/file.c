#include "file.h"
#include "status.h"
#include "fat/fat16.h"
#include "disk/disk.h"
#include "kernel.h"
#include "memory/memory.h"
#include "string/string.h"
#include "memory/heap/kheap.h"
#include "config.h"

struct filesystem* filesystems[PEACHOS_MAX_FILESYSTEMS];
struct file_descriptor* file_descriptors[PEACHOS_MAX_FILEDESCRIPTORS];

static struct filesystem** fs_get_free_filesystem()
{
	int i = 0;
	for (i = 0; i < PEACHOS_MAX_FILESYSTEMS; i++)
	{
		if(filesystems[i] == 0)
		{
			return &filesystems[i];
		}
	}
	return 0;
}

void fs_insert_filesystem(struct filesystem *filesystem)
{
	struct filesystem** fs;
	fs = fs_get_free_filesystem();
	if(!fs)
	{
		print("no fs!");
		while(1);
	}
	*fs = filesystem;
}

static void fs_static_load()
{
	fs_insert_filesystem(fat16_init());
}

void fs_load()
{
	memset(filesystems, 0, sizeof(filesystems));
	fs_static_load();
}

void fs_init()
{
	memset(file_descriptors, 0, sizeof(file_descriptors));
	fs_load();
}

static void file_free_descriptor(struct file_descriptor* desc)
{
	file_descriptors[desc->index-1] = 0x00;
	kfree(desc);
}

static int file_new_descriptor(struct file_descriptor** desc_out)
{
	int res = -ENOMEM;
	for (int i = 0; i < PEACHOS_MAX_FILEDESCRIPTORS; i++)
	{
		if (file_descriptors[i] == 0) 
		{
			struct file_descriptor* desc = kzalloc(sizeof(struct file_descriptor));
			desc->index = i+1;
			file_descriptors[i] = desc;
			*desc_out = desc;
			res = 0;
			break;
		}
	}
	return res;
}

static struct file_descriptor* file_get_descriptor(int fd)
{
	if(fd <= 0 || fd >= PEACHOS_MAX_FILEDESCRIPTORS)
	{
		return 0;
	}
	// descriptors start at 1
	int index = fd - 1;
	return file_descriptors[index];
}

struct filesystem* fs_resolve(struct disk* disk)
{
	struct filesystem* fs = 0;
	for (int i = 0; i < PEACHOS_MAX_FILESYSTEMS; i++)
	{
		if (filesystems[i] != 0 && filesystems[i]->resolve(disk) == 0)
		{
			fs = filesystems[i];
			break;
		}
	}

	return fs;
}

FILE_MODE file_get_mode_by_string(const char* str)
{
	FILE_MODE mode = FILE_MODE_INVALID;
	if(strncmp(str, "r", 1) == 0)
	{
		mode = FILE_MODE_READ;
	}
	if(strncmp(str, "w", 1) == 0)
	{
		mode = FILE_MODE_WRITE;
	}
	if(strncmp(str, "a", 1) == 0)
	{
		mode = FILE_MODE_APPEND;
	}

	return mode;

}

int fopen(const char* filename, const char* mode_string)
{
	int res = 0;
	struct path_root* root_path = pathparser_parse(filename, NULL);
	if(!root_path)
	{
		res = -EINVARG;
		goto out;
	}
	if(!root_path->first)
	// if 0:/ and not 0:/file.txt...
	{
		res = -EINVARG;
		goto out;
	}

	struct disk* disk = disk_get(root_path->drive_no);
	// if 1:/...
	if(!disk)
	{
		res = -EIO;
		goto out;
	}
	if(!disk->filesystem)
	{
		res = -EIO;
		goto out;
	}

	FILE_MODE mode = file_get_mode_by_string(mode_string);
	if(mode == FILE_MODE_INVALID)
	{
		res = -EINVARG;
		goto out;
	}
	void* descriptor_private_data = disk->filesystem->open(disk, root_path->first, mode);
	if(ISERR(descriptor_private_data))
	{
		res = ERROR_I(descriptor_private_data);
		goto out;
	}

	struct file_descriptor* desc = 0;
	res = file_new_descriptor(&desc);
	if(res < 0)
	{
		goto out;
	}
	desc->filesystem = disk->filesystem;
	desc->private = descriptor_private_data;
	desc->disk = disk;
	res = desc->index;

out:
	// fopen shouldnt return negative values.
	if(res < 0)
	{
		res = 0;
	}
	return res;
}

int fread(void* ptr, uint32_t size, uint32_t nmemb, int fd)
{
	int res = 0;
	if (size == 0 || nmemb == 0 ||fd < 1)
	{
		res = -EINVARG;
		goto out;
	}

	struct file_descriptor* descriptor = file_get_descriptor(fd);
	if(!descriptor)
	{
		res = -EINVARG;
		goto out;
	}
	
	res = descriptor->filesystem->read(descriptor->disk, descriptor->private, size, nmemb, (char*) ptr);
out:
	return res;
}

int fseek(int fd, int offset, FILE_SEEK_MODE whence)
{
	int res = 0;
	struct file_descriptor* desc = file_get_descriptor(fd);
	if (!desc)
	{
		res = -EIO;
		goto out;
	}
	
	res = desc->filesystem->seek(desc->private, offset, whence);

out:
	return res;
}

int fstat(int fd, struct file_stat* stat)
{
	int res = 0;
	struct file_descriptor* desc = file_get_descriptor(fd);
	if (!desc)
	{
		res = -EIO;
		goto out;
	}
	res = desc->filesystem->stat(desc->disk, desc->private, stat);

out:
	return res;
}

int fclose(int fd)
{
	int res = 0;
	struct file_descriptor* descriptor = file_get_descriptor(fd);
	if(!descriptor)
	{
		res = -EIO;
		goto out;
	}
	res = descriptor->filesystem->close(descriptor->private);
	if(res == PEACHOS_ALLOK)
	{
		file_free_descriptor(descriptor);
	}

out:
	return res;
}
