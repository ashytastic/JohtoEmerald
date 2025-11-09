#ifndef GUARD_ROAMER_H
#define GUARD_ROAMER_H

<<<<<<< HEAD
void ClearRoamerData(void);
void ClearRoamerLocationData(void);
void InitRoamer(void);
void UpdateLocationHistoryForRoamer(void);
void RoamerMoveToOtherLocationSet(void);
void RoamerMove(void);
bool8 IsRoamerAt(u8 mapGroup, u8 mapNum);
void CreateRoamerMonInstance(void);
u8 TryStartRoamerEncounter(void);
void UpdateRoamerHPStatus(struct Pokemon *mon);
void SetRoamerInactive(void);
void GetRoamerLocation(u8 *mapGroup, u8 *mapNum);
=======
void DeactivateAllRoamers(void);
void InitRoamer(void);
void UpdateLocationHistoryForRoamer(void);
void RoamerMoveToOtherLocationSet(u32 roamerIndex);
void RoamerMove(u32 roamerIndex);
bool8 IsRoamerAt(u32 roamerIndex, u8 mapGroup, u8 mapNum);
void CreateRoamerMonInstance(u32 roamerIndex);
bool8 TryStartRoamerEncounter(void);
void UpdateRoamerHPStatus(struct Pokemon *mon);
void SetRoamerInactive(u32 roamerIndex);
void GetRoamerLocation(u32 roamerIndex, u8 *mapGroup, u8 *mapNum);
bool8 TryAddRoamer(u16 species, u8 level);
void MoveAllRoamersToOtherLocationSets(void);
void MoveAllRoamers(void);

extern u8 gEncounteredRoamerIndex;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#endif // GUARD_ROAMER_H
