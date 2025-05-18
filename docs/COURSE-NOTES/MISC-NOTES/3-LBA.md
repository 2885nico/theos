# LBA 0x1F7 commands

|Opcode|Name|Transfer|Parameters|Standard|
|---|---|---|---|---|
|00|NOP|none|8-bit|ATA-1 to present|
|01|||||
|02|||||
|03|CFA REQUEST EXTENDED ERROR CODE|none|8-bit|ATA-4 to present|
|04|||||
|05|||||
|06|DATA SET MANAGEMENT|DMA|16-bit|ACS-2 to present|
|07|DATA SET MANAGEMENT XL|DMA|16-bit|ACS-4 to present|
|08|DEVICE RESET|none|8-bit|ATA-3 to ACS-3|
|09|||||
|0A|||||
|0B|REQUEST SENSE DATA EXT|none|16-bit|ACS-2 to present|
|0C|||||
|0D|||||
|0E|||||
|0F|||||
|10|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-3|
|11|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-2|
|12|GET PHYSICAL ELEMENT STATUS|DMA|16-bit|ACS-4 to present|
|12|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-2|
|13|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-2|
|14|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-2|
|15|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-2|
|16|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-2|
|17|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-2|
|18|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-2|
|19|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-2|
|1A|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-2|
|1B|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-2|
|1C|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-2|
|1D|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-2|
|1E|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-2|
|1F|RECALIBRATE|none|8-bit|IBM PC/AT to ATA-2|
|20|READ SECTOR(S)|PIO|8-bit|IBM PC/AT to present|
|21|READ SECTOR(S) (without retry)|PIO|8-bit|IBM PC/AT to ATA-4|
|22|READ LONG|PIO|8-bit|IBM PC/AT to ATA-3|
|23|READ LONG (without retry)|PIO|8-bit|IBM PC/AT to ATA-3|
|24|READ SECTOR(S) EXT|PIO|16-bit|ATA-6 to present|
|25|READ DMA EXT|DMA|16-bit|ATA-6 to present|
|26|READ DMA QUEUED EXT|queued DMA|16-bit|ATA-6 to ATA8-ACS|
|27|READ NATIVE MAX ADDRESS EXT|none|16-bit|ATA-6 to ACS-2|
|28|||||
|29|READ MULTIPLE EXT|PIO|16-bit|ATA-6 to ACS-3|
|2A|READ STREAM DMA EXT|DMA|16-bit|ATA-7 to present|
|2B|READ STREAM EXT|PIO|16-bit|ATA-7 to present|
|2C|||||
|2D|||||
|2E|||||
|2F|READ LOG EXT|PIO|16-bit|ATA-6 to present|
|30|WRITE SECTOR(S)|PIO|8-bit|IBM PC/AT to present|
|31|WRITE SECTOR(S) (without retry)|PIO|8-bit|IBM PC/AT to ATA-4|
|32|WRITE LONG|PIO|8-bit|IBM PC/AT to ATA-3|
|33|WRITE LONG (without retry)|PIO|8-bit|IBM PC/AT to ATA-3|
|34|WRITE SECTOR(S) EXT|PIO|16-bit|ATA-6 to present|
|35|WRITE DMA EXT|DMA|16-bit|ATA-6 to present|
|36|WRITE DMA QUEUED EXT|queued DMA|16-bit|ATA-6 to ATA8-ACS|
|37|SET MAX ADDRESS EXT|none|16-bit|ATA-6 to ACS-2|
|38|CFA WRITE SECTORS WITHOUT ERASE|PIO|8-bit|ATA-4 to present|
|39|WRITE MULTIPLE EXT|PIO|16-bit|ATA-6 to ACS-3|
|3A|WRITE STREAM DMA EXT|DMA|16-bit|ATA-7 to present|
|3B|WRITE STREAM EXT|PIO|16-bit|ATA-7 to present|
|3C|WRITE VERIFY|PIO|8-bit|ATA-1 to ATA-3|
|3D|WRITE DMA FUA EXT|DMA|16-bit|ATA-7 to present|
|3E|WRITE DMA QUEUED FUA EXT|queued DMA|16-bit|ATA-7 to ATA8-ACS|
|3F|WRITE LOG EXT|PIO|16-bit|ATA-6 to present|
|40|READ VERIFY SECTOR(S)|none|8-bit|IBM PC/AT to present|
|41|READ VERIFY SECTOR(S) (without retry)|none|8-bit|IBM PC/AT to ATA-4|
|42|READ VERIFY SECTOR(S) EXT|none|16-bit|ATA-6 to present|
|43|||||
|44|ZERO EXT|none|16-bit|ACS-4 to present|
|45|WRITE UNCORRECTABLE EXT|none|16-bit|ATA8-ACS to present|
|46|||||
|47|READ LOG DMA EXT|DMA|16-bit|ATA8-ACS to present|
|48|||||
|49|||||
|4A|ZAC Management In|DMA|16-bit|ACS-4 to present|
|4B|||||
|4C|||||
|4D|||||
|4E|||||
|4F|||||
|50|FORMAT TRACK|PIO|8-bit|IBM PC/AT to ATA-3|
|51|CONFIGURE STREAM|none|16-bit|ATA-7 to present|
|52|||||
|53|||||
|54|||||
|55|||||
|56|||||
|57|WRITE LOG DMA EXT|DMA|16-bit|ATA8-ACS to present|
|58|||||
|59|||||
|5A|||||
|5B|TRUSTED NON-DATA|none|8-bit|ACS-2 to present|
|5C|TRUSTED RECEIVE|PIO|8-bit|ATA8-ACS to present|
|5D|TRUSTED RECEIVE DMA|DMA|8-bit|ATA8-ACS to present|
|5E|TRUSTED SEND|PIO|8-bit|ATA8-ACS to present|
|5F|TRUSTED SEND DMA|DMA|8-bit|ATA8-ACS to present|
|60|READ FPDMA QUEUED|queued DMA|16-bit|ATA8-ACS to present|
|61|WRITE FPDMA QUEUED|queued DMA|16-bit|ATA8-ACS to present|
|62|||||
|63|NCQ NON-DATA|none|16-bit|ACS-3 to present|
|64|SEND FPDMA QUEUED|queued DMA|16-bit|ACS-3 to present|
|65|RECEIVE FPDMA QUEUED|queued DMA|16-bit|ACS-3 to present|
|66|||||
|67|||||
|68|||||
|69|||||
|6A|||||
|6B|||||
|6C|||||
|6D|||||
|6E|||||
|6F|||||
|70|SEEK|none|8-bit|IBM PC/AT to ATA-6|
|71|SEEK|none|8-bit|IBM PC/AT to ATA-2|
|72|SEEK|none|8-bit|IBM PC/AT to ATA-2|
|73|SEEK|none|8-bit|IBM PC/AT to ATA-2|
|74|SEEK|none|8-bit|IBM PC/AT to ATA-2|
|75|SEEK|none|8-bit|IBM PC/AT to ATA-2|
|76|SEEK|none|8-bit|IBM PC/AT to ATA-2|
|77|SET DATE & TIME EXT|none|16-bit|ACS-3 to present|
|77|SEEK|none|8-bit|IBM PC/AT to ATA-2|
|78|ACCESSIBLE MAX ADDRESS CONFIGURATION|none|16-bit|ACS-3 to present|
|78|SEEK|none|8-bit|IBM PC/AT to ATA-2|
|79|SEEK|none|8-bit|IBM PC/AT to ATA-2|
|7A|SEEK|none|8-bit|IBM PC/AT to ATA-2|
|7B|SEEK|none|8-bit|IBM PC/AT to ATA-2|
|7C|REMOVE ELEMENT AND TRUNCATE|none|16-bit|ACS-4 to present|
|7C|SEEK|none|8-bit|IBM PC/AT to ATA-2|
|7D|RESTORE ELEMENTS AND REBUILD|none|16-bit|ACS-5 to present|
|7D|SEEK|none|8-bit|IBM PC/AT to ATA-2|
|7E|REMOVE ELEMENT AND MODIFY ZONES|none|16-bit|ACS-5 to present|
|7E|SEEK|none|8-bit|IBM PC/AT to ATA-2|
|7F|SEEK|none|8-bit|IBM PC/AT to ATA-2|
|80|Vendor Specific||||
|81|Vendor Specific||||
|82|Vendor Specific||||
|83|Vendor Specific||||
|84|Vendor Specific||||
|85|Vendor Specific||||
|86|Vendor Specific||||
|87|CFA TRANSLATE SECTOR|PIO|8-bit|ATA-4 to present|
|88|Vendor Specific||||
|89|Vendor Specific||||
|8A|Vendor Specific||||
|8B|Vendor Specific||||
|8C|Vendor Specific||||
|8D|Vendor Specific||||
|8E|Vendor Specific||||
|8F|Vendor Specific||||
|90|EXECUTE DEVICE DIAGNOSTIC|none|8-bit|IBM PC/AT to present|
|91|INITIALIZE DEVICE PARAMETERS|none|8-bit|IBM PC/AT to ATA-5|
|92|DOWNLOAD MICROCODE|PIO|8-bit|ATA-2 to present|
|93|DOWNLOAD MICROCODE DMA|DMA|8-bit|ACS-2 to present|
|94|STANDBY IMMEDIATE|none|8-bit|ATA-1 to ATA-3|
|95|IDLE IMMEDIATE|none|8-bit|ATA-1 to ATA-3|
|96|MUTATE EXT|none|16-bit|ACS-5 to present|
|96|STANDBY|none|8-bit|ATA-1 to ATA-3|
|97|IDLE|none|8-bit|ATA-1 to ATA-3|
|98|CHECK POWER MODE|none|8-bit|ATA-1 to ATA-3|
|99|SLEEP|none|8-bit|ATA-1 to ATA-3|
|9A|Vendor Specific||||
|9B|||||
|9C|||||
|9D|||||
|9E|||||
|9F|ZAC Management Out|DMA|16-bit|ACS-4 to present|
|A0|PACKET|packet|8-bit|ATA-3 to ACS-3|
|A1|IDENTIFY PACKET DEVICE|PIO|8-bit|ATA-3 to ACS-3|
|A2|SERVICE|varies|8-bit|ATA-3 to ATA8-ACS|
|A3|||||
|A4|||||
|A5|||||
|A6|||||
|A7|||||
|A8|||||
|A9|||||
|AA|||||
|AB|||||
|AC|||||
|AD|||||
|AE|||||
|AF|||||
|B0|SMART|PIO|8-bit|ATA-3 to present|
|B1|Device Configuration Overlay|PIO|8-bit|ATA-6 to ACS-2|
|B2|SET SECTOR CONFIGURATON EXT|none|16-bit|ACS-4 to present|
|B3|||||
|B4|Sanitize Device|none|16-bit|ACS-2 to present|
|B5|||||
|B6|NV Cache|DMA|16-bit|ATA8-ACS to ACS-2|
|B7|Reserved for CFA||||
|B8|Reserved for CFA||||
|B9|Reserved for CFA||||
|BA|Reserved for CFA||||
|BB|Reserved for CFA||||
|BC|||||
|BD|||||
|BE|||||
|BF|||||
|C0|CFA ERASE SECTORS|none|8-bit|ATA-4 to ACS-2|
|C1|Vendor Specific||||
|C2|Vendor Specific||||
|C3|Vendor Specific||||
|C4|READ MULTIPLE|PIO|8-bit|ATA-1 to ACS-3|
|C5|WRITE MULTIPLE|PIO|8-bit|ATA-1 to ACS-3|
|C6|SET MULTIPLE MODE|none|8-bit|ATA-1 to ACS-3|
|C7|READ DMA QUEUED|queued DMA|8-bit|ATA-4 to ATA8-ACS|
|C8|READ DMA|DMA|8-bit|ATA-1 to present|
|C9|READ DMA (without retry)|DMA|8-bit|ATA-1 to ATA-4|
|CA|WRITE DMA|DMA|8-bit|ATA-1 to present|
|CB|WRITE DMA (without retry)|DMA|8-bit|ATA-1 to ATA-4|
|CC|WRITE DMA QUEUED|queued DMA|8-bit|ATA-4 to ATA8-ACS|
|CD|CFA WRITE MULTIPLE WITHOUT ERASE|PIO|8-bit|ATA-4 to present|
|CE|WRITE MULTIPLE FUA EXT|PIO|16-bit|ATA-7 to ACS-3|
|CF|||||
|D0|||||
|D1|CHECK MEDIA CARD TYPE|none|8-bit|ATA-6 to ACS-2|
|D2|||||
|D3|||||
|D4|||||
|D5|||||
|D6|||||
|D7|||||
|D8|||||
|D9|||||
|DA|GET MEDIA STATUS|none|8-bit|ATA-3 to ATA-7|
|DB|ACKNOWLEDGE MEDIA CHANGE|none|8-bit|ATA-1 to ATA-2|
|DC|BOOT - POST-BOOT|none|8-bit|ATA-1 to ATA-2|
|DD|BOOT - PRE-BOOT|none|8-bit|ATA-1 to ATA-2|
|DE|MEDIA LOCK|none|8-bit|ATA-1 to ATA-7|
|DF|MEDIA UNLOCK|none|8-bit|ATA-1 to ATA-7|
|E0|STANDBY IMMEDIATE|none|8-bit|ATA-1 to present|
|E1|IDLE IMMEDIATE|none|8-bit|ATA-1 to present|
|E2|STANDBY|none|8-bit|ATA-1 to present|
|E3|IDLE|none|8-bit|ATA-1 to present|
|E4|READ BUFFER|PIO|8-bit|ATA-1 to present|
|E5|CHECK POWER MODE|none|8-bit|ATA-1 to present|
|E6|SLEEP|none|8-bit|ATA-1 to present|
|E7|FLUSH CACHE|none|8-bit|ATA-4 to present|
|E8|WRITE BUFFER|PIO|8-bit|ATA-1 to present|
|E9|READ BUFFER DMA|DMA|8-bit|ACS-2 to present|
|E9|WRITE SAME||8-bit|ATA-1 to ATA-2|
|EA|FLUSH CACHE EXT|none|8-bit|ATA-6 to present|
|EB|WRITE BUFFER DMA|DMA|8-bit|ACS-2 to present|
|EC|IDENTIFY DEVICE|PIO|8-bit|ATA-1 to present|
|ED|MEDIA EJECT|none|8-bit|ATA-1 to ATA-7|
|EE|IDENTIFY DEVICE DMA|DMA|8-bit|ATA-3|
|EF|SET FEATURES|none|8-bit|ATA-1 to present|
|F0|Vendor Specific||||
|F1|SECURITY SET PASSWORD|PIO|8-bit|ATA-3 to present|
|F2|SECURITY UNLOCK|PIO|8-bit|ATA-3 to present|
|F3|SECURITY ERASE PREPARE|none|8-bit|ATA-3 to present|
|F4|SECURITY ERASE UNIT|PIO|8-bit|ATA-3 to present|
|F5|SECURITY FREEZE LOCK|none|8-bit|ATA-3 to present|
|F6|SECURITY DISABLE PASSWORD|PIO|8-bit|ATA-3 to present|
|F7|Vendor Specific||||
|F8|READ NATIVE MAX ADDRESS|none|8-bit|ATA-4 to ACS-2|
|F9|SET MAX ADDRESS|none|8-bit|ATA-4 to ACS-2|
|FA|Vendor Specific||||
|FB|Vendor Specific||||
|FC|Vendor Specific||||
|FD|Vendor Specific||||
|FE|Vendor Specific||||
|FF|Vendor Specific||||

