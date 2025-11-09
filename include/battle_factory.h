#ifndef GUARD_BATTLE_FACTORY_H
#define GUARD_BATTLE_FACTORY_H

void CallBattleFactoryFunction(void);
bool8 InBattleFactory(void);
u8 GetFactoryMonFixedIV(u8 challengeNum, bool8 isLastBattle);
void FillFactoryBrainParty(void);
u8 GetNumPastRentalsRank(u8 battleMode, u8 lvlMode);
<<<<<<< HEAD
u32 GetAiScriptsInBattleFactory(void);
=======
u64 GetAiScriptsInBattleFactory(void);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void SetMonMoveAvoidReturn(struct Pokemon *mon, u16 moveArg, u8 moveSlot);

#endif // GUARD_BATTLE_FACTORY_H
