#include "global.h"
#include "event_data.h"
#include "pokemon.h"
#include "random.h"
#include "roamer.h"
<<<<<<< HEAD
#include "pokedex.h"
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

// Despite having a variable to track it, the roamer is
// hard-coded to only ever be in map group 0
#define ROAMER_MAP_GROUP 0

enum
{
    MAP_GRP, // map group
    MAP_NUM, // map number
};

<<<<<<< HEAD
#define ROAMER (&gSaveBlock1Ptr->roamer)
EWRAM_DATA static u8 sLocationHistory[3][2] = {0};
EWRAM_DATA static u8 sRoamerLocation[2] = {0};

#define ___ MAP_NUM(UNDEFINED) // For empty spots in the location table
=======
#define ROAMER(index) (&gSaveBlock1Ptr->roamer[index])
EWRAM_DATA static u8 sLocationHistory[ROAMER_COUNT][3][2] = {0};
EWRAM_DATA static u8 sRoamerLocation[ROAMER_COUNT][2] = {0};
EWRAM_DATA u8 gEncounteredRoamerIndex = 0;

#define ___ MAP_NUM(MAP_UNDEFINED) // For empty spots in the location table
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

// Note: There are two potential softlocks that can occur with this table if its maps are
//       changed in particular ways. They can be avoided by ensuring the following:
//       - There must be at least 2 location sets that start with a different map,
//         i.e. every location set cannot start with the same map. This is because of
//         the while loop in RoamerMoveToOtherLocationSet.
//       - Each location set must have at least 3 unique maps. This is because of
//         the while loop in RoamerMove. In this loop the first map in the set is
//         ignored, and an additional map is ignored if the roamer was there recently.
//       - Additionally, while not a softlock, it's worth noting that if for any
//         map in the location table there is not a location set that starts with
//         that map then the roamer will be significantly less likely to move away
//         from that map when it lands there.
<<<<<<< HEAD
static const u8 sRoamerLocations[][6] = 
{
    { MAP_NUM(ROUTE29), MAP_NUM(ROUTE30), MAP_NUM(ROUTE46), ___, ___, ___ },
    { MAP_NUM(ROUTE30), MAP_NUM(ROUTE29), MAP_NUM(ROUTE31), ___, ___, ___ },
    { MAP_NUM(ROUTE31), MAP_NUM(ROUTE30), MAP_NUM(ROUTE29), ___, ___, ___ },
    { MAP_NUM(ROUTE32), MAP_NUM(ROUTE31), MAP_NUM(ROUTE33), ___, ___, ___ },
    { MAP_NUM(ROUTE33), MAP_NUM(ROUTE32), MAP_NUM(ROUTE34), ___, ___, ___ },
    { MAP_NUM(ROUTE34), MAP_NUM(ROUTE33), MAP_NUM(ROUTE35), ___, ___, ___ },
    { MAP_NUM(ROUTE35), MAP_NUM(ROUTE34), MAP_NUM(ROUTE36), ___, ___, ___ },
    { MAP_NUM(ROUTE36), MAP_NUM(ROUTE31), MAP_NUM(ROUTE32), MAP_NUM(ROUTE35), MAP_NUM(ROUTE37), ___ },
    { MAP_NUM(ROUTE37), MAP_NUM(ROUTE36), MAP_NUM(ROUTE38), MAP_NUM(ROUTE42), ___, ___ },
    { MAP_NUM(ROUTE38), MAP_NUM(ROUTE37), MAP_NUM(ROUTE39), ___, ___, ___ },
    { MAP_NUM(ROUTE39), MAP_NUM(ROUTE48), MAP_NUM(ROUTE35), ___, ___, ___ },
    { MAP_NUM(ROUTE42), MAP_NUM(ROUTE37), MAP_NUM(ROUTE38), MAP_NUM(ROUTE43), MAP_NUM(ROUTE44), ___ },
    { MAP_NUM(ROUTE43), MAP_NUM(ROUTE42), MAP_NUM(ROUTE44), ___, ___, ___ },
    { MAP_NUM(ROUTE44), MAP_NUM(ROUTE42), MAP_NUM(ROUTE45), ___, ___, ___ },
    { MAP_NUM(ROUTE45), MAP_NUM(ROUTE44), MAP_NUM(ROUTE46), ___, ___, ___ },
    { MAP_NUM(ROUTE46), MAP_NUM(ROUTE45), MAP_NUM(ROUTE29), ___, ___, ___ },
=======
static const u8 sRoamerLocations[][6] =
{
    { MAP_NUM(MAP_ROUTE110), MAP_NUM(MAP_ROUTE111), MAP_NUM(MAP_ROUTE117), MAP_NUM(MAP_ROUTE118), MAP_NUM(MAP_ROUTE134), ___ },
    { MAP_NUM(MAP_ROUTE111), MAP_NUM(MAP_ROUTE110), MAP_NUM(MAP_ROUTE117), MAP_NUM(MAP_ROUTE118), ___, ___ },
    { MAP_NUM(MAP_ROUTE117), MAP_NUM(MAP_ROUTE111), MAP_NUM(MAP_ROUTE110), MAP_NUM(MAP_ROUTE118), ___, ___ },
    { MAP_NUM(MAP_ROUTE118), MAP_NUM(MAP_ROUTE117), MAP_NUM(MAP_ROUTE110), MAP_NUM(MAP_ROUTE111), MAP_NUM(MAP_ROUTE119), MAP_NUM(MAP_ROUTE123) },
    { MAP_NUM(MAP_ROUTE119), MAP_NUM(MAP_ROUTE118), MAP_NUM(MAP_ROUTE120), ___, ___, ___ },
    { MAP_NUM(MAP_ROUTE120), MAP_NUM(MAP_ROUTE119), MAP_NUM(MAP_ROUTE121), ___, ___, ___ },
    { MAP_NUM(MAP_ROUTE121), MAP_NUM(MAP_ROUTE120), MAP_NUM(MAP_ROUTE122), MAP_NUM(MAP_ROUTE123), ___, ___ },
    { MAP_NUM(MAP_ROUTE122), MAP_NUM(MAP_ROUTE121), MAP_NUM(MAP_ROUTE123), ___, ___, ___ },
    { MAP_NUM(MAP_ROUTE123), MAP_NUM(MAP_ROUTE122), MAP_NUM(MAP_ROUTE118), ___, ___, ___ },
    { MAP_NUM(MAP_ROUTE124), MAP_NUM(MAP_ROUTE121), MAP_NUM(MAP_ROUTE125), MAP_NUM(MAP_ROUTE126), ___, ___ },
    { MAP_NUM(MAP_ROUTE125), MAP_NUM(MAP_ROUTE124), MAP_NUM(MAP_ROUTE127), ___, ___, ___ },
    { MAP_NUM(MAP_ROUTE126), MAP_NUM(MAP_ROUTE124), MAP_NUM(MAP_ROUTE127), ___, ___, ___ },
    { MAP_NUM(MAP_ROUTE127), MAP_NUM(MAP_ROUTE125), MAP_NUM(MAP_ROUTE126), MAP_NUM(MAP_ROUTE128), ___, ___ },
    { MAP_NUM(MAP_ROUTE128), MAP_NUM(MAP_ROUTE127), MAP_NUM(MAP_ROUTE129), ___, ___, ___ },
    { MAP_NUM(MAP_ROUTE129), MAP_NUM(MAP_ROUTE128), MAP_NUM(MAP_ROUTE130), ___, ___, ___ },
    { MAP_NUM(MAP_ROUTE130), MAP_NUM(MAP_ROUTE129), MAP_NUM(MAP_ROUTE131), ___, ___, ___ },
    { MAP_NUM(MAP_ROUTE131), MAP_NUM(MAP_ROUTE130), MAP_NUM(MAP_ROUTE132), ___, ___, ___ },
    { MAP_NUM(MAP_ROUTE132), MAP_NUM(MAP_ROUTE131), MAP_NUM(MAP_ROUTE133), ___, ___, ___ },
    { MAP_NUM(MAP_ROUTE133), MAP_NUM(MAP_ROUTE132), MAP_NUM(MAP_ROUTE134), ___, ___, ___ },
    { MAP_NUM(MAP_ROUTE134), MAP_NUM(MAP_ROUTE133), MAP_NUM(MAP_ROUTE110), ___, ___, ___ },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    { ___, ___, ___, ___, ___, ___ },
};

#undef ___
#define NUM_LOCATION_SETS (ARRAY_COUNT(sRoamerLocations) - 1)
#define NUM_LOCATIONS_PER_SET (ARRAY_COUNT(sRoamerLocations[0]))

<<<<<<< HEAD
void ClearRoamerData(void)
{
    memset(ROAMER, 0, sizeof(*ROAMER));
    ROAMER->species = SPECIES_RAIKOU;
}

void ClearRoamerLocationData(void)
{
    u8 i;

    for (i = 0; i < ARRAY_COUNT(sLocationHistory); i++)
    {
        sLocationHistory[i][MAP_GRP] = 0;
        sLocationHistory[i][MAP_NUM] = 0;
    }

    sRoamerLocation[MAP_GRP] = 0;
    sRoamerLocation[MAP_NUM] = 0;
}

static void CreateInitialRoamerMon(bool16 createEntei)
{
    if (!createEntei)
        ROAMER->species = SPECIES_RAIKOU;
    else
        ROAMER->species = SPECIES_ENTEI;

    CreateMon(&gEnemyParty[0], ROAMER->species, 40, USE_RANDOM_IVS, FALSE, 0, OT_ID_PLAYER_ID, 0);
    ROAMER->level = 40;
    ROAMER->status = 0;
    ROAMER->active = TRUE;
    ROAMER->ivs = GetMonData(&gEnemyParty[0], MON_DATA_IVS);
    ROAMER->personality = GetMonData(&gEnemyParty[0], MON_DATA_PERSONALITY);
    ROAMER->hp = GetMonData(&gEnemyParty[0], MON_DATA_MAX_HP);
    ROAMER->cool = GetMonData(&gEnemyParty[0], MON_DATA_COOL);
    ROAMER->beauty = GetMonData(&gEnemyParty[0], MON_DATA_BEAUTY);
    ROAMER->cute = GetMonData(&gEnemyParty[0], MON_DATA_CUTE);
    ROAMER->smart = GetMonData(&gEnemyParty[0], MON_DATA_SMART);
    ROAMER->tough = GetMonData(&gEnemyParty[0], MON_DATA_TOUGH);
    sRoamerLocation[MAP_GRP] = ROAMER_MAP_GROUP;
    sRoamerLocation[MAP_NUM] = sRoamerLocations[Random() % NUM_LOCATION_SETS][0];
=======
void DeactivateAllRoamers(void)
{
    u32 i;

    for (i = 0; i < ROAMER_COUNT; i++)
        SetRoamerInactive(i);
}

static void ClearRoamerLocationHistory(u32 roamerIndex)
{
    u32 i;

    for (i = 0; i < ARRAY_COUNT(sLocationHistory[roamerIndex]); i++)
    {
        sLocationHistory[roamerIndex][i][MAP_GRP] = 0;
        sLocationHistory[roamerIndex][i][MAP_NUM] = 0;
    }
}

void MoveAllRoamersToOtherLocationSets(void)
{
    u32 i;

    for (i = 0; i < ROAMER_COUNT; i++)
        RoamerMoveToOtherLocationSet(i);
}

void MoveAllRoamers(void)
{
    u32 i;

    for (i = 0; i < ROAMER_COUNT; i++)
        RoamerMove(i);
}

static void CreateInitialRoamerMon(u8 index, u16 species, u8 level)
{
    ClearRoamerLocationHistory(index);
    CreateMon(&gEnemyParty[0], species, level, USE_RANDOM_IVS, FALSE, 0, OT_ID_PLAYER_ID, 0);
    ROAMER(index)->ivs = GetMonData(&gEnemyParty[0], MON_DATA_IVS);
    ROAMER(index)->personality = GetMonData(&gEnemyParty[0], MON_DATA_PERSONALITY);
    ROAMER(index)->species = species;
    ROAMER(index)->level = level;
    ROAMER(index)->statusA = 0;
    ROAMER(index)->statusB = 0;
    ROAMER(index)->hp = GetMonData(&gEnemyParty[0], MON_DATA_MAX_HP);
    ROAMER(index)->cool = GetMonData(&gEnemyParty[0], MON_DATA_COOL);
    ROAMER(index)->beauty = GetMonData(&gEnemyParty[0], MON_DATA_BEAUTY);
    ROAMER(index)->cute = GetMonData(&gEnemyParty[0], MON_DATA_CUTE);
    ROAMER(index)->smart = GetMonData(&gEnemyParty[0], MON_DATA_SMART);
    ROAMER(index)->tough = GetMonData(&gEnemyParty[0], MON_DATA_TOUGH);
    ROAMER(index)->shiny = GetMonData(&gEnemyParty[0], MON_DATA_IS_SHINY);
    ROAMER(index)->active = TRUE;
    sRoamerLocation[index][MAP_GRP] = ROAMER_MAP_GROUP;
    sRoamerLocation[index][MAP_NUM] = sRoamerLocations[Random() % NUM_LOCATION_SETS][0];
}

static u8 GetFirstInactiveRoamerIndex(void)
{
    u32 i;

    for (i = 0; i < ROAMER_COUNT; i++)
    {
        if (!ROAMER(i)->active)
            return i;
    }
    return ROAMER_COUNT;
}

bool8 TryAddRoamer(u16 species, u8 level)
{
    u8 index = GetFirstInactiveRoamerIndex();

    if (index < ROAMER_COUNT)
    {
        // Create the roamer and stop searching
        CreateInitialRoamerMon(index, species, level);
        return TRUE;
    }

    // Maximum active roamers found: do nothing and let the calling function know
    return FALSE;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

// gSpecialVar_0x8004 here corresponds to the options in the multichoice MULTI_TV_LATI (0 for 'Red', 1 for 'Blue')
void InitRoamer(void)
{
<<<<<<< HEAD
    GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_ENTEI), FLAG_SET_SEEN);
    GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_RAIKOU), FLAG_SET_SEEN);
    GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_SUICUNE), FLAG_SET_SEEN);
    ClearRoamerData();
    ClearRoamerLocationData();
    CreateInitialRoamerMon(gSpecialVar_0x8004);