https://wiki.osdev.org/ATA_Command_Matrix


>`LBA address = (ecx >> 24) + (ecx >> 16) + (ecx >> 8)`
# Meaning of LBA.
LBA means Logical Block Addressing. It's the newer version of CHS or "Cylinder-Head-Sector". [LBA on Wikipedia](https://en.wikipedia.org/wiki/Logical_block_addressing)
# LBA ports
- `0x1F6`: This is the port address for the ATA drive's control register. Specifically, it's used to select the drive and set the LBA mode.
- `0x1F2`: This is the port address for the ATA drive's sector count register. It's used to specify the number of sectors to read or write.
- `0x1F3`: This is the port address for the ATA drive's LBA low register. It's used to send the lower 8 bits of the LBA address to the drive.
- `0x1F4`: This is the port address for the ATA drive's LBA mid register. It's used to send the middle 8 bits of the LBA address to the drive.
- `0x1F5`: This is the port address for the ATA drive's LBA high register. It's used to send the upper 8 bits of the LBA address to the drive.
- `0x1F7`: This is the port address for the ATA drive's command register. It's used to send commands to the drive, such as "read sector" or "write sector".
	- `0x20`: Read sectors (with retry)
		- p. 234 ATA-7 Specification.
	- `0x30`: Write sectors (with retry)
		- p. 367 ATA-7 Specification.
	- `0xC0`: Delete sectors
		- p. 90 ATA-7 Specification.
	- `0x1H`: Identify packet device (for ATAPI devices)
		- p. 159 ATA-7 Specification.
	- `0x90`: Check power mode
	- `0xE5`: Standby immediate
	- `0x95`: Idle immediate
	- `0xB0`: Reset device
