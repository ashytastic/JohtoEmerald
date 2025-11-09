#ifndef GUARD_FARAWAY_ISLAND_H
#define GUARD_FARAWAY_ISLAND_H

u32 GetMewMoveDirection(void);
<<<<<<< HEAD
bool8 ShouldMewShakeGrass(struct ObjectEvent *);
void UpdateFarawayIslandStepCounter(void);
bool8 ObjectEventIsFarawayIslandMew(struct ObjectEvent *);
=======
bool8 ShouldMewShakeGrass(struct ObjectEvent *objectEvent);
void UpdateFarawayIslandStepCounter(void);
bool8 ObjectEventIsFarawayIslandMew(struct ObjectEvent *objectEvent);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
bool8 IsMewPlayingHideAndSeek(void);

#endif // GUARD_FARAWAY_ISLAND_H