=======
    if (gSpecialVar_0x8004 == 0) // Red
        TryAddRoamer(SPECIES_LATIAS, 40);
    else
        TryAddRoamer(SPECIES_LATIOS, 40);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void UpdateLocationHistoryForRoamer(void)
{
<<<<<<< HEAD
    sLocationHistory[2][MAP_GRP] = sLocationHistory[1][MAP_GRP];
    sLocationHistory[2][MAP_NUM] = sLocationHistory[1][MAP_NUM];

    sLocationHistory[1][MAP_GRP] = sLocationHistory[0][MAP_GRP];
    sLocationHistory[1][MAP_NUM] = sLocationHistory[0][MAP_NUM];

    sLocationHistory[0][MAP_GRP] = gSaveBlock1Ptr->location.mapGroup;
    sLocationHistory[0][MAP_NUM] = gSaveBlock1Ptr->location.mapNum;
}

void RoamerMoveToOtherLocationSet(void)
{
    u8 mapNum = 0;

    if (!ROAMER->active)
        return;

    sRoamerLocation[MAP_GRP] = ROAMER_MAP_GROUP;

    // Choose a location set that starts with a map
    // different from the roamer's current map
    while (1)
    {
        mapNum = sRoamerLocations[Random() % NUM_LOCATION_SETS][0];
        if (sRoamerLocation[MAP_NUM] != mapNum)
        {
            sRoamerLocation[MAP_NUM] = mapNum;
            return;
        }
    }
}

