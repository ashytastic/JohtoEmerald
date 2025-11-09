#ifndef GUARD_BATTLE_GFX_SFX_UTIL_H
#define GUARD_BATTLE_GFX_SFX_UTIL_H

void AllocateBattleSpritesData(void);
void FreeBattleSpritesData(void);
<<<<<<< HEAD
u16 ChooseMoveAndTargetInBattlePalace(void);
void SpriteCB_WaitForBattlerBallReleaseAnim(struct Sprite *sprite);
void SpriteCB_TrainerSlideIn(struct Sprite *sprite);
void SpriteCB_TrainerSpawn(struct Sprite *sprite);
void InitAndLaunchChosenStatusAnimation(bool8 isStatus2, u32 status);
bool8 TryHandleLaunchBattleTableAnimation(u8 activeBattlerId, u8 attacker, u8 target, u8 tableId, u16 argument);
void InitAndLaunchSpecialAnimation(u8 activeBattlerId, u8 attacker, u8 target, u8 tableId);
bool8 IsMoveWithoutAnimation(u16 moveId, u8 animationTurn);
bool8 IsBattleSEPlaying(u8 battlerId);
void BattleLoadOpponentMonSpriteGfx(struct Pokemon *mon, u8 battlerId);
void BattleLoadPlayerMonSpriteGfx(struct Pokemon *mon, u8 battlerId);
void BattleGfxSfxDummy2(u16 species);
void DecompressTrainerFrontPic(u16 frontPicId, u8 battlerId);
void DecompressTrainerBackPic(u16 backPicId, u8 battlerId);
void BattleGfxSfxDummy3(u8 gender);
void FreeTrainerFrontPicPalette(u16 frontPicId);
bool8 BattleLoadAllHealthBoxesGfx(u8 state);
void LoadBattleBarGfx(u8 unused);
bool8 BattleInitAllSprites(u8 *state1, u8 *battlerId);
void ClearSpritesHealthboxAnimData(void);
void CopyAllBattleSpritesInvisibilities(void);
void CopyBattleSpriteInvisibility(u8 battlerId);
void HandleSpeciesGfxDataChange(u8 attacker, u8 target, bool8 notTransform);
void BattleLoadSubstituteOrMonSpriteGfx(u8 battlerId, bool8 loadMonSprite);
void LoadBattleMonGfxAndAnimate(u8 battlerId, bool8 loadMonSprite, u8 spriteId);
void TrySetBehindSubstituteSpriteBit(u8 battlerId, u16 move);
void ClearBehindSubstituteBit(u8 battlerId);
void HandleLowHpMusicChange(struct Pokemon *mon, u8 battlerId);
=======
u16 ChooseMoveAndTargetInBattlePalace(u32 battler);
void SpriteCB_WaitForBattlerBallReleaseAnim(struct Sprite *sprite);
void SpriteCB_TrainerSlideIn(struct Sprite *sprite);
void SpriteCB_TrainerSpawn(struct Sprite *sprite);
void InitAndLaunchChosenStatusAnimation(u32 battler, bool32 isVolatile, u32 status);
bool8 TryHandleLaunchBattleTableAnimation(u8 activeBattlerId, u8 attacker, u8 target, u8 tableId, u16 argument);
void InitAndLaunchSpecialAnimation(u8 activeBattlerId, u8 attacker, u8 target, u8 tableId);
bool8 IsBattleSEPlaying(u8 battler);
void BattleLoadMonSpriteGfx(struct Pokemon *mon, u32 battler);
void BattleGfxSfxDummy2(u16 species);
void DecompressTrainerFrontPic(u16 frontPicId, u8 battler);
void DecompressTrainerBackPic(u16 backPicId, u8 battler);
void FreeTrainerFrontPicPalette(u16 frontPicId);
bool8 BattleLoadAllHealthBoxesGfx(u8 state);
void LoadBattleBarGfx(u8 unused);
bool8 BattleInitAllSprites(u8 *state1, u8 *battler);
void ClearSpritesHealthboxAnimData(void);
void CopyAllBattleSpritesInvisibilities(void);
void CopyBattleSpriteInvisibility(u8 battler);
void HandleSpeciesGfxDataChange(u8 battlerAtk, u8 battlerDef, u8 changeType);
void BattleLoadSubstituteOrMonSpriteGfx(u8 battler, bool8 loadMonSprite);
void LoadBattleMonGfxAndAnimate(u8 battler, bool8 loadMonSprite, u8 spriteId);
void TrySetBehindSubstituteSpriteBit(u8 battler, u16 move);
void ClearBehindSubstituteBit(u8 battler);
void HandleLowHpMusicChange(struct Pokemon *mon, u8 battler);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void BattleStopLowHpSound(void);
u8 GetMonHPBarLevel(struct Pokemon *mon);
void HandleBattleLowHpMusicChange(void);
void SetBattlerSpriteAffineMode(u8 affineMode);
<<<<<<< HEAD
void LoadAndCreateEnemyShadowSprites(void);
void SpriteCB_SetInvisible(struct Sprite *sprite);
void SetBattlerShadowSpriteCallback(u8 battlerId, u16 species);
void HideBattlerShadowSprite(u8 battlerId);
void FillAroundBattleWindows(void);
void ClearTemporarySpeciesSpriteData(u8 battlerId, bool8 dontClearSubstitute);
=======
void CreateEnemyShadowSprite(u32 battler);
void LoadAndCreateEnemyShadowSprites(void);
void SpriteCB_SetInvisible(struct Sprite *sprite);
void SetBattlerShadowSpriteCallback(u8 battler, u16 species);
void HideBattlerShadowSprite(u8 battler);
void FillAroundBattleWindows(void);
void ClearTemporarySpeciesSpriteData(u32 battler, bool32 dontClearTransform, bool32 dontClearSubstitute);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void AllocateMonSpritesGfx(void);
void FreeMonSpritesGfx(void);
bool32 ShouldPlayNormalMonCry(struct Pokemon *mon);

#endif // GUARD_BATTLE_GFX_SFX_UTIL_H
