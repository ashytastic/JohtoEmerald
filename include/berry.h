#ifndef GUARD_BERRY_H
#define GUARD_BERRY_H

<<<<<<< HEAD
void ClearEnigmaBerries(void);
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void SetEnigmaBerry(u8 *src);
bool32 IsEnigmaBerryValid(void);
const struct Berry *GetBerryInfo(u8 berry);
struct BerryTree *GetBerryTreeInfo(u8 id);
bool32 ObjectEventInteractionWaterBerryTree(void);
bool8 IsPlayerFacingEmptyBerryTreePatch(void);
bool8 TryToWaterBerryTree(void);
void ClearBerryTrees(void);
void BerryTreeTimeUpdate(s32 minutes);
<<<<<<< HEAD
void PlantBerryTree(u8 id, u8 berry, u8 stage, bool8 sparkle);
void RemoveBerryTree(u8 id);
u8 GetBerryTypeByBerryTreeId(u8 id);
u8 GetStageByBerryTreeId(u8);
u8 ItemIdToBerryType(u16 item);
void GetBerryNameByBerryType(u8 berry, u8 *string);
void ResetBerryTreeSparkleFlag(u8 id);
void Bag_ChooseBerry(void);
=======
void PlantBerryTree(u8 id, u8 berry, u8 stage, bool8 allowGrowth);
void RemoveBerryTree(u8 id);
u8 GetBerryTypeByBerryTreeId(u8 id);
u8 GetStageByBerryTreeId(u8 id);
u8 ItemIdToBerryType(u16 item);
void GetBerryNameByBerryType(u8 berry, u8 *string);
void Bag_ChooseBerry(void);
void Bag_ChooseMulch(void);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void ObjectEventInteractionGetBerryTreeData(void);
void ObjectEventInteractionPlantBerryTree(void);
void ObjectEventInteractionPickBerryTree(void);
void ObjectEventInteractionRemoveBerryTree(void);
<<<<<<< HEAD
bool8 PlayerHasBerries(void);
void SetBerryTreesSeen(void);
=======
void ObjectEventInteractionApplyMulch(void);
bool8 PlayerHasBerries(void);
void SetBerryTreesSeen(void);
bool32 BerryTreeGrow(struct BerryTree *tree);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

extern const struct Berry gBerries[];

struct BerryCrushBerryData {
    u8 difficulty; // The number of A presses required to crush it
    u16 powder;
};
<<<<<<< HEAD
extern const u8 sBerryDescriptionPart1_WatmelMetric[];
extern const u8 sBerryDescriptionPart2_WatmelMetric[];
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

extern const struct BerryCrushBerryData gBerryCrush_BerryData[];

#endif // GUARD_BERRY_H