void RoamerMove(void)
=======
    u32 i;

    for (i = 0; i < ROAMER_COUNT; i++)
    {
        sLocationHistory[i][2][MAP_GRP] = sLocationHistory[i][1][MAP_GRP];
        sLocationHistory[i][2][MAP_NUM] = sLocationHistory[i][1][MAP_NUM];

        sLocationHistory[i][1][MAP_GRP] = sLocationHistory[i][0][MAP_GRP];
        sLocationHistory[i][1][MAP_NUM] = sLocationHistory[i][0][MAP_NUM];

        sLocationHistory[i][0][MAP_GRP] = gSaveBlock1Ptr->location.mapGroup;
        sLocationHistory[i][0][MAP_NUM] = gSaveBlock1Ptr->location.mapNum;
    }
}

void RoamerMoveToOtherLocationSet(u32 roamerIndex)
{
    u8 mapNum = 0;

    if (!ROAMER(roamerIndex)->active)
        return;

    sRoamerLocation[roamerIndex][MAP_GRP] = ROAMER_MAP_GROUP;

    // Choose a location set that starts with a map
    // different from the roamer's current map
    do
    {
        mapNum = sRoamerLocations[Random() % NUM_LOCATION_SETS][0];
        if (sRoamerLocation[roamerIndex][MAP_NUM] != mapNum)
        {
            sRoamerLocation[roamerIndex][MAP_NUM] = mapNum;
            return;
        }
    } while (sRoamerLocation[roamerIndex][MAP_NUM] == mapNum);
    sRoamerLocation[roamerIndex][MAP_NUM] = mapNum;
}

