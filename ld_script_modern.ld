ENTRY(Start)

gNumMusicPlayers = 4;
gMaxLines = 0;
<<<<<<< HEAD
=======
gInitialMainCB2 = CB2_InitCopyrightScreenAfterBootup;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

MEMORY
{
    EWRAM (rwx) : ORIGIN = 0x2000000, LENGTH = 256K
    IWRAM (rwx) : ORIGIN = 0x3000000, LENGTH = 32K
    ROM    (rx) : ORIGIN = 0x8000000, LENGTH = 32M
}

SECTIONS {

<<<<<<< HEAD
    ewram 0x2000000 (NOLOAD) :
    ALIGN(4)
    {
        src/*.o(ewram_data);
        gflib/*.o(ewram_data);
    } > EWRAM

    iwram 0x3000000 (NOLOAD) :
    ALIGN(4)
    {
        src/*.o(.bss);
        gflib/*.o(.bss);
        data/*.o(.bss);
        *libc.a:*.o(.bss*);
        *libnosys.a:*.o(.bss*);

        src/m4a.o(.bss.code);

        src/*.o(COMMON);
        gflib/*.o(COMMON);
=======

    .ewram ORIGIN(EWRAM) : AT (__ewram_lma)
    ALIGN(4)
    {
        __ewram_start = .;
        *(.ewram*)
        . = ALIGN(4);
        __ewram_end = .;
    } > EWRAM

    .ewram.sbss (NOLOAD) :
    ALIGN(4)
    {
        *.o(.sbss);
    } > EWRAM

    .iwram ORIGIN(IWRAM) : AT (__iwram_lma)
    ALIGN(4)
    {
        __iwram_start = .;
        *(.iwram*);
        . = ALIGN(4);
        __iwram_end = .;
    } > IWRAM

    .iwram.bss (NOLOAD) :
    ALIGN(4)
    {
        *.o(.bss*);
        *.o(common_data);
        src/*.o(COMMON);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        *libc.a:*.o(COMMON);
        *libnosys.a:*.o(COMMON);
    } > IWRAM

    /* BEGIN ROM DATA */
<<<<<<< HEAD
    . = 0x8000000;

    .text :
    ALIGN(4)
    {
        src/rom_header.o(.text*);
        src/rom_header_gf.o(.text.*);
        src/crt0.o(.text);
        src/main.o(.text);
        gflib/*.o(.text*);
        src/*.o(.text*);
        asm/*.o(.text*);
=======

    .text ORIGIN(ROM) :
    ALIGN(4)
    {
        src/rom_header.o(.text*);
        KEEP(*.o(.text.header_gf));
        KEEP(*.o(.text.header_rhh));
        src/crt0.o(.text);
        *libagbsyscall.a:*.o(.text*);
        *libgcc.a:*.o(.text*);
        *libc.a:*.o(.text*);
        *libnosys.a:*.o(.text*);
        asm/*.o(.text*);
        KEEP(*.o(.text.consts));
        *.o(.text*);
        *.o(.eh_frame);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    } > ROM =0

    script_data :
    ALIGN(4)
    {
		data/*.o(script_data);
    } > ROM =0

<<<<<<< HEAD
    lib_text :
    ALIGN(4)
    {
        src/libgcnmultiboot.o(.text);
        src/m4a_1.o(.text);
        src/m4a.o(.text);
        src/agb_flash.o(.text);
        src/agb_flash_1m.o(.text);
        src/agb_flash_mx.o(.text);
        src/siirtc.o(.text);
        src/librfu_stwi.o(.text);
        src/librfu_intr.o(.text);
        src/librfu_rfu.o(.text);
        src/librfu_sio32id.o(.text);
        *libagbsyscall.a:*.o(.text*);
        *libgcc.a:*.o(.text*);
        *libc.a:*.o(.text*);
        *libnosys.a:*.o(.text*);
        src/libisagbprn.o(.text);
    } > ROM =0

    .rodata :
    ALIGN(4)
    {
        src/*.o(.rodata*);
        gflib/*.o(.rodata*);
        data/*.o(.rodata*);
    } > ROM =0

    song_data :
    ALIGN(4)
    {
        sound/songs/*.o(.rodata);
    } > ROM =0

    lib_rodata :
    SUBALIGN(4)
    {
        src/m4a.o(.rodata);
        src/agb_flash.o(.rodata);
        src/agb_flash_1m.o(.rodata);
        src/agb_flash_mx.o(.rodata);
        src/agb_flash_le.o(.rodata);
        src/siirtc.o(.rodata);
        src/librfu_rfu.o(.rodata);
        src/librfu_sio32id.o(.rodata);
        *libgcc.a:*.o(.rodata*);
        *libc.a:*.o(.rodata*);
        *libc.a:*.o(.data*);
        src/libisagbprn.o(.rodata);
    } =0

    multiboot_data :
    ALIGN(4)
    {
        data/multiboot_ereader.o(.rodata);
        data/multiboot_berry_glitch_fix.o(.rodata);
        data/multiboot_pokemon_colosseum.o(.rodata);
    } > ROM =0

    anim_mon_front_pic_data :
    ALIGN(4)
    {
        src/anim_mon_front_pics.o(.rodata);
    } > ROM =0

    gfx_data :
    ALIGN(4)
    {
        src/graphics.o(.rodata);
    } > ROM =0
=======
    .rodata :
    ALIGN(4)
    {
        *.o(.rodata*);
        *libgcc.a:*.o(.rodata*);
        *libc.a:*.o(.rodata*);
        *libc.a:*.o(.data*);
        sound/songs/*.o(.rodata);
    } > ROM =0

    .data.iwram :
    ALIGN(4)
    {
        __iwram_lma = .;
        . = . + (__iwram_end - __iwram_start);
    } > ROM = 0

    .data.ewram :
    ALIGN(4)
    {
        __ewram_lma = .;
        . = . + (__ewram_end - __ewram_start);
    } > ROM = 0

    __rom_end = .;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    /* DWARF debug sections.
       Symbols in the DWARF debugging sections are relative to the beginning
       of the section so we begin them at 0.  */

    /* DWARF 1 */
    .debug          0 : { *(.debug) }
    .line           0 : { *(.line) }

    /* GNU DWARF 1 extensions */
    .debug_srcinfo  0 : { *(.debug_srcinfo) }
    .debug_sfnames  0 : { *(.debug_sfnames) }

    /* DWARF 1.1 and DWARF 2 */
    .debug_aranges  0 : { *(.debug_aranges) }
    .debug_pubnames 0 : { *(.debug_pubnames) }

    /* DWARF 2 */
    .debug_info     0 : { *(.debug_info .gnu.linkonce.wi.*) }
    .debug_abbrev   0 : { *(.debug_abbrev) }
    .debug_line     0 : { *(.debug_line) }
    .debug_frame    0 : { *(.debug_frame) }
    .debug_str      0 : { *(.debug_str) }
    .debug_loc      0 : { *(.debug_loc) }
    .debug_macinfo  0 : { *(.debug_macinfo) }

    /* Discard everything not specifically mentioned above. */
    /DISCARD/ :
    {
        *(*);
    }
}
