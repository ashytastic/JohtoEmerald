#ifndef GUARD_ROTATING_GATE_H
#define GUARD_ROTATING_GATE_H

<<<<<<< HEAD
void RotatingGatePuzzleCameraUpdate(s16, s16);
void RotatingGate_InitPuzzleAndGraphics(void);
u32 CheckForRotatingGatePuzzleCollision(u8, s16, s16);
bool32 CheckForRotatingGatePuzzleCollisionWithoutAnimation(u8, s16, s16);
=======
void RotatingGatePuzzleCameraUpdate(s16 deltaX, s16 deltaY);
void RotatingGate_InitPuzzleAndGraphics(void);
bool32 CheckForRotatingGatePuzzleCollision(u8 direction, s16 x, s16 y);
bool32 CheckForRotatingGatePuzzleCollisionWithoutAnimation(u8 direction, s16 x, s16 y);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#endif // GUARD_ROTATING_GATE_H