void RoamerMove(u32 roamerIndex)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    u8 locSet = 0;

    if ((Random() % 16) == 0)
    {
<<<<<<< HEAD
        RoamerMoveToOtherLocationSet();
    }
    else
    {
        if (!ROAMER->active)
=======
        RoamerMoveToOtherLocationSet(roamerIndex);
    }
    else
    {
        if (!ROAMER(roamerIndex)->active)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            return;

        while (locSet < NUM_LOCATION_SETS)
        {
            // Find the location set that starts with the roamer's current map
<<<<<<< HEAD
            if (sRoamerLocation[MAP_NUM] == sRoamerLocations[locSet][0])
            {
                u8 mapNum;
                while (1)
                {
                    // Choose a new map (excluding the first) within this set
                    // Also exclude a map if the roamer was there 2 moves ago
                    mapNum = sRoamerLocations[locSet][(Random() % (NUM_LOCATIONS_PER_SET - 1)) + 1];
                    if (!(sLocationHistory[2][MAP_GRP] == ROAMER_MAP_GROUP
                       && sLocationHistory[2][MAP_NUM] == mapNum)
                       && mapNum != MAP_NUM(UNDEFINED))
                        break;
                }
                sRoamerLocation[MAP_NUM] = mapNum;
=======
            if (sRoamerLocation[roamerIndex][MAP_NUM] == sRoamerLocations[locSet][0])
            {
                u8 mapNum;
                // Choose a new map (excluding the first) within this set
                // Also exclude a map if the roamer was there 2 moves ago
                do
                {
                    mapNum = sRoamerLocations[locSet][(Random() % (NUM_LOCATIONS_PER_SET - 1)) + 1];
                } while ((sLocationHistory[roamerIndex][2][MAP_GRP] == ROAMER_MAP_GROUP
                        && sLocationHistory[roamerIndex][2][MAP_NUM] == mapNum)
                        || mapNum == MAP_NUM(MAP_UNDEFINED));
                sRoamerLocation[roamerIndex][MAP_NUM] = mapNum;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                return;
            }
            locSet++;
        }
    }
}

