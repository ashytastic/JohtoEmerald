#ifndef GUARD_FLDEFF_H
#define GUARD_FLDEFF_H

// cut
<<<<<<< HEAD
bool8 SetUpFieldMove_Cut(void);
=======
bool32 SetUpFieldMove_Cut(void);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
bool8 FldEff_UseCutOnGrass(void);
bool8 FldEff_UseCutOnTree(void);
bool8 FldEff_CutGrass(void);
void FixLongGrassMetatilesWindowTop(s16 x, s16 y);
void FixLongGrassMetatilesWindowBottom(s16 x, s16 y);

extern const struct SpritePalette gSpritePalette_CutGrass;
extern struct MapPosition gPlayerFacingPosition;

// escalator
<<<<<<< HEAD
void StartEscalator(bool8 var);
=======
void StartEscalator(bool8 goingUp);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void StopEscalator(void);
bool8 IsEscalatorMoving(void);

// soft-boiled
<<<<<<< HEAD
bool8 SetUpFieldMove_SoftBoiled(void);
=======
bool32 SetUpFieldMove_SoftBoiled(void);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void Task_TryUseSoftboiledOnPartyMon(u8 taskId);
void ChooseMonForSoftboiled(u8 taskId);

// flash
<<<<<<< HEAD
bool8 SetUpFieldMove_Flash(void);
=======
bool32 SetUpFieldMove_Flash(void);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void CB2_DoChangeMap(void);
bool8 GetMapPairFadeToType(u8 _fromType, u8 _toType);
bool8 GetMapPairFadeFromType(u8 _fromType, u8 _toType);

// strength
<<<<<<< HEAD
bool8 SetUpFieldMove_Strength(void);
bool8 FldEff_UseStrength(void);

// sweet scent
bool8 SetUpFieldMove_SweetScent(void);
bool8 FldEff_SweetScent(void);

// teleport
bool8 SetUpFieldMove_Teleport(void);
bool8 FldEff_UseTeleport(void);

// dig
bool8 SetUpFieldMove_Dig(void);
=======
bool32 SetUpFieldMove_Strength(void);
bool8 FldEff_UseStrength(void);

// sweet scent
bool32 SetUpFieldMove_SweetScent(void);
bool8 FldEff_SweetScent(void);
void StartSweetScentFieldEffect(void);

// teleport
bool32 SetUpFieldMove_Teleport(void);
bool8 FldEff_UseTeleport(void);

// dig
bool32 SetUpFieldMove_Dig(void);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
bool8 FldEff_UseDig(void);

// rock smash
bool8 CheckObjectGraphicsInFrontOfPlayer(u16 graphicsId);
u8 CreateFieldMoveTask(void);
<<<<<<< HEAD
bool8 SetUpFieldMove_RockSmash(void);
bool8 FldEff_UseRockSmash(void);

=======
bool32 SetUpFieldMove_RockSmash(void);
bool8 FldEff_UseRockSmash(void);

// defog
bool32 SetUpFieldMove_Defog(void);
bool8 FldEff_Defog(void);

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#endif // GUARD_FLDEFF_H
