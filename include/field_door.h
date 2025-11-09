#ifndef GUARD_FIELD_DOOR_H
#define GUARD_FIELD_DOOR_H

<<<<<<< HEAD
void FieldSetDoorOpened(int x, int y);
void FieldSetDoorClosed(int x, int y);
s8 FieldAnimateDoorClose(int x, int y);
s8 FieldAnimateDoorOpen(int x, int y);
bool8 FieldIsDoorAnimationRunning(void);
u16 GetDoorSoundEffect(int x, int y);
=======
void FieldSetDoorOpened(u32 x, u32 y);
void FieldSetDoorClosed(u32 x, u32 y);
s8 FieldAnimateDoorClose(u32 x, u32 y);
s8 FieldAnimateDoorOpen(u32 x, u32 y);
bool8 FieldIsDoorAnimationRunning(void);
u32 GetDoorSoundEffect(u32 x, u32 y);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#endif //GUARD_FIELD_DOOR_H
