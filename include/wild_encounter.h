#ifndef GUARD_WILD_ENCOUNTER_H
#define GUARD_WILD_ENCOUNTER_H

<<<<<<< HEAD
#include "constants/wild_encounter.h"

=======
#include "rtc.h"
#include "constants/wild_encounter.h"

#define HEADER_NONE 0xFFFF

enum WildPokemonArea {
    WILD_AREA_LAND,
    WILD_AREA_WATER,
    WILD_AREA_ROCKS,
    WILD_AREA_FISHING,
    WILD_AREA_HIDDEN
};

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
struct WildPokemon
{
    u8 minLevel;
    u8 maxLevel;
    u16 species;
};

struct WildPokemonInfo
{
    u8 encounterRate;
    const struct WildPokemon *wildPokemon;
};

<<<<<<< HEAD
struct WildPokemonHeader
{
    u8 mapGroup;
    u8 mapNum;
=======
struct WildEncounterTypes
{
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    const struct WildPokemonInfo *landMonsInfo;
    const struct WildPokemonInfo *waterMonsInfo;
    const struct WildPokemonInfo *rockSmashMonsInfo;
    const struct WildPokemonInfo *fishingMonsInfo;
<<<<<<< HEAD
};

extern const struct WildPokemonHeader gWildMonHeaders[];
extern u8 gChainFishingStreak;
extern bool8 gIsFishingEncounter;

void DisableWildEncounters(bool8 disabled);
bool8 StandardWildEncounter(u16 currMetaTileBehavior, u16 previousMetaTileBehavior);
=======
    const struct WildPokemonInfo *hiddenMonsInfo;
};

struct WildPokemonHeader
{
    u8 mapGroup;
    u8 mapNum;
    const struct WildEncounterTypes encounterTypes[TIMES_OF_DAY_COUNT];
};


extern const struct WildPokemonHeader gWildMonHeaders[];
extern bool8 gIsFishingEncounter;
extern bool8 gIsSurfingEncounter;
extern u8 gChainFishingDexNavStreak;

void DisableWildEncounters(bool8 disabled);
u8 PickWildMonNature(void);
bool8 StandardWildEncounter(u16 curMetatileBehavior, u16 prevMetatileBehavior);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
bool8 SweetScentWildEncounter(void);
bool8 DoesCurrentMapHaveFishingMons(void);
void FishingWildEncounter(u8 rod);
u16 GetLocalWildMon(bool8 *isWaterMon);
u16 GetLocalWaterMon(void);
bool8 UpdateRepelCounter(void);
<<<<<<< HEAD

bool8 StandardWildEncounter_Debug(void);
=======
bool8 TryDoDoubleWildBattle(void);
bool8 StandardWildEncounter_Debug(void);
u32 CalculateChainFishingShinyRolls(void);
void CreateWildMon(u16 species, u8 level);
u16 GetCurrentMapWildMonHeaderId(void);
u32 ChooseWildMonIndex_Land(void);
u32 ChooseWildMonIndex_Water(void);
u32 ChooseWildMonIndex_Rocks(void);
u32 ChooseHiddenMonIndex(void);
bool32 MapHasNoEncounterData(void);
enum TimeOfDay GetTimeOfDayForEncounters(u32 headerId, enum WildPokemonArea area);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#endif // GUARD_WILD_ENCOUNTER_H
