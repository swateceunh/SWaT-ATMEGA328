// Need to figure out how often to measure in main
// SCK - Clock Signal
// CS# - Control Signal - Triggered on CS# LOW
// SI - Serial Input
// SO - Serial Output

// Storage values
// 1 page = 2176 Bytes
// 1 block = 64 pages
// 1 plane = 1024 block = 1088Mb
// 1 LUN = 2 planes = 2176Mb

// The following sequence allows for 2176 Bytes to be written to the cache register and then stored in internal arrays
// 06h - Write Enable
// 02h - Program Load - 8 bit op-code, 3 bit dummy code, 12 bit column address, data to be stored
// 10h - Program Execute - 8 bit op-code, 24 bit address
// POTENTIALLY - 0Fh - Get Features

// The following sequence allows for the reading of the information inside of the internal arrays
// 13h - Page Read - 24 bit address w/ 7 bit dummy code and 17 bit block/page address - transfers code from NAND Array to cache
// 03h - Read From Cache - 8 bit op-code, 3 bit dummy code, 16 bit column address

// The following sequence clears the data from the flash memory
// 06h - Write Enable
// D8h - Block Erase
// POTENTIALLY - 0Fh - Get Features
