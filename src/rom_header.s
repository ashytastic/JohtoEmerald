@ Note: ROM header data is empty space here.
@ It's populated by gbafix using data provided in the Makefile.

Start::
	b Init

RomHeaderNintendoLogo::
	.space 156

<<<<<<< HEAD
RomHeaderGameTitle:
=======
RomHeaderGameTitle::
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.space 12

RomHeaderGameCode::
	.space 4

<<<<<<< HEAD
RomHeaderMakerCode:
	.space 2

RomHeaderMagic:
	.byte 0

RomHeaderMainUnitCode:
	.byte 0

RomHeaderDeviceType:
	.byte 0

RomHeaderReserved1:
=======
RomHeaderMakerCode::
	.space 2

RomHeaderMagic::
	.byte 0

RomHeaderMainUnitCode::
	.byte 0

RomHeaderDeviceType::
	.byte 0

RomHeaderReserved1::
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.space 7

RomHeaderSoftwareVersion::
	.byte 0

<<<<<<< HEAD
RomHeaderChecksum:
	.byte 0

RomHeaderReserved2:
=======
RomHeaderChecksum::
	.byte 0

RomHeaderReserved2::
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.space 2

	.word 0

GPIOPortData::
	.2byte 0

GPIOPortDirection::
	.2byte 0

GPIOPortReadEnable::
	.2byte 0

	.2byte 0

	.space 0x34
