#ifndef GUARD_BATTLE_TV_H
#define GUARD_BATTLE_TV_H

<<<<<<< HEAD
void BattleTv_SetDataBasedOnString(u16 stringId);
=======
void BattleTv_SetDataBasedOnString(enum StringID stringId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void BattleTv_SetDataBasedOnMove(u16 move, u16 weatherFlags, struct DisableStruct *disableStructPtr);
void BattleTv_SetDataBasedOnAnimation(u8 animationId);
void TryPutLinkBattleTvShowOnAir(void);
void BattleTv_ClearExplosionFaintCause(void);
<<<<<<< HEAD
u8 GetBattlerMoveSlotId(u8 battlerId, u16 moveId);
=======
u8 GetBattlerMoveSlotId(u8 battler, u16 move);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#endif // GUARD_BATTLE_TV_H
