#include "global.h"
#include "event_data.h"
#include "field_message_box.h"
#include "pokedex.h"
#include "strings.h"

bool16 ScriptGetPokedexInfo(void)
{
    if (gSpecialVar_0x8004 == 0) // is national dex not present?
    {
        gSpecialVar_0x8005 = GetHoennPokedexCount(FLAG_GET_SEEN);
        gSpecialVar_0x8006 = GetHoennPokedexCount(FLAG_GET_CAUGHT);
    }
    else
    {
        gSpecialVar_0x8005 = GetNationalPokedexCount(FLAG_GET_SEEN);
        gSpecialVar_0x8006 = GetNationalPokedexCount(FLAG_GET_CAUGHT);
    }

    return IsNationalPokedexEnabled();
}

<<<<<<< HEAD
// This shows your Hoenn Pokédex rating and not your National Dex.
const u8 *GetPokedexRatingText(u16 count)
{
    if (count < 10)
        return gBirchDexRatingText_LessThan10;
    if (count < 20)
        return gBirchDexRatingText_LessThan20;
    if (count < 30)
        return gBirchDexRatingText_LessThan30;
    if (count < 40)
        return gBirchDexRatingText_LessThan40;
    if (count < 50)
        return gBirchDexRatingText_LessThan50;
    if (count < 60)
        return gBirchDexRatingText_LessThan60;
    if (count < 70)
        return gBirchDexRatingText_LessThan70;
    if (count < 80)
        return gBirchDexRatingText_LessThan80;
    if (count < 90)
        return gBirchDexRatingText_LessThan90;
    if (count < 100)
        return gBirchDexRatingText_LessThan100;
    if (count < 110)
        return gBirchDexRatingText_LessThan110;
    if (count < 120)
        return gBirchDexRatingText_LessThan120;
    if (count < 130)
        return gBirchDexRatingText_LessThan130;
    if (count < 140)
        return gBirchDexRatingText_LessThan140;
    if (count < 150)
        return gBirchDexRatingText_LessThan150;
    if (count < 160)
        return gBirchDexRatingText_LessThan160;
    if (count < 170)
        return gBirchDexRatingText_LessThan170;
    if (count < 180)
        return gBirchDexRatingText_LessThan180;
    if (count < 190)
        return gBirchDexRatingText_LessThan190;
    if (count < 200)
        return gBirchDexRatingText_LessThan200;
    if (count == 276)
        return gBirchDexRatingText_DexCompleted;
    return gBirchDexRatingText_LessThan10;
=======
#define BIRCH_DEX_STRINGS 21

static const u8 *const sBirchDexRatingTexts[BIRCH_DEX_STRINGS] =
{
    gBirchDexRatingText_LessThan10,
    gBirchDexRatingText_LessThan20,
    gBirchDexRatingText_LessThan30,
    gBirchDexRatingText_LessThan40,
    gBirchDexRatingText_LessThan50,
    gBirchDexRatingText_LessThan60,
    gBirchDexRatingText_LessThan70,
    gBirchDexRatingText_LessThan80,
    gBirchDexRatingText_LessThan90,
    gBirchDexRatingText_LessThan100,
    gBirchDexRatingText_LessThan110,
    gBirchDexRatingText_LessThan120,
    gBirchDexRatingText_LessThan130,
    gBirchDexRatingText_LessThan140,
    gBirchDexRatingText_LessThan150,
    gBirchDexRatingText_LessThan160,
    gBirchDexRatingText_LessThan170,
    gBirchDexRatingText_LessThan180,
    gBirchDexRatingText_LessThan190,
    gBirchDexRatingText_LessThan200,
    gBirchDexRatingText_DexCompleted,
};

// This shows your Hoenn Pokédex rating and not your National Dex.
const u8 *GetPokedexRatingText(u32 count)
{
    u32 i, j;
    u16 maxDex = HOENN_DEX_COUNT - 1;
    // doesNotCountForRegionalPokedex
    for(i = 0; i < HOENN_DEX_COUNT; i++)
    {
        j = NationalPokedexNumToSpecies(HoennToNationalOrder(i + 1));
        if (gSpeciesInfo[j].isMythical && !gSpeciesInfo[j].dexForceRequired)
        {
            if (GetSetPokedexFlag(j, FLAG_GET_CAUGHT))
                count--;
            maxDex--;
        }
    }
    return sBirchDexRatingTexts[(count * (BIRCH_DEX_STRINGS - 1)) / maxDex];
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void ShowPokedexRatingMessage(void)
{
    ShowFieldMessage(GetPokedexRatingText(gSpecialVar_0x8004));
}