- `0x1F0`: This is the port address for the ATA drive's data register. It's used to read or write data from the drive.

# Master and slave addresses
- 0xE0: address for the master drive.
- 0xF0: address for the slave drive.
# Bitwise operations on `lba`
We've seen some >>, <<, `shr` and `shl`. These are all bitwise operations in which we move an `n` amount of bits to the left or to the right. 

Right shifting by `n` amount can be equal to dividing the number to be shifted by `2^n`. That is, if we were to right shift something by 8, we can also divide it by 256 and get the same result.

We'll take `0x12345678` as an example.

If we were to `0x12345678 >> 8` or right shifting `0x12345678` by 8, we'd get the following:
`0x00123456`.

If we were to `0x12345678 >> 16` or right shifting `0x12345678` by 16, we'd get the following:
`0x00001234`.

If we were to `0x12345678 >> 24` or right shifting `0x12345678` by 24, we'd get the following:
`0x00000012`.

See? We now understand right shifting. But what about left shifting? Left shifting is a bit different.

Left shifting is different. Instead of dividing an amount by `2^n`, we're multiplying. As before, if we were to left shift something by 8, we can also multiply that value by 256.

If we were to `0x12345678 << 8` or left shifting `0x12345678` by 8, we'd get the following:
`0x1234567800`;

If we were to `0x12345678 << 16` or left shifting `0x12345678` by 16, we'd get the following:
`0x123456780000`;

If we were to `0x12345678 << 24` or left shifting `0x12345678` by 24, we'd get the following:
`0x12345678000000`;

So, when we do `lba >> 8` we're only taking into consideration `0x00123456`. 
And when we do `lba >> 16` we're only taking into consideration `0x00001234`. 
And! When we do `lba >> 24` we're only taking into consideration `0x00000012`. 

## Why `lba & 0xff`?
First, remember that `lba` is a 32 bit value or a 4 byte value. When we do `lba & 0xff` and taking into consideration that each nibble (each hexadecimal character) is 4 bits, we're effectively trying to take only the last 8 bits of `lba`, which is not the same as right shifting it.

Taking `0x12345678` as an example again, we'll see why this works in the bits.

```
0001 0010 0011 0100 0101 0110 0111 1000 (0x12345678)
0000 0000 0000 0000 0000 0000 1111 1111 (0x000000FF)
_______________________________________
0000 0000 0000 0000 0000 0000 0111 1000 (0x00000078)
```
It's like magic, bitwise magic!