<<<<<<< HEAD
bool8 IsRoamerAt(u8 mapGroup, u8 mapNum)
{
    if (ROAMER->active && mapGroup == sRoamerLocation[MAP_GRP] && mapNum == sRoamerLocation[MAP_NUM])
=======
bool8 IsRoamerAt(u32 roamerIndex, u8 mapGroup, u8 mapNum)
{
    if (ROAMER(roamerIndex)->active && mapGroup == sRoamerLocation[roamerIndex][MAP_GRP] && mapNum == sRoamerLocation[roamerIndex][MAP_NUM])
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        return TRUE;
    else
        return FALSE;
}

<<<<<<< HEAD
void CreateRoamerMonInstance(void)
{
    u32 status;
    struct Pokemon *mon = &gEnemyParty[0];
    ZeroEnemyPartyMons();
    CreateMonWithIVsPersonality(mon, ROAMER->species, ROAMER->level, ROAMER->ivs, ROAMER->personality);
// The roamer's status field is u8, but SetMonData expects status to be u32, so will set the roamer's status
// using the status field and the following 3 bytes (cool, beauty, and cute).
#ifdef BUGFIX
    status = ROAMER->status;
    SetMonData(mon, MON_DATA_STATUS, &status);
#else
    SetMonData(mon, MON_DATA_STATUS, &ROAMER->status);
#endif
    SetMonData(mon, MON_DATA_HP, &ROAMER->hp);
    SetMonData(mon, MON_DATA_COOL, &ROAMER->cool);
    SetMonData(mon, MON_DATA_BEAUTY, &ROAMER->beauty);
    SetMonData(mon, MON_DATA_CUTE, &ROAMER->cute);
    SetMonData(mon, MON_DATA_SMART, &ROAMER->smart);
    SetMonData(mon, MON_DATA_TOUGH, &ROAMER->tough);
=======
void CreateRoamerMonInstance(u32 roamerIndex)
{
    u32 status = ROAMER(roamerIndex)->statusA + (ROAMER(roamerIndex)->statusB << 8);
    struct Pokemon *mon = &gEnemyParty[0];
    ZeroEnemyPartyMons();
    CreateMonWithIVsPersonality(mon, ROAMER(roamerIndex)->species, ROAMER(roamerIndex)->level, ROAMER(roamerIndex)->ivs, ROAMER(roamerIndex)->personality);
    SetMonData(mon, MON_DATA_STATUS, &status);
    SetMonData(mon, MON_DATA_HP, &ROAMER(roamerIndex)->hp);
    SetMonData(mon, MON_DATA_COOL, &ROAMER(roamerIndex)->cool);
    SetMonData(mon, MON_DATA_BEAUTY, &ROAMER(roamerIndex)->beauty);
    SetMonData(mon, MON_DATA_CUTE, &ROAMER(roamerIndex)->cute);
    SetMonData(mon, MON_DATA_SMART, &ROAMER(roamerIndex)->smart);
    SetMonData(mon, MON_DATA_TOUGH, &ROAMER(roamerIndex)->tough);
    SetMonData(mon, MON_DATA_IS_SHINY, &ROAMER(roamerIndex)->shiny);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

bool8 TryStartRoamerEncounter(void)
{
<<<<<<< HEAD
    if (IsRoamerAt(gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum) == TRUE && (Random() % 4) == 0)
    {
        CreateRoamerMonInstance();
        return TRUE;
    }
    else
    {
        return FALSE;
    }
=======
    u32 i;

    for (i = 0; i < ROAMER_COUNT; i++)
    {
        if (IsRoamerAt(i, gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum) == TRUE && (Random() % 4) == 0)
        {
            CreateRoamerMonInstance(i);
            gEncounteredRoamerIndex = i;
            return TRUE;
        }
    }
    return FALSE;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void UpdateRoamerHPStatus(struct Pokemon *mon)
{
<<<<<<< HEAD
    ROAMER->hp = GetMonData(mon, MON_DATA_HP);
    ROAMER->status = GetMonData(mon, MON_DATA_STATUS);

    RoamerMoveToOtherLocationSet();
}

void SetRoamerInactive(void)
{
    ROAMER->active = FALSE;
}

void GetRoamerLocation(u8 *mapGroup, u8 *mapNum)
{
    *mapGroup = sRoamerLocation[MAP_GRP];
    *mapNum = sRoamerLocation[MAP_NUM];
=======
    u32 status = GetMonData(mon, MON_DATA_STATUS);

    ROAMER(gEncounteredRoamerIndex)->hp = GetMonData(mon, MON_DATA_HP);
    ROAMER(gEncounteredRoamerIndex)->statusA = status;
    ROAMER(gEncounteredRoamerIndex)->statusB = status >> 8;

    RoamerMoveToOtherLocationSet(gEncounteredRoamerIndex);
}

void SetRoamerInactive(u32 roamerIndex)
{
    ROAMER(roamerIndex)->active = FALSE;
}

void GetRoamerLocation(u32 roamerIndex, u8 *mapGroup, u8 *mapNum)
{
    *mapGroup = sRoamerLocation[roamerIndex][MAP_GRP];
    *mapNum = sRoamerLocation[roamerIndex][MAP_NUM];
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}
