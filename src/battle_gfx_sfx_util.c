#include "global.h"
#include "battle.h"
#include "battle_controllers.h"
<<<<<<< HEAD
#include "battle_ai_script_commands.h"
=======
#include "battle_ai_main.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "battle_anim.h"
#include "constants/battle_anim.h"
#include "battle_interface.h"
#include "main.h"
<<<<<<< HEAD
=======
#include "menu.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "dma3.h"
#include "malloc.h"
#include "graphics.h"
#include "random.h"
#include "util.h"
#include "pokemon.h"
#include "constants/moves.h"
#include "task.h"
#include "sprite.h"
#include "sound.h"
#include "party_menu.h"
#include "m4a.h"
#include "decompress.h"
#include "data.h"
#include "palette.h"
#include "contest.h"
<<<<<<< HEAD
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/battle_palace.h"

extern const u8 gBattlePalaceNatureToMoveTarget[];
extern const u8 * const gBattleAnims_General[];
extern const u8 * const gBattleAnims_Special[];
extern const struct CompressedSpriteSheet gSpriteSheet_EnemyShadow;
extern const struct SpriteTemplate gSpriteTemplate_EnemyShadow;

// this file's functions
static u8 GetBattlePalaceMoveGroup(u16 move);
static u16 GetBattlePalaceTarget(void);
=======
#include "trainer_pokemon_sprites.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/battle_palace.h"
#include "constants/battle_move_effects.h"
#include "constants/event_objects.h" // only for SHADOW_SIZE constants

// this file's functions
static u8 GetBattlePalaceMoveGroup(u8 battler, u16 move);
static u16 GetBattlePalaceTarget(u32 battler);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void SpriteCB_TrainerSlideVertical(struct Sprite *sprite);
static bool8 ShouldAnimBeDoneRegardlessOfSubstitute(u8 animId);
static void Task_ClearBitWhenBattleTableAnimDone(u8 taskId);
static void Task_ClearBitWhenSpecialAnimDone(u8 taskId);
static void ClearSpritesBattlerHealthboxAnimData(void);

// const rom data
static const struct CompressedSpriteSheet sSpriteSheet_SinglesPlayerHealthbox =
{
    gHealthboxSinglesPlayerGfx, 0x1000, TAG_HEALTHBOX_PLAYER1_TILE
};

static const struct CompressedSpriteSheet sSpriteSheet_SinglesOpponentHealthbox =
{
    gHealthboxSinglesOpponentGfx, 0x1000, TAG_HEALTHBOX_OPPONENT1_TILE
};

<<<<<<< HEAD
static const struct CompressedSpriteSheet sSpriteSheet_SinglesPlayerHealthboxFrontier =
{
    gHealthboxSinglesPlayerGfx_Frontier, 0x1000, TAG_HEALTHBOX_PLAYER1_TILE
};

=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static const struct CompressedSpriteSheet sSpriteSheets_DoublesPlayerHealthbox[2] =
{
    {gHealthboxDoublesPlayerGfx, 0x800, TAG_HEALTHBOX_PLAYER1_TILE},
    {gHealthboxDoublesPlayerGfx, 0x800, TAG_HEALTHBOX_PLAYER2_TILE}
};

static const struct CompressedSpriteSheet sSpriteSheets_DoublesOpponentHealthbox[2] =
{
    {gHealthboxDoublesOpponentGfx, 0x800, TAG_HEALTHBOX_OPPONENT1_TILE},
    {gHealthboxDoublesOpponentGfx, 0x800, TAG_HEALTHBOX_OPPONENT2_TILE}
};

static const struct CompressedSpriteSheet sSpriteSheet_SafariHealthbox =
{
    gHealthboxSafariGfx, 0x1000, TAG_HEALTHBOX_SAFARI_TILE
};

static const struct CompressedSpriteSheet sSpriteSheets_HealthBar[MAX_BATTLERS_COUNT] =
{
    {gBlankGfxCompressed, 0x0100, TAG_HEALTHBAR_PLAYER1_TILE},
    {gBlankGfxCompressed, 0x0120, TAG_HEALTHBAR_OPPONENT1_TILE},
    {gBlankGfxCompressed, 0x0100, TAG_HEALTHBAR_PLAYER2_TILE},
    {gBlankGfxCompressed, 0x0120, TAG_HEALTHBAR_OPPONENT2_TILE}
};

<<<<<<< HEAD
static const struct SpritePalette sSpritePalettes_HealthBoxHealthBar[2] =
=======
const struct SpritePalette sSpritePalettes_HealthBoxHealthBar[2] =
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    {gBattleInterface_BallStatusBarPal, TAG_HEALTHBOX_PAL},
    {gBattleInterface_BallDisplayPal, TAG_HEALTHBAR_PAL}
};

<<<<<<< HEAD
=======
const struct CompressedSpriteSheet gSpriteSheet_EnemyShadow =
{
    .data = gEnemyMonShadow_Gfx, .size = 0x80, .tag = TAG_SHADOW_TILE
};

const struct CompressedSpriteSheet gSpriteSheet_EnemyShadowsSized =
{
    .data = gEnemyMonShadowsSized_Gfx,
    .size = TILE_SIZE_4BPP * 8 * 4, // 8 tiles per sprite, 4 sprites total
    .tag = TAG_SHADOW_TILE,
};

static const struct OamData sOamData_EnemyShadow =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x8),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x8),
    .tileNum = 0,
    .priority = 3,
    .paletteNum = 0,
    .affineParam = 0
};

