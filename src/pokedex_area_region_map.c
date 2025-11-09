#include "global.h"
#include "main.h"
#include "menu.h"
#include "bg.h"
#include "malloc.h"
#include "palette.h"
#include "pokedex_area_region_map.h"
<<<<<<< HEAD
#include "constants/flags.h"
#include "event_data.h"
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

static EWRAM_DATA u8 *sPokedexAreaMapBgNum = NULL;

static const u16 ALIGNED(4) sPokedexAreaMap_Pal[] = INCBIN_U16("graphics/pokedex/region_map.gbapal");
<<<<<<< HEAD
static const u32 sPokedexAreaMap_Gfx[] = INCBIN_U32("graphics/pokedex/region_map.8bpp.lz");
static const u32 sPokedexAreaMap_Tilemap[] = INCBIN_U32("graphics/pokedex/region_map.bin.lz");
static const u32 sPokedexAreaMapAffine_Gfx[] = INCBIN_U32("graphics/pokedex/region_map_affine.8bpp.lz");
static const u32 sPokedexAreaMapAffine_Tilemap[] = INCBIN_U32("graphics/pokedex/region_map_affine.bin.lz");
static const u32 sPokedexAreaMap_Gfx_Johto[]     = INCBIN_U32("graphics/pokedex/johto_region_map.8bpp.lz");
static const u32 sPokedexAreaMap_Tilemap_Johto[] = INCBIN_U32("graphics/pokedex/johto_region_map.bin.lz");
=======
static const u32 sPokedexAreaMap_Gfx[] = INCBIN_U32("graphics/pokedex/region_map.8bpp.smol");
static const u32 sPokedexAreaMap_Tilemap[] = INCBIN_U32("graphics/pokedex/region_map.bin.smolTM");
static const u32 sPokedexAreaMapAffine_Gfx[] = INCBIN_U32("graphics/pokedex/region_map_affine.8bpp.smol");
static const u32 sPokedexAreaMapAffine_Tilemap[] = INCBIN_U32("graphics/pokedex/region_map_affine.bin.smolTM");
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

void LoadPokedexAreaMapGfx(const struct PokedexAreaMapTemplate *template)
{
    u8 mode;
<<<<<<< HEAD
    void * tilemap;
    const u32 *gfx, *tile;         // NEW
    const u16 *pal = sPokedexAreaMap_Pal; // or sPokedexAreaMap_Pal_Johto if you have one

    sPokedexAreaMapBgNum = Alloc(sizeof(sPokedexAreaMapBgNum));
    mode = template->mode;

    if (FlagGet(FLAG_VISITED_KANTO))
    {
        gfx  = sPokedexAreaMap_Gfx;       // existing combined art
        tile = sPokedexAreaMap_Tilemap;
        // pal = sPokedexAreaMap_Pal;     // keep or swap if you have a JK-specific palette
    }
    else
    {
        gfx  = sPokedexAreaMap_Gfx_Johto;     // NEW Johto art
        tile = sPokedexAreaMap_Tilemap_Johto;
    }
    if (mode == 0)
    {
        SetBgAttribute(template->bg, BG_ATTR_METRIC, 0);
        DecompressAndCopyTileDataToVram(template->bg, gfx, 0, template->offset, 0);    // use gfx
        tilemap = DecompressAndCopyTileDataToVram(template->bg, tile, 0, 0, 1);        // use tile
        AddValToTilemapBuffer(tilemap, template->offset, 32, 32, FALSE);
=======
    void *tilemap;
    sPokedexAreaMapBgNum = Alloc(sizeof(sPokedexAreaMapBgNum));
    mode = template->mode;

    if (mode == 0)
    {
        SetBgAttribute(template->bg, BG_ATTR_METRIC, 0);
        DecompressAndCopyTileDataToVram(template->bg, sPokedexAreaMap_Gfx, 0, template->offset, 0);
        tilemap = DecompressAndCopyTileDataToVram(template->bg, sPokedexAreaMap_Tilemap, 0, 0, 1);
        AddValToTilemapBuffer(tilemap, template->offset, 32, 32, FALSE); // template->offset is always 0, so this does nothing.
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }
    else
    {
        // This is never reached, only a mode of 0 is given
        SetBgAttribute(template->bg, BG_ATTR_METRIC, 2);
<<<<<<< HEAD
        SetBgAttribute(template->bg, BG_ATTR_TYPE, BG_TYPE_AFFINE);
        DecompressAndCopyTileDataToVram(template->bg, gfx, 0, template->offset, 0);
        tilemap = DecompressAndCopyTileDataToVram(template->bg, tile, 0, 0, 1);
        AddValToTilemapBuffer(tilemap, template->offset, 64, 64, TRUE);
=======
        SetBgAttribute(template->bg, BG_ATTR_TYPE, BG_TYPE_AFFINE); // This does nothing. BG_ATTR_TYPE can't be set with this function
        DecompressAndCopyTileDataToVram(template->bg, sPokedexAreaMapAffine_Gfx, 0, template->offset, 0);
        tilemap = DecompressAndCopyTileDataToVram(template->bg, sPokedexAreaMapAffine_Tilemap, 0, 0, 1);
        AddValToTilemapBuffer(tilemap, template->offset, 64, 64, TRUE); // template->offset is always 0, so this does nothing.
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }

    ChangeBgX(template->bg, 0, BG_COORD_SET);
    ChangeBgY(template->bg, 0, BG_COORD_SET);
    SetBgAttribute(template->bg, BG_ATTR_PALETTEMODE, 1);
<<<<<<< HEAD
    CpuCopy32(pal, &gPlttBufferUnfaded[BG_PLTT_ID(7)], sizeof(sPokedexAreaMap_Pal)); // or sizeof(*pal-set)
=======
    CpuCopy32(sPokedexAreaMap_Pal, &gPlttBufferUnfaded[BG_PLTT_ID(7)], sizeof(sPokedexAreaMap_Pal));
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    *sPokedexAreaMapBgNum = template->bg;
}

bool32 TryShowPokedexAreaMap(void)
{
    if (!FreeTempTileDataBuffersIfPossible())
    {
        ShowBg(*sPokedexAreaMapBgNum);
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

void FreePokedexAreaMapBgNum(void)
{
    TRY_FREE_AND_SET_NULL(sPokedexAreaMapBgNum);
}

void PokedexAreaMapChangeBgY(u32 move)
{
    ChangeBgY(*sPokedexAreaMapBgNum, move * 0x100, BG_COORD_SET);
}
