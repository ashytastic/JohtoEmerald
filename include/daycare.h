#ifndef GUARD_DAYCARE_H
#define GUARD_DAYCARE_H

#include "constants/daycare.h"

struct RecordMixingDaycareMail
{
    struct DaycareMail mail[DAYCARE_MON_COUNT];
    u32 numDaycareMons;
    bool16 cantHoldItem[DAYCARE_MON_COUNT];
};

<<<<<<< HEAD
u8 *GetMonNickname2(struct Pokemon *mon, u8 *dest);
u8 *GetBoxMonNickname(struct BoxPokemon *mon, u8 *dest);
u8 CountPokemonInDaycare(struct DayCare *daycare);
void InitDaycareMailRecordMixing(struct DayCare *daycare, struct RecordMixingDaycareMail *mixMail);
=======
u8 *GetMonNicknameVanilla(struct Pokemon *mon, u8 *dest);
u8 *GetBoxMonNickname(struct BoxPokemon *mon, u8 *dest);
u8 CountPokemonInDaycare(struct DayCare *daycare);
void InitDaycareMailRecordMixing(struct DayCare *daycare, struct RecordMixingDaycareMail *mixMail);
s8 Daycare_FindEmptySpot(struct DayCare *daycare);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void StoreSelectedPokemonInDaycare(void);
u16 TakePokemonFromDaycare(void);
void GetDaycareCost(void);
u8 GetNumLevelsGainedFromDaycare(void);
void TriggerPendingDaycareEgg(void);
void RejectEggFromDayCare(void);
void CreateEgg(struct Pokemon *mon, u16 species, bool8 setHotSpringsLocation);
void GiveEggFromDaycare(void);
bool8 ShouldEggHatch(void);
u16 GetSelectedMonNicknameAndSpecies(void);
void GetDaycareMonNicknames(void);
u8 GetDaycareState(void);
<<<<<<< HEAD
=======
u8 GetDaycareCompatibilityScore(struct DayCare *daycare);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void SetDaycareCompatibilityString(void);
bool8 NameHasGenderSymbol(const u8 *name, u8 genderRatio);
void ShowDaycareLevelMenu(void);
void ChooseSendDaycareMon(void);
<<<<<<< HEAD

u8 GetEggMovesSpecies(u16 species, u16 *eggMoves);
bool8 SpeciesCanLearnEggMove(u16 species, u16 move);
=======
u8 GetEggMovesBySpecies(u16 species, u16 *eggMoves);
bool8 SpeciesCanLearnEggMove(u16 species, u16 move);
void StorePokemonInDaycare(struct Pokemon *mon, struct DaycareMon *daycareMon);
u8 GetEggMoves(struct Pokemon *pokemon, u16 *eggMoves);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#endif // GUARD_DAYCARE_H