const struct SpriteTemplate gSpriteTemplate_EnemyShadow =
{
    .tileTag = TAG_SHADOW_TILE,
    .paletteTag = TAG_SHADOW_PAL,
    .oam = &sOamData_EnemyShadow,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
// code
void AllocateBattleSpritesData(void)
{
    gBattleSpritesDataPtr = AllocZeroed(sizeof(struct BattleSpriteData));
    gBattleSpritesDataPtr->battlerData = AllocZeroed(sizeof(struct BattleSpriteInfo) * MAX_BATTLERS_COUNT);
    gBattleSpritesDataPtr->healthBoxesData = AllocZeroed(sizeof(struct BattleHealthboxInfo) * MAX_BATTLERS_COUNT);
    gBattleSpritesDataPtr->animationData = AllocZeroed(sizeof(struct BattleAnimationInfo));
    gBattleSpritesDataPtr->battleBars = AllocZeroed(sizeof(struct BattleBarInfo) * MAX_BATTLERS_COUNT);
}

void FreeBattleSpritesData(void)
{
    if (gBattleSpritesDataPtr == NULL)
        return;

    FREE_AND_SET_NULL(gBattleSpritesDataPtr->battleBars);
    FREE_AND_SET_NULL(gBattleSpritesDataPtr->animationData);
    FREE_AND_SET_NULL(gBattleSpritesDataPtr->healthBoxesData);
    FREE_AND_SET_NULL(gBattleSpritesDataPtr->battlerData);
    FREE_AND_SET_NULL(gBattleSpritesDataPtr);
}

// Pokémon chooses move to use in Battle Palace rather than player
<<<<<<< HEAD
u16 ChooseMoveAndTargetInBattlePalace(void)
{
    s32 i, var1, var2;
    s32 chosenMoveId = -1;
    struct ChooseMoveStruct *moveInfo = (struct ChooseMoveStruct *)(&gBattleBufferA[gActiveBattler][4]);
    u8 unusableMovesBits = CheckMoveLimitations(gActiveBattler, 0, MOVE_LIMITATIONS_ALL);
=======
u16 ChooseMoveAndTargetInBattlePalace(u32 battler)
{
    s32 i, var1, var2;
    s32 chosenMoveIndex = -1;
    struct ChooseMoveStruct *moveInfo = (struct ChooseMoveStruct *)(&gBattleResources->bufferA[battler][4]);
    u8 unusableMovesBits = CheckMoveLimitations(battler, 0, MOVE_LIMITATIONS_ALL);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    s32 percent = Random() % 100;

    // Heavy variable re-use here makes this hard to read without defines
    // Possibly just optimization? might still match with additional vars
    #define maxGroupNum var1
    #define minGroupNum var2
    #define selectedGroup percent
    #define selectedMoves var2
    #define moveTarget var1
    #define numMovesPerGroup var1
    #define numMultipleMoveGroups var2
    #define randSelectGroup var2

    // If battler is < 50% HP and not asleep, use second set of move group likelihoods
    // otherwise use first set
<<<<<<< HEAD
    i = (gBattleStruct->palaceFlags & gBitTable[gActiveBattler]) ? 2 : 0;
=======
    i = (gBattleStruct->palaceFlags & (1u << battler)) ? 2 : 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    minGroupNum = i;

    maxGroupNum = i + 2; // + 2 because there are two percentages per set of likelihoods

    // Each nature has a different percent chance to select a move from one of 3 move groups
    // If percent is less than 1st check, use move from "Attack" group
    // If percent is less than 2nd check, use move from "Defense" group
    // Otherwise use move from "Support" group
    for (; i < maxGroupNum; i++)
    {
<<<<<<< HEAD
        if (gBattlePalaceNatureToMoveGroupLikelihood[GetNatureFromPersonality(gBattleMons[gActiveBattler].personality)][i] > percent)
=======
        if (gNaturesInfo[GetNatureFromPersonality(gBattleMons[battler].personality)].battlePalacePercents[i] > percent)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            break;
    }
    selectedGroup = i - minGroupNum;
    if (i == maxGroupNum)
        selectedGroup = PALACE_MOVE_GROUP_SUPPORT;

    // Flag moves that match selected group, to be passed to AI
    for (selectedMoves = 0, i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moveInfo->moves[i] == MOVE_NONE)
            break;
<<<<<<< HEAD
        if (selectedGroup == GetBattlePalaceMoveGroup(moveInfo->moves[i]) && moveInfo->currentPp[i] != 0)
            selectedMoves |= gBitTable[i];
=======
        if (selectedGroup == GetBattlePalaceMoveGroup(battler, moveInfo->moves[i]) && moveInfo->currentPp[i] != 0)
            selectedMoves |= 1u << i;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }

    // Pass selected moves to AI, pick one
    if (selectedMoves != 0)
    {
        // Lower 4 bits of palaceFlags are flags for each battler.
        // Clear the rest of palaceFlags, then set the selected moves in the upper 4 bits.
        gBattleStruct->palaceFlags &= (1 << MAX_BATTLERS_COUNT) - 1;
        gBattleStruct->palaceFlags |= (selectedMoves << MAX_BATTLERS_COUNT);
<<<<<<< HEAD
        BattleAI_SetupAIData(selectedMoves);
        chosenMoveId = BattleAI_ChooseMoveOrAction();
=======
        BattleAI_SetupAIData(selectedMoves, battler);
        chosenMoveIndex = BattleAI_ChooseMoveIndex(battler);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }

    // If no moves matched the selected group, pick a new move from groups the Pokémon has
    // In this case the AI is not checked again, so the choice may be worse
    // If a move is chosen this way, there's a 50% chance that it will be unable to use it anyway
<<<<<<< HEAD
    if (chosenMoveId == -1)
    {
=======
    if (chosenMoveIndex == -1 || chosenMoveIndex >= MAX_MON_MOVES)
    {
        chosenMoveIndex = -1;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        if (unusableMovesBits != ALL_MOVES_MASK)
        {
            numMovesPerGroup = 0, numMultipleMoveGroups = 0;

            for (i = 0; i < MAX_MON_MOVES; i++)
            {
                // Count the number of usable moves the battler has in each move group.
                // The totals will be stored separately in 3 groups of 4 bits each in numMovesPerGroup.
<<<<<<< HEAD
                if (GetBattlePalaceMoveGroup(moveInfo->moves[i]) == PALACE_MOVE_GROUP_ATTACK && !(gBitTable[i] & unusableMovesBits))
                    numMovesPerGroup += (1 << 0);
                if (GetBattlePalaceMoveGroup(moveInfo->moves[i]) == PALACE_MOVE_GROUP_DEFENSE && !(gBitTable[i] & unusableMovesBits))
                    numMovesPerGroup += (1 << 4);
                if (GetBattlePalaceMoveGroup(moveInfo->moves[i]) == PALACE_MOVE_GROUP_SUPPORT && !(gBitTable[i] & unusableMovesBits))
=======
                if (GetBattlePalaceMoveGroup(battler, moveInfo->moves[i]) == PALACE_MOVE_GROUP_ATTACK && !((1u << i) & unusableMovesBits))
                    numMovesPerGroup += (1 << 0);
                if (GetBattlePalaceMoveGroup(battler, moveInfo->moves[i]) == PALACE_MOVE_GROUP_DEFENSE && !((1u << i) & unusableMovesBits))
                    numMovesPerGroup += (1 << 4);
                if (GetBattlePalaceMoveGroup(battler, moveInfo->moves[i]) == PALACE_MOVE_GROUP_SUPPORT && !((1u << i) & unusableMovesBits))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                    numMovesPerGroup += (1 << 8);
            }

            // Count the number of move groups for which the battler has at least 2 usable moves.
            // This is a roundabout way to determine if there is a move group that should be
            // preferred, because it has multiple move options and the others do not.
            // The condition intended to check the total for the Support group is accidentally
            // checking the Defense total, and is never true. As a result the preferences for
            // random move selection here will skew away from the Support move group.
            if ((numMovesPerGroup & 0xF) >= 2)
                numMultipleMoveGroups++;
            if ((numMovesPerGroup & (0xF << 4)) >= (2 << 4))
                numMultipleMoveGroups++;
#ifdef BUGFIX
            if ((numMovesPerGroup & (0xF << 8)) >= (2 << 8))
#else
            if ((numMovesPerGroup & (0xF << 4)) >= (2 << 8))
#endif
                numMultipleMoveGroups++;


            // By this point we already know the battler only has usable moves from at most 2 of the 3 move groups,
            // because they had no usable moves from the move group that was selected based on Nature.
            //
            // The below condition is effectively 'numMultipleMoveGroups != 1'.
            // There is no stand-out group with multiple moves to choose from, so we pick randomly.
            // Note that because of the bug above the battler may actually have any number of Support moves.
            if (numMultipleMoveGroups > 1 || numMultipleMoveGroups == 0)
            {
                do
                {
                    i = Random() % MAX_MON_MOVES;
<<<<<<< HEAD
                    if (!(gBitTable[i] & unusableMovesBits))
                        chosenMoveId = i;
                } while (chosenMoveId == -1);
=======
                    if (!((1u << i) & unusableMovesBits))
                        chosenMoveIndex = i;
                } while (chosenMoveIndex == -1);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            }
            else
            {
                // The battler has just 1 move group with multiple move options to choose from.
                // Choose a move randomly from this group.

                // Same bug as the previous set of conditions (the condition for Support is never true).
                // This bug won't cause a softlock below, because if Support is the only group with multiple
                // moves then it won't have been counted, and the 'numMultipleMoveGroups == 0' above will be true.
                if ((numMovesPerGroup & 0xF) >= 2)
                    randSelectGroup = PALACE_MOVE_GROUP_ATTACK;
                if ((numMovesPerGroup & (0xF << 4)) >= (2 << 4))
                    randSelectGroup = PALACE_MOVE_GROUP_DEFENSE;
#ifdef BUGFIX
                if ((numMovesPerGroup & (0xF << 8)) >= (2 << 8))
#else
                if ((numMovesPerGroup & (0xF << 4)) >= (2 << 8))
#endif
                    randSelectGroup = PALACE_MOVE_GROUP_SUPPORT;

                do
                {
                    i = Random() % MAX_MON_MOVES;
<<<<<<< HEAD
                    if (!(gBitTable[i] & unusableMovesBits) && randSelectGroup == GetBattlePalaceMoveGroup(moveInfo->moves[i]))
                        chosenMoveId = i;
                } while (chosenMoveId == -1);
=======
                    if (!((1u << i) & unusableMovesBits) && randSelectGroup == GetBattlePalaceMoveGroup(battler, moveInfo->moves[i]))
                        chosenMoveIndex = i;
                } while (chosenMoveIndex == -1);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            }

            // Because the selected move was not from the Nature-chosen move group there's a 50% chance
            // that it will be unable to use it. This could have been checked earlier to avoid the above work.
            if (Random() % 100 >= 50)
            {
<<<<<<< HEAD
                gProtectStructs[gActiveBattler].palaceUnableToUseMove = TRUE;
=======
                gProtectStructs[battler].palaceUnableToUseMove = TRUE;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                return 0;
            }
        }
        else
        {
            // All the battler's moves were flagged as unusable.
<<<<<<< HEAD
            gProtectStructs[gActiveBattler].palaceUnableToUseMove = TRUE;
=======
            gProtectStructs[battler].palaceUnableToUseMove = TRUE;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            return 0;
        }
    }

<<<<<<< HEAD
    if (moveInfo->moves[chosenMoveId] == MOVE_CURSE)
    {
        if (moveInfo->monType1 != TYPE_GHOST && moveInfo->monType2 != TYPE_GHOST)
            moveTarget = MOVE_TARGET_USER;
        else
            moveTarget = MOVE_TARGET_SELECTED;
    }
    else
    {
        moveTarget = gBattleMoves[moveInfo->moves[chosenMoveId]].target;
    }

    if (moveTarget & MOVE_TARGET_USER)
        chosenMoveId |= (gActiveBattler << 8);
    else if (moveTarget == MOVE_TARGET_SELECTED)
        chosenMoveId |= GetBattlePalaceTarget();
    else
        chosenMoveId |= (GetBattlerAtPosition(BATTLE_OPPOSITE(GET_BATTLER_SIDE(gActiveBattler))) << 8);

    return chosenMoveId;
=======
    moveTarget = GetBattlerMoveTargetType(battler, moveInfo->moves[chosenMoveIndex]);

    if (moveTarget & MOVE_TARGET_USER)
        chosenMoveIndex |= (battler << 8);
    else if (moveTarget == MOVE_TARGET_SELECTED)
        chosenMoveIndex |= GetBattlePalaceTarget(battler);
    else
        chosenMoveIndex |= (GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerSide(battler))) << 8);

    return chosenMoveIndex;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

#undef maxGroupNum
#undef minGroupNum
#undef selectedGroup
#undef selectedMoves
#undef moveTarget
#undef numMovesPerGroup
#undef numMultipleMoveGroups
#undef randSelectGroup

<<<<<<< HEAD
static u8 GetBattlePalaceMoveGroup(u16 move)
{
    switch (gBattleMoves[move].target)
    {
    case MOVE_TARGET_SELECTED:
    case MOVE_TARGET_USER_OR_SELECTED:
    case MOVE_TARGET_RANDOM:
    case MOVE_TARGET_BOTH:
    case MOVE_TARGET_FOES_AND_ALLY:
        if (gBattleMoves[move].power == 0)
=======
static u8 GetBattlePalaceMoveGroup(u8 battler, u16 move)
{
    switch (GetBattlerMoveTargetType(battler, move))
    {
    case MOVE_TARGET_SELECTED:
    case MOVE_TARGET_OPPONENT:
    case MOVE_TARGET_RANDOM:
    case MOVE_TARGET_BOTH:
    case MOVE_TARGET_FOES_AND_ALLY:
    case MOVE_TARGET_ALL_BATTLERS:
        if (IsBattleMoveStatus(move))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            return PALACE_MOVE_GROUP_SUPPORT;
        else
            return PALACE_MOVE_GROUP_ATTACK;
        break;
    case MOVE_TARGET_DEPENDS:
    case MOVE_TARGET_OPPONENTS_FIELD:
<<<<<<< HEAD
=======
    case MOVE_TARGET_ALLY:
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        return PALACE_MOVE_GROUP_SUPPORT;
    case MOVE_TARGET_USER:
        return PALACE_MOVE_GROUP_DEFENSE;
    default:
        return PALACE_MOVE_GROUP_ATTACK;
    }
}

<<<<<<< HEAD
static u16 GetBattlePalaceTarget(void)
{
    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        u8 opposing1, opposing2;

        if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
=======
static u16 GetBattlePalaceTarget(u32 battler)
{
    if (IsDoubleBattle())
    {
        u8 opposing1, opposing2;

        if (IsOnPlayerSide(battler))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        {
            opposing1 = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
            opposing2 = GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT);
        }
        else
        {
            opposing1 = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
            opposing2 = GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT);
        }

        if (gBattleMons[opposing1].hp == gBattleMons[opposing2].hp)
<<<<<<< HEAD
            return (BATTLE_OPPOSITE(gActiveBattler & BIT_SIDE) + (Random() & 2)) << 8;

        switch (gBattlePalaceNatureToMoveTarget[GetNatureFromPersonality(gBattleMons[gActiveBattler].personality)])
=======
            return (BATTLE_OPPOSITE(battler & BIT_SIDE) + (Random() & 2)) << 8;

        switch (gNaturesInfo[GetNatureFromPersonality(gBattleMons[battler].personality)].battlePalaceSmokescreen)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        {
        case PALACE_TARGET_STRONGER:
            if (gBattleMons[opposing1].hp > gBattleMons[opposing2].hp)
                return opposing1 << 8;
            else
                return opposing2 << 8;
        case PALACE_TARGET_WEAKER:
            if (gBattleMons[opposing1].hp < gBattleMons[opposing2].hp)
                return opposing1 << 8;
            else
                return opposing2 << 8;
        case PALACE_TARGET_RANDOM:
<<<<<<< HEAD
            return (BATTLE_OPPOSITE(gActiveBattler & BIT_SIDE) + (Random() & 2)) << 8;
        }
    }

    return BATTLE_OPPOSITE(gActiveBattler) << 8;
=======
            return (BATTLE_OPPOSITE(battler & BIT_SIDE) + (Random() & 2)) << 8;
        }
    }

    return BATTLE_OPPOSITE(battler) << 8;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

// Wait for the Pokémon to finish appearing out from the Poké Ball on send out
void SpriteCB_WaitForBattlerBallReleaseAnim(struct Sprite *sprite)
{
    u8 spriteId = sprite->data[1];

    if (!gSprites[spriteId].affineAnimEnded)
        return;
    if (gSprites[spriteId].invisible)
        return;

    if (gSprites[spriteId].animPaused)
    {
        gSprites[spriteId].animPaused = 0;
    }
    else
    {
        if (gSprites[spriteId].animEnded)
            sprite->callback = SpriteCallbackDummy;
    }
}

static void UNUSED UnusedDoBattleSpriteAffineAnim(struct Sprite *sprite, bool8 pointless)
{
    sprite->animPaused = TRUE;
    sprite->callback = SpriteCallbackDummy;

    if (!pointless)
        StartSpriteAffineAnim(sprite, 1);
    else
        StartSpriteAffineAnim(sprite, 1);

    AnimateSprite(sprite);
}

#define sSpeedX data[0]

