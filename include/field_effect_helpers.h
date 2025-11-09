#ifndef GUARD_FIELD_EFFECT_HELPERS_H
#define GUARD_FIELD_EFFECT_HELPERS_H

// States for bobbing up and down while surfing
enum {
    // No bobbing
    BOB_NONE,
    // Both the surf blob/mon should bob up and down
    BOB_PLAYER_AND_MON,
    // Only the surf blob/mon should bob up and down
    // For when the player has jumped/flown off
    BOB_JUST_MON,
};

u8 CreateWarpArrowSprite(void);
<<<<<<< HEAD
u8 StartUnderwaterSurfBlobBobbing(u8 oldSpriteId);
void SetSurfBlob_BobState(u8 spriteId, u8 state);
void SetSurfBlob_DontSyncAnim(u8 spriteId, bool8 dontSync);
void SetSurfBlob_PlayerOffset(u8 spriteId, bool8 hasOffset, s16 offset);
bool8 UpdateRevealDisguise(struct ObjectEvent *);
void StartRevealDisguise(struct ObjectEvent *);
void StartAshFieldEffect(s16, s16, u16, s16);
void SetUpReflection(struct ObjectEvent *, struct Sprite *, u8);
void SetUpShadow(struct ObjectEvent *, struct Sprite *);
u32 StartFieldEffectForObjectEvent(u8, struct ObjectEvent *);
u8 FindTallGrassFieldEffectSpriteId(u8 localId, u8 mapNum, u8 mapGroup, s16 x, s16 y);
void UpdateRayquazaSpotlightEffect(struct Sprite *);
void UpdateShadowFieldEffect(struct Sprite *);
void UpdateTallGrassFieldEffect(struct Sprite *);
void WaitFieldEffectSpriteAnim(struct Sprite *);
void UpdateAshFieldEffect(struct Sprite *);
void UpdateSurfBlobFieldEffect(struct Sprite *);
void UpdateJumpImpactEffect(struct Sprite *);
void UpdateFootprintsTireTracksFieldEffect(struct Sprite *);
void UpdateSplashFieldEffect(struct Sprite *);
void UpdateLongGrassFieldEffect(struct Sprite *);
void UpdateSandPileFieldEffect(struct Sprite *);
void UpdateDisguiseFieldEffect(struct Sprite *);
void UpdateShortGrassFieldEffect(struct Sprite *);
void UpdateHotSpringsWaterFieldEffect(struct Sprite *);
void UpdateBubblesFieldEffect(struct Sprite *);
void UpdateSparkleFieldEffect(struct Sprite *);
void SetSpriteInvisible(u8 spriteId);
void ShowWarpArrowSprite(u8 spriteId, u8 direction, s16 x, s16 y);
void UpdateBobbingEffect(struct ObjectEvent *, struct Sprite *, struct Sprite *);
=======
u8 StartUnderwaterSurfBlobBobbing(u8 blobSpriteId);
void SetSurfBlob_BobState(u8 spriteId, u8 state);
void SetSurfBlob_DontSyncAnim(u8 spriteId, bool8 dontSync);
void SetSurfBlob_PlayerOffset(u8 spriteId, bool8 hasOffset, s16 offset);
bool8 UpdateRevealDisguise(struct ObjectEvent *objectEvent);
void StartRevealDisguise(struct ObjectEvent *objectEvent);
void StartAshFieldEffect(s16 x, s16 y, u16 metatileId, s16 delay);
void SetUpReflection(struct ObjectEvent *objectEvent, struct Sprite *sprite, bool8 stillReflection);
void SetUpShadow(struct ObjectEvent *objectEvent);
u32 StartFieldEffectForObjectEvent(u8 fieldEffectId, struct ObjectEvent *objectEvent);
u8 FindTallGrassFieldEffectSpriteId(u8 localId, u8 mapNum, u8 mapGroup, s16 x, s16 y);
void UpdateRayquazaSpotlightEffect(struct Sprite *sprite);
void UpdateShadowFieldEffect(struct Sprite *sprite);
void UpdateTallGrassFieldEffect(struct Sprite *sprite);
void WaitFieldEffectSpriteAnim(struct Sprite *sprite);
void UpdateAshFieldEffect(struct Sprite *sprite);
void UpdateSurfBlobFieldEffect(struct Sprite *sprite);
void UpdateJumpImpactEffect(struct Sprite *sprite);
void UpdateFootprintsTireTracksFieldEffect(struct Sprite *sprite);
void UpdateSplashFieldEffect(struct Sprite *sprite);
void UpdateLongGrassFieldEffect(struct Sprite *sprite);
void UpdateSandPileFieldEffect(struct Sprite *sprite);
void UpdateDisguiseFieldEffect(struct Sprite *sprite);
void UpdateShortGrassFieldEffect(struct Sprite *sprite);
void UpdateHotSpringsWaterFieldEffect(struct Sprite *sprite);
void UpdateBubblesFieldEffect(struct Sprite *sprite);
void UpdateSparkleFieldEffect(struct Sprite *sprite);
void SetSpriteInvisible(u8 spriteId);
void ShowWarpArrowSprite(u8 spriteId, u8 direction, s16 x, s16 y);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#endif //GUARD_FIELD_EFFECT_HELPERS_H
