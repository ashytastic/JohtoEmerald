#ifndef GUARD_POKEDEX_AREA_SCREEN_H
#define GUARD_POKEDEX_AREA_SCREEN_H

<<<<<<< HEAD
void ShowPokedexAreaScreen(u16, u8 *);
=======
#include "rtc.h"

extern u8 gAreaTimeOfDay;

enum PokedexAreaScreenState
{
    DEX_SHOW_AREA_SCREEN,
    DEX_UPDATE_AREA_SCREEN
};

void DisplayPokedexAreaScreen(u16 species, u8 *screenSwitchState, enum TimeOfDay timeOfDay, enum PokedexAreaScreenState areaState);
void ShowPokedexAreaScreen(u16 species, u8 *screenSwitchState);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#endif // GUARD_POKEDEX_AREA_SCREEN_H