void SpriteCB_TrainerSlideIn(struct Sprite *sprite)
{
    if (!(gIntroSlideFlags & 1))
    {
        sprite->x2 += sprite->sSpeedX;
        if (sprite->x2 == 0)
        {
            if (sprite->y2 != 0)
                sprite->callback = SpriteCB_TrainerSlideVertical;
            else
                sprite->callback = SpriteCallbackDummy;
        }
    }
}

void SpriteCB_TrainerSpawn(struct Sprite *sprite)
{
    if (!(gIntroSlideFlags & 1))
    {
        sprite->x2 = 0;
        if (sprite->y2 != 0)
            sprite->callback = SpriteCB_TrainerSlideVertical;
        else
            sprite->callback = SpriteCallbackDummy;
    }
}

// Slide up to 0 if necessary (used by multi battle intro)
static void SpriteCB_TrainerSlideVertical(struct Sprite *sprite)
{
    sprite->y2 -= 2;
    if (sprite->y2 == 0)
        sprite->callback = SpriteCallbackDummy;
}

#undef sSpeedX

<<<<<<< HEAD
void InitAndLaunchChosenStatusAnimation(bool8 isStatus2, u32 status)
{
    gBattleSpritesDataPtr->healthBoxesData[gActiveBattler].statusAnimActive = 1;
    if (!isStatus2)
    {
        if (status == STATUS1_FREEZE)
            LaunchStatusAnimation(gActiveBattler, B_ANIM_STATUS_FRZ);
        else if (status == STATUS1_POISON || status & STATUS1_TOXIC_POISON)
            LaunchStatusAnimation(gActiveBattler, B_ANIM_STATUS_PSN);
        else if (status == STATUS1_BURN)
            LaunchStatusAnimation(gActiveBattler, B_ANIM_STATUS_BRN);
        else if (status & STATUS1_SLEEP)
            LaunchStatusAnimation(gActiveBattler, B_ANIM_STATUS_SLP);
        else if (status == STATUS1_PARALYSIS)
            LaunchStatusAnimation(gActiveBattler, B_ANIM_STATUS_PRZ);
        else // no animation
            gBattleSpritesDataPtr->healthBoxesData[gActiveBattler].statusAnimActive = 0;
    }
    else
    {
        if (status & STATUS2_INFATUATION)
            LaunchStatusAnimation(gActiveBattler, B_ANIM_STATUS_INFATUATION);
        else if (status & STATUS2_CONFUSION)
            LaunchStatusAnimation(gActiveBattler, B_ANIM_STATUS_CONFUSION);
        else if (status & STATUS2_CURSED)
            LaunchStatusAnimation(gActiveBattler, B_ANIM_STATUS_CURSED);
        else if (status & STATUS2_NIGHTMARE)
            LaunchStatusAnimation(gActiveBattler, B_ANIM_STATUS_NIGHTMARE);
        else if (status & STATUS2_WRAPPED)
            LaunchStatusAnimation(gActiveBattler, B_ANIM_STATUS_WRAPPED); // this animation doesn't actually exist
        else // no animation
            gBattleSpritesDataPtr->healthBoxesData[gActiveBattler].statusAnimActive = 0;
=======
void InitAndLaunchChosenStatusAnimation(u32 battler, bool32 isVolatile, u32 status)
{
    gBattleSpritesDataPtr->healthBoxesData[battler].statusAnimActive = 1;
    if (!isVolatile)
    {
        if (status == STATUS1_FREEZE || status == STATUS1_FROSTBITE)
            LaunchStatusAnimation(battler, B_ANIM_STATUS_FRZ);
        else if (status == STATUS1_POISON || status & STATUS1_TOXIC_POISON)
            LaunchStatusAnimation(battler, B_ANIM_STATUS_PSN);
        else if (status == STATUS1_BURN)
            LaunchStatusAnimation(battler, B_ANIM_STATUS_BRN);
        else if (status & STATUS1_SLEEP)
            LaunchStatusAnimation(battler, B_ANIM_STATUS_SLP);
        else if (status == STATUS1_PARALYSIS)
            LaunchStatusAnimation(battler, B_ANIM_STATUS_PRZ);
        else // no animation
            gBattleSpritesDataPtr->healthBoxesData[battler].statusAnimActive = 0;
    }
    else
    {
        if (status == VOLATILE_INFATUATION)
            LaunchStatusAnimation(battler, B_ANIM_STATUS_INFATUATION);
        else if (status == VOLATILE_CONFUSION)
            LaunchStatusAnimation(battler, B_ANIM_STATUS_CONFUSION);
        else if (status == VOLATILE_CURSED)
            LaunchStatusAnimation(battler, B_ANIM_STATUS_CURSED);
        else if (status == VOLATILE_NIGHTMARE)
            LaunchStatusAnimation(battler, B_ANIM_STATUS_NIGHTMARE);
        else // no animation
            gBattleSpritesDataPtr->healthBoxesData[battler].statusAnimActive = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }
}

#define tBattlerId data[0]

bool8 TryHandleLaunchBattleTableAnimation(u8 activeBattler, u8 atkBattler, u8 defBattler, u8 tableId, u16 argument)
{
    u8 taskId;

<<<<<<< HEAD
    if (tableId == B_ANIM_CASTFORM_CHANGE && (argument & CASTFORM_SUBSTITUTE))
    {
        // If Castform is behind substitute, set the new form but skip the animation
        gBattleMonForms[activeBattler] = (argument & ~CASTFORM_SUBSTITUTE);
        return TRUE;
    }
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    if (gBattleSpritesDataPtr->battlerData[activeBattler].behindSubstitute
        && !ShouldAnimBeDoneRegardlessOfSubstitute(tableId))
    {
        return TRUE;
    }
    if (gBattleSpritesDataPtr->battlerData[activeBattler].behindSubstitute
        && tableId == B_ANIM_SUBSTITUTE_FADE
        && gSprites[gBattlerSpriteIds[activeBattler]].invisible)
    {
        LoadBattleMonGfxAndAnimate(activeBattler, TRUE, gBattlerSpriteIds[activeBattler]);
        ClearBehindSubstituteBit(activeBattler);
        return TRUE;
    }

<<<<<<< HEAD
    gBattleAnimAttacker = atkBattler;
    gBattleAnimTarget = defBattler;
    gBattleSpritesDataPtr->animationData->animArg = argument;
    LaunchBattleAnimation(gBattleAnims_General, tableId, FALSE);
=======
    if (tableId == B_ANIM_ILLUSION_OFF)
        gBattleStruct->illusion[activeBattler].state = ILLUSION_OFF;

    gBattleAnimAttacker = atkBattler;
    gBattleAnimTarget = defBattler;
    gBattleSpritesDataPtr->animationData->animArg = argument;
    LaunchBattleAnimation(ANIM_TYPE_GENERAL, tableId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    taskId = CreateTask(Task_ClearBitWhenBattleTableAnimDone, 10);
    gTasks[taskId].tBattlerId = activeBattler;
    gBattleSpritesDataPtr->healthBoxesData[gTasks[taskId].tBattlerId].animFromTableActive = 1;

    return FALSE;
}

static void Task_ClearBitWhenBattleTableAnimDone(u8 taskId)
{
    gAnimScriptCallback();
    if (!gAnimScriptActive)
    {
        gBattleSpritesDataPtr->healthBoxesData[gTasks[taskId].tBattlerId].animFromTableActive = 0;
        DestroyTask(taskId);
    }
}

#undef tBattlerId

static bool8 ShouldAnimBeDoneRegardlessOfSubstitute(u8 animId)
{
    switch (animId)
    {
    case B_ANIM_SUBSTITUTE_FADE:
    case B_ANIM_RAIN_CONTINUES:
    case B_ANIM_SUN_CONTINUES:
    case B_ANIM_SANDSTORM_CONTINUES:
    case B_ANIM_HAIL_CONTINUES:
<<<<<<< HEAD
=======
    case B_ANIM_SNOW_CONTINUES:
    case B_ANIM_FOG_CONTINUES:
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    case B_ANIM_SNATCH_MOVE:
        return TRUE;
    default:
        return FALSE;
    }
}

#define tBattlerId data[0]

void InitAndLaunchSpecialAnimation(u8 activeBattler, u8 atkBattler, u8 defBattler, u8 tableId)
{
    u8 taskId;

    gBattleAnimAttacker = atkBattler;
    gBattleAnimTarget = defBattler;
<<<<<<< HEAD
    LaunchBattleAnimation(gBattleAnims_Special, tableId, FALSE);
=======
    LaunchBattleAnimation(ANIM_TYPE_SPECIAL, tableId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    taskId = CreateTask(Task_ClearBitWhenSpecialAnimDone, 10);
    gTasks[taskId].tBattlerId = activeBattler;
    gBattleSpritesDataPtr->healthBoxesData[gTasks[taskId].tBattlerId].specialAnimActive = 1;
}

static void Task_ClearBitWhenSpecialAnimDone(u8 taskId)
{
    gAnimScriptCallback();
    if (!gAnimScriptActive)
    {
        gBattleSpritesDataPtr->healthBoxesData[gTasks[taskId].tBattlerId].specialAnimActive = 0;
        DestroyTask(taskId);
    }
}

#undef tBattlerId

<<<<<<< HEAD
// Great function to include newly added moves that don't have animation yet.
bool8 IsMoveWithoutAnimation(u16 moveId, u8 animationTurn)
{
    return FALSE;
}

// Check if SE has finished or 30 calls, whichever comes first
bool8 IsBattleSEPlaying(u8 battlerId)
=======
// Check if SE has finished or 30 calls, whichever comes first
bool8 IsBattleSEPlaying(u8 battler)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    u8 zero = 0;

    if (IsSEPlaying())
    {
<<<<<<< HEAD
        gBattleSpritesDataPtr->healthBoxesData[battlerId].soundTimer++;
        if (gBattleSpritesDataPtr->healthBoxesData[gActiveBattler].soundTimer < 30)
=======
        gBattleSpritesDataPtr->healthBoxesData[battler].soundTimer++;
        if (gBattleSpritesDataPtr->healthBoxesData[battler].soundTimer < 30)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            return TRUE;

        m4aMPlayStop(&gMPlayInfo_SE1);
        m4aMPlayStop(&gMPlayInfo_SE2);
    }
    if (zero == 0)
    {
<<<<<<< HEAD
        gBattleSpritesDataPtr->healthBoxesData[battlerId].soundTimer = 0;
=======
        gBattleSpritesDataPtr->healthBoxesData[battler].soundTimer = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        return FALSE;
    }

    // Never reached
    return TRUE;
}

<<<<<<< HEAD
void BattleLoadOpponentMonSpriteGfx(struct Pokemon *mon, u8 battlerId)
{
    u32 monsPersonality, currentPersonality, otId;
    u16 species;
    u8 position;
    u16 paletteOffset;
    const void *lzPaletteData;

    monsPersonality = GetMonData(mon, MON_DATA_PERSONALITY);

    if (gBattleSpritesDataPtr->battlerData[battlerId].transformSpecies == SPECIES_NONE)
    {
        species = GetMonData(mon, MON_DATA_SPECIES);
        currentPersonality = monsPersonality;
    }
    else
    {
        species = gBattleSpritesDataPtr->battlerData[battlerId].transformSpecies;
        currentPersonality = gTransformedPersonalities[battlerId];
    }

    otId = GetMonData(mon, MON_DATA_OT_ID);
    position = GetBattlerPosition(battlerId);
    HandleLoadSpecialPokePic_DontHandleDeoxys(&gMonFrontPicTable[species],
                                              gMonSpritesGfxPtr->sprites.ptr[position],
                                              species, currentPersonality);

    paletteOffset = OBJ_PLTT_ID(battlerId);

    if (gBattleSpritesDataPtr->battlerData[battlerId].transformSpecies == SPECIES_NONE)
        lzPaletteData = GetMonFrontSpritePal(mon);
    else
        lzPaletteData = GetMonSpritePalFromSpeciesAndPersonality(species, otId, monsPersonality);

    LZDecompressWram(lzPaletteData, gDecompressionBuffer);
    LoadPalette(gDecompressionBuffer, paletteOffset, PLTT_SIZE_4BPP);
    LoadPalette(gDecompressionBuffer, BG_PLTT_ID(8) + BG_PLTT_ID(battlerId), PLTT_SIZE_4BPP);

    if (species == SPECIES_CASTFORM)
    {
        paletteOffset = OBJ_PLTT_ID(battlerId);
        LZDecompressWram(lzPaletteData, gBattleStruct->castformPalette);
        LoadPalette(gBattleStruct->castformPalette[gBattleMonForms[battlerId]], paletteOffset, PLTT_SIZE_4BPP);
    }

    // transform's pink color
    if (gBattleSpritesDataPtr->battlerData[battlerId].transformSpecies != SPECIES_NONE)
=======
void BattleLoadMonSpriteGfx(struct Pokemon *mon, u32 battler)
{
    u32 personalityValue, isShiny, species, paletteOffset, position;
    const u16 *paletteData;
    struct Pokemon *illusionMon = GetIllusionMonPtr(battler);
    if (illusionMon != NULL)
        mon = illusionMon;

    if (GetMonData(mon, MON_DATA_IS_EGG) || GetMonData(mon, MON_DATA_SPECIES) == SPECIES_NONE) // Don't load GFX of egg pokemon.
        return;

    isShiny = GetMonData(mon, MON_DATA_IS_SHINY);

    if (gBattleSpritesDataPtr->battlerData[battler].transformSpecies == SPECIES_NONE)
    {
        species = GetMonData(mon, MON_DATA_SPECIES);
        personalityValue = GetMonData(mon, MON_DATA_PERSONALITY);
    }
    else
    {
        species = gBattleSpritesDataPtr->battlerData[battler].transformSpecies;
        // If battler has Gigantamax factor, try convert gfx to G-Max version
        if (GetActiveGimmick(battler) == GIMMICK_DYNAMAX && GetMonData(mon, MON_DATA_GIGANTAMAX_FACTOR))
            gBattleSpritesDataPtr->battlerData[battler].transformSpecies = species = GetGMaxTargetSpecies(species);

        personalityValue = gTransformedPersonalities[battler];
        isShiny = gTransformedShininess[battler];
    }

    position = GetBattlerPosition(battler);
    HandleLoadSpecialPokePic(!IsOnPlayerSide(battler),
                             gMonSpritesGfxPtr->spritesGfx[position],
                             species, personalityValue);

    paletteOffset = OBJ_PLTT_ID(battler);

    if (gBattleSpritesDataPtr->battlerData[battler].transformSpecies == SPECIES_NONE)
        paletteData = GetMonFrontSpritePal(mon);
    else
        paletteData = GetMonSpritePalFromSpeciesAndPersonality(species, isShiny, personalityValue);

    LoadPalette(paletteData, paletteOffset, PLTT_SIZE_4BPP);
    LoadPalette(paletteData, BG_PLTT_ID(8) + BG_PLTT_ID(battler), PLTT_SIZE_4BPP);

    // transform's pink color
    if (gBattleSpritesDataPtr->battlerData[battler].transformSpecies != SPECIES_NONE)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    {
        BlendPalette(paletteOffset, 16, 6, RGB_WHITE);
        CpuCopy32(&gPlttBufferFaded[paletteOffset], &gPlttBufferUnfaded[paletteOffset], PLTT_SIZEOF(16));
    }
<<<<<<< HEAD
}

void BattleLoadPlayerMonSpriteGfx(struct Pokemon *mon, u8 battlerId)
{
    u32 monsPersonality, currentPersonality, otId;
    u16 species;
    u8 position;
    u16 paletteOffset;
    const void *lzPaletteData;

    monsPersonality = GetMonData(mon, MON_DATA_PERSONALITY);

    if (gBattleSpritesDataPtr->battlerData[battlerId].transformSpecies == SPECIES_NONE)
    {
        species = GetMonData(mon, MON_DATA_SPECIES);
        currentPersonality = monsPersonality;
    }
    else
    {
        species = gBattleSpritesDataPtr->battlerData[battlerId].transformSpecies;
        currentPersonality = gTransformedPersonalities[battlerId];
    }

    otId = GetMonData(mon, MON_DATA_OT_ID);
    position = GetBattlerPosition(battlerId);

    if (ShouldIgnoreDeoxysForm(1, battlerId) == TRUE || gBattleSpritesDataPtr->battlerData[battlerId].transformSpecies != SPECIES_NONE)
    {
        HandleLoadSpecialPokePic_DontHandleDeoxys(&gMonBackPicTable[species],
                                                  gMonSpritesGfxPtr->sprites.ptr[position],
                                                  species, currentPersonality);
    }
    else
    {
        HandleLoadSpecialPokePic(&gMonBackPicTable[species],
                                gMonSpritesGfxPtr->sprites.ptr[position],
                                species, currentPersonality);
    }

    paletteOffset = OBJ_PLTT_ID(battlerId);

    if (gBattleSpritesDataPtr->battlerData[battlerId].transformSpecies == SPECIES_NONE)
        lzPaletteData = GetMonFrontSpritePal(mon);
    else
        lzPaletteData = GetMonSpritePalFromSpeciesAndPersonality(species, otId, monsPersonality);

    LZDecompressWram(lzPaletteData, gDecompressionBuffer);
    LoadPalette(gDecompressionBuffer, paletteOffset, PLTT_SIZE_4BPP);
    LoadPalette(gDecompressionBuffer, BG_PLTT_ID(8) + BG_PLTT_ID(battlerId), PLTT_SIZE_4BPP);

    if (species == SPECIES_CASTFORM)
    {
        paletteOffset = OBJ_PLTT_ID(battlerId);
        LZDecompressWram(lzPaletteData, gBattleStruct->castformPalette);
        LoadPalette(gBattleStruct->castformPalette[gBattleMonForms[battlerId]], paletteOffset, PLTT_SIZE_4BPP);
    }

    // transform's pink color
    if (gBattleSpritesDataPtr->battlerData[battlerId].transformSpecies != SPECIES_NONE)
    {
        BlendPalette(paletteOffset, 16, 6, RGB_WHITE);
        CpuCopy32(&gPlttBufferFaded[paletteOffset], &gPlttBufferUnfaded[paletteOffset], PLTT_SIZEOF(16));
    }
}

static void UNUSED BattleGfxSfxDummy1(void)
{
=======

    // dynamax tint
    if (GetActiveGimmick(battler) == GIMMICK_DYNAMAX)
    {
        // Calyrex and its forms have a blue dynamax aura instead of red.
        if (GET_BASE_SPECIES_ID(species) == SPECIES_CALYREX)
            BlendPalette(paletteOffset, 16, 4, RGB(12, 0, 31));
        else
            BlendPalette(paletteOffset, 16, 4, RGB(31, 0, 12));
        CpuCopy32(gPlttBufferFaded + paletteOffset, gPlttBufferUnfaded + paletteOffset, PLTT_SIZEOF(16));
    }

    // Terastallization's tint
    if (GetActiveGimmick(battler) == GIMMICK_TERA)
    {
        BlendPalette(paletteOffset, 16, 8, GetTeraTypeRGB(GetBattlerTeraType(battler)));
        CpuCopy32(gPlttBufferFaded + paletteOffset, gPlttBufferUnfaded + paletteOffset, PLTT_SIZEOF(16));
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void BattleGfxSfxDummy2(u16 species)
{
}

<<<<<<< HEAD
void DecompressTrainerFrontPic(u16 frontPicId, u8 battlerId)
{
    u8 position = GetBattlerPosition(battlerId);
    DecompressPicFromTable_2(&gTrainerFrontPicTable[frontPicId],
                             gMonSpritesGfxPtr->sprites.ptr[position],
                             SPECIES_NONE);
    LoadCompressedSpritePalette(&gTrainerFrontPicPaletteTable[frontPicId]);
}

void DecompressTrainerBackPic(u16 backPicId, u8 battlerId)
{
    u8 position = GetBattlerPosition(battlerId);
    DecompressPicFromTable_2(&gTrainerBackPicTable[backPicId],
                             gMonSpritesGfxPtr->sprites.ptr[position],
                             SPECIES_NONE);
    LoadCompressedPalette(gTrainerBackPicPaletteTable[backPicId].data,
                          OBJ_PLTT_ID(battlerId), PLTT_SIZE_4BPP);
}

void BattleGfxSfxDummy3(u8 gender)
{
=======
void DecompressTrainerFrontPic(u16 frontPicId, u8 battler)
{
    u8 position = GetBattlerPosition(battler);
    DecompressPicFromTable(&gTrainerSprites[frontPicId].frontPic,
                           gMonSpritesGfxPtr->spritesGfx[position]);
    LoadSpritePalette(&gTrainerSprites[frontPicId].palette);
}

void DecompressTrainerBackPic(u16 backPicId, u8 battler)
{
    u8 position = GetBattlerPosition(battler);
    CopyTrainerBackspriteFramesToDest(backPicId, gMonSpritesGfxPtr->spritesGfx[position]);
    LoadPalette(gTrainerBacksprites[backPicId].palette.data,
                          OBJ_PLTT_ID(battler), PLTT_SIZE_4BPP);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void FreeTrainerFrontPicPalette(u16 frontPicId)
{
<<<<<<< HEAD
    FreeSpritePaletteByTag(gTrainerFrontPicPaletteTable[frontPicId].tag);
=======
    FreeSpritePaletteByTag(gTrainerSprites[frontPicId].palette.tag);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

// Unused.
void BattleLoadAllHealthBoxesGfxAtOnce(void)
{
    u8 numberOfBattlers = 0;
    u8 i;

    LoadSpritePalette(&sSpritePalettes_HealthBoxHealthBar[0]);
    LoadSpritePalette(&sSpritePalettes_HealthBoxHealthBar[1]);
    if (!IsDoubleBattle())
    {
        LoadCompressedSpriteSheet(&sSpriteSheet_SinglesPlayerHealthbox);
        LoadCompressedSpriteSheet(&sSpriteSheet_SinglesOpponentHealthbox);
        numberOfBattlers = 2;
    }
    else
    {
        LoadCompressedSpriteSheet(&sSpriteSheets_DoublesPlayerHealthbox[0]);
        LoadCompressedSpriteSheet(&sSpriteSheets_DoublesPlayerHealthbox[1]);
        LoadCompressedSpriteSheet(&sSpriteSheets_DoublesOpponentHealthbox[0]);
        LoadCompressedSpriteSheet(&sSpriteSheets_DoublesOpponentHealthbox[1]);
        numberOfBattlers = MAX_BATTLERS_COUNT;
    }
    for (i = 0; i < numberOfBattlers; i++)
<<<<<<< HEAD
        LoadCompressedSpriteSheet(&sSpriteSheets_HealthBar[gBattlerPositions[i]]);
=======
        LoadCompressedSpriteSheet(&sSpriteSheets_HealthBar[GetBattlerPosition(i)]);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

bool8 BattleLoadAllHealthBoxesGfx(u8 state)
{
    bool8 retVal = FALSE;

    if (state != 0)
    {
        if (state == 1)
        {
            LoadSpritePalette(&sSpritePalettes_HealthBoxHealthBar[0]);
            LoadSpritePalette(&sSpritePalettes_HealthBoxHealthBar[1]);
<<<<<<< HEAD
=======
            LoadIndicatorSpritesGfx();
            CategoryIcons_LoadSpritesGfx();
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        }
        else if (!IsDoubleBattle())
        {
            if (state == 2)
            {
                if (gBattleTypeFlags & BATTLE_TYPE_SAFARI)
                    LoadCompressedSpriteSheet(&sSpriteSheet_SafariHealthbox);
<<<<<<< HEAD
                else if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                    LoadCompressedSpriteSheet(&sSpriteSheet_SinglesPlayerHealthboxFrontier);
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                else
                    LoadCompressedSpriteSheet(&sSpriteSheet_SinglesPlayerHealthbox);
            }
            else if (state == 3)
<<<<<<< HEAD
                LoadCompressedSpriteSheet(&sSpriteSheet_SinglesOpponentHealthbox);
            else if (state == 4)
                LoadCompressedSpriteSheet(&sSpriteSheets_HealthBar[gBattlerPositions[0]]);
            else if (state == 5)
                LoadCompressedSpriteSheet(&sSpriteSheets_HealthBar[gBattlerPositions[1]]);
            else
                retVal = TRUE;
=======
            {
                LoadCompressedSpriteSheet(&sSpriteSheet_SinglesOpponentHealthbox);
            }
            else if (state == 4)
            {
                LoadCompressedSpriteSheet(&sSpriteSheets_HealthBar[GetBattlerPosition(B_BATTLER_0)]);
            }
            else if (state == 5)
            {
                LoadCompressedSpriteSheet(&sSpriteSheets_HealthBar[GetBattlerPosition(B_BATTLER_1)]);
            }
            else
            {
                retVal = TRUE;
            }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        }
        else
        {
            if (state == 2)
<<<<<<< HEAD
                LoadCompressedSpriteSheet(&sSpriteSheets_DoublesPlayerHealthbox[0]);
=======
            {
                switch (GetBattlerCoordsIndex(B_POSITION_PLAYER_LEFT))
                {
                default:
                    LoadCompressedSpriteSheet(&sSpriteSheets_DoublesPlayerHealthbox[0]);
                    break;
                case BATTLE_COORDS_SINGLES:
                    LoadCompressedSpriteSheet(&sSpriteSheet_SinglesPlayerHealthbox);
                    break;
                }
            }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            else if (state == 3)
                LoadCompressedSpriteSheet(&sSpriteSheets_DoublesPlayerHealthbox[1]);
            else if (state == 4)
                LoadCompressedSpriteSheet(&sSpriteSheets_DoublesOpponentHealthbox[0]);
            else if (state == 5)
                LoadCompressedSpriteSheet(&sSpriteSheets_DoublesOpponentHealthbox[1]);
            else if (state == 6)
<<<<<<< HEAD
                LoadCompressedSpriteSheet(&sSpriteSheets_HealthBar[gBattlerPositions[0]]);
            else if (state == 7)
                LoadCompressedSpriteSheet(&sSpriteSheets_HealthBar[gBattlerPositions[1]]);
            else if (state == 8)
                LoadCompressedSpriteSheet(&sSpriteSheets_HealthBar[gBattlerPositions[2]]);
            else if (state == 9)
                LoadCompressedSpriteSheet(&sSpriteSheets_HealthBar[gBattlerPositions[3]]);
=======
                LoadCompressedSpriteSheet(&sSpriteSheets_HealthBar[GetBattlerPosition(B_BATTLER_0)]);
            else if (state == 7)
                LoadCompressedSpriteSheet(&sSpriteSheets_HealthBar[GetBattlerPosition(B_BATTLER_1)]);
            else if (state == 8)
                LoadCompressedSpriteSheet(&sSpriteSheets_HealthBar[GetBattlerPosition(B_BATTLER_2)]);
            else if (state == 9)
                LoadCompressedSpriteSheet(&sSpriteSheets_HealthBar[GetBattlerPosition(B_BATTLER_3)]);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            else
                retVal = TRUE;
        }
    }

    return retVal;
}

void LoadBattleBarGfx(u8 unused)
{
<<<<<<< HEAD
    LZDecompressWram(gBattleInterfaceGfx_BattleBar, gMonSpritesGfxPtr->barFontGfx);
}

bool8 BattleInitAllSprites(u8 *state1, u8 *battlerId)
=======
    DecompressDataWithHeaderWram(gBattleInterfaceGfx_BattleBar, gMonSpritesGfxPtr->barFontGfx);
}

bool8 BattleInitAllSprites(u8 *state1, u8 *battler)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    bool8 retVal = FALSE;

    switch (*state1)
    {
    case 0:
        ClearSpritesBattlerHealthboxAnimData();
        (*state1)++;
        break;
    case 1:
<<<<<<< HEAD
        if (!BattleLoadAllHealthBoxesGfx(*battlerId))
        {
            (*battlerId)++;
        }
        else
        {
            *battlerId = 0;
=======
        if (!BattleLoadAllHealthBoxesGfx(*battler))
        {
            (*battler)++;
        }
        else
        {
            *battler = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            (*state1)++;
        }
        break;
    case 2:
        (*state1)++;
        break;
    case 3:
<<<<<<< HEAD
        if ((gBattleTypeFlags & BATTLE_TYPE_SAFARI) && *battlerId == 0)
            gHealthboxSpriteIds[*battlerId] = CreateSafariPlayerHealthboxSprites();
        else
            gHealthboxSpriteIds[*battlerId] = CreateBattlerHealthboxSprites(*battlerId);

        (*battlerId)++;
        if (*battlerId == gBattlersCount)
        {
            *battlerId = 0;
=======
        if ((gBattleTypeFlags & BATTLE_TYPE_SAFARI) && *battler == 0)
            gHealthboxSpriteIds[*battler] = CreateSafariPlayerHealthboxSprites();
        else
            gHealthboxSpriteIds[*battler] = CreateBattlerHealthboxSprites(*battler);

        (*battler)++;
        if (*battler == gBattlersCount)
        {
            *battler = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            (*state1)++;
        }
        break;
    case 4:
<<<<<<< HEAD
        InitBattlerHealthboxCoords(*battlerId);
        if (gBattlerPositions[*battlerId] <= B_POSITION_OPPONENT_LEFT)
            DummyBattleInterfaceFunc(gHealthboxSpriteIds[*battlerId], FALSE);
        else
            DummyBattleInterfaceFunc(gHealthboxSpriteIds[*battlerId], TRUE);

        (*battlerId)++;
        if (*battlerId == gBattlersCount)
        {
            *battlerId = 0;
=======
        InitBattlerHealthboxCoords(*battler);
        if (GetBattlerPosition(*battler) <= B_POSITION_OPPONENT_LEFT)
            DummyBattleInterfaceFunc(gHealthboxSpriteIds[*battler], FALSE);
        else
            DummyBattleInterfaceFunc(gHealthboxSpriteIds[*battler], TRUE);

        (*battler)++;
        if (*battler == gBattlersCount)
        {
            *battler = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            (*state1)++;
        }
        break;
    case 5:
<<<<<<< HEAD
        if (GetBattlerSide(*battlerId) == B_SIDE_PLAYER)
        {
            if (!(gBattleTypeFlags & BATTLE_TYPE_SAFARI))
                UpdateHealthboxAttribute(gHealthboxSpriteIds[*battlerId], &gPlayerParty[gBattlerPartyIndexes[*battlerId]], HEALTHBOX_ALL);
        }
        else
        {
            UpdateHealthboxAttribute(gHealthboxSpriteIds[*battlerId], &gEnemyParty[gBattlerPartyIndexes[*battlerId]], HEALTHBOX_ALL);
        }
        SetHealthboxSpriteInvisible(gHealthboxSpriteIds[*battlerId]);
        (*battlerId)++;
        if (*battlerId == gBattlersCount)
        {
            *battlerId = 0;
=======
        if (!IsOnPlayerSide(*battler) || !(gBattleTypeFlags & BATTLE_TYPE_SAFARI))
            UpdateHealthboxAttribute(gHealthboxSpriteIds[*battler], GetBattlerMon(*battler), HEALTHBOX_ALL);
        SetHealthboxSpriteInvisible(gHealthboxSpriteIds[*battler]);
        (*battler)++;
        if (*battler == gBattlersCount)
        {
            *battler = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            (*state1)++;
        }
        break;
    case 6:
        LoadAndCreateEnemyShadowSprites();
        BufferBattlePartyCurrentOrder();
        retVal = TRUE;
        break;
    }

    return retVal;
}

void ClearSpritesHealthboxAnimData(void)
{
    memset(gBattleSpritesDataPtr->healthBoxesData, 0, sizeof(struct BattleHealthboxInfo) * MAX_BATTLERS_COUNT);
    memset(gBattleSpritesDataPtr->animationData, 0, sizeof(struct BattleAnimationInfo));
}

static void ClearSpritesBattlerHealthboxAnimData(void)
{
    ClearSpritesHealthboxAnimData();
    memset(gBattleSpritesDataPtr->battlerData, 0, sizeof(struct BattleSpriteInfo) * MAX_BATTLERS_COUNT);
}

void CopyAllBattleSpritesInvisibilities(void)
{
    s32 i;

    for (i = 0; i < gBattlersCount; i++)
        gBattleSpritesDataPtr->battlerData[i].invisible = gSprites[gBattlerSpriteIds[i]].invisible;
}

<<<<<<< HEAD
void CopyBattleSpriteInvisibility(u8 battlerId)
{
    gBattleSpritesDataPtr->battlerData[battlerId].invisible = gSprites[gBattlerSpriteIds[battlerId]].invisible;
}

void HandleSpeciesGfxDataChange(u8 battlerAtk, u8 battlerDef, bool8 castform)
{
    u16 paletteOffset;
    u32 personalityValue;
    u32 otId;
    u8 position;
    const u32 *lzPaletteData;

    if (castform)
    {
        StartSpriteAnim(&gSprites[gBattlerSpriteIds[battlerAtk]], gBattleSpritesDataPtr->animationData->animArg);
        paletteOffset = OBJ_PLTT_ID(battlerAtk);
        LoadPalette(gBattleStruct->castformPalette[gBattleSpritesDataPtr->animationData->animArg], paletteOffset, PLTT_SIZE_4BPP);
        gBattleMonForms[battlerAtk] = gBattleSpritesDataPtr->animationData->animArg;
        if (gBattleSpritesDataPtr->battlerData[battlerAtk].transformSpecies != SPECIES_NONE)
        {
            BlendPalette(paletteOffset, 16, 6, RGB_WHITE);
            CpuCopy32(&gPlttBufferFaded[paletteOffset], &gPlttBufferUnfaded[paletteOffset], PLTT_SIZEOF(16));
        }
        gSprites[gBattlerSpriteIds[battlerAtk]].y = GetBattlerSpriteDefault_Y(battlerAtk);
    }
    else
    {
        const void *src;
        void *dst;
        u16 targetSpecies;

        if (IsContest())
        {
            position = B_POSITION_PLAYER_LEFT;
            targetSpecies = gContestResources->moveAnim->targetSpecies;
            personalityValue = gContestResources->moveAnim->personality;
            otId = gContestResources->moveAnim->otId;

            HandleLoadSpecialPokePic_DontHandleDeoxys(&gMonBackPicTable[targetSpecies],
                                                      gMonSpritesGfxPtr->sprites.ptr[position],
                                                      targetSpecies,
                                                      gContestResources->moveAnim->targetPersonality);
        }
        else
        {
            position = GetBattlerPosition(battlerAtk);

            if (GetBattlerSide(battlerDef) == B_SIDE_OPPONENT)
                targetSpecies = GetMonData(&gEnemyParty[gBattlerPartyIndexes[battlerDef]], MON_DATA_SPECIES);
            else
                targetSpecies = GetMonData(&gPlayerParty[gBattlerPartyIndexes[battlerDef]], MON_DATA_SPECIES);

            if (GetBattlerSide(battlerAtk) == B_SIDE_PLAYER)
            {
                personalityValue = GetMonData(&gPlayerParty[gBattlerPartyIndexes[battlerAtk]], MON_DATA_PERSONALITY);
                otId = GetMonData(&gPlayerParty[gBattlerPartyIndexes[battlerAtk]], MON_DATA_OT_ID);

                HandleLoadSpecialPokePic_DontHandleDeoxys(&gMonBackPicTable[targetSpecies],
                                                          gMonSpritesGfxPtr->sprites.ptr[position],
                                                          targetSpecies,
                                                          gTransformedPersonalities[battlerAtk]);
            }
            else
            {
                personalityValue = GetMonData(&gEnemyParty[gBattlerPartyIndexes[battlerAtk]], MON_DATA_PERSONALITY);
                otId = GetMonData(&gEnemyParty[gBattlerPartyIndexes[battlerAtk]], MON_DATA_OT_ID);

                HandleLoadSpecialPokePic_DontHandleDeoxys(&gMonFrontPicTable[targetSpecies],
                                                          gMonSpritesGfxPtr->sprites.ptr[position],
                                                          targetSpecies,
                                                          gTransformedPersonalities[battlerAtk]);
            }
        }

        src = gMonSpritesGfxPtr->sprites.ptr[position];
        dst = (void *)(OBJ_VRAM0 + gSprites[gBattlerSpriteIds[battlerAtk]].oam.tileNum * 32);
        DmaCopy32(3, src, dst, MON_PIC_SIZE);
        paletteOffset = OBJ_PLTT_ID(battlerAtk);
        lzPaletteData = GetMonSpritePalFromSpeciesAndPersonality(targetSpecies, otId, personalityValue);
        LZDecompressWram(lzPaletteData, gDecompressionBuffer);
        LoadPalette(gDecompressionBuffer, paletteOffset, PLTT_SIZE_4BPP);

        if (targetSpecies == SPECIES_CASTFORM)
        {
            gSprites[gBattlerSpriteIds[battlerAtk]].anims = gMonFrontAnimsPtrTable[targetSpecies];
            LZDecompressWram(lzPaletteData, gBattleStruct->castformPalette);
            LoadPalette(gBattleStruct->castformPalette[gBattleMonForms[battlerDef]], paletteOffset, PLTT_SIZE_4BPP);
        }

        BlendPalette(paletteOffset, 16, 6, RGB_WHITE);
        CpuCopy32(&gPlttBufferFaded[paletteOffset], &gPlttBufferUnfaded[paletteOffset], PLTT_SIZEOF(16));

        if (!IsContest())
        {
            gBattleSpritesDataPtr->battlerData[battlerAtk].transformSpecies = targetSpecies;
            gBattleMonForms[battlerAtk] = gBattleMonForms[battlerDef];
        }

        gSprites[gBattlerSpriteIds[battlerAtk]].y = GetBattlerSpriteDefault_Y(battlerAtk);
        StartSpriteAnim(&gSprites[gBattlerSpriteIds[battlerAtk]], gBattleMonForms[battlerAtk]);
    }
}

void BattleLoadSubstituteOrMonSpriteGfx(u8 battlerId, bool8 loadMonSprite)
=======
void CopyBattleSpriteInvisibility(u8 battler)
{
    gBattleSpritesDataPtr->battlerData[battler].invisible = gSprites[gBattlerSpriteIds[battler]].invisible;
}

void HandleSpeciesGfxDataChange(u8 battlerAtk, u8 battlerDef, u8 changeType)
{
    u32 personalityValue, position, paletteOffset, targetSpecies;
    bool32 isShiny;
    const void *src;
    const u16 *paletteData;
    struct Pokemon *monAtk = GetBattlerMon(battlerAtk);
    struct Pokemon *monDef = GetBattlerMon(battlerDef);
    void *dst;

    if (IsContest())
    {
        position = B_POSITION_PLAYER_LEFT;
        targetSpecies = gContestResources->moveAnim->targetSpecies;
        personalityValue = gContestResources->moveAnim->personality;
        isShiny = gContestResources->moveAnim->isShiny;

        HandleLoadSpecialPokePic(FALSE,
                                 gMonSpritesGfxPtr->spritesGfx[position],
                                 targetSpecies,
                                 gContestResources->moveAnim->targetPersonality);
    }
    else
    {
        position = GetBattlerPosition(battlerAtk);
        if (gBattleSpritesDataPtr->battlerData[battlerAtk].transformSpecies == SPECIES_NONE)
        {
            // Get base form if its currently Gigantamax
            if (IsGigantamaxed(battlerDef))
                targetSpecies = GetBattlerPartyState(battlerDef)->changedSpecies;
            else if (gBattleStruct->illusion[battlerDef].state == ILLUSION_ON)
                targetSpecies = GetIllusionMonSpecies(battlerDef);
            else
                targetSpecies = GetMonData(monDef, MON_DATA_SPECIES);
            gBattleSpritesDataPtr->battlerData[battlerAtk].transformSpecies = targetSpecies;
        }
        else
        {
            targetSpecies = gBattleSpritesDataPtr->battlerData[battlerAtk].transformSpecies;
        }

        if (changeType == SPECIES_GFX_CHANGE_TRANSFORM)
        {
            personalityValue = gDisableStructs[battlerAtk].transformedMonPersonality;
            isShiny = gDisableStructs[battlerAtk].transformedMonShininess;
        }
        else
        {
            personalityValue = GetMonData(monAtk, MON_DATA_PERSONALITY);
            isShiny = GetMonData(monAtk, MON_DATA_IS_SHINY);
        }
        HandleLoadSpecialPokePic(!IsOnPlayerSide(battlerAtk),
                                 gMonSpritesGfxPtr->spritesGfx[position],
                                 targetSpecies,
                                 personalityValue);
    }
    src = gMonSpritesGfxPtr->spritesGfx[position];
    dst = (void *)(OBJ_VRAM0 + gSprites[gBattlerSpriteIds[battlerAtk]].oam.tileNum * 32);
    DmaCopy32(3, src, dst, MON_PIC_SIZE);
    paletteOffset = OBJ_PLTT_ID(battlerAtk);
    paletteData = GetMonSpritePalFromSpeciesAndPersonality(targetSpecies, isShiny, personalityValue);
    LoadPalette(paletteData, paletteOffset, PLTT_SIZE_4BPP);

    if (changeType == SPECIES_GFX_CHANGE_TRANSFORM)
    {
        BlendPalette(paletteOffset, 16, 6, RGB_WHITE);
        CpuCopy32(&gPlttBufferFaded[paletteOffset], &gPlttBufferUnfaded[paletteOffset], PLTT_SIZEOF(16));
    }

    // dynamax tint
    if (GetActiveGimmick(battlerAtk) == GIMMICK_DYNAMAX)
    {
        // Calyrex and its forms have a blue dynamax aura instead of red.
        if (GET_BASE_SPECIES_ID(targetSpecies) == SPECIES_CALYREX)
            BlendPalette(paletteOffset, 16, 4, RGB(12, 0, 31));
        else
            BlendPalette(paletteOffset, 16, 4, RGB(31, 0, 12));
        CpuCopy32(gPlttBufferFaded + paletteOffset, gPlttBufferUnfaded + paletteOffset, PLTT_SIZEOF(16));
    }

    // Terastallization's tint
    if (changeType != SPECIES_GFX_CHANGE_ILLUSION_OFF && GetActiveGimmick(battlerAtk) == GIMMICK_TERA)
    {
        BlendPalette(paletteOffset, 16, 8, GetTeraTypeRGB(GetBattlerTeraType(battlerAtk)));
        CpuCopy32(gPlttBufferFaded + paletteOffset, gPlttBufferUnfaded + paletteOffset, PLTT_SIZEOF(16));
    }

    gSprites[gBattlerSpriteIds[battlerAtk]].y = GetBattlerSpriteDefault_Y(battlerAtk);
    StartSpriteAnim(&gSprites[gBattlerSpriteIds[battlerAtk]], 0);
}

void BattleLoadSubstituteOrMonSpriteGfx(u8 battler, bool8 loadMonSprite)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    s32 i, position, palOffset;

    if (!loadMonSprite)
    {
        if (IsContest())
            position = B_POSITION_PLAYER_LEFT;
        else
<<<<<<< HEAD
            position = GetBattlerPosition(battlerId);

        if (IsContest())
            LZDecompressVram(gSubstituteDollBackGfx, gMonSpritesGfxPtr->sprites.ptr[position]);
        else if (GetBattlerSide(battlerId) != B_SIDE_PLAYER)
            LZDecompressVram(gSubstituteDollFrontGfx, gMonSpritesGfxPtr->sprites.ptr[position]);
        else
            LZDecompressVram(gSubstituteDollBackGfx, gMonSpritesGfxPtr->sprites.ptr[position]);

        for (i = 1; i < 4; i++)
        {
            Dma3CopyLarge32_(gMonSpritesGfxPtr->sprites.ptr[position], &gMonSpritesGfxPtr->sprites.byte[position][MON_PIC_SIZE * i], MON_PIC_SIZE);
        }

        palOffset = OBJ_PLTT_ID(battlerId);
        LoadCompressedPalette(gSubstituteDollPal, palOffset, PLTT_SIZE_4BPP);
=======
            position = GetBattlerPosition(battler);

        if (IsContest())
            DecompressDataWithHeaderVram(gBattleAnimSpriteGfx_SubstituteBack, gMonSpritesGfxPtr->spritesGfx[position]);
        else if (!IsOnPlayerSide(battler))
            DecompressDataWithHeaderVram(gBattleAnimSpriteGfx_Substitute, gMonSpritesGfxPtr->spritesGfx[position]);
        else
            DecompressDataWithHeaderVram(gBattleAnimSpriteGfx_SubstituteBack, gMonSpritesGfxPtr->spritesGfx[position]);

        for (i = 1; i < 4; i++)
        {
            Dma3CopyLarge32_(gMonSpritesGfxPtr->spritesGfx[position], &gMonSpritesGfxPtr->spritesGfx[position][MON_PIC_SIZE * i], MON_PIC_SIZE);
        }

        palOffset = OBJ_PLTT_ID(battler);
        LoadPalette(gBattleAnimSpritePal_Substitute, palOffset, PLTT_SIZE_4BPP);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }
    else
    {
        if (!IsContest())
<<<<<<< HEAD
        {
            if (GetBattlerSide(battlerId) != B_SIDE_PLAYER)
                BattleLoadOpponentMonSpriteGfx(&gEnemyParty[gBattlerPartyIndexes[battlerId]], battlerId);
            else
                BattleLoadPlayerMonSpriteGfx(&gPlayerParty[gBattlerPartyIndexes[battlerId]], battlerId);
        }
    }
}

void LoadBattleMonGfxAndAnimate(u8 battlerId, bool8 loadMonSprite, u8 spriteId)
{
    BattleLoadSubstituteOrMonSpriteGfx(battlerId, loadMonSprite);
    StartSpriteAnim(&gSprites[spriteId], gBattleMonForms[battlerId]);

    if (!loadMonSprite)
        gSprites[spriteId].y = GetSubstituteSpriteDefault_Y(battlerId);
    else
        gSprites[spriteId].y = GetBattlerSpriteDefault_Y(battlerId);
}

void TrySetBehindSubstituteSpriteBit(u8 battlerId, u16 move)
{
    if (move == MOVE_SUBSTITUTE)
        gBattleSpritesDataPtr->battlerData[battlerId].behindSubstitute = 1;
}

void ClearBehindSubstituteBit(u8 battlerId)
{
    gBattleSpritesDataPtr->battlerData[battlerId].behindSubstitute = 0;
}

void HandleLowHpMusicChange(struct Pokemon *mon, u8 battlerId)
=======
            BattleLoadMonSpriteGfx(GetBattlerMon(battler), battler);
    }
}

void LoadBattleMonGfxAndAnimate(u8 battler, bool8 loadMonSprite, u8 spriteId)
{
    BattleLoadSubstituteOrMonSpriteGfx(battler, loadMonSprite);
    StartSpriteAnim(&gSprites[spriteId], 0);

    if (!loadMonSprite)
        gSprites[spriteId].y = GetSubstituteSpriteDefault_Y(battler);
    else
        gSprites[spriteId].y = GetBattlerSpriteDefault_Y(battler);
}

void TrySetBehindSubstituteSpriteBit(u8 battler, u16 move)
{
    enum BattleMoveEffects effect = GetMoveEffect(move);
    if (effect == EFFECT_SUBSTITUTE || effect == EFFECT_SHED_TAIL)
        gBattleSpritesDataPtr->battlerData[battler].behindSubstitute = 1;
}

void ClearBehindSubstituteBit(u8 battler)
{
    gBattleSpritesDataPtr->battlerData[battler].behindSubstitute = 0;
}

void HandleLowHpMusicChange(struct Pokemon *mon, u8 battler)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    u16 hp = GetMonData(mon, MON_DATA_HP);
    u16 maxHP = GetMonData(mon, MON_DATA_MAX_HP);

    if (GetHPBarLevel(hp, maxHP) == HP_BAR_RED)
    {
<<<<<<< HEAD
        if (!gBattleSpritesDataPtr->battlerData[battlerId].lowHpSong)
        {
            if (!gBattleSpritesDataPtr->battlerData[BATTLE_PARTNER(battlerId)].lowHpSong)
                PlaySE(SE_LOW_HEALTH);
            gBattleSpritesDataPtr->battlerData[battlerId].lowHpSong = 1;
=======
        if (!gBattleSpritesDataPtr->battlerData[battler].lowHpSong)
        {
            if (!gBattleSpritesDataPtr->battlerData[BATTLE_PARTNER(battler)].lowHpSong)
                PlaySE(SE_LOW_HEALTH);
            gBattleSpritesDataPtr->battlerData[battler].lowHpSong = 1;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        }
    }
    else
    {
<<<<<<< HEAD
        gBattleSpritesDataPtr->battlerData[battlerId].lowHpSong = 0;
=======
        gBattleSpritesDataPtr->battlerData[battler].lowHpSong = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        if (!IsDoubleBattle())
        {
            m4aSongNumStop(SE_LOW_HEALTH);
            return;
        }
<<<<<<< HEAD
        if (IsDoubleBattle() && !gBattleSpritesDataPtr->battlerData[BATTLE_PARTNER(battlerId)].lowHpSong)
=======
        if (IsDoubleBattle() && !gBattleSpritesDataPtr->battlerData[BATTLE_PARTNER(battler)].lowHpSong)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        {
            m4aSongNumStop(SE_LOW_HEALTH);
            return;
        }
    }
}

void BattleStopLowHpSound(void)
{
    u8 playerBattler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);

    gBattleSpritesDataPtr->battlerData[playerBattler].lowHpSong = 0;
    if (IsDoubleBattle())
        gBattleSpritesDataPtr->battlerData[BATTLE_PARTNER(playerBattler)].lowHpSong = 0;

    m4aSongNumStop(SE_LOW_HEALTH);
}

u8 GetMonHPBarLevel(struct Pokemon *mon)
{
    u16 hp = GetMonData(mon, MON_DATA_HP);
    u16 maxHP = GetMonData(mon, MON_DATA_MAX_HP);

    return GetHPBarLevel(hp, maxHP);
}

void HandleBattleLowHpMusicChange(void)
{
    if (gMain.inBattle)
    {
        u8 playerBattler1 = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
        u8 playerBattler2 = GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT);
        u8 battler1PartyId = GetPartyIdFromBattlePartyId(gBattlerPartyIndexes[playerBattler1]);
        u8 battler2PartyId = GetPartyIdFromBattlePartyId(gBattlerPartyIndexes[playerBattler2]);

        if (GetMonData(&gPlayerParty[battler1PartyId], MON_DATA_HP) != 0)
            HandleLowHpMusicChange(&gPlayerParty[battler1PartyId], playerBattler1);
        if (IsDoubleBattle() && GetMonData(&gPlayerParty[battler2PartyId], MON_DATA_HP) != 0)
            HandleLowHpMusicChange(&gPlayerParty[battler2PartyId], playerBattler2);
    }
}

void SetBattlerSpriteAffineMode(u8 affineMode)
{
    s32 i;

    for (i = 0; i < gBattlersCount; i++)
    {
        if (IsBattlerSpritePresent(i))
        {
            gSprites[gBattlerSpriteIds[i]].oam.affineMode = affineMode;
            if (affineMode == ST_OAM_AFFINE_OFF)
            {
                gBattleSpritesDataPtr->healthBoxesData[i].matrixNum = gSprites[gBattlerSpriteIds[i]].oam.matrixNum;
                gSprites[gBattlerSpriteIds[i]].oam.matrixNum = 0;
            }
            else
            {
                gSprites[gBattlerSpriteIds[i]].oam.matrixNum = gBattleSpritesDataPtr->healthBoxesData[i].matrixNum;
            }
        }
    }
}

<<<<<<< HEAD
#define tBattlerId data[0]

void LoadAndCreateEnemyShadowSprites(void)
{
    u8 battlerId;

    LoadCompressedSpriteSheet(&gSpriteSheet_EnemyShadow);

    battlerId = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
    gBattleSpritesDataPtr->healthBoxesData[battlerId].shadowSpriteId = CreateSprite(&gSpriteTemplate_EnemyShadow,
                                                                                    GetBattlerSpriteCoord(battlerId, BATTLER_COORD_X),
                                                                                    GetBattlerSpriteCoord(battlerId, BATTLER_COORD_Y) + 29,
                                                                                    0xC8);
    gSprites[gBattleSpritesDataPtr->healthBoxesData[battlerId].shadowSpriteId].data[0] = battlerId;

    if (IsDoubleBattle())
    {
        battlerId = GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT);
        gBattleSpritesDataPtr->healthBoxesData[battlerId].shadowSpriteId = CreateSprite(&gSpriteTemplate_EnemyShadow,
                                                                                        GetBattlerSpriteCoord(battlerId, BATTLER_COORD_X),
                                                                                        GetBattlerSpriteCoord(battlerId, BATTLER_COORD_Y) + 29,
                                                                                        0xC8);
        gSprites[gBattleSpritesDataPtr->healthBoxesData[battlerId].shadowSpriteId].data[0] = battlerId;
=======
#define tBattlerId   data[0]
#define tSpriteSide  data[1]
#define tBaseTileNum data[2]

#define SPRITE_SIDE_LEFT    0
#define SPRITE_SIDE_RIGHT   1

void CreateEnemyShadowSprite(u32 battler)
{
    if (B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE)
    {
        u16 species = GetBattlerVisualSpecies(battler);
        u8 size = gSpeciesInfo[species].enemyShadowSize;

        gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdPrimary = CreateSprite(&gSpriteTemplate_EnemyShadow,
                                                                                             GetBattlerSpriteCoord(battler, BATTLER_COORD_X),
                                                                                             GetBattlerSpriteCoord(battler, BATTLER_COORD_Y),
                                                                                             0xC8);
        if (gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdPrimary < MAX_SPRITES)
        {
            struct Sprite *sprite = &gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdPrimary];
            sprite->tBattlerId = battler;
            sprite->tSpriteSide = SPRITE_SIDE_LEFT;
            sprite->tBaseTileNum = sprite->oam.tileNum;
            sprite->oam.tileNum = sprite->tBaseTileNum + (8 * size);
            sprite->invisible = TRUE;
        }

        gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdSecondary = CreateSprite(&gSpriteTemplate_EnemyShadow,
                                                                                               GetBattlerSpriteCoord(battler, BATTLER_COORD_X),
                                                                                               GetBattlerSpriteCoord(battler, BATTLER_COORD_Y),
                                                                                               0xC8);
        if (gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdSecondary < MAX_SPRITES)
        {
            struct Sprite *sprite = &gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdSecondary];
            sprite->tBattlerId = battler;
            sprite->tSpriteSide = SPRITE_SIDE_RIGHT;
            sprite->tBaseTileNum = sprite->oam.tileNum + 4;
            sprite->oam.tileNum = sprite->tBaseTileNum + (8 * size);
            sprite->invisible = TRUE;
        }
    }
    else
    {
        gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdPrimary = CreateSprite(&gSpriteTemplate_EnemyShadow,
                                                                                             GetBattlerSpriteCoord(battler, BATTLER_COORD_X),
                                                                                             GetBattlerSpriteCoord(battler, BATTLER_COORD_Y) + 29,
                                                                                             0xC8);
        if (gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdPrimary < MAX_SPRITES)
        {
            struct Sprite *sprite = &gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdPrimary];
            sprite->tBattlerId = battler;
            sprite->tBaseTileNum = sprite->oam.tileNum;
            sprite->invisible = TRUE;
        }
    }
}

void LoadAndCreateEnemyShadowSprites(void)
{
    u8 battler;
    u32 i;

    if (B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE)
    {
        LoadCompressedSpriteSheet(&gSpriteSheet_EnemyShadowsSized);

        // initialize shadow sprite ids
        for (i = 0; i < gBattlersCount; i++)
        {
            gBattleSpritesDataPtr->healthBoxesData[i].shadowSpriteIdPrimary = MAX_SPRITES;
            gBattleSpritesDataPtr->healthBoxesData[i].shadowSpriteIdSecondary = MAX_SPRITES;
        }
    }
    else
    {
        LoadCompressedSpriteSheet(&gSpriteSheet_EnemyShadow);

        // initialize shadow sprite ids
        for (i = 0; i < gBattlersCount; i++)
        {
            gBattleSpritesDataPtr->healthBoxesData[i].shadowSpriteIdPrimary = MAX_SPRITES;
        }
    }

    battler = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
    CreateEnemyShadowSprite(battler);

    if (IsDoubleBattle())
    {
        battler = GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT);
        CreateEnemyShadowSprite(battler);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }
}

void SpriteCB_EnemyShadow(struct Sprite *shadowSprite)
{
    bool8 invisible = FALSE;
<<<<<<< HEAD
    u8 battlerId = shadowSprite->tBattlerId;
    struct Sprite *battlerSprite = &gSprites[gBattlerSpriteIds[battlerId]];

    if (!battlerSprite->inUse || !IsBattlerSpritePresent(battlerId))
=======
    u8 battler = shadowSprite->tBattlerId;
    struct Sprite *battlerSprite = &gSprites[gBattlerSpriteIds[battler]];
    u16 transformSpecies = SanitizeSpeciesId(gBattleSpritesDataPtr->battlerData[battler].transformSpecies);

    if (!battlerSprite->inUse || !IsBattlerSpritePresent(battler))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    {
        shadowSprite->callback = SpriteCB_SetInvisible;
        return;
    }
<<<<<<< HEAD
    if (gAnimScriptActive || battlerSprite->invisible)
        invisible = TRUE;
    else if (gBattleSpritesDataPtr->battlerData[battlerId].transformSpecies != SPECIES_NONE
             && gEnemyMonElevation[gBattleSpritesDataPtr->battlerData[battlerId].transformSpecies] == 0)
        invisible = TRUE;

    if (gBattleSpritesDataPtr->battlerData[battlerId].behindSubstitute)
        invisible = TRUE;

    shadowSprite->x = battlerSprite->x;
    shadowSprite->x2 = battlerSprite->x2;
    shadowSprite->invisible = invisible;
=======

    s8 xOffset = 0, UNUSED yOffset = 0, size = SHADOW_SIZE_S;
    if (gAnimScriptActive || battlerSprite->invisible)
    {
        invisible = TRUE;
    }
    else if (transformSpecies != SPECIES_NONE)
    {
        xOffset = gSpeciesInfo[transformSpecies].enemyShadowXOffset + (shadowSprite->tSpriteSide == SPRITE_SIDE_LEFT ? -16 : 16);
        yOffset = gSpeciesInfo[transformSpecies].enemyShadowYOffset + 16;
        size = gSpeciesInfo[transformSpecies].enemyShadowSize;

        invisible = (B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE)
                  ? gSpeciesInfo[transformSpecies].suppressEnemyShadow
                  : gSpeciesInfo[transformSpecies].enemyMonElevation == 0;
    }
    else if (B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE)
    {
        u16 species = GetBattlerVisualSpecies(battler);
        xOffset = gSpeciesInfo[species].enemyShadowXOffset + (shadowSprite->tSpriteSide == SPRITE_SIDE_LEFT ? -16 : 16);
        yOffset = gSpeciesInfo[species].enemyShadowYOffset + 16;
        size = gSpeciesInfo[species].enemyShadowSize;
    }

    if (gBattleSpritesDataPtr->battlerData[battler].behindSubstitute)
        invisible = TRUE;

    shadowSprite->x = battlerSprite->x + xOffset;
    shadowSprite->x2 = battlerSprite->x2;
    shadowSprite->invisible = invisible;

    if (B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE)
    {
        shadowSprite->oam.tileNum = shadowSprite->tBaseTileNum + (8 * size);
        shadowSprite->y = battlerSprite->y + yOffset;
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

#undef tBattlerId

void SpriteCB_SetInvisible(struct Sprite *sprite)
{
    sprite->invisible = TRUE;
}

<<<<<<< HEAD
void SetBattlerShadowSpriteCallback(u8 battlerId, u16 species)
{
    // The player's shadow is never seen.
    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER)
        return;
    // If a Pokémon was caught, a shadow shouldn't be casted.
    if (gBattleScripting.monCaught)
        return;

    if (gBattleSpritesDataPtr->battlerData[battlerId].transformSpecies != SPECIES_NONE)
        species = gBattleSpritesDataPtr->battlerData[battlerId].transformSpecies;

    if (gEnemyMonElevation[species] != 0)
        gSprites[gBattleSpritesDataPtr->healthBoxesData[battlerId].shadowSpriteId].callback = SpriteCB_EnemyShadow;
    else
        gSprites[gBattleSpritesDataPtr->healthBoxesData[battlerId].shadowSpriteId].callback = SpriteCB_SetInvisible;
}

void HideBattlerShadowSprite(u8 battlerId)
{
    gSprites[gBattleSpritesDataPtr->healthBoxesData[battlerId].shadowSpriteId].callback = SpriteCB_SetInvisible;
=======
void SetBattlerShadowSpriteCallback(u8 battler, u16 species)
{
    if (B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE)
    {
        if (IsOnPlayerSide(battler) || gBattleScripting.monCaught)
        {
            gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdPrimary].callback = SpriteCB_SetInvisible;
            gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdSecondary].callback = SpriteCB_SetInvisible;
            return;
        }

        if (gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdPrimary >= MAX_SPRITES
            || gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdSecondary >= MAX_SPRITES)
            return;

        if (gBattleSpritesDataPtr->battlerData[battler].transformSpecies != SPECIES_NONE)
            species = gBattleSpritesDataPtr->battlerData[battler].transformSpecies;

        if (gSpeciesInfo[SanitizeSpeciesId(species)].suppressEnemyShadow == FALSE)
        {
            gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdPrimary].callback = SpriteCB_EnemyShadow;
            gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdSecondary].callback = SpriteCB_EnemyShadow;
        }
        else
        {
            gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdPrimary].callback = SpriteCB_SetInvisible;
            gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdSecondary].callback = SpriteCB_SetInvisible;
        }
    }
    else
    {
        if (IsOnPlayerSide(battler) || gBattleScripting.monCaught)
        {
            gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdPrimary].callback = SpriteCB_SetInvisible;
            return;
        }

        if (gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdPrimary >= MAX_SPRITES)
            return;

        if (gBattleSpritesDataPtr->battlerData[battler].transformSpecies != SPECIES_NONE)
            species = gBattleSpritesDataPtr->battlerData[battler].transformSpecies;

        if (gSpeciesInfo[SanitizeSpeciesId(species)].enemyMonElevation != 0)
            gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdPrimary].callback = SpriteCB_EnemyShadow;
        else
            gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdPrimary].callback = SpriteCB_SetInvisible;
    }
}

