#ifndef GUARD_SAFARI_ZONE_H
#define GUARD_SAFARI_ZONE_H

extern u8 gNumSafariBalls;

bool32 GetSafariZoneFlag(void);
void SetSafariZoneFlag(void);
void ResetSafariZoneFlag(void);

void EnterSafariMode(void);
void ExitSafariMode(void);

bool8 SafariZoneTakeStep(void);
void SafariZoneRetirePrompt(void);

void CB2_EndSafariBattle(void);

struct Pokeblock *SafariZoneGetActivePokeblock(void);
<<<<<<< HEAD
void SafariZoneActivatePokeblockFeeder(u8 pokeblock_index);
=======
void SafariZoneActivatePokeblockFeeder(u8 pkblId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#endif // GUARD_SAFARI_ZONE_H