void HideBattlerShadowSprite(u8 battler)
{
    gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdPrimary].callback = SpriteCB_SetInvisible;
    if (B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE)
        gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].shadowSpriteIdSecondary].callback = SpriteCB_SetInvisible;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

// Color the background tiles surrounding the action selection and move windows
void FillAroundBattleWindows(void)
{
    u16 *vramPtr = (u16 *)(VRAM + 0x240);
    s32 i;
    s32 j;

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 16; j++)
        {
            if (!(*vramPtr & 0xF000))
                *vramPtr |= 0xF000;
            if (!(*vramPtr & 0x0F00))
                *vramPtr |= 0x0F00;
            if (!(*vramPtr & 0x00F0))
                *vramPtr |= 0x00F0;
            if (!(*vramPtr & 0x000F))
                *vramPtr |= 0x000F;
            vramPtr++;
        }
    }
}

<<<<<<< HEAD
void ClearTemporarySpeciesSpriteData(u8 battlerId, bool8 dontClearSubstitute)
{
    gBattleSpritesDataPtr->battlerData[battlerId].transformSpecies = SPECIES_NONE;
    gBattleMonForms[battlerId] = 0;
    if (!dontClearSubstitute)
        ClearBehindSubstituteBit(battlerId);
=======
void ClearTemporarySpeciesSpriteData(u32 battler, bool32 dontClearTransform, bool32 dontClearSubstitute)
{
    if (!dontClearTransform)
        gBattleSpritesDataPtr->battlerData[battler].transformSpecies = SPECIES_NONE;
    if (!dontClearSubstitute)
        ClearBehindSubstituteBit(battler);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void AllocateMonSpritesGfx(void)
{
    u8 i = 0, j;

    gMonSpritesGfxPtr = NULL;
    gMonSpritesGfxPtr = AllocZeroed(sizeof(*gMonSpritesGfxPtr));
    gMonSpritesGfxPtr->firstDecompressed = AllocZeroed(MON_PIC_SIZE * 4 * MAX_BATTLERS_COUNT);

    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
    {
<<<<<<< HEAD
        gMonSpritesGfxPtr->sprites.ptr[i] = gMonSpritesGfxPtr->firstDecompressed + (i * MON_PIC_SIZE * 4);
        *(gMonSpritesGfxPtr->templates + i) = gBattlerSpriteTemplates[i];

        for (j = 0; j < 4; j++)
        {
            gMonSpritesGfxPtr->frameImages[i][j].data = gMonSpritesGfxPtr->sprites.ptr[i] + (j * MON_PIC_SIZE);
            gMonSpritesGfxPtr->frameImages[i][j].size = MON_PIC_SIZE;
=======
        gMonSpritesGfxPtr->spritesGfx[i] = gMonSpritesGfxPtr->firstDecompressed + (i * MON_PIC_SIZE * 4);
        gMonSpritesGfxPtr->templates[i] = gBattlerSpriteTemplates[i];

        for (j = 0; j < MAX_MON_PIC_FRAMES; j++)
        {
            if (gMonSpritesGfxPtr->spritesGfx[i])
            {
                gMonSpritesGfxPtr->frameImages[i][j].data = gMonSpritesGfxPtr->spritesGfx[i] + (j * MON_PIC_SIZE);
                gMonSpritesGfxPtr->frameImages[i][j].size = MON_PIC_SIZE;
            }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        }

        gMonSpritesGfxPtr->templates[i].images = gMonSpritesGfxPtr->frameImages[i];
    }

    gMonSpritesGfxPtr->barFontGfx = AllocZeroed(0x1000);
}

void FreeMonSpritesGfx(void)
{
    if (gMonSpritesGfxPtr == NULL)
        return;

    TRY_FREE_AND_SET_NULL(gMonSpritesGfxPtr->buffer);
<<<<<<< HEAD
    TRY_FREE_AND_SET_NULL(gMonSpritesGfxPtr->unusedPtr);
    FREE_AND_SET_NULL(gMonSpritesGfxPtr->barFontGfx);
    FREE_AND_SET_NULL(gMonSpritesGfxPtr->firstDecompressed);
    gMonSpritesGfxPtr->sprites.ptr[B_POSITION_PLAYER_LEFT] = NULL;
    gMonSpritesGfxPtr->sprites.ptr[B_POSITION_OPPONENT_LEFT] = NULL;
    gMonSpritesGfxPtr->sprites.ptr[B_POSITION_PLAYER_RIGHT] = NULL;
    gMonSpritesGfxPtr->sprites.ptr[B_POSITION_OPPONENT_RIGHT] = NULL;
=======
    FREE_AND_SET_NULL(gMonSpritesGfxPtr->barFontGfx);
    FREE_AND_SET_NULL(gMonSpritesGfxPtr->firstDecompressed);
    gMonSpritesGfxPtr->spritesGfx[B_POSITION_PLAYER_LEFT] = NULL;
    gMonSpritesGfxPtr->spritesGfx[B_POSITION_OPPONENT_LEFT] = NULL;
    gMonSpritesGfxPtr->spritesGfx[B_POSITION_PLAYER_RIGHT] = NULL;
    gMonSpritesGfxPtr->spritesGfx[B_POSITION_OPPONENT_RIGHT] = NULL;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    FREE_AND_SET_NULL(gMonSpritesGfxPtr);
}

bool32 ShouldPlayNormalMonCry(struct Pokemon *mon)
{
    s16 hp, maxHP;
    s32 barLevel;

    if (GetMonData(mon, MON_DATA_STATUS) & (STATUS1_ANY | STATUS1_TOXIC_COUNTER))
        return FALSE;

    hp = GetMonData(mon, MON_DATA_HP);
    maxHP = GetMonData(mon, MON_DATA_MAX_HP);

    barLevel = GetHPBarLevel(hp, maxHP);
    if (barLevel <= HP_BAR_YELLOW)
        return FALSE;

    return TRUE;
}
