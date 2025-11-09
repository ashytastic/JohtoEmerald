#include "global.h"
#include "battle.h"
#include "battle_anim.h"
<<<<<<< HEAD
#include "battle_ai_script_commands.h"
#include "battle_arena.h"
#include "battle_controllers.h"
=======
#include "battle_ai_main.h"
#include "battle_ai_util.h"
#include "battle_arena.h"
#include "battle_controllers.h"
#include "battle_end_turn.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "battle_interface.h"
#include "battle_main.h"
#include "battle_message.h"
#include "battle_pyramid.h"
#include "battle_scripts.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "battle_util.h"
<<<<<<< HEAD
=======
#include "battle_z_move.h"
#include "battle_gimmick.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "berry.h"
#include "bg.h"
#include "data.h"
#include "debug.h"
#include "decompress.h"
<<<<<<< HEAD
#include "dma3.h"
#include "event_data.h"
#include "evolution_scene.h"
=======
#include "dexnav.h"
#include "dma3.h"
#include "event_data.h"
#include "evolution_scene.h"
#include "field_weather.h"
#include "follower_npc.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "graphics.h"
#include "gpu_regs.h"
#include "international_string_util.h"
#include "item.h"
#include "link.h"
#include "link_rfu.h"
#include "load_save.h"
#include "main.h"
#include "malloc.h"
#include "m4a.h"
#include "palette.h"
#include "party_menu.h"
#include "pokeball.h"
#include "pokedex.h"
#include "pokemon.h"
#include "random.h"
#include "recorded_battle.h"
#include "roamer.h"
#include "safari_zone.h"
#include "scanline_effect.h"
<<<<<<< HEAD
=======
#include "script.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
<<<<<<< HEAD
#include "text.h"
#include "trig.h"
#include "tv.h"
#include "util.h"
#include "window.h"
#include "constants/abilities.h"
#include "constants/battle_move_effects.h"
#include "constants/battle_string_ids.h"
=======
#include "test_runner.h"
#include "text.h"
#include "trainer_pools.h"
#include "trig.h"
#include "tv.h"
#include "util.h"
#include "wild_encounter.h"
#include "window.h"
#include "constants/abilities.h"
#include "constants/battle_ai.h"
#include "constants/battle_move_effects.h"
#include "constants/battle_string_ids.h"
#include "constants/battle_partner.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "constants/hold_effects.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/party_menu.h"
#include "constants/rgb.h"
#include "constants/songs.h"
<<<<<<< HEAD
#include "constants/trainers.h"
#include "cable_club.h"
#include "wild_encounter.h"
#include "tx_randomizer_and_challenges.h"
#include "overworld.h"
=======
#include "constants/trainer_slide.h"
#include "constants/trainers.h"
#include "constants/weather.h"
#include "cable_club.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

extern const struct BgTemplate gBattleBgTemplates[];
extern const struct WindowTemplate *const gBattleWindowTemplates[];

static void CB2_InitBattleInternal(void);
static void CB2_PreInitMultiBattle(void);
static void CB2_PreInitIngamePlayerPartnerBattle(void);
static void CB2_HandleStartMultiPartnerBattle(void);
static void CB2_HandleStartMultiBattle(void);
static void CB2_HandleStartBattle(void);
static void TryCorrectShedinjaLanguage(struct Pokemon *mon);
static u8 CreateNPCTrainerParty(struct Pokemon *party, u16 trainerNum, bool8 firstTrainer);
static void BattleMainCB1(void);
static void CB2_EndLinkBattle(void);
static void EndLinkBattleInSteps(void);
static void CB2_InitAskRecordBattle(void);
static void CB2_AskRecordBattle(void);
static void AskRecordBattle(void);
static void SpriteCB_MoveWildMonToRight(struct Sprite *sprite);
static void SpriteCB_WildMonShowHealthbox(struct Sprite *sprite);
static void SpriteCB_WildMonAnimate(struct Sprite *sprite);
<<<<<<< HEAD
static void SpriteCB_Flicker(struct Sprite *sprite);
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void SpriteCB_AnimFaintOpponent(struct Sprite *sprite);
static void SpriteCB_BlinkVisible(struct Sprite *sprite);
static void SpriteCB_Idle(struct Sprite *sprite);
static void SpriteCB_BattleSpriteSlideLeft(struct Sprite *sprite);
static void TurnValuesCleanUp(bool8 var0);
static void SpriteCB_BounceEffect(struct Sprite *sprite);
static void BattleStartClearSetData(void);
<<<<<<< HEAD
static void BattleIntroGetMonsData(void);
static void BattleIntroPrepareBackgroundSlide(void);
static void BattleIntroDrawTrainersOrMonsSprites(void);
static void BattleIntroDrawPartySummaryScreens(void);
static void BattleIntroPrintTrainerWantsToBattle(void);
static void BattleIntroPrintWildMonAttacked(void);
static void BattleIntroPrintOpponentSendsOut(void);
static void BattleIntroPrintPlayerSendsOut(void);
static void BattleIntroOpponent1SendsOutMonAnimation(void);
static void BattleIntroOpponent2SendsOutMonAnimation(void);
static void BattleIntroRecordMonsToDex(void);
static void BattleIntroPlayer1SendsOutMonAnimation(void);
=======
static void DoBattleIntro(void);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void TryDoEventsBeforeFirstTurn(void);
static void HandleTurnActionSelectionState(void);
static void RunTurnActionsFunctions(void);
static void SetActionsAndBattlersTurnOrder(void);
<<<<<<< HEAD
static void UpdateBattlerPartyOrdersOnSwitch(void);
static bool8 AllAtActionConfirmed(void);
static void CheckFocusPunch_ClearVarsBeforeTurnStarts(void);
=======
static void UpdateBattlerPartyOrdersOnSwitch(u32 battler);
static bool8 AllAtActionConfirmed(void);
static void TryChangeTurnOrder(void);
static void TryChangingTurnOrderEffects(u32 battler1, u32 battler2, u32 *quickClawRandom, u32 *quickDrawRandom);
static void CheckChangingTurnOrderEffects(void);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void FreeResetData_ReturnToOvOrDoEvolutions(void);
static void ReturnFromBattleToOverworld(void);
static void TryEvolvePokemon(void);
static void WaitForEvoSceneToFinish(void);
static void HandleEndTurn_ContinueBattle(void);
static void HandleEndTurn_BattleWon(void);
static void HandleEndTurn_BattleLost(void);
static void HandleEndTurn_RanFromBattle(void);
static void HandleEndTurn_MonFled(void);
static void HandleEndTurn_FinishBattle(void);
<<<<<<< HEAD
static void SpriteCB_UnusedBattleInit(struct Sprite *sprite);
static void SpriteCB_UnusedBattleInit_Main(struct Sprite *sprite);
static void BattleIntroQuickRun(void);
static bool8 partyMonHoldDoublePrizeEffect(void);
=======
static u32 Crc32B (const u8 *data, u32 size);
static u32 GeneratePartyHash(const struct Trainer *trainer, u32 i);
static s32 Factorial(s32);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

EWRAM_DATA u16 gBattle_BG0_X = 0;
EWRAM_DATA u16 gBattle_BG0_Y = 0;
EWRAM_DATA u16 gBattle_BG1_X = 0;
EWRAM_DATA u16 gBattle_BG1_Y = 0;
EWRAM_DATA u16 gBattle_BG2_X = 0;
EWRAM_DATA u16 gBattle_BG2_Y = 0;
EWRAM_DATA u16 gBattle_BG3_X = 0;
EWRAM_DATA u16 gBattle_BG3_Y = 0;
EWRAM_DATA u16 gBattle_WIN0H = 0;
EWRAM_DATA u16 gBattle_WIN0V = 0;
EWRAM_DATA u16 gBattle_WIN1H = 0;
EWRAM_DATA u16 gBattle_WIN1V = 0;
<<<<<<< HEAD
EWRAM_DATA u8 gDisplayedStringBattle[300] = {0};
EWRAM_DATA u8 gBattleTextBuff1[TEXT_BUFF_ARRAY_COUNT] = {0};
EWRAM_DATA u8 gBattleTextBuff2[TEXT_BUFF_ARRAY_COUNT] = {0};
EWRAM_DATA u8 gBattleTextBuff3[TEXT_BUFF_ARRAY_COUNT] = {0};
// The below array is never intentionally used. However, Juan's
// defeat text (SootopolisCity_Gym_1F_Text_JuanDefeat) is too long
// for gDisplayedStringBattle and overflows into this array. If it
// is removed (and none of the buffers above are increased in size)
// it will instead overflow into useful data.
EWRAM_DATA static u32 sFlickerArray[25] = {0};
EWRAM_DATA u32 gBattleTypeFlags = 0;
EWRAM_DATA u8 gBattleTerrain = 0;
EWRAM_DATA u32 gUnusedFirstBattleVar1 = 0; // Never read
EWRAM_DATA struct MultiPartnerMenuPokemon gMultiPartnerParty[MULTI_PARTY_SIZE] = {0};
EWRAM_DATA static struct MultiPartnerMenuPokemon* sMultiPartnerPartyBuffer = NULL;
EWRAM_DATA u8 *gBattleAnimBgTileBuffer = NULL;
EWRAM_DATA u8 *gBattleAnimBgTilemapBuffer = NULL;
EWRAM_DATA u8 gBattleBufferA[MAX_BATTLERS_COUNT][0x200] = {0};
EWRAM_DATA u8 gBattleBufferB[MAX_BATTLERS_COUNT][0x200] = {0};
EWRAM_DATA u8 gActiveBattler = 0;
=======
EWRAM_DATA u8 gDisplayedStringBattle[425] = {0}; // Increased in size to fit Juan's defeat text (SootopolisCity_Gym_1F_Text_JuanDefeat)
EWRAM_DATA u8 gBattleTextBuff1[TEXT_BUFF_ARRAY_COUNT] = {0};
EWRAM_DATA u8 gBattleTextBuff2[TEXT_BUFF_ARRAY_COUNT] = {0};
EWRAM_DATA u8 gBattleTextBuff3[TEXT_BUFF_ARRAY_COUNT + 13] = {0};   // expanded for stupidly long z move names
EWRAM_DATA u32 gBattleTypeFlags = 0;
EWRAM_DATA u8 gBattleEnvironment = 0;
EWRAM_DATA struct MultiPartnerMenuPokemon gMultiPartnerParty[MULTI_PARTY_SIZE] = {0};
EWRAM_DATA static struct MultiPartnerMenuPokemon *sMultiPartnerPartyBuffer = NULL;
EWRAM_DATA u8 *gBattleAnimBgTileBuffer = NULL;
EWRAM_DATA u8 *gBattleAnimBgTilemapBuffer = NULL;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
EWRAM_DATA u32 gBattleControllerExecFlags = 0;
EWRAM_DATA u8 gBattlersCount = 0;
EWRAM_DATA u16 gBattlerPartyIndexes[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u8 gBattlerPositions[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u8 gActionsByTurnOrder[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u8 gBattlerByTurnOrder[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u8 gCurrentTurnActionNumber = 0;
EWRAM_DATA u8 gCurrentActionFuncId = 0;
EWRAM_DATA struct BattlePokemon gBattleMons[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u8 gBattlerSpriteIds[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u8 gCurrMovePos = 0;
EWRAM_DATA u8 gChosenMovePos = 0;
EWRAM_DATA u16 gCurrentMove = 0;
EWRAM_DATA u16 gChosenMove = 0;
EWRAM_DATA u16 gCalledMove = 0;
<<<<<<< HEAD
EWRAM_DATA s32 gBattleMoveDamage = 0;
EWRAM_DATA s32 gHpDealt = 0;
EWRAM_DATA s32 gBideDmg[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u16 gLastUsedItem = 0;
EWRAM_DATA u8 gLastUsedAbility = 0;
=======
EWRAM_DATA s32 gBideDmg[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u16 gLastUsedItem = 0;
EWRAM_DATA u16 gLastUsedAbility = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
EWRAM_DATA u8 gBattlerAttacker = 0;
EWRAM_DATA u8 gBattlerTarget = 0;
EWRAM_DATA u8 gBattlerFainted = 0;
EWRAM_DATA u8 gEffectBattler = 0;
EWRAM_DATA u8 gPotentialItemEffectBattler = 0;
EWRAM_DATA u8 gAbsentBattlerFlags = 0;
<<<<<<< HEAD
EWRAM_DATA u8 gCritMultiplier = 0;
EWRAM_DATA u8 gMultiHitCounter = 0;
EWRAM_DATA const u8 *gBattlescriptCurrInstr = NULL;
EWRAM_DATA u32 gUnusedBattleMainVar = 0;
=======
EWRAM_DATA u8 gMultiHitCounter = 0;
EWRAM_DATA const u8 *gBattlescriptCurrInstr = NULL;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
EWRAM_DATA u8 gChosenActionByBattler[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA const u8 *gSelectionBattleScripts[MAX_BATTLERS_COUNT] = {NULL};
EWRAM_DATA const u8 *gPalaceSelectionBattleScripts[MAX_BATTLERS_COUNT] = {NULL};
EWRAM_DATA u16 gLastPrintedMoves[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u16 gLastMoves[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u16 gLastLandedMoves[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u16 gLastHitByType[MAX_BATTLERS_COUNT] = {0};
<<<<<<< HEAD
EWRAM_DATA u16 gLastResultingMoves[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u16 gLockedMoves[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u8 gLastHitBy[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u16 gChosenMoveByBattler[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u8 gMoveResultFlags = 0;
EWRAM_DATA u32 gHitMarker = 0;
EWRAM_DATA static u8 sUnusedBattlersArray[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u8 gBideTarget[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u8 gUnusedFirstBattleVar2 = 0; // Never read
EWRAM_DATA u16 gSideStatuses[NUM_BATTLE_SIDES] = {0};
EWRAM_DATA struct SideTimer gSideTimers[NUM_BATTLE_SIDES] = {0};
EWRAM_DATA u32 gStatuses3[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA struct DisableStruct gDisableStructs[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u16 gPauseCounterBattle = 0;
EWRAM_DATA u16 gPaydayMoney = 0;
EWRAM_DATA u16 gRandomTurnNumber = 0;
=======
EWRAM_DATA u16 gLastUsedMoveType[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u16 gLastResultingMoves[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u16 gLockedMoves[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u16 gLastUsedMove = 0;
EWRAM_DATA u8 gLastHitBy[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u16 gChosenMoveByBattler[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u32 gHitMarker = 0;
EWRAM_DATA u8 gBideTarget[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u32 gSideStatuses[NUM_BATTLE_SIDES] = {0};
EWRAM_DATA struct SideTimer gSideTimers[NUM_BATTLE_SIDES] = {0};
EWRAM_DATA struct DisableStruct gDisableStructs[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u16 gPauseCounterBattle = 0;
EWRAM_DATA u16 gPaydayMoney = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
EWRAM_DATA u8 gBattleCommunication[BATTLE_COMMUNICATION_ENTRIES_COUNT] = {0};
EWRAM_DATA u8 gBattleOutcome = 0;
EWRAM_DATA struct ProtectStruct gProtectStructs[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA struct SpecialStatus gSpecialStatuses[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u16 gBattleWeather = 0;
EWRAM_DATA struct WishFutureKnock gWishFutureKnock = {0};
EWRAM_DATA u16 gIntroSlideFlags = 0;
EWRAM_DATA u8 gSentPokesToOpponent[2] = {0};
<<<<<<< HEAD
EWRAM_DATA u16 gDynamicBasePower = 0;
EWRAM_DATA u16 gExpShareExp = 0;
EWRAM_DATA bool8 gExpShareCheck = 0;
EWRAM_DATA struct BattleEnigmaBerry gEnigmaBerries[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA struct BattleScripting gBattleScripting = {0};
EWRAM_DATA struct BattleStruct *gBattleStruct = NULL;
=======
EWRAM_DATA struct BattleEnigmaBerry gEnigmaBerries[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA struct BattleScripting gBattleScripting = {0};
EWRAM_DATA struct BattleStruct *gBattleStruct = NULL;

EWRAM_DATA struct AiThinkingStruct *gAiThinkingStruct = NULL;
EWRAM_DATA struct AiLogicData *gAiLogicData = NULL;
EWRAM_DATA struct AiPartyData *gAiPartyData = NULL;
EWRAM_DATA struct BattleHistory *gBattleHistory = NULL;

EWRAM_DATA struct AiBattleData *gAiBattleData = NULL;

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
EWRAM_DATA u8 *gLinkBattleSendBuffer = NULL;
EWRAM_DATA u8 *gLinkBattleRecvBuffer = NULL;
EWRAM_DATA struct BattleResources *gBattleResources = NULL;
EWRAM_DATA u8 gActionSelectionCursor[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u8 gMoveSelectionCursor[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u8 gBattlerStatusSummaryTaskId[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u8 gBattlerInMenuId = 0;
EWRAM_DATA bool8 gDoingBattleAnim = FALSE;
EWRAM_DATA u32 gTransformedPersonalities[MAX_BATTLERS_COUNT] = {0};
<<<<<<< HEAD
EWRAM_DATA u8 gPlayerDpadHoldFrames = 0;
EWRAM_DATA struct BattleSpriteData *gBattleSpritesDataPtr = NULL;
EWRAM_DATA struct MonSpritesGfx *gMonSpritesGfxPtr = NULL;
EWRAM_DATA struct BattleHealthboxInfo *gBattleControllerOpponentHealthboxData = NULL; // Never read
EWRAM_DATA struct BattleHealthboxInfo *gBattleControllerOpponentFlankHealthboxData = NULL; // Never read
EWRAM_DATA u16 gBattleMovePower = 0;
EWRAM_DATA u16 gMoveToLearn = 0;
EWRAM_DATA u8 gBattleMonForms[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u8 gMaxPartyLevel = 1;
EWRAM_DATA u8 gLastUsedBall = 0;
EWRAM_DATA u16 gLastThrownBall = 0;
EWRAM_DATA u16 gBallToDisplay = 0;
EWRAM_DATA bool8 gLastUsedBallMenuPresent = FALSE;

void (*gPreBattleCallback1)(void);
void (*gBattleMainFunc)(void);
struct BattleResults gBattleResults;
u8 gLeveledUpInBattle;
void (*gBattlerControllerFuncs[MAX_BATTLERS_COUNT])(void);
u8 gHealthboxSpriteIds[MAX_BATTLERS_COUNT];
u8 gMultiUsePlayerCursor;
u8 gNumberOfMovesToChoose;
u8 gBattleControllerData[MAX_BATTLERS_COUNT]; // Used by the battle controllers to store misc sprite/task IDs for each battler
=======
EWRAM_DATA bool8 gTransformedShininess[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA u8 gPlayerDpadHoldFrames = 0;
EWRAM_DATA struct BattleSpriteData *gBattleSpritesDataPtr = NULL;
EWRAM_DATA struct MonSpritesGfx *gMonSpritesGfxPtr = NULL;
EWRAM_DATA u16 gBattleMovePower = 0;
EWRAM_DATA u16 gMoveToLearn = 0;
EWRAM_DATA u32 gFieldStatuses = 0;
EWRAM_DATA struct FieldTimer gFieldTimers = {0};
EWRAM_DATA u16 gBattleTurnCounter = 0;
EWRAM_DATA u8 gBattlerAbility = 0;
EWRAM_DATA struct QueuedStatBoost gQueuedStatBoosts[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA bool8 gHasFetchedBall = FALSE;
EWRAM_DATA u16 gLastUsedBall = 0;
EWRAM_DATA u16 gLastThrownBall = 0;
EWRAM_DATA u16 gBallToDisplay = 0;
EWRAM_DATA bool8 gLastUsedBallMenuPresent = FALSE;
EWRAM_DATA u8 gPartyCriticalHits[PARTY_SIZE] = {0};
EWRAM_DATA static u8 sTriedEvolving = 0;
EWRAM_DATA u8 gCategoryIconSpriteId = 0;

COMMON_DATA MainCallback gPreBattleCallback1 = NULL;
COMMON_DATA void (*gBattleMainFunc)(void) = NULL;
COMMON_DATA struct BattleResults gBattleResults = {0};
COMMON_DATA u8 gLeveledUpInBattle = 0;
COMMON_DATA u8 gHealthboxSpriteIds[MAX_BATTLERS_COUNT] = {0};
COMMON_DATA u8 gMultiUsePlayerCursor = 0;
COMMON_DATA u8 gNumberOfMovesToChoose = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

static const struct ScanlineEffectParams sIntroScanlineParams16Bit =
{
    &REG_BG3HOFS, SCANLINE_EFFECT_DMACNT_16BIT, 1
};

// unused
static const struct ScanlineEffectParams sIntroScanlineParams32Bit =
{
    &REG_BG3HOFS, SCANLINE_EFFECT_DMACNT_32BIT, 1
};

<<<<<<< HEAD
const struct SpriteTemplate gUnusedBattleInitSprite =
{
    .tileTag = 0,
    .paletteTag = 0,
    .oam = &gDummyOamData,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_UnusedBattleInit,
};

=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static const u8 sText_ShedinjaJpnName[] = _("ヌケニン"); // Nukenin

const struct OamData gOamData_BattleSpriteOpponentSide =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_NORMAL,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x64),
    .x = 0,
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 2,
    .paletteNum = 0,
    .affineParam = 0,
};

const struct OamData gOamData_BattleSpritePlayerSide =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_NORMAL,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x64),
    .x = 0,
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 2,
    .paletteNum = 2,
    .affineParam = 0,
};

<<<<<<< HEAD
static const union AnimCmd sAnim_Unused[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnims_Unused[] =
{
    sAnim_Unused,
};

const struct TrainerBall gTrainerBallTable[] = {
    {TRAINER_CLASS_TEAM_AQUA, ITEM_NET_BALL},
    {TRAINER_CLASS_AQUA_ADMIN, ITEM_NET_BALL},
    {TRAINER_CLASS_AQUA_LEADER, ITEM_MASTER_BALL},
    {TRAINER_CLASS_AROMA_LADY, ITEM_LUXURY_BALL},
    {TRAINER_CLASS_RUIN_MANIAC, ITEM_GREAT_BALL},
    {TRAINER_CLASS_INTERVIEWER, ITEM_REPEAT_BALL},
    {TRAINER_CLASS_TUBER_F, ITEM_DIVE_BALL},
    {TRAINER_CLASS_TUBER_M, ITEM_DIVE_BALL},
    {TRAINER_CLASS_SIS_AND_BRO, ITEM_POKE_BALL},
    {TRAINER_CLASS_COOLTRAINER, ITEM_ULTRA_BALL},
    {TRAINER_CLASS_HEX_MANIAC, ITEM_GREAT_BALL},
    {TRAINER_CLASS_LADY, ITEM_LUXURY_BALL},
    {TRAINER_CLASS_BEAUTY, ITEM_GREAT_BALL},
    {TRAINER_CLASS_RICH_BOY, ITEM_LUXURY_BALL},
    {TRAINER_CLASS_POKEMANIAC, ITEM_PREMIER_BALL},
    {TRAINER_CLASS_SWIMMER_M, ITEM_DIVE_BALL},
    {TRAINER_CLASS_BLACK_BELT, ITEM_GREAT_BALL},
    {TRAINER_CLASS_GUITARIST, ITEM_TIMER_BALL},
    {TRAINER_CLASS_SUPER_NERD, ITEM_POKE_BALL},
    {TRAINER_CLASS_CAMPER, ITEM_NEST_BALL},
    {TRAINER_CLASS_OLD_COUPLE, ITEM_POKE_BALL},
    {TRAINER_CLASS_BUG_MANIAC, ITEM_NET_BALL},
    {TRAINER_CLASS_PSYCHIC, ITEM_POKE_BALL},
    {TRAINER_CLASS_GENTLEMAN, ITEM_LUXURY_BALL},
    {TRAINER_CLASS_ELITE_FOUR, ITEM_ULTRA_BALL},
    {TRAINER_CLASS_LEADER, ITEM_ULTRA_BALL},
    {TRAINER_CLASS_SCHOOL_KID, ITEM_POKE_BALL},
    {TRAINER_CLASS_SR_AND_JR, ITEM_POKE_BALL},
    {TRAINER_CLASS_POKEFAN, ITEM_POKE_BALL},
    {TRAINER_CLASS_EXPERT, ITEM_ULTRA_BALL},
    {TRAINER_CLASS_YOUNGSTER, ITEM_POKE_BALL},
    {TRAINER_CLASS_CHAMPION, ITEM_LUXURY_BALL},
    {TRAINER_CLASS_FISHERMAN, ITEM_LURE_BALL},
    {TRAINER_CLASS_TRIATHLETE, ITEM_FAST_BALL},
    {TRAINER_CLASS_DRAGON_TAMER, ITEM_LURE_BALL},
    {TRAINER_CLASS_BIRD_KEEPER, ITEM_LEVEL_BALL},
    {TRAINER_CLASS_NINJA_BOY, ITEM_ULTRA_BALL},
    {TRAINER_CLASS_BATTLE_GIRL, ITEM_GREAT_BALL},
    {TRAINER_CLASS_PARASOL_LADY, ITEM_POKE_BALL},
    {TRAINER_CLASS_SWIMMER_F, ITEM_DIVE_BALL},
    {TRAINER_CLASS_PICNICKER, ITEM_SAFARI_BALL},
    {TRAINER_CLASS_TWINS, ITEM_POKE_BALL},
    {TRAINER_CLASS_SAILOR, ITEM_DIVE_BALL},
    {TRAINER_CLASS_COLLECTOR, ITEM_REPEAT_BALL},
    {TRAINER_CLASS_RIVAL, ITEM_POKE_BALL},
    {TRAINER_CLASS_PKMN_BREEDER, ITEM_LOVE_BALL},
    {TRAINER_CLASS_PKMN_RANGER, ITEM_SAFARI_BALL},
    {TRAINER_CLASS_TEAM_MAGMA, ITEM_NEST_BALL},
    {TRAINER_CLASS_MAGMA_ADMIN, ITEM_NEST_BALL},
    {TRAINER_CLASS_MAGMA_LEADER, ITEM_MASTER_BALL},
    {TRAINER_CLASS_LASS, ITEM_POKE_BALL},
    {TRAINER_CLASS_BUG_CATCHER, ITEM_NET_BALL},
    {TRAINER_CLASS_HIKER, ITEM_HEAVY_BALL},
    {TRAINER_CLASS_YOUNG_COUPLE, ITEM_LOVE_BALL},
    {TRAINER_CLASS_WINSTRATE, ITEM_GREAT_BALL},
    {TRAINER_CLASS_PKMN_TRAINER_2, ITEM_PREMIER_BALL},
    {TRAINER_CLASS_NURSE, ITEM_POKE_BALL},
    {0xFF, ITEM_POKE_BALL},
};

static const union AffineAnimCmd sAffineAnim_Unused[] =
{
    AFFINEANIMCMD_FRAME(-0x10, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 0x3C),
    AFFINEANIMCMD_JUMP(1),
};

static const union AffineAnimCmd *const sAffineAnims_Unused[] =
{
    sAffineAnim_Unused,
};

static const s8 sCenterToCornerVecXs[8] ={-32, -16, -16, -32, -32};

// format: attacking type, defending type, damage multiplier
// the multiplier is a (decimal) fixed-point number:
// 20 is ×2.0 TYPE_MUL_SUPER_EFFECTIVE
// 10 is ×1.0 TYPE_MUL_NORMAL
// 05 is ×0.5 TYPE_MUL_NOT_EFFECTIVE
// 00 is ×0.0 TYPE_MUL_NO_EFFECT
const u8 gTypeEffectiveness[369] =
{
    TYPE_NORMAL, TYPE_ROCK, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_NORMAL, TYPE_STEEL, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FIRE, TYPE_FIRE, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FIRE, TYPE_WATER, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FIRE, TYPE_GRASS, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_FIRE, TYPE_ICE, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_FIRE, TYPE_BUG, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_FIRE, TYPE_ROCK, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FIRE, TYPE_DRAGON, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FIRE, TYPE_STEEL, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_WATER, TYPE_FIRE, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_WATER, TYPE_WATER, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_WATER, TYPE_GRASS, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_WATER, TYPE_GROUND, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_WATER, TYPE_ROCK, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_WATER, TYPE_DRAGON, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_ELECTRIC, TYPE_WATER, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_ELECTRIC, TYPE_ELECTRIC, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_ELECTRIC, TYPE_GRASS, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_ELECTRIC, TYPE_GROUND, TYPE_MUL_NO_EFFECT,
    TYPE_ELECTRIC, TYPE_FLYING, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_ELECTRIC, TYPE_DRAGON, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_GRASS, TYPE_FIRE, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_GRASS, TYPE_WATER, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_GRASS, TYPE_GRASS, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_GRASS, TYPE_POISON, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_GRASS, TYPE_GROUND, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_GRASS, TYPE_FLYING, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_GRASS, TYPE_BUG, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_GRASS, TYPE_ROCK, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_GRASS, TYPE_DRAGON, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_GRASS, TYPE_STEEL, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_ICE, TYPE_WATER, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_ICE, TYPE_GRASS, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_ICE, TYPE_ICE, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_ICE, TYPE_GROUND, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_ICE, TYPE_FLYING, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_ICE, TYPE_DRAGON, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_ICE, TYPE_STEEL, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_ICE, TYPE_FIRE, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FIGHTING, TYPE_NORMAL, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_FIGHTING, TYPE_ICE, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_FIGHTING, TYPE_POISON, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FIGHTING, TYPE_FLYING, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FIGHTING, TYPE_PSYCHIC, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FIGHTING, TYPE_BUG, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FIGHTING, TYPE_ROCK, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_FIGHTING, TYPE_DARK, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_FIGHTING, TYPE_STEEL, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_POISON, TYPE_GRASS, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_POISON, TYPE_POISON, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_POISON, TYPE_GROUND, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_POISON, TYPE_ROCK, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_POISON, TYPE_GHOST, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_POISON, TYPE_STEEL, TYPE_MUL_NO_EFFECT,
    TYPE_GROUND, TYPE_FIRE, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_GROUND, TYPE_ELECTRIC, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_GROUND, TYPE_GRASS, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_GROUND, TYPE_POISON, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_GROUND, TYPE_FLYING, TYPE_MUL_NO_EFFECT,
    TYPE_GROUND, TYPE_BUG, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_GROUND, TYPE_ROCK, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_GROUND, TYPE_STEEL, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_FLYING, TYPE_ELECTRIC, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FLYING, TYPE_GRASS, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_FLYING, TYPE_FIGHTING, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_FLYING, TYPE_BUG, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_FLYING, TYPE_ROCK, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FLYING, TYPE_STEEL, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_PSYCHIC, TYPE_FIGHTING, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_PSYCHIC, TYPE_POISON, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_PSYCHIC, TYPE_PSYCHIC, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_PSYCHIC, TYPE_DARK, TYPE_MUL_NO_EFFECT,
    TYPE_PSYCHIC, TYPE_STEEL, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_BUG, TYPE_FIRE, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_BUG, TYPE_GRASS, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_BUG, TYPE_FIGHTING, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_BUG, TYPE_POISON, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_BUG, TYPE_FLYING, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_BUG, TYPE_PSYCHIC, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_BUG, TYPE_GHOST, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_BUG, TYPE_DARK, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_BUG, TYPE_STEEL, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_ROCK, TYPE_FIRE, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_ROCK, TYPE_ICE, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_ROCK, TYPE_FIGHTING, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_ROCK, TYPE_GROUND, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_ROCK, TYPE_FLYING, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_ROCK, TYPE_BUG, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_ROCK, TYPE_STEEL, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_GHOST, TYPE_NORMAL, TYPE_MUL_NO_EFFECT,
    TYPE_GHOST, TYPE_PSYCHIC, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_GHOST, TYPE_DARK, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_GHOST, TYPE_STEEL, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_GHOST, TYPE_GHOST, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_DRAGON, TYPE_DRAGON, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_DRAGON, TYPE_STEEL, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_DARK, TYPE_FIGHTING, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_DARK, TYPE_PSYCHIC, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_DARK, TYPE_GHOST, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_DARK, TYPE_DARK, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_STEEL, TYPE_FIRE, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_STEEL, TYPE_WATER, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_STEEL, TYPE_ELECTRIC, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_STEEL, TYPE_ICE, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_STEEL, TYPE_ROCK, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_STEEL, TYPE_STEEL, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FAIRY, TYPE_FIGHTING, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_FAIRY, TYPE_DRAGON, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_FAIRY, TYPE_DARK, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_FAIRY, TYPE_POISON, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FAIRY, TYPE_STEEL, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FAIRY, TYPE_FIRE, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_FIGHTING, TYPE_FAIRY, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_POISON, TYPE_FAIRY, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_BUG, TYPE_FAIRY, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_DRAGON, TYPE_FAIRY, TYPE_MUL_NO_EFFECT,
    TYPE_DARK, TYPE_FAIRY, TYPE_MUL_NOT_EFFECTIVE,
    TYPE_STEEL, TYPE_FAIRY, TYPE_MUL_SUPER_EFFECTIVE,
    TYPE_FORESIGHT, TYPE_FORESIGHT, TYPE_MUL_NO_EFFECT,
    TYPE_NORMAL, TYPE_GHOST, TYPE_MUL_NO_EFFECT,
    TYPE_FIGHTING, TYPE_GHOST, TYPE_MUL_NO_EFFECT,
    TYPE_ENDTABLE, TYPE_ENDTABLE, TYPE_MUL_NO_EFFECT
};

const u8 gTypeNames[NUMBER_OF_MON_TYPES][TYPE_NAME_LENGTH + 1] =
{
    [TYPE_NORMAL] = _("NORMAL"),
    [TYPE_FIGHTING] = _("FIGHT"),
    [TYPE_FLYING] = _("FLYING"),
    [TYPE_POISON] = _("POISON"),
    [TYPE_GROUND] = _("GROUND"),
    [TYPE_ROCK] = _("ROCK"),
    [TYPE_BUG] = _("BUG"),
    [TYPE_GHOST] = _("GHOST"),
    [TYPE_STEEL] = _("STEEL"),
    [TYPE_MYSTERY] = _("???"),
    [TYPE_FIRE] = _("FIRE"),
    [TYPE_WATER] = _("WATER"),
    [TYPE_GRASS] = _("GRASS"),
    [TYPE_ELECTRIC] = _("ELECTR"),
    [TYPE_PSYCHIC] = _("PSYCHC"),
    [TYPE_ICE] = _("ICE"),
    [TYPE_DRAGON] = _("DRAGON"),
    [TYPE_DARK] = _("DARK"),
    [TYPE_FAIRY] = _("FAIRY"),
};

// This is a factor in how much money you get for beating a trainer.
const struct TrainerMoney gTrainerMoneyTable[] =
{
    {TRAINER_CLASS_TEAM_AQUA, 5},
    {TRAINER_CLASS_AQUA_ADMIN, 10},
    {TRAINER_CLASS_AQUA_LEADER, 20},
    {TRAINER_CLASS_AROMA_LADY, 10},
    {TRAINER_CLASS_RUIN_MANIAC, 15},
    {TRAINER_CLASS_INTERVIEWER, 12},
    {TRAINER_CLASS_TUBER_F, 1},
    {TRAINER_CLASS_TUBER_M, 1},
    {TRAINER_CLASS_SIS_AND_BRO, 3},
    {TRAINER_CLASS_COOLTRAINER, 12},
    {TRAINER_CLASS_HEX_MANIAC, 6},
    {TRAINER_CLASS_LADY, 50},
    {TRAINER_CLASS_BEAUTY, 20},
    {TRAINER_CLASS_RICH_BOY, 50},
    {TRAINER_CLASS_POKEMANIAC, 15},
    {TRAINER_CLASS_SWIMMER_M, 2},
    {TRAINER_CLASS_BLACK_BELT, 8},
    {TRAINER_CLASS_GUITARIST, 8},
    {TRAINER_CLASS_SUPER_NERD, 8},
    {TRAINER_CLASS_CAMPER, 4},
    {TRAINER_CLASS_OLD_COUPLE, 10},
    {TRAINER_CLASS_BUG_MANIAC, 15},
    {TRAINER_CLASS_PSYCHIC, 6},
    {TRAINER_CLASS_GENTLEMAN, 20},
    {TRAINER_CLASS_ELITE_FOUR, 25},
    {TRAINER_CLASS_LEADER, 25},
    {TRAINER_CLASS_SCHOOL_KID, 5},
    {TRAINER_CLASS_SR_AND_JR, 4},
    {TRAINER_CLASS_POKEFAN, 20},
    {TRAINER_CLASS_EXPERT, 10},
    {TRAINER_CLASS_YOUNGSTER, 4},
    {TRAINER_CLASS_CHAMPION, 50},
    {TRAINER_CLASS_FISHERMAN, 10},
    {TRAINER_CLASS_TRIATHLETE, 10},
    {TRAINER_CLASS_DRAGON_TAMER, 12},
    {TRAINER_CLASS_BIRD_KEEPER, 8},
    {TRAINER_CLASS_NINJA_BOY, 3},
    {TRAINER_CLASS_BATTLE_GIRL, 6},
    {TRAINER_CLASS_PARASOL_LADY, 10},
    {TRAINER_CLASS_SWIMMER_F, 2},
    {TRAINER_CLASS_PICNICKER, 4},
    {TRAINER_CLASS_TWINS, 3},
    {TRAINER_CLASS_SAILOR, 8},
    {TRAINER_CLASS_COLLECTOR, 15},
    {TRAINER_CLASS_RIVAL, 15},
    {TRAINER_CLASS_PKMN_BREEDER, 10},
    {TRAINER_CLASS_PKMN_RANGER, 12},
    {TRAINER_CLASS_TEAM_MAGMA, 5},
    {TRAINER_CLASS_MAGMA_ADMIN, 10},
    {TRAINER_CLASS_MAGMA_LEADER, 20},
    {TRAINER_CLASS_LASS, 4},
    {TRAINER_CLASS_BUG_CATCHER, 4},
    {TRAINER_CLASS_HIKER, 10},
    {TRAINER_CLASS_YOUNG_COUPLE, 8},
    {TRAINER_CLASS_WINSTRATE, 10},
    {TRAINER_CLASS_NURSE, 2},
    {0xFF, 5}, // Any trainer class not listed above uses this
};

#include "data/text/abilities.h"

static void (* const sTurnActionsFuncsTable[])(void) =
=======
static const s8 sCenterToCornerVecXs[8] ={-32, -16, -16, -32, -32};

#include "data/types_info.h"

// [TRAINER_CLASS_XYZ] = { _("name"), <money=5>, <ball=BALL_POKE> }
const struct TrainerClass gTrainerClasses[TRAINER_CLASS_COUNT] =
{
    [TRAINER_CLASS_PKMN_TRAINER_1] = { _("{PKMN} TRAINER") },
    [TRAINER_CLASS_PKMN_TRAINER_2] = { _("{PKMN} TRAINER") },
    [TRAINER_CLASS_HIKER] = { _("HIKER"), 10 },
    [TRAINER_CLASS_TEAM_AQUA] = { _("TEAM AQUA") },
    [TRAINER_CLASS_PKMN_BREEDER] = { _("{PKMN} BREEDER"), 10, B_TRAINER_CLASS_POKE_BALLS >= GEN_8 ? BALL_HEAL : BALL_FRIEND },
    [TRAINER_CLASS_COOLTRAINER] = { _("COOLTRAINER"), 12, BALL_ULTRA },
    [TRAINER_CLASS_BIRD_KEEPER] = { _("BIRD KEEPER"), 8 },
    [TRAINER_CLASS_COLLECTOR] = { _("COLLECTOR"), 15, BALL_PREMIER },
    [TRAINER_CLASS_SWIMMER_M] = { _("SWIMMER♂"), 2, BALL_DIVE },
    [TRAINER_CLASS_TEAM_MAGMA] = { _("TEAM MAGMA") },
    [TRAINER_CLASS_EXPERT] = { _("EXPERT"), 10 },
    [TRAINER_CLASS_AQUA_ADMIN] = { _("AQUA ADMIN"), 10 },
    [TRAINER_CLASS_BLACK_BELT] = { _("BLACK BELT"), 8, BALL_ULTRA },
    [TRAINER_CLASS_AQUA_LEADER] = { _("AQUA LEADER"), 20, BALL_MASTER },
    [TRAINER_CLASS_HEX_MANIAC] = { _("HEX MANIAC"), 6 },
    [TRAINER_CLASS_AROMA_LADY] = { _("AROMA LADY"), 10 },
    [TRAINER_CLASS_RUIN_MANIAC] = { _("RUIN MANIAC"), 15 },
    [TRAINER_CLASS_INTERVIEWER] = { _("INTERVIEWER"), 12 },
    [TRAINER_CLASS_TUBER_F] = { _("TUBER"), 1 },
    [TRAINER_CLASS_TUBER_M] = { _("TUBER"), 1 },
    [TRAINER_CLASS_LADY] = { _("LADY"), 50 },
    [TRAINER_CLASS_BEAUTY] = { _("BEAUTY"), 20 },
    [TRAINER_CLASS_RICH_BOY] = { _("RICH BOY"), 50 },
    [TRAINER_CLASS_POKEMANIAC] = { _("POKéMANIAC"), 15 },
    [TRAINER_CLASS_GUITARIST] = { _("GUITARIST"), 8 },
    [TRAINER_CLASS_KINDLER] = { _("KINDLER"), 8 },
    [TRAINER_CLASS_CAMPER] = { _("CAMPER"), 4 },
    [TRAINER_CLASS_PICNICKER] = { _("PICNICKER"), 4 },
    [TRAINER_CLASS_BUG_MANIAC] = { _("BUG MANIAC"), 15 },
    [TRAINER_CLASS_PSYCHIC] = { _("PSYCHIC"), 6 },
    [TRAINER_CLASS_GENTLEMAN] = { _("GENTLEMAN"), 20, BALL_LUXURY },
    [TRAINER_CLASS_ELITE_FOUR] = { _("ELITE FOUR"), 25, BALL_ULTRA },
    [TRAINER_CLASS_LEADER] = { _("LEADER"), 25 },
    [TRAINER_CLASS_SCHOOL_KID] = { _("SCHOOL KID") },
    [TRAINER_CLASS_SR_AND_JR] = { _("SR. AND JR."), 4 },
    [TRAINER_CLASS_WINSTRATE] = { _("WINSTRATE"), 10 },
    [TRAINER_CLASS_POKEFAN] = { _("POKéFAN"), 20 },
    [TRAINER_CLASS_YOUNGSTER] = { _("YOUNGSTER"), 4 },
    [TRAINER_CLASS_CHAMPION] = { _("CHAMPION"), 50 },
    [TRAINER_CLASS_FISHERMAN] = { _("FISHERMAN"), 10, B_TRAINER_CLASS_POKE_BALLS >= GEN_8 ? BALL_DIVE : BALL_LURE },
    [TRAINER_CLASS_TRIATHLETE] = { _("TRIATHLETE"), 10 },
    [TRAINER_CLASS_DRAGON_TAMER] = { _("DRAGON TAMER"), 12 },
    [TRAINER_CLASS_NINJA_BOY] = { _("NINJA BOY"), 3 },
    [TRAINER_CLASS_BATTLE_GIRL] = { _("BATTLE GIRL"), 6 },
    [TRAINER_CLASS_PARASOL_LADY] = { _("PARASOL LADY"), 10 },
    [TRAINER_CLASS_SWIMMER_F] = { _("SWIMMER♀"), 2, BALL_DIVE },
    [TRAINER_CLASS_TWINS] = { _("TWINS"), 3 },
    [TRAINER_CLASS_SAILOR] = { _("SAILOR"), 8 },
    [TRAINER_CLASS_COOLTRAINER_2] = { _("COOLTRAINER"), 5, BALL_ULTRA },
    [TRAINER_CLASS_MAGMA_ADMIN] = { _("MAGMA ADMIN"), 10 },
    [TRAINER_CLASS_RIVAL] = { _("{PKMN} TRAINER"), 15 },
    [TRAINER_CLASS_BUG_CATCHER] = { _("BUG CATCHER"), 4 },
    [TRAINER_CLASS_PKMN_RANGER] = { _("{PKMN} RANGER"), 12 },
    [TRAINER_CLASS_MAGMA_LEADER] = { _("MAGMA LEADER"), 20, BALL_MASTER },
    [TRAINER_CLASS_LASS] = { _("LASS"), 4 },
    [TRAINER_CLASS_YOUNG_COUPLE] = { _("YOUNG COUPLE"), 8 },
    [TRAINER_CLASS_OLD_COUPLE] = { _("OLD COUPLE"), 10 },
    [TRAINER_CLASS_SIS_AND_BRO] = { _("SIS AND BRO"), 3 },
    [TRAINER_CLASS_SALON_MAIDEN] = { _("SALON MAIDEN") },
    [TRAINER_CLASS_DOME_ACE] = { _("DOME ACE") },
    [TRAINER_CLASS_PALACE_MAVEN] = { _("PALACE MAVEN") },
    [TRAINER_CLASS_ARENA_TYCOON] = { _("ARENA TYCOON") },
    [TRAINER_CLASS_FACTORY_HEAD] = { _("FACTORY HEAD") },
    [TRAINER_CLASS_PIKE_QUEEN] = { _("PIKE QUEEN") },
    [TRAINER_CLASS_PYRAMID_KING] = { _("PYRAMID KING") },
    [TRAINER_CLASS_RS_PROTAG] = { _("{PKMN} TRAINER") },
};

static void (*const sTurnActionsFuncsTable[])(void) =
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    [B_ACTION_USE_MOVE]               = HandleAction_UseMove,
    [B_ACTION_USE_ITEM]               = HandleAction_UseItem,
    [B_ACTION_SWITCH]                 = HandleAction_Switch,
    [B_ACTION_RUN]                    = HandleAction_Run,
    [B_ACTION_SAFARI_WATCH_CAREFULLY] = HandleAction_WatchesCarefully,
    [B_ACTION_SAFARI_BALL]            = HandleAction_SafariZoneBallThrow,
    [B_ACTION_SAFARI_POKEBLOCK]       = HandleAction_ThrowPokeblock,
    [B_ACTION_SAFARI_GO_NEAR]         = HandleAction_GoNear,
    [B_ACTION_SAFARI_RUN]             = HandleAction_SafariZoneRun,
    [B_ACTION_WALLY_THROW]            = HandleAction_WallyBallThrow,
    [B_ACTION_EXEC_SCRIPT]            = HandleAction_RunBattleScript,
    [B_ACTION_TRY_FINISH]             = HandleAction_TryFinish,
    [B_ACTION_FINISHED]               = HandleAction_ActionFinished,
    [B_ACTION_NOTHING_FAINTED]        = HandleAction_NothingIsFainted,
    [B_ACTION_THROW_BALL]             = HandleAction_ThrowBall,
};

<<<<<<< HEAD
static void (* const sEndTurnFuncsTable[])(void) =
=======
static void (*const sEndTurnFuncsTable[])(void) =
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    [0]                           = HandleEndTurn_ContinueBattle,
    [B_OUTCOME_WON]               = HandleEndTurn_BattleWon,
    [B_OUTCOME_LOST]              = HandleEndTurn_BattleLost,
    [B_OUTCOME_DREW]              = HandleEndTurn_BattleLost,
    [B_OUTCOME_RAN]               = HandleEndTurn_RanFromBattle,
    [B_OUTCOME_PLAYER_TELEPORTED] = HandleEndTurn_FinishBattle,
    [B_OUTCOME_MON_FLED]          = HandleEndTurn_MonFled,
    [B_OUTCOME_CAUGHT]            = HandleEndTurn_FinishBattle,
    [B_OUTCOME_NO_SAFARI_BALLS]   = HandleEndTurn_FinishBattle,
    [B_OUTCOME_FORFEITED]         = HandleEndTurn_FinishBattle,
    [B_OUTCOME_MON_TELEPORTED]    = HandleEndTurn_FinishBattle,
};

const u8 gStatusConditionString_PoisonJpn[] = _("どく$$$$$");
const u8 gStatusConditionString_SleepJpn[] = _("ねむり$$$$");
const u8 gStatusConditionString_ParalysisJpn[] = _("まひ$$$$$");
const u8 gStatusConditionString_BurnJpn[] = _("やけど$$$$");
const u8 gStatusConditionString_IceJpn[] = _("こおり$$$$");
const u8 gStatusConditionString_ConfusionJpn[] = _("こんらん$$$");
const u8 gStatusConditionString_LoveJpn[] = _("メロメロ$$$");

<<<<<<< HEAD
const u8 * const gStatusConditionStringsTable[][2] =
=======
const u8 *const gStatusConditionStringsTable[][2] =
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    {gStatusConditionString_PoisonJpn, gText_Poison},
    {gStatusConditionString_SleepJpn, gText_Sleep},
    {gStatusConditionString_ParalysisJpn, gText_Paralysis},
    {gStatusConditionString_BurnJpn, gText_Burn},
    {gStatusConditionString_IceJpn, gText_Ice},
    {gStatusConditionString_ConfusionJpn, gText_Confusion},
    {gStatusConditionString_LoveJpn, gText_Love}
};

void CB2_InitBattle(void)
{
<<<<<<< HEAD
    MoveSaveBlocks_ResetHeap();
=======
    if (!gTestRunnerEnabled)
        MoveSaveBlocks_ResetHeap();
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    AllocateBattleResources();
    AllocateBattleSpritesData();
    AllocateMonSpritesGfx();
    RecordedBattle_ClearFrontierPassFlag();

<<<<<<< HEAD
    if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
=======
#if T_SHOULD_RUN_MOVE_ANIM
    gLoadFail = FALSE;
#endif // T_SHOULD_RUN_MOVE_ANIM

    if (gBattleTypeFlags & BATTLE_TYPE_MULTI && gBattleTypeFlags & BATTLE_TYPE_TRAINER)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    {
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
        {
            CB2_InitBattleInternal();
        }
        else if (!(gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER))
        {
            HandleLinkBattleSetup();
            SetMainCallback2(CB2_PreInitMultiBattle);
        }
        else
        {
            SetMainCallback2(CB2_PreInitIngamePlayerPartnerBattle);
        }
        gBattleCommunication[MULTIUSE_STATE] = 0;
    }
    else
    {
        CB2_InitBattleInternal();
    }
}

static void CB2_InitBattleInternal(void)
{
<<<<<<< HEAD
    s32 i,j;
=======
    s32 i;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    SetHBlankCallback(NULL);
    SetVBlankCallback(NULL);

    CpuFill32(0, (void *)(VRAM), VRAM_SIZE);

    SetGpuReg(REG_OFFSET_MOSAIC, 0);
    SetGpuReg(REG_OFFSET_WIN0H, DISPLAY_WIDTH);
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(DISPLAY_HEIGHT / 2, DISPLAY_HEIGHT / 2 + 1));
    SetGpuReg(REG_OFFSET_WININ, 0);
    SetGpuReg(REG_OFFSET_WINOUT, 0);

    gBattle_WIN0H = DISPLAY_WIDTH;

<<<<<<< HEAD
    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER && gPartnerTrainerId != TRAINER_STEVEN_PARTNER)
=======
    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER && gPartnerTrainerId < TRAINER_PARTNER(PARTNER_NONE))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    {
        gBattle_WIN0V = DISPLAY_HEIGHT - 1;
        gBattle_WIN1H = DISPLAY_WIDTH;
        gBattle_WIN1V = 32;
    }
    else
    {
        gBattle_WIN0V = WIN_RANGE(DISPLAY_HEIGHT / 2, DISPLAY_HEIGHT / 2 + 1);
<<<<<<< HEAD
        if (gSaveBlock2Ptr->optionsFastIntro == 1)
        {
            ScanlineEffect_Clear();

=======
        ScanlineEffect_Clear();
        if (B_FAST_INTRO_NO_SLIDE == FALSE && !gTestRunnerHeadless)
        {
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            for (i = 0; i < DISPLAY_HEIGHT / 2; i++)
            {
                gScanlineEffectRegBuffers[0][i] = 0xF0;
                gScanlineEffectRegBuffers[1][i] = 0xF0;
            }

            for (; i < DISPLAY_HEIGHT; i++)
            {
                gScanlineEffectRegBuffers[0][i] = 0xFF10;
                gScanlineEffectRegBuffers[1][i] = 0xFF10;
            }

<<<<<<< HEAD
            while (i < 160)
            {
                gScanlineEffectRegBuffers[0][i] = 0xFF10;
                gScanlineEffectRegBuffers[1][i] = 0xFF10;
                i++;
            }

=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            ScanlineEffect_SetParams(sIntroScanlineParams16Bit);
        }
    }

    ResetPaletteFade();
    gBattle_BG0_X = 0;
    gBattle_BG0_Y = 0;
    gBattle_BG1_X = 0;
    gBattle_BG1_Y = 0;
    gBattle_BG2_X = 0;
    gBattle_BG2_Y = 0;
    gBattle_BG3_X = 0;
    gBattle_BG3_Y = 0;

<<<<<<< HEAD
#if TX_DEBUG_SYSTEM_ENABLE == FALSE 
    
    gBattleTerrain = BattleSetup_GetTerrainId();
#else
    if (!gIsDebugBattle)
        gBattleTerrain = BattleSetup_GetTerrainId();
#endif
    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
        gBattleTerrain = BATTLE_TERRAIN_BUILDING;
=======
    if (!DEBUG_OVERWORLD_MENU || (DEBUG_OVERWORLD_MENU && !gIsDebugBattle))
    {
        gBattleEnvironment = BattleSetup_GetEnvironmentId();
    }
    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
        gBattleEnvironment = BATTLE_ENVIRONMENT_BUILDING;

    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER && !(gBattleTypeFlags & (BATTLE_TYPE_FRONTIER
                                                                        | BATTLE_TYPE_EREADER_TRAINER
                                                                        | BATTLE_TYPE_TRAINER_HILL
                                                                        | BATTLE_TYPE_RECORDED)))
    {
        switch (GetTrainerBattleType(TRAINER_BATTLE_PARAM.opponentA))
        {
        case TRAINER_BATTLE_TYPE_SINGLES:
            break;
        case TRAINER_BATTLE_TYPE_DOUBLES:
            gBattleTypeFlags |= BATTLE_TYPE_DOUBLE;
            break;
        }
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    InitBattleBgsVideo();
    LoadBattleTextboxAndBackground();
    ResetSpriteData();
    ResetTasks();
<<<<<<< HEAD
    if (gSaveBlock2Ptr->optionsFastIntro == 1)
    {
        DrawBattleEntryBackground();
    }
=======
    if (B_FAST_INTRO_NO_SLIDE == FALSE && !gTestRunnerHeadless)
        DrawBattleEntryBackground();
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    FreeAllSpritePalettes();
    gReservedSpritePaletteCount = MAX_BATTLERS_COUNT;
    SetVBlankCallback(VBlankCB_Battle);
    SetUpBattleVarsAndBirchZigzagoon();

    if (gBattleTypeFlags & BATTLE_TYPE_MULTI && gBattleTypeFlags & BATTLE_TYPE_BATTLE_TOWER)
        SetMainCallback2(CB2_HandleStartMultiPartnerBattle);
    else if (gBattleTypeFlags & BATTLE_TYPE_MULTI && gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
        SetMainCallback2(CB2_HandleStartMultiPartnerBattle);
    else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
        SetMainCallback2(CB2_HandleStartMultiBattle);
    else
        SetMainCallback2(CB2_HandleStartBattle);

<<<<<<< HEAD
#if TX_DEBUG_SYSTEM_ENABLE == FALSE 
    if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED)))
    {
        CreateNPCTrainerParty(&gEnemyParty[0], gTrainerBattleOpponent_A, TRUE);
        if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
            CreateNPCTrainerParty(&gEnemyParty[PARTY_SIZE / 2], gTrainerBattleOpponent_B, FALSE);
        SetWildMonHeldItem();
    }
#else
    if (!gIsDebugBattle)
    {
        if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED)))
        {
            CreateNPCTrainerParty(&gEnemyParty[0], gTrainerBattleOpponent_A, TRUE);
            if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                CreateNPCTrainerParty(&gEnemyParty[PARTY_SIZE / 2], gTrainerBattleOpponent_B, FALSE);
            SetWildMonHeldItem();
            
            if (gSaveBlock1Ptr->tx_Challenges_Mirror && (gBattleTypeFlags & BATTLE_TYPE_TRAINER || gBattleTypeFlags & BATTLE_TYPE_DOUBLE))
            {
                if (!gSaveBlock1Ptr->tx_Challenges_Mirror_Thief)
                {
                    for (j = 0; j < PARTY_SIZE; j++)
                        gPlayerPartyBackup[j] = gPlayerParty[j];
                }
                for (j = 0; j < PARTY_SIZE; j++)
                    gPlayerParty[j] = gEnemyParty[j];
            }
        }
    }
#endif
=======
    if (!DEBUG_OVERWORLD_MENU || (DEBUG_OVERWORLD_MENU && !gIsDebugBattle))
    {
        if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED)))
        {
            CreateNPCTrainerParty(&gEnemyParty[0], TRAINER_BATTLE_PARAM.opponentA, TRUE);
            if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS && !BATTLE_TWO_VS_ONE_OPPONENT)
                CreateNPCTrainerParty(&gEnemyParty[PARTY_SIZE / 2], TRAINER_BATTLE_PARAM.opponentB, FALSE);
            SetWildMonHeldItem();
            CalculateEnemyPartyCount();
        }
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    gMain.inBattle = TRUE;
    gSaveBlock2Ptr->frontier.disableRecordBattle = FALSE;

    for (i = 0; i < PARTY_SIZE; i++)
<<<<<<< HEAD
        AdjustFriendship(&gPlayerParty[i], FRIENDSHIP_EVENT_LEAGUE_BATTLE);

=======
    {
        AdjustFriendship(&gPlayerParty[i], FRIENDSHIP_EVENT_LEAGUE_BATTLE);

        // Apply party-wide start-of-battle form changes for both sides.
        TryFormChange(i, B_SIDE_PLAYER, FORM_CHANGE_BEGIN_BATTLE);
        TryFormChange(i, B_SIDE_OPPONENT, FORM_CHANGE_BEGIN_BATTLE);
    }

    if (TESTING)
    {
        gPlayerPartyCount = CalculatePartyCount(gPlayerParty);
        gEnemyPartyCount = CalculatePartyCount(gEnemyParty);
    }

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    gBattleCommunication[MULTIUSE_STATE] = 0;
}

#define BUFFER_PARTY_VS_SCREEN_STATUS(party, flags, i)                      \
    for ((i) = 0; (i) < PARTY_SIZE; (i)++)                                  \
    {                                                                       \
        u16 species = GetMonData(&(party)[(i)], MON_DATA_SPECIES_OR_EGG);   \
        u16 hp = GetMonData(&(party)[(i)], MON_DATA_HP);                    \
        u32 status = GetMonData(&(party)[(i)], MON_DATA_STATUS);            \
                                                                            \
        if (species == SPECIES_NONE)                                        \
            continue;                                                       \
                                                                            \
        /* Is healthy mon? */                                               \
        if (species != SPECIES_EGG && hp != 0 && status == 0)               \
            (flags) |= 1 << (i) * 2;                                        \
                                                                            \
        if (species == SPECIES_NONE) /* Redundant */                        \
            continue;                                                       \
                                                                            \
        /* Is Egg or statused? */                                           \
        if (hp != 0 && (species == SPECIES_EGG || status != 0))             \
            (flags) |= 2 << (i) * 2;                                        \
                                                                            \
        if (species == SPECIES_NONE) /* Redundant */                        \
            continue;                                                       \
                                                                            \
        /* Is fainted? */                                                   \
        if (species != SPECIES_EGG && hp == 0)                              \
            (flags) |= 3 << (i) * 2;                                        \
    }

// For Vs Screen at link battle start
static void BufferPartyVsScreenHealth_AtStart(void)
{
    u16 flags = 0;
    s32 i;

    BUFFER_PARTY_VS_SCREEN_STATUS(gPlayerParty, flags, i);
    gBattleStruct->multiBuffer.linkBattlerHeader.vsScreenHealthFlagsLo = flags;
    *(&gBattleStruct->multiBuffer.linkBattlerHeader.vsScreenHealthFlagsHi) = flags >> 8;
    gBattleStruct->multiBuffer.linkBattlerHeader.vsScreenHealthFlagsHi |= FlagGet(FLAG_SYS_FRONTIER_PASS) << 7;
}

static void SetPlayerBerryDataInBattleStruct(void)
{
    s32 i;
    struct BattleStruct *battleStruct = gBattleStruct;
    struct BattleEnigmaBerry *battleBerry = &battleStruct->multiBuffer.linkBattlerHeader.battleEnigmaBerry;

    if (IsEnigmaBerryValid() == TRUE)
    {
<<<<<<< HEAD
=======
    #if FREE_ENIGMA_BERRY == FALSE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        for (i = 0; i < BERRY_NAME_LENGTH; i++)
            battleBerry->name[i] = gSaveBlock1Ptr->enigmaBerry.berry.name[i];
        battleBerry->name[i] = EOS;

        for (i = 0; i < BERRY_ITEM_EFFECT_COUNT; i++)
            battleBerry->itemEffect[i] = gSaveBlock1Ptr->enigmaBerry.itemEffect[i];

        battleBerry->holdEffect = gSaveBlock1Ptr->enigmaBerry.holdEffect;
        battleBerry->holdEffectParam = gSaveBlock1Ptr->enigmaBerry.holdEffectParam;
<<<<<<< HEAD
    }
    else
    {
        const struct Berry *berryData = GetBerryInfo(ItemIdToBerryType(ITEM_ENIGMA_BERRY));
=======
    #endif //FREE_ENIGMA_BERRY
    }
    else
    {
        const struct Berry *berryData = GetBerryInfo(ItemIdToBerryType(ITEM_ENIGMA_BERRY_E_READER));
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

        for (i = 0; i < BERRY_NAME_LENGTH; i++)
            battleBerry->name[i] = berryData->name[i];
        battleBerry->name[i] = EOS;

        for (i = 0; i < BERRY_ITEM_EFFECT_COUNT; i++)
            battleBerry->itemEffect[i] = 0;

        battleBerry->holdEffect = HOLD_EFFECT_NONE;
        battleBerry->holdEffectParam = 0;
    }
}

static void SetAllPlayersBerryData(void)
{
    s32 i, j;

    if (!(gBattleTypeFlags & BATTLE_TYPE_LINK))
    {
        if (IsEnigmaBerryValid() == TRUE)
        {
<<<<<<< HEAD
=======
        #if FREE_ENIGMA_BERRY == FALSE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            for (i = 0; i < BERRY_NAME_LENGTH; i++)
            {
                gEnigmaBerries[0].name[i] = gSaveBlock1Ptr->enigmaBerry.berry.name[i];
                gEnigmaBerries[2].name[i] = gSaveBlock1Ptr->enigmaBerry.berry.name[i];
            }
            gEnigmaBerries[0].name[i] = EOS;
            gEnigmaBerries[2].name[i] = EOS;

            for (i = 0; i < BERRY_ITEM_EFFECT_COUNT; i++)
            {
                gEnigmaBerries[0].itemEffect[i] = gSaveBlock1Ptr->enigmaBerry.itemEffect[i];
                gEnigmaBerries[2].itemEffect[i] = gSaveBlock1Ptr->enigmaBerry.itemEffect[i];
            }

            gEnigmaBerries[0].holdEffect = gSaveBlock1Ptr->enigmaBerry.holdEffect;
            gEnigmaBerries[2].holdEffect = gSaveBlock1Ptr->enigmaBerry.holdEffect;
            gEnigmaBerries[0].holdEffectParam = gSaveBlock1Ptr->enigmaBerry.holdEffectParam;
            gEnigmaBerries[2].holdEffectParam = gSaveBlock1Ptr->enigmaBerry.holdEffectParam;
<<<<<<< HEAD
        }
        else
        {
            const struct Berry *berryData = GetBerryInfo(ItemIdToBerryType(ITEM_ENIGMA_BERRY));
=======
        #endif //FREE_ENIGMA_BERRY
        }
        else
        {
            const struct Berry *berryData = GetBerryInfo(ItemIdToBerryType(ITEM_ENIGMA_BERRY_E_READER));
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

            for (i = 0; i < BERRY_NAME_LENGTH; i++)
            {
                gEnigmaBerries[0].name[i] = berryData->name[i];
                gEnigmaBerries[2].name[i] = berryData->name[i];
            }
            gEnigmaBerries[0].name[i] = EOS;
            gEnigmaBerries[2].name[i] = EOS;

            for (i = 0; i < BERRY_ITEM_EFFECT_COUNT; i++)
            {
                gEnigmaBerries[0].itemEffect[i] = 0;
                gEnigmaBerries[2].itemEffect[i] = 0;
            }

            gEnigmaBerries[0].holdEffect = HOLD_EFFECT_NONE;
            gEnigmaBerries[2].holdEffect = HOLD_EFFECT_NONE;
            gEnigmaBerries[0].holdEffectParam = 0;
            gEnigmaBerries[2].holdEffectParam = 0;
        }
    }
    else
    {
        s32 numPlayers;
        struct BattleEnigmaBerry *src;
<<<<<<< HEAD
        u8 battlerId;
=======
        u32 battler;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

        if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
        {
            if (gBattleTypeFlags & BATTLE_TYPE_BATTLE_TOWER)
                numPlayers = 2;
            else
                numPlayers = 4;

            for (i = 0; i < numPlayers; i++)
            {
                src = (struct BattleEnigmaBerry *)(gBlockRecvBuffer[i] + 2);
<<<<<<< HEAD
                battlerId = gLinkPlayers[i].id;

                for (j = 0; j < BERRY_NAME_LENGTH; j++)
                    gEnigmaBerries[battlerId].name[j] = src->name[j];
                gEnigmaBerries[battlerId].name[j] = EOS;

                for (j = 0; j < BERRY_ITEM_EFFECT_COUNT; j++)
                    gEnigmaBerries[battlerId].itemEffect[j] = src->itemEffect[j];

                gEnigmaBerries[battlerId].holdEffect = src->holdEffect;
                gEnigmaBerries[battlerId].holdEffectParam = src->holdEffectParam;
=======
                battler = gLinkPlayers[i].id;

                for (j = 0; j < BERRY_NAME_LENGTH; j++)
                    gEnigmaBerries[battler].name[j] = src->name[j];
                gEnigmaBerries[battler].name[j] = EOS;

                for (j = 0; j < BERRY_ITEM_EFFECT_COUNT; j++)
                    gEnigmaBerries[battler].itemEffect[j] = src->itemEffect[j];

                gEnigmaBerries[battler].holdEffect = src->holdEffect;
                gEnigmaBerries[battler].holdEffectParam = src->holdEffectParam;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            }
        }
        else
        {
            for (i = 0; i < 2; i++)
            {
                src = (struct BattleEnigmaBerry *)(gBlockRecvBuffer[i] + 2);

                for (j = 0; j < BERRY_NAME_LENGTH; j++)
                {
                    gEnigmaBerries[i].name[j] = src->name[j];
                    gEnigmaBerries[i + 2].name[j] = src->name[j];
                }
                gEnigmaBerries[i].name[j] = EOS;
                gEnigmaBerries[i + 2].name[j] = EOS;

                for (j = 0; j < BERRY_ITEM_EFFECT_COUNT; j++)
                {
                    gEnigmaBerries[i].itemEffect[j] = src->itemEffect[j];
                    gEnigmaBerries[i + 2].itemEffect[j] = src->itemEffect[j];
                }

                gEnigmaBerries[i].holdEffect = src->holdEffect;
                gEnigmaBerries[i + 2].holdEffect = src->holdEffect;
                gEnigmaBerries[i].holdEffectParam = src->holdEffectParam;
                gEnigmaBerries[i + 2].holdEffectParam = src->holdEffectParam;
            }
        }
    }
}

// This was inlined in Ruby/Sapphire
static void FindLinkBattleMaster(u8 numPlayers, u8 multiPlayerId)
{
    u8 found = 0;

    // If player 1 is playing the minimum version, player 1 is master.
    if (gBlockRecvBuffer[0][0] == 0x100)
    {
        if (multiPlayerId == 0)
            gBattleTypeFlags |= BATTLE_TYPE_IS_MASTER | BATTLE_TYPE_TRAINER;
        else
            gBattleTypeFlags |= BATTLE_TYPE_TRAINER;
        found++;
    }

    if (found == 0)
    {
        // If multiple different versions are being used, player 1 is master.
        s32 i;

        for (i = 0; i < numPlayers; i++)
        {
            if (gBlockRecvBuffer[0][0] != gBlockRecvBuffer[i][0])
                break;
        }

        if (i == numPlayers)
        {
            if (multiPlayerId == 0)
                gBattleTypeFlags |= BATTLE_TYPE_IS_MASTER | BATTLE_TYPE_TRAINER;
            else
                gBattleTypeFlags |= BATTLE_TYPE_TRAINER;
            found++;
        }

        if (found == 0)
        {
            // Lowest index player with the highest game version is master.
            for (i = 0; i < numPlayers; i++)
            {
                if (gBlockRecvBuffer[i][0] == 0x300 && i != multiPlayerId)
                {
                    if (i < multiPlayerId)
                        break;
                }
                if (gBlockRecvBuffer[i][0] > 0x300 && i != multiPlayerId)
                    break;
            }

            if (i == numPlayers)
                gBattleTypeFlags |= BATTLE_TYPE_IS_MASTER | BATTLE_TYPE_TRAINER;
            else
                gBattleTypeFlags |= BATTLE_TYPE_TRAINER;
        }
    }
}

static void CB2_HandleStartBattle(void)
{
    u8 playerMultiplayerId;
    u8 enemyMultiplayerId;

    RunTasks();
    AnimateSprites();
    BuildOamBuffer();

    playerMultiplayerId = GetMultiplayerId();
    gBattleScripting.multiplayerId = playerMultiplayerId;
    enemyMultiplayerId = playerMultiplayerId ^ BIT_SIDE;

    switch (gBattleCommunication[MULTIUSE_STATE])
    {
    case 0:
        if (!IsDma3ManagerBusyWithBgCopy())
        {
            ShowBg(0);
            ShowBg(1);
            ShowBg(2);
            ShowBg(3);
            FillAroundBattleWindows();
            gBattleCommunication[MULTIUSE_STATE] = 1;
        }
        if (gWirelessCommType)
            LoadWirelessStatusIndicatorSpriteGfx();
        break;
    case 1:
        if (gBattleTypeFlags & BATTLE_TYPE_LINK)
        {
            if (gReceivedRemoteLinkPlayers)
            {
                if (IsLinkTaskFinished())
                {
                    // 0x300
                    *(&gBattleStruct->multiBuffer.linkBattlerHeader.versionSignatureLo) = 0;
                    *(&gBattleStruct->multiBuffer.linkBattlerHeader.versionSignatureHi) = 3;
                    BufferPartyVsScreenHealth_AtStart();
                    SetPlayerBerryDataInBattleStruct();

<<<<<<< HEAD
                    if (gTrainerBattleOpponent_A == TRAINER_UNION_ROOM)
=======
                    if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_UNION_ROOM)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                    {
                        gLinkPlayers[0].id = 0;
                        gLinkPlayers[1].id = 1;
                    }

                    SendBlock(BitmaskAllOtherLinkPlayers(), &gBattleStruct->multiBuffer.linkBattlerHeader, sizeof(gBattleStruct->multiBuffer.linkBattlerHeader));
                    gBattleCommunication[MULTIUSE_STATE] = 2;
                }
                if (gWirelessCommType)
                    CreateWirelessStatusIndicatorSprite(0, 0);
            }
        }
        else
        {
            if (!(gBattleTypeFlags & BATTLE_TYPE_RECORDED))
                gBattleTypeFlags |= BATTLE_TYPE_IS_MASTER;
            gBattleCommunication[MULTIUSE_STATE] = 15;
            SetAllPlayersBerryData();
        }
        break;
    case 2:
        if ((GetBlockReceivedStatus() & 3) == 3)
        {
            u8 taskId;

            ResetBlockReceivedFlags();
            FindLinkBattleMaster(2, playerMultiplayerId);
            SetAllPlayersBerryData();
            taskId = CreateTask(InitLinkBattleVsScreen, 0);
            gTasks[taskId].data[1] = 0x10E;
            gTasks[taskId].data[2] = 0x5A;
            gTasks[taskId].data[5] = 0;
            gTasks[taskId].data[3] = gBattleStruct->multiBuffer.linkBattlerHeader.vsScreenHealthFlagsLo | (gBattleStruct->multiBuffer.linkBattlerHeader.vsScreenHealthFlagsHi << 8);
            gTasks[taskId].data[4] = gBlockRecvBuffer[enemyMultiplayerId][1];
            RecordedBattle_SetFrontierPassFlagFromHword(gBlockRecvBuffer[playerMultiplayerId][1]);
            RecordedBattle_SetFrontierPassFlagFromHword(gBlockRecvBuffer[enemyMultiplayerId][1]);
<<<<<<< HEAD
            //SetDeoxysStats();
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 3:
        // Link battle, send/receive party Pokémon 2 at a time
        if (IsLinkTaskFinished())
        {
            // Send Pokémon 1-2
            SendBlock(BitmaskAllOtherLinkPlayers(), gPlayerParty, sizeof(struct Pokemon) * 2);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 4:
        if ((GetBlockReceivedStatus() & 3) == 3)
        {
            // Recv Pokémon 1-2
            ResetBlockReceivedFlags();
            memcpy(gEnemyParty, gBlockRecvBuffer[enemyMultiplayerId], sizeof(struct Pokemon) * 2);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 7:
        if (IsLinkTaskFinished())
        {
            // Send Pokémon 3-4
            SendBlock(BitmaskAllOtherLinkPlayers(), &gPlayerParty[2], sizeof(struct Pokemon) * 2);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 8:
        if ((GetBlockReceivedStatus() & 3) == 3)
        {
            // Recv Pokémon 3-4
            ResetBlockReceivedFlags();
            memcpy(&gEnemyParty[2], gBlockRecvBuffer[enemyMultiplayerId], sizeof(struct Pokemon) * 2);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 11:
        if (IsLinkTaskFinished())
        {
            // Send Pokémon 5-6
            SendBlock(BitmaskAllOtherLinkPlayers(), &gPlayerParty[4], sizeof(struct Pokemon) * 2);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 12:
        if ((GetBlockReceivedStatus() & 3) == 3)
        {
            // Recv Pokémon 5-6
            ResetBlockReceivedFlags();
            memcpy(&gEnemyParty[4], gBlockRecvBuffer[enemyMultiplayerId], sizeof(struct Pokemon) * 2);

            TryCorrectShedinjaLanguage(&gEnemyParty[0]);
            TryCorrectShedinjaLanguage(&gEnemyParty[1]);
            TryCorrectShedinjaLanguage(&gEnemyParty[2]);
            TryCorrectShedinjaLanguage(&gEnemyParty[3]);
            TryCorrectShedinjaLanguage(&gEnemyParty[4]);
            TryCorrectShedinjaLanguage(&gEnemyParty[5]);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 15:
        InitBattleControllers();
        RecordedBattle_SetTrainerInfo();
        gBattleCommunication[SPRITES_INIT_STATE1] = 0;
        gBattleCommunication[SPRITES_INIT_STATE2] = 0;
        if (gBattleTypeFlags & BATTLE_TYPE_LINK)
        {
            // Check if both players are using Emerald
            // to determine if the recorded battle rng
            // seed needs to be sent
            s32 i;
            for (i = 0; i < 2 && (gLinkPlayers[i].version & 0xFF) == VERSION_EMERALD; i++);

            if (i == 2)
                gBattleCommunication[MULTIUSE_STATE] = 16;
            else
                gBattleCommunication[MULTIUSE_STATE] = 18;
        }
        else
        {
            gBattleCommunication[MULTIUSE_STATE] = 18;
        }
        break;
    case 16:
        // Both players are using Emerald, send rng seed for recorded battle
        if (IsLinkTaskFinished())
        {
            SendBlock(BitmaskAllOtherLinkPlayers(), &gRecordedBattleRngSeed, sizeof(gRecordedBattleRngSeed));
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 17:
        // Receive rng seed for recorded battle (only read it if partner is the link master)
        if ((GetBlockReceivedStatus() & 3) == 3)
        {
            ResetBlockReceivedFlags();
            if (!(gBattleTypeFlags & BATTLE_TYPE_IS_MASTER))
                memcpy(&gRecordedBattleRngSeed, gBlockRecvBuffer[enemyMultiplayerId], sizeof(gRecordedBattleRngSeed));
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 18:
        // Finish, start battle
        if (BattleInitAllSprites(&gBattleCommunication[SPRITES_INIT_STATE1], &gBattleCommunication[SPRITES_INIT_STATE2]))
        {
            gPreBattleCallback1 = gMain.callback1;
            gMain.callback1 = BattleMainCB1;
            SetMainCallback2(BattleMainCB2);
            if (gBattleTypeFlags & BATTLE_TYPE_LINK)
                gBattleTypeFlags |= BATTLE_TYPE_LINK_IN_BATTLE;
        }
        break;
    // Introduce short delays between sending party Pokémon for link
    case 5:
    case 9:
    case 13:
        gBattleCommunication[MULTIUSE_STATE]++;
        gBattleCommunication[1] = 1;
    case 6:
    case 10:
    case 14:
        if (--gBattleCommunication[1] == 0)
            gBattleCommunication[MULTIUSE_STATE]++;
        break;
    }
}

static void CB2_HandleStartMultiPartnerBattle(void)
{
    u8 playerMultiplayerId;
    u8 partnerMultiplayerId;

    RunTasks();
    AnimateSprites();
    BuildOamBuffer();

    playerMultiplayerId = GetMultiplayerId();
    gBattleScripting.multiplayerId = playerMultiplayerId;
    partnerMultiplayerId = playerMultiplayerId ^ BIT_SIDE;

    switch (gBattleCommunication[MULTIUSE_STATE])
    {
    case 0:
        if (!IsDma3ManagerBusyWithBgCopy())
        {
            ShowBg(0);
            ShowBg(1);
            ShowBg(2);
            ShowBg(3);
            FillAroundBattleWindows();
            gBattleCommunication[MULTIUSE_STATE] = 1;
        }
        if (gWirelessCommType)
            LoadWirelessStatusIndicatorSpriteGfx();
        // fall through
    case 1:
        if (gBattleTypeFlags & BATTLE_TYPE_LINK)
        {
            if (gReceivedRemoteLinkPlayers)
            {
                u8 language;

                gLinkPlayers[0].id = 0;
                gLinkPlayers[1].id = 2;
                gLinkPlayers[2].id = 1;
                gLinkPlayers[3].id = 3;
<<<<<<< HEAD
                GetFrontierTrainerName(gLinkPlayers[2].name, gTrainerBattleOpponent_A);
                GetFrontierTrainerName(gLinkPlayers[3].name, gTrainerBattleOpponent_B);
                GetBattleTowerTrainerLanguage(&language, gTrainerBattleOpponent_A);
                gLinkPlayers[2].language = language;
                GetBattleTowerTrainerLanguage(&language, gTrainerBattleOpponent_B);
=======
                GetFrontierTrainerName(gLinkPlayers[2].name, TRAINER_BATTLE_PARAM.opponentA);
                GetFrontierTrainerName(gLinkPlayers[3].name, TRAINER_BATTLE_PARAM.opponentB);
                GetBattleTowerTrainerLanguage(&language, TRAINER_BATTLE_PARAM.opponentA);
                gLinkPlayers[2].language = language;
                GetBattleTowerTrainerLanguage(&language, TRAINER_BATTLE_PARAM.opponentB);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                gLinkPlayers[3].language = language;

                if (IsLinkTaskFinished())
                {
                    // 0x300
                    *(&gBattleStruct->multiBuffer.linkBattlerHeader.versionSignatureLo) = 0;
                    *(&gBattleStruct->multiBuffer.linkBattlerHeader.versionSignatureHi) = 3;
                    BufferPartyVsScreenHealth_AtStart();
                    SetPlayerBerryDataInBattleStruct();
                    SendBlock(BitmaskAllOtherLinkPlayers(), &gBattleStruct->multiBuffer.linkBattlerHeader, sizeof(gBattleStruct->multiBuffer.linkBattlerHeader));
                    gBattleCommunication[MULTIUSE_STATE] = 2;
                }

                if (gWirelessCommType)
                    CreateWirelessStatusIndicatorSprite(0, 0);
            }
        }
        else
        {
            if (!(gBattleTypeFlags & BATTLE_TYPE_RECORDED))
                gBattleTypeFlags |= BATTLE_TYPE_IS_MASTER;
            gBattleCommunication[MULTIUSE_STATE] = 13;
            SetAllPlayersBerryData();
        }
        break;
    case 2:
        if ((GetBlockReceivedStatus() & 3) == 3)
        {
            u8 taskId;

            ResetBlockReceivedFlags();
            FindLinkBattleMaster(2, playerMultiplayerId);
            SetAllPlayersBerryData();
            taskId = CreateTask(InitLinkBattleVsScreen, 0);
            gTasks[taskId].data[1] = 0x10E;
            gTasks[taskId].data[2] = 0x5A;
            gTasks[taskId].data[5] = 0;
            gTasks[taskId].data[3] = 0x145;
            gTasks[taskId].data[4] = 0x145;
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 3:
        // Link battle, send/receive party Pokémon in groups
        if (IsLinkTaskFinished())
        {
            // Send Pokémon 1-2
            SendBlock(BitmaskAllOtherLinkPlayers(), gPlayerParty, sizeof(struct Pokemon) * 2);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 4:
        if ((GetBlockReceivedStatus() & 3) == 3)
        {
            // Recv partner's Pokémon 1-2, and copy partner's and own Pokémon into party positions
            ResetBlockReceivedFlags();
            if (gLinkPlayers[playerMultiplayerId].id != 0)
            {
                memcpy(gPlayerParty, gBlockRecvBuffer[partnerMultiplayerId], sizeof(struct Pokemon) * 2);
                memcpy(&gPlayerParty[MULTI_PARTY_SIZE], gBlockRecvBuffer[playerMultiplayerId], sizeof(struct Pokemon) * 2);
            }
            else
            {
                memcpy(gPlayerParty, gBlockRecvBuffer[playerMultiplayerId], sizeof(struct Pokemon) * 2);
                memcpy(&gPlayerParty[MULTI_PARTY_SIZE], gBlockRecvBuffer[partnerMultiplayerId], sizeof(struct Pokemon) * 2);
            }
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 5:
        if (IsLinkTaskFinished())
        {
            // Send Pokémon 3
            SendBlock(BitmaskAllOtherLinkPlayers(), &gPlayerParty[2], sizeof(struct Pokemon));
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 6:
        if ((GetBlockReceivedStatus() & 3) == 3)
        {
            // Recv partner's Pokémon 3, and copy partner's and own Pokémon into party positions
            ResetBlockReceivedFlags();
            if (gLinkPlayers[playerMultiplayerId].id != 0)
            {
                memcpy(&gPlayerParty[2], gBlockRecvBuffer[partnerMultiplayerId], sizeof(struct Pokemon));
                memcpy(&gPlayerParty[2 + MULTI_PARTY_SIZE], gBlockRecvBuffer[playerMultiplayerId], sizeof(struct Pokemon));
            }
            else
            {
                memcpy(&gPlayerParty[2], gBlockRecvBuffer[playerMultiplayerId], sizeof(struct Pokemon));
                memcpy(&gPlayerParty[2 + MULTI_PARTY_SIZE], gBlockRecvBuffer[partnerMultiplayerId], sizeof(struct Pokemon));
            }
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 7:
        if (IsLinkTaskFinished())
        {
            // Send enemy Pokémon 1-2 to partner
            SendBlock(BitmaskAllOtherLinkPlayers(), gEnemyParty, sizeof(struct Pokemon) * 2);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 8:
        if ((GetBlockReceivedStatus() & 3) == 3)
        {
            // Recv enemy Pokémon 1-2 (if not master)
            ResetBlockReceivedFlags();
            if (GetMultiplayerId() != 0)
                memcpy(gEnemyParty, gBlockRecvBuffer[0], sizeof(struct Pokemon) * 2);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 9:
        if (IsLinkTaskFinished())
        {
            // Send enemy Pokémon 3-4 to partner
            SendBlock(BitmaskAllOtherLinkPlayers(), &gEnemyParty[2], sizeof(struct Pokemon) * 2);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 10:
        if ((GetBlockReceivedStatus() & 3) == 3)
        {
            // Recv enemy Pokémon 3-4 (if not master)
            ResetBlockReceivedFlags();
            if (GetMultiplayerId() != 0)
                memcpy(&gEnemyParty[2], gBlockRecvBuffer[0], sizeof(struct Pokemon) * 2);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 11:
        if (IsLinkTaskFinished())
        {
            // Send enemy Pokémon 5-6 to partner
            SendBlock(BitmaskAllOtherLinkPlayers(), &gEnemyParty[4], sizeof(struct Pokemon) * 2);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 12:
        if ((GetBlockReceivedStatus() & 3) == 3)
        {
            // Recv enemy Pokémon 5-6 (if not master)
            ResetBlockReceivedFlags();
            if (GetMultiplayerId() != 0)
                memcpy(&gEnemyParty[4], gBlockRecvBuffer[0], sizeof(struct Pokemon) * 2);

            TryCorrectShedinjaLanguage(&gPlayerParty[0]);
            TryCorrectShedinjaLanguage(&gPlayerParty[1]);
            TryCorrectShedinjaLanguage(&gPlayerParty[2]);
            TryCorrectShedinjaLanguage(&gPlayerParty[3]);
            TryCorrectShedinjaLanguage(&gPlayerParty[4]);
            TryCorrectShedinjaLanguage(&gPlayerParty[5]);
            TryCorrectShedinjaLanguage(&gEnemyParty[0]);
            TryCorrectShedinjaLanguage(&gEnemyParty[1]);
            TryCorrectShedinjaLanguage(&gEnemyParty[2]);
            TryCorrectShedinjaLanguage(&gEnemyParty[3]);
            TryCorrectShedinjaLanguage(&gEnemyParty[4]);
            TryCorrectShedinjaLanguage(&gEnemyParty[5]);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 13:
        InitBattleControllers();
        RecordedBattle_SetTrainerInfo();
        gBattleCommunication[SPRITES_INIT_STATE1] = 0;
        gBattleCommunication[SPRITES_INIT_STATE2] = 0;
        if (gBattleTypeFlags & BATTLE_TYPE_LINK)
            gBattleCommunication[MULTIUSE_STATE] = 14;
        else
            gBattleCommunication[MULTIUSE_STATE] = 16;
        break;
    case 14:
        // Send rng seed for recorded battle
        if (IsLinkTaskFinished())
        {
            SendBlock(BitmaskAllOtherLinkPlayers(), &gRecordedBattleRngSeed, sizeof(gRecordedBattleRngSeed));
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 15:
        // Receive rng seed for recorded battle (only read it if partner is the link master)
        if ((GetBlockReceivedStatus() & 3) == 3)
        {
            ResetBlockReceivedFlags();
            if (!(gBattleTypeFlags & BATTLE_TYPE_IS_MASTER))
                memcpy(&gRecordedBattleRngSeed, gBlockRecvBuffer[partnerMultiplayerId], sizeof(gRecordedBattleRngSeed));
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 16:
        // Finish, start battle
        if (BattleInitAllSprites(&gBattleCommunication[SPRITES_INIT_STATE1], &gBattleCommunication[SPRITES_INIT_STATE2]))
        {
            TrySetLinkBattleTowerEnemyPartyLevel();
            gPreBattleCallback1 = gMain.callback1;
            gMain.callback1 = BattleMainCB1;
            SetMainCallback2(BattleMainCB2);
            if (gBattleTypeFlags & BATTLE_TYPE_LINK)
                gBattleTypeFlags |= BATTLE_TYPE_LINK_IN_BATTLE;
        }
        break;
    }
}

static void SetMultiPartnerMenuParty(u8 offset)
{
    s32 i;

    for (i = 0; i < MULTI_PARTY_SIZE; i++)
    {
        gMultiPartnerParty[i].species     = GetMonData(&gPlayerParty[offset + i], MON_DATA_SPECIES);
        gMultiPartnerParty[i].heldItem    = GetMonData(&gPlayerParty[offset + i], MON_DATA_HELD_ITEM);
        GetMonData(&gPlayerParty[offset + i], MON_DATA_NICKNAME, gMultiPartnerParty[i].nickname);
        gMultiPartnerParty[i].level       = GetMonData(&gPlayerParty[offset + i], MON_DATA_LEVEL);
        gMultiPartnerParty[i].hp          = GetMonData(&gPlayerParty[offset + i], MON_DATA_HP);
        gMultiPartnerParty[i].maxhp       = GetMonData(&gPlayerParty[offset + i], MON_DATA_MAX_HP);
        gMultiPartnerParty[i].status      = GetMonData(&gPlayerParty[offset + i], MON_DATA_STATUS);
        gMultiPartnerParty[i].personality = GetMonData(&gPlayerParty[offset + i], MON_DATA_PERSONALITY);
        gMultiPartnerParty[i].gender      = GetMonGender(&gPlayerParty[offset + i]);
        StripExtCtrlCodes(gMultiPartnerParty[i].nickname);
        if (GetMonData(&gPlayerParty[offset + i], MON_DATA_LANGUAGE) != LANGUAGE_JAPANESE)
            PadNameString(gMultiPartnerParty[i].nickname, CHAR_SPACE);
    }
    memcpy(sMultiPartnerPartyBuffer, gMultiPartnerParty, sizeof(gMultiPartnerParty));
}

static void CB2_PreInitMultiBattle(void)
{
    s32 i;
    u8 playerMultiplierId;
    s32 numPlayers = MAX_BATTLERS_COUNT;
    u8 blockMask = 0xF;
    u32 *savedBattleTypeFlags;
    void (**savedCallback)(void);

    if (gBattleTypeFlags & BATTLE_TYPE_BATTLE_TOWER)
    {
        numPlayers = 2;
        blockMask = 3;
    }

    playerMultiplierId = GetMultiplayerId();
    gBattleScripting.multiplayerId = playerMultiplierId;
    savedCallback = &gBattleStruct->savedCallback;
    savedBattleTypeFlags = &gBattleStruct->savedBattleTypeFlags;

    RunTasks();
    AnimateSprites();
    BuildOamBuffer();

    switch (gBattleCommunication[MULTIUSE_STATE])
    {
    case 0:
        if (gReceivedRemoteLinkPlayers && IsLinkTaskFinished())
        {
            sMultiPartnerPartyBuffer = Alloc(sizeof(gMultiPartnerParty));
            SetMultiPartnerMenuParty(0);
            SendBlock(BitmaskAllOtherLinkPlayers(), sMultiPartnerPartyBuffer, sizeof(gMultiPartnerParty));
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 1:
        if ((GetBlockReceivedStatus() & blockMask) == blockMask)
        {
            ResetBlockReceivedFlags();
            for (i = 0; i < numPlayers; i++)
            {
                if (i == playerMultiplierId)
                    continue;

                if (numPlayers == MAX_LINK_PLAYERS)
                {
                    if ((!(gLinkPlayers[i].id & 1) && !(gLinkPlayers[playerMultiplierId].id & 1))
                        || (gLinkPlayers[i].id & 1 && gLinkPlayers[playerMultiplierId].id & 1))
                    {
                        memcpy(gMultiPartnerParty, gBlockRecvBuffer[i], sizeof(gMultiPartnerParty));
                    }
                }
                else
                {
                    memcpy(gMultiPartnerParty, gBlockRecvBuffer[i], sizeof(gMultiPartnerParty));
                }
            }
            gBattleCommunication[MULTIUSE_STATE]++;
            *savedCallback = gMain.savedCallback;
            *savedBattleTypeFlags = gBattleTypeFlags;
            gMain.savedCallback = CB2_PreInitMultiBattle;
            ShowPartyMenuToShowcaseMultiBattleParty();
        }
        break;
    case 2:
        if (IsLinkTaskFinished() && !gPaletteFade.active)
        {
            gBattleCommunication[MULTIUSE_STATE]++;
            if (gWirelessCommType)
                SetLinkStandbyCallback();
            else
                SetCloseLinkCallback();
        }
        break;
    case 3:
        if (gWirelessCommType)
        {
            if (IsLinkRfuTaskFinished())
            {
                gBattleTypeFlags = *savedBattleTypeFlags;
                gMain.savedCallback = *savedCallback;
                SetMainCallback2(CB2_InitBattleInternal);
                FREE_AND_SET_NULL(sMultiPartnerPartyBuffer);
            }
        }
        else if (gReceivedRemoteLinkPlayers == 0)
        {
            gBattleTypeFlags = *savedBattleTypeFlags;
            gMain.savedCallback = *savedCallback;
            SetMainCallback2(CB2_InitBattleInternal);
            FREE_AND_SET_NULL(sMultiPartnerPartyBuffer);
        }
        break;
    }
}

static void CB2_PreInitIngamePlayerPartnerBattle(void)
{
    u32 *savedBattleTypeFlags;
    void (**savedCallback)(void);

    savedCallback = &gBattleStruct->savedCallback;
    savedBattleTypeFlags = &gBattleStruct->savedBattleTypeFlags;

    RunTasks();
    AnimateSprites();
    BuildOamBuffer();

    switch (gBattleCommunication[MULTIUSE_STATE])
    {
    case 0:
        sMultiPartnerPartyBuffer = Alloc(sizeof(gMultiPartnerParty));
        SetMultiPartnerMenuParty(MULTI_PARTY_SIZE);
        gBattleCommunication[MULTIUSE_STATE]++;
        *savedCallback = gMain.savedCallback;
        *savedBattleTypeFlags = gBattleTypeFlags;
        gMain.savedCallback = CB2_PreInitIngamePlayerPartnerBattle;
<<<<<<< HEAD
        ShowPartyMenuToShowcaseMultiBattleParty();
=======
        if (!PlayerHasFollowerNPC() || !FollowerNPCIsBattlePartner() || (FNPC_NPC_FOLLOWER_PARTY_PREVIEW && FollowerNPCIsBattlePartner()))
            ShowPartyMenuToShowcaseMultiBattleParty();

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        break;
    case 1:
        if (!gPaletteFade.active)
        {
            gBattleCommunication[MULTIUSE_STATE] = 2;
            gBattleTypeFlags = *savedBattleTypeFlags;
            gMain.savedCallback = *savedCallback;
            SetMainCallback2(CB2_InitBattleInternal);
            FREE_AND_SET_NULL(sMultiPartnerPartyBuffer);
        }
        break;
    }
}

static void CB2_HandleStartMultiBattle(void)
{
    u8 playerMultiplayerId;
    s32 id;
    u8 var;

    playerMultiplayerId = GetMultiplayerId();
    gBattleScripting.multiplayerId = playerMultiplayerId;

    RunTasks();
    AnimateSprites();
    BuildOamBuffer();

    switch (gBattleCommunication[MULTIUSE_STATE])
    {
    case 0:
        if (!IsDma3ManagerBusyWithBgCopy())
        {
            ShowBg(0);
            ShowBg(1);
            ShowBg(2);
            ShowBg(3);
            FillAroundBattleWindows();
            gBattleCommunication[MULTIUSE_STATE] = 1;
        }
        if (gWirelessCommType)
            LoadWirelessStatusIndicatorSpriteGfx();
        break;
    case 1:
        if (gBattleTypeFlags & BATTLE_TYPE_LINK)
        {
            if (gReceivedRemoteLinkPlayers)
            {
                if (IsLinkTaskFinished())
                {
                    // 0x300
                    *(&gBattleStruct->multiBuffer.linkBattlerHeader.versionSignatureLo) = 0;
                    *(&gBattleStruct->multiBuffer.linkBattlerHeader.versionSignatureHi) = 3;
                    BufferPartyVsScreenHealth_AtStart();
                    SetPlayerBerryDataInBattleStruct();

                    SendBlock(BitmaskAllOtherLinkPlayers(), &gBattleStruct->multiBuffer.linkBattlerHeader, sizeof(gBattleStruct->multiBuffer.linkBattlerHeader));
                    gBattleCommunication[MULTIUSE_STATE]++;
                }
                if (gWirelessCommType)
                    CreateWirelessStatusIndicatorSprite(0, 0);
            }
        }
        else
        {
            if (!(gBattleTypeFlags & BATTLE_TYPE_RECORDED))
                gBattleTypeFlags |= BATTLE_TYPE_IS_MASTER;
            gBattleCommunication[MULTIUSE_STATE] = 7;
            SetAllPlayersBerryData();
        }
        break;
    case 2:
        if ((GetBlockReceivedStatus() & 0xF) == 0xF)
        {
            ResetBlockReceivedFlags();
            FindLinkBattleMaster(4, playerMultiplayerId);
            SetAllPlayersBerryData();
<<<<<<< HEAD
            //SetDeoxysStats();
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            var = CreateTask(InitLinkBattleVsScreen, 0);
            gTasks[var].data[1] = 0x10E;
            gTasks[var].data[2] = 0x5A;
            gTasks[var].data[5] = 0;
            gTasks[var].data[3] = 0;
            gTasks[var].data[4] = 0;

            for (id = 0; id < MAX_LINK_PLAYERS; id++)
            {
                RecordedBattle_SetFrontierPassFlagFromHword(gBlockRecvBuffer[id][1]);
                switch (gLinkPlayers[id].id)
                {
                case 0:
                    gTasks[var].data[3] |= gBlockRecvBuffer[id][1] & 0x3F;
                    break;
                case 1:
                    gTasks[var].data[4] |= gBlockRecvBuffer[id][1] & 0x3F;
                    break;
                case 2:
                    gTasks[var].data[3] |= (gBlockRecvBuffer[id][1] & 0x3F) << 6;
                    break;
                case 3:
                    gTasks[var].data[4] |= (gBlockRecvBuffer[id][1] & 0x3F) << 6;
                    break;
                }
            }
            ZeroEnemyPartyMons();
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        else
<<<<<<< HEAD
            break;
=======
        {
            break;
        }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        // fall through
    case 3:
        if (IsLinkTaskFinished())
        {
            SendBlock(BitmaskAllOtherLinkPlayers(), gPlayerParty, sizeof(struct Pokemon) * 2);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 4:
        if ((GetBlockReceivedStatus() & 0xF) == 0xF)
        {
            ResetBlockReceivedFlags();
            for (id = 0; id < MAX_LINK_PLAYERS; id++)
            {
                if (id == playerMultiplayerId)
                {
                    switch (gLinkPlayers[id].id)
                    {
                    case 0:
                    case 3:
                        memcpy(gPlayerParty, gBlockRecvBuffer[id], sizeof(struct Pokemon) * 2);
                        break;
                    case 1:
                    case 2:
                        memcpy(gPlayerParty + MULTI_PARTY_SIZE, gBlockRecvBuffer[id], sizeof(struct Pokemon) * 2);
                        break;
                    }
                }
                else
                {
                    if ((!(gLinkPlayers[id].id & 1) && !(gLinkPlayers[playerMultiplayerId].id & 1))
                     || ((gLinkPlayers[id].id & 1) && (gLinkPlayers[playerMultiplayerId].id & 1)))
                    {
                        switch (gLinkPlayers[id].id)
                        {
                        case 0:
                        case 3:
                            memcpy(gPlayerParty, gBlockRecvBuffer[id], sizeof(struct Pokemon) * 2);
                            break;
                        case 1:
                        case 2:
                            memcpy(gPlayerParty + MULTI_PARTY_SIZE, gBlockRecvBuffer[id], sizeof(struct Pokemon) * 2);
                            break;
                        }
                    }
                    else
                    {
                        switch (gLinkPlayers[id].id)
                        {
                        case 0:
                        case 3:
                            memcpy(gEnemyParty, gBlockRecvBuffer[id], sizeof(struct Pokemon) * 2);
                            break;
                        case 1:
                        case 2:
                            memcpy(gEnemyParty + MULTI_PARTY_SIZE, gBlockRecvBuffer[id], sizeof(struct Pokemon) * 2);
                            break;
                        }
                    }
                }
            }
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 5:
        if (IsLinkTaskFinished())
        {
            SendBlock(BitmaskAllOtherLinkPlayers(), gPlayerParty + 2, sizeof(struct Pokemon));
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 6:
        if ((GetBlockReceivedStatus() & 0xF) == 0xF)
        {
            ResetBlockReceivedFlags();
            for (id = 0; id < MAX_LINK_PLAYERS; id++)
            {
                if (id == playerMultiplayerId)
                {
                    switch (gLinkPlayers[id].id)
                    {
                    case 0:
                    case 3:
                        memcpy(gPlayerParty + 2, gBlockRecvBuffer[id], sizeof(struct Pokemon));
                        break;
                    case 1:
                    case 2:
                        memcpy(gPlayerParty + 5, gBlockRecvBuffer[id], sizeof(struct Pokemon));
                        break;
                    }
                }
                else
                {
                    if ((!(gLinkPlayers[id].id & 1) && !(gLinkPlayers[playerMultiplayerId].id & 1))
                     || ((gLinkPlayers[id].id & 1) && (gLinkPlayers[playerMultiplayerId].id & 1)))
                    {
                        switch (gLinkPlayers[id].id)
                        {
                        case 0:
                        case 3:
                            memcpy(gPlayerParty + 2, gBlockRecvBuffer[id], sizeof(struct Pokemon));
                            break;
                        case 1:
                        case 2:
                            memcpy(gPlayerParty + 5, gBlockRecvBuffer[id], sizeof(struct Pokemon));
                            break;
                        }
                    }
                    else
                    {
                        switch (gLinkPlayers[id].id)
                        {
                        case 0:
                        case 3:
                            memcpy(gEnemyParty + 2, gBlockRecvBuffer[id], sizeof(struct Pokemon));
                            break;
                        case 1:
                        case 2:
                            memcpy(gEnemyParty + 5, gBlockRecvBuffer[id], sizeof(struct Pokemon));
                            break;
                        }
                    }
                }
            }
            TryCorrectShedinjaLanguage(&gPlayerParty[0]);
            TryCorrectShedinjaLanguage(&gPlayerParty[1]);
            TryCorrectShedinjaLanguage(&gPlayerParty[2]);
            TryCorrectShedinjaLanguage(&gPlayerParty[3]);
            TryCorrectShedinjaLanguage(&gPlayerParty[4]);
            TryCorrectShedinjaLanguage(&gPlayerParty[5]);

            TryCorrectShedinjaLanguage(&gEnemyParty[0]);
            TryCorrectShedinjaLanguage(&gEnemyParty[1]);
            TryCorrectShedinjaLanguage(&gEnemyParty[2]);
            TryCorrectShedinjaLanguage(&gEnemyParty[3]);
            TryCorrectShedinjaLanguage(&gEnemyParty[4]);
            TryCorrectShedinjaLanguage(&gEnemyParty[5]);

            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 7:
        InitBattleControllers();
        RecordedBattle_SetTrainerInfo();
        gBattleCommunication[SPRITES_INIT_STATE1] = 0;
        gBattleCommunication[SPRITES_INIT_STATE2] = 0;
        if (gBattleTypeFlags & BATTLE_TYPE_LINK)
        {
            for (id = 0; id < MAX_LINK_PLAYERS && (gLinkPlayers[id].version & 0xFF) == VERSION_EMERALD; id++);

            if (id == MAX_LINK_PLAYERS)
                gBattleCommunication[MULTIUSE_STATE] = 8;
            else
                gBattleCommunication[MULTIUSE_STATE] = 10;
        }
        else
        {
            gBattleCommunication[MULTIUSE_STATE] = 10;
        }
        break;
    case 8:
        if (IsLinkTaskFinished())
        {
<<<<<<< HEAD
            u32 *ptr = gBattleStruct->multiBuffer.battleVideo;
            ptr[0] = gBattleTypeFlags;
            ptr[1] = gRecordedBattleRngSeed; // UB: overwrites berry data
=======
            struct BattleVideo *ptr = &gBattleStruct->multiBuffer.battleVideo;
            ptr->battleTypeFlags = gBattleTypeFlags;
            ptr->rngSeed = gRecordedBattleRngSeed;

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            SendBlock(BitmaskAllOtherLinkPlayers(), ptr, sizeof(gBattleStruct->multiBuffer.battleVideo));
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 9:
        if ((GetBlockReceivedStatus() & 0xF) == 0xF)
        {
            ResetBlockReceivedFlags();
            for (var = 0; var < 4; var++)
            {
                u32 blockValue = gBlockRecvBuffer[var][0];
                if (blockValue & 4)
                {
                    memcpy(&gRecordedBattleRngSeed, &gBlockRecvBuffer[var][2], sizeof(gRecordedBattleRngSeed));
                    break;
                }
            }

            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 10:
        if (BattleInitAllSprites(&gBattleCommunication[SPRITES_INIT_STATE1], &gBattleCommunication[SPRITES_INIT_STATE2]))
        {
            gPreBattleCallback1 = gMain.callback1;
            gMain.callback1 = BattleMainCB1;
            SetMainCallback2(BattleMainCB2);
            if (gBattleTypeFlags & BATTLE_TYPE_LINK)
            {
<<<<<<< HEAD
                gTrainerBattleOpponent_A = TRAINER_LINK_OPPONENT;
=======
                TRAINER_BATTLE_PARAM.opponentA = TRAINER_LINK_OPPONENT;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                gBattleTypeFlags |= BATTLE_TYPE_LINK_IN_BATTLE;
            }
        }
        break;
    }
}

void BattleMainCB2(void)
{
    AnimateSprites();
    BuildOamBuffer();
    RunTextPrinters();
    UpdatePaletteFade();
    RunTasks();

    if (JOY_HELD(B_BUTTON) && gBattleTypeFlags & BATTLE_TYPE_RECORDED && RecordedBattle_CanStopPlayback())
    {
        // Player pressed B during recorded battle playback, end battle
        gSpecialVar_Result = gBattleOutcome = B_OUTCOME_PLAYER_TELEPORTED;
        ResetPaletteFadeControl();
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        SetMainCallback2(CB2_QuitRecordedBattle);
    }
}

static void FreeRestoreBattleData(void)
{
    gMain.callback1 = gPreBattleCallback1;
    gScanlineEffect.state = 3;
    gMain.inBattle = FALSE;
    ZeroEnemyPartyMons();
    m4aSongNumStop(SE_LOW_HEALTH);
    FreeMonSpritesGfx();
    FreeBattleSpritesData();
    FreeBattleResources();
<<<<<<< HEAD
=======
    ResetDynamicAiFunc();
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void CB2_QuitRecordedBattle(void)
{
    UpdatePaletteFade();
    if (!gPaletteFade.active)
    {
        m4aMPlayStop(&gMPlayInfo_SE1);
        m4aMPlayStop(&gMPlayInfo_SE2);
<<<<<<< HEAD
=======
        if (gTestRunnerEnabled)
        {
            // Clean up potentially-leaking tasks.
            // I think these leak when the battle ends soon after a
            // battler is fainted.
            u8 taskId;
            taskId = FindTaskIdByFunc(Task_PlayerController_RestoreBgmAfterCry);
            if (taskId != TASK_NONE)
                DestroyTask(taskId);
            taskId = FindTaskIdByFunc(Task_DuckBGMForPokemonCry);
            if (taskId != TASK_NONE)
                DestroyTask(taskId);

            TestRunner_Battle_AfterLastTurn();
        }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        FreeRestoreBattleData();
        FreeAllWindowBuffers();
        SetMainCallback2(gMain.savedCallback);
    }
}

<<<<<<< HEAD
#define sState data[0]
#define sDelay data[4]

static void SpriteCB_UnusedBattleInit(struct Sprite *sprite)
{
    sprite->sState = 0;
    sprite->callback = SpriteCB_UnusedBattleInit_Main;
}

static void SpriteCB_UnusedBattleInit_Main(struct Sprite *sprite)
{
    u16 *arr = (u16 *)gDecompressionBuffer;

    switch (sprite->sState)
    {
    case 0:
        sprite->sState++;
        sprite->data[1] = 0;
        sprite->data[2] = 0x281;
        sprite->data[3] = 0;
        sprite->sDelay = 1;
        // fall through
    case 1:
        sprite->sDelay--;
        if (sprite->sDelay == 0)
        {
            s32 i;
            s32 r2;
            s32 r0;

            sprite->sDelay = 2;
            r2 = sprite->data[1] + sprite->data[3] * 32;
            r0 = sprite->data[2] - sprite->data[3] * 32;
            for (i = 0; i < 29; i += 2)
            {
                arr[r2 + i] = 0x3D;
                arr[r0 + i] = 0x3D;
            }
            sprite->data[3]++;
            if (sprite->data[3] == 21)
            {
                sprite->sState++;
                sprite->data[1] = 32;
            }
        }
        break;
    case 2:
        sprite->data[1]--;
        if (sprite->data[1] == 20)
            SetMainCallback2(CB2_InitBattle);
        break;
    }
}

static u8 CreateNPCTrainerParty(struct Pokemon *party, u16 trainerNum, bool8 firstTrainer)
{
    u32 nameHash = 0;
    u32 personalityValue;
    u8 fixedIV;
    s32 i, j;
    u8 monsCount;
    u16 species, move; //tx_randomizer_and_challenges
    //u8 opponentClass = gTrainers[trainerNum].trainerClass;
    u16 helditem;

    if (trainerNum == TRAINER_SECRET_BASE)
        return 0;

    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER && !(gBattleTypeFlags & (BATTLE_TYPE_FRONTIER
                                                                        | BATTLE_TYPE_EREADER_TRAINER
                                                                        | BATTLE_TYPE_TRAINER_HILL)))
    {
        #ifndef NDEBUG
        MgbaPrintf(MGBA_LOG_DEBUG, "******** CreateTrainerParty ********");
        #endif
        if (firstTrainer == TRUE)
            ZeroEnemyPartyMons();

        if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
        {
            if (gTrainers[trainerNum].partySize > PARTY_SIZE / 2)
                monsCount = PARTY_SIZE / 2;
            else
                monsCount = gTrainers[trainerNum].partySize;
        }
        else
        {
            monsCount = gTrainers[trainerNum].partySize;
        }

        for (i = 0; i < monsCount; i++)
        {

            if (gTrainers[trainerNum].doubleBattle == TRUE)
                personalityValue = 0x80;
            else if (gTrainers[trainerNum].encounterMusic_gender & F_TRAINER_FEMALE)
=======
static u32 Crc32B (const u8 *data, u32 size)
{
   s32 i, j;
   u32 byte, crc, mask;

   i = 0;
   crc = 0xFFFFFFFF;
   for (i = 0; i < size; ++i)
   {
        byte = data[i];
        crc = crc ^ byte;
        for (j = 7; j >= 0; --j)
        {
            mask = -(crc & 1);
            crc = (crc >> 1) ^ (0xEDB88320 & mask);
        }
   }
   return ~crc;
}

static u32 GeneratePartyHash(const struct Trainer *trainer, u32 i)
{
    const u8 *buffer = (const u8 *) &trainer->party[i];
    u32 n = sizeof(*trainer->party);
    return Crc32B(buffer, n);
}

void ModifyPersonalityForNature(u32 *personality, u32 newNature)
{
    u32 nature = GetNatureFromPersonality(*personality);
    s32 diff = abs((s32)nature - (s32)newNature);
    s32 sign = (nature > newNature) ? 1 : -1;
    if (diff > NUM_NATURES / 2)
    {
        diff = NUM_NATURES - diff;
        sign *= -1;
    }
    *personality -= (diff * sign);
}

u32 GeneratePersonalityForGender(u32 gender, u32 species)
{
    const struct SpeciesInfo *speciesInfo = &gSpeciesInfo[species];
    if (gender == MON_GENDERLESS)
        return 0;
    else if (gender == MON_MALE)
        return ((255 - speciesInfo->genderRatio) / 2) + speciesInfo->genderRatio;
    else
        return speciesInfo->genderRatio / 2;
}

void CustomTrainerPartyAssignMoves(struct Pokemon *mon, const struct TrainerMon *partyEntry)
{
    bool32 noMoveSet = TRUE;
    u32 j;

    for (j = 0; j < MAX_MON_MOVES; ++j)
    {
        if (partyEntry->moves[j] != MOVE_NONE)
            noMoveSet = FALSE;
    }
    if (noMoveSet)
    {
        // TODO: Figure out a default strategy when moves are not set, to generate a good moveset
        return;
    }

    for (j = 0; j < MAX_MON_MOVES; ++j)
    {
        u32 pp = GetMovePP(partyEntry->moves[j]);
        SetMonData(mon, MON_DATA_MOVE1 + j, &partyEntry->moves[j]);
        SetMonData(mon, MON_DATA_PP1 + j, &pp);
    }
}

u8 CreateNPCTrainerPartyFromTrainer(struct Pokemon *party, const struct Trainer *trainer, bool32 firstTrainer, u32 battleTypeFlags)
{
    u32 personalityValue;
    s32 i;
    u8 monsCount;
    if (battleTypeFlags & BATTLE_TYPE_TRAINER && !(battleTypeFlags & (BATTLE_TYPE_FRONTIER
                                                                        | BATTLE_TYPE_EREADER_TRAINER
                                                                        | BATTLE_TYPE_TRAINER_HILL)))
    {
        if (firstTrainer == TRUE)
            ZeroEnemyPartyMons();

        if (battleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
        {
            if (trainer->partySize > PARTY_SIZE / 2)
                monsCount = PARTY_SIZE / 2;
            else
                monsCount = trainer->partySize;
        }
        else
        {
            monsCount = trainer->partySize;
        }

        u32 monIndices[monsCount];
        DoTrainerPartyPool(trainer, monIndices, monsCount, battleTypeFlags);

        for (i = 0; i < monsCount; i++)
        {
            u32 monIndex = monIndices[i];
            s32 ball = -1;
            u32 personalityHash = GeneratePartyHash(trainer, i);
            const struct TrainerMon *partyData = trainer->party;
            u32 otIdType = OT_ID_RANDOM_NO_SHINY;
            u32 fixedOtId = 0;
            u32 abilityNum = 0;

            if (trainer->battleType != TRAINER_BATTLE_TYPE_SINGLES)
                personalityValue = 0x80;
            else if (trainer->encounterMusic_gender & F_TRAINER_FEMALE)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                personalityValue = 0x78; // Use personality more likely to result in a female Pokémon
            else
                personalityValue = 0x88; // Use personality more likely to result in a male Pokémon

<<<<<<< HEAD
            for (j = 0; gTrainers[trainerNum].trainerName[j] != EOS; j++)
                nameHash += gTrainers[trainerNum].trainerName[j];

            switch (gTrainers[trainerNum].partyFlags)
            {
            case 0:
            {
                const struct TrainerMonNoItemDefaultMoves *partyData = gTrainers[trainerNum].party.NoItemDefaultMoves;

                for (j = 0; gSpeciesNames[partyData[i].species][j] != EOS; j++)
                    nameHash += gSpeciesNames[partyData[i].species][j];

                personalityValue += nameHash << 8;
                fixedIV = partyData[i].iv * MAX_PER_STAT_IVS / 255;
                //CreateMon(&party[i], partyData[i].species, partyData[i].lvl, fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);
                if (gSaveBlock1Ptr->tx_Random_Trainer) //tx_randomizer_and_challenges
                {
                    species = GetSpeciesRandomSeeded(partyData[i].species, TX_RANDOM_T_TRAINER, trainerNum);
                    CreateMon(&party[i], species, GetScaledLevel(partyData[i].lvl), fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);
                }
                else
                    CreateMon(&party[i], partyData[i].species, GetScaledLevel(partyData[i].lvl), fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);
                break;
            }
            case F_TRAINER_PARTY_CUSTOM_MOVESET:
            {
                const struct TrainerMonNoItemCustomMoves *partyData = gTrainers[trainerNum].party.NoItemCustomMoves;

                for (j = 0; gSpeciesNames[partyData[i].species][j] != EOS; j++)
                    nameHash += gSpeciesNames[partyData[i].species][j];

                personalityValue += nameHash << 8;
                fixedIV = partyData[i].iv * MAX_PER_STAT_IVS / 255;
                //CreateMon(&party[i], partyData[i].species, partyData[i].lvl, fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);

                if (gSaveBlock1Ptr->tx_Random_Trainer) //tx_randomizer_and_challenges
                {
                    species = GetSpeciesRandomSeeded(partyData[i].species, TX_RANDOM_T_TRAINER, trainerNum);
                    CreateMon(&party[i], species, GetScaledLevel(partyData[i].lvl), fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);
                }
                else
                    CreateMon(&party[i], partyData[i].species, GetScaledLevel(partyData[i].lvl), fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);

                for (j = 0; j < MAX_MON_MOVES; j++)
                {
                    if (gSaveBlock1Ptr->tx_Random_Moves) //tx_randomizer_and_challenges
                    {
                        move = GetRandomMove(partyData[i].moves[j], partyData[i].species);
                        SetMonData(&party[i], MON_DATA_MOVE1 + j, &move);
                        SetMonData(&party[i], MON_DATA_PP1 + j, &gBattleMoves[move].pp);
                    }
                    else
                    {
                        if (gSaveBlock1Ptr->tx_Random_Trainer) //tx_randomizer_and_challenges
                            continue;
                        SetMonData(&party[i], MON_DATA_MOVE1 + j, &partyData[i].moves[j]);
                        SetMonData(&party[i], MON_DATA_PP1 + j, &gBattleMoves[partyData[i].moves[j]].pp);
                    }
                }
                break;
            }
            case F_TRAINER_PARTY_HELD_ITEM:
            {
                const struct TrainerMonItemDefaultMoves *partyData = gTrainers[trainerNum].party.ItemDefaultMoves;

                for (j = 0; gSpeciesNames[partyData[i].species][j] != EOS; j++)
                    nameHash += gSpeciesNames[partyData[i].species][j];

                personalityValue += nameHash << 8;
                fixedIV = partyData[i].iv * MAX_PER_STAT_IVS / 255;
                //CreateMon(&party[i], partyData[i].species, partyData[i].lvl, fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);
                if (gSaveBlock1Ptr->tx_Random_Trainer) //tx_randomizer_and_challenges
                {
                    species = GetSpeciesRandomSeeded(partyData[i].species, TX_RANDOM_T_TRAINER, trainerNum);
                    CreateMon(&party[i], species, GetScaledLevel(partyData[i].lvl), fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);
                }
                else
                    CreateMon(&party[i], partyData[i].species, GetScaledLevel(partyData[i].lvl), fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);

                SetMonData(&party[i], MON_DATA_HELD_ITEM, &partyData[i].heldItem);
                    helditem = GetMonData(&party[i], MON_DATA_HELD_ITEM);

                    if (gSaveBlock2Ptr->optionsDifficulty == 2) //only in hard mode
                    {
                        if (partyData[i].species == SPECIES_SCEPTILE && gTrainers[trainerNum].trainerPic == TRAINER_PIC_MAY 
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_RIVAL)
                            helditem = ITEM_072; //no modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);
                        
                        if (partyData[i].species == SPECIES_BLAZIKEN && gTrainers[trainerNum].trainerPic == TRAINER_PIC_MAY 
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_RIVAL)
                            helditem = ITEM_072; //no modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);

                        if (partyData[i].species == SPECIES_SWAMPERT && gTrainers[trainerNum].trainerPic == TRAINER_PIC_MAY 
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_RIVAL)
                            helditem = ITEM_072; //no modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);

                        if (partyData[i].species == SPECIES_SCEPTILE && gTrainers[trainerNum].trainerPic == TRAINER_PIC_BRENDAN 
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_RIVAL)
                            helditem = ITEM_072; //no modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);

                        if (partyData[i].species == SPECIES_BLAZIKEN && gTrainers[trainerNum].trainerPic == TRAINER_PIC_BRENDAN 
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_RIVAL)
                            helditem = ITEM_072; //no modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);

                        if (partyData[i].species == SPECIES_SWAMPERT && gTrainers[trainerNum].trainerPic == TRAINER_PIC_BRENDAN 
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_RIVAL)
                            helditem = ITEM_072; //no modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);
                    }
                break;
            }
            case F_TRAINER_PARTY_CUSTOM_MOVESET | F_TRAINER_PARTY_HELD_ITEM:
            {
                const struct TrainerMonItemCustomMoves *partyData = gTrainers[trainerNum].party.ItemCustomMoves;

                for (j = 0; gSpeciesNames[partyData[i].species][j] != EOS; j++)
                    nameHash += gSpeciesNames[partyData[i].species][j];

                personalityValue += nameHash << 8;
                fixedIV = partyData[i].iv * MAX_PER_STAT_IVS / 255;
                //CreateMon(&party[i], partyData[i].species, partyData[i].lvl, fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);
                if (gSaveBlock1Ptr->tx_Random_Trainer) //tx_randomizer_and_challenges
                {
                    species = GetSpeciesRandomSeeded(partyData[i].species, TX_RANDOM_T_TRAINER, trainerNum);
                    CreateMon(&party[i], species, GetScaledLevel(partyData[i].lvl), fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);
                }
                else
                    CreateMon(&party[i], partyData[i].species, GetScaledLevel(partyData[i].lvl), fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);
                SetMonData(&party[i], MON_DATA_HELD_ITEM, &partyData[i].heldItem);
                    helditem = GetMonData(&party[i], MON_DATA_HELD_ITEM);

                    if (gSaveBlock2Ptr->optionsDifficulty == 2) //only in hard mode
                    {
                        if (partyData[i].species == SPECIES_SLAKING && gTrainers[trainerNum].trainerPic == TRAINER_PIC_LEADER_JASMINE  
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_LEADER)
                            helditem = ITEM_072; //no modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);
                        
                        if (partyData[i].species == SPECIES_ALTARIA && gTrainers[trainerNum].trainerPic == TRAINER_PIC_LEADER_CHUCK  
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_LEADER)
                            helditem = ITEM_074; //chesto modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);
                        
                        if (partyData[i].species == SPECIES_LUNATONE && gTrainers[trainerNum].trainerPic == TRAINER_PIC_LEADER_BLUE
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_LEADER && (FlagGet(FLAG_BADGE07_GET) == FALSE))
                        {
                            helditem = ITEM_073; //sitrus modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);
                        }
                        else if (partyData[i].species == SPECIES_LUNATONE && gTrainers[trainerNum].trainerPic == TRAINER_PIC_LEADER_BLUE
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_LEADER && (FlagGet(FLAG_BADGE07_GET) == TRUE))
                        {
                            helditem = ITEM_074; //chesto modifier, for rematches
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);
                        }

                        if (partyData[i].species == SPECIES_SOLROCK && gTrainers[trainerNum].trainerPic == TRAINER_PIC_LEADER_BLUE
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_LEADER)
                            helditem = ITEM_073; //sitrus modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);
                        
                        if (partyData[i].species == SPECIES_KINGDRA && gTrainers[trainerNum].trainerPic == TRAINER_PIC_LEADER_CLAIR
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_LEADER)
                            helditem = ITEM_074; //chesto modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);

                        if (partyData[i].species == SPECIES_ABSOL && gTrainers[trainerNum].trainerPic == TRAINER_PIC_ELITE_FOUR_WILL
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_ELITE_FOUR)
                            helditem = ITEM_SALAC_BERRY;  //Salac Berry
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem); 
                        
                        if (partyData[i].species == SPECIES_DUSKNOIR && gTrainers[trainerNum].trainerPic == TRAINER_PIC_ELITE_FOUR_KOGA
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_ELITE_FOUR && (FlagGet(FLAG_PHOEBE_REMATCH) == FALSE))
                        {
                            helditem = ITEM_072;  //no modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);
                        }
                        else if (partyData[i].species == SPECIES_DUSKNOIR && gTrainers[trainerNum].trainerPic == TRAINER_PIC_ELITE_FOUR_KOGA
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_ELITE_FOUR && (FlagGet(FLAG_PHOEBE_REMATCH) == TRUE))
                        {
                            helditem = ITEM_075;  //leftoverse modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);
                        }
                        
                        if (partyData[i].species == SPECIES_WALREIN && gTrainers[trainerNum].trainerPic == TRAINER_PIC_ELITE_FOUR_BRUNO
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_ELITE_FOUR)
                            helditem = ITEM_LEFTOVERS;  //Leftovers
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem); 
                        
                        if (partyData[i].species == SPECIES_SALAMENCE && gTrainers[trainerNum].trainerPic == TRAINER_PIC_ELITE_FOUR_KAREN
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_ELITE_FOUR)
                            helditem = ITEM_SITRUS_BERRY;  //Sitrus Berry
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem); 
                        
                        if (partyData[i].species == SPECIES_WHISCASH && gTrainers[trainerNum].trainerPic == TRAINER_PIC_CHAMPION_LANCE
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_CHAMPION)
                            helditem = ITEM_072;  //no modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);

                        if (partyData[i].species == SPECIES_MILOTIC && gTrainers[trainerNum].trainerPic == TRAINER_PIC_CHAMPION_LANCE
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_CHAMPION && (FlagGet(FLAG_WALLACE_REMATCH) == FALSE))
                        {
                            helditem = ITEM_073;  //sitrus modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);
                        }
                        else if (partyData[i].species == SPECIES_MILOTIC && gTrainers[trainerNum].trainerPic == TRAINER_PIC_CHAMPION_LANCE
                        && gTrainers[trainerNum].trainerClass == TRAINER_CLASS_CHAMPION && (FlagGet(FLAG_WALLACE_REMATCH) == TRUE))
                        {
                            helditem = ITEM_075;  //leftoverse modifier
                            SetMonData(&party[i], MON_DATA_HELD_ITEM, &helditem);
                        }
                    }

                for (j = 0; j < MAX_MON_MOVES; j++)
                {
                    if (gSaveBlock1Ptr->tx_Random_Moves) //tx_randomizer_and_challenges
                    {
                        move = GetRandomMove(partyData[i].moves[j], partyData[i].species);
                        SetMonData(&party[i], MON_DATA_MOVE1 + j, &move);
                        SetMonData(&party[i], MON_DATA_PP1 + j, &gBattleMoves[move].pp);
                    }
                    else
                    {
                        if (gSaveBlock1Ptr->tx_Random_Trainer) //tx_randomizer_and_challenges
                            continue;
                        SetMonData(&party[i], MON_DATA_MOVE1 + j, &partyData[i].moves[j]);
                        SetMonData(&party[i], MON_DATA_PP1 + j, &gBattleMoves[partyData[i].moves[j]].pp);
                    }
                }
                break;
            }
            }
            for (j = 0; gTrainerBallTable[j].classId != 0xFF; j++)
            {
                if (gTrainerBallTable[j].classId == gTrainers[trainerNum].trainerClass)
                    break;
            }
            SetMonData(&party[i], MON_DATA_POKEBALL, &gTrainerBallTable[j].Ball);
        }

        gBattleTypeFlags |= gTrainers[trainerNum].doubleBattle;

        //tx_randomizer_and_challenges
        if (gSaveBlock1Ptr->tx_Challenges_TrainerScalingIVs && !FlagGet(FLAG_IS_CHAMPION))
        {
            u8 iv = GetCurrentTrainerIVs();

            for (i = 0; i < monsCount; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    SetMonData(&party[i], MON_DATA_HP_IV + j, &iv);
                }

                CalculateMonStats(&party[i]);
            }
        }
        if (gSaveBlock1Ptr->tx_Challenges_TrainerScalingEVs && !FlagGet(FLAG_IS_CHAMPION))
        {
            u8 ev = GetCurrentTrainerEVs();

            for (i = 0; i < monsCount; i++)
            {
                // set EVs for HP, speed and the higher of either attack and defense stat
                SetMonData(&party[i], MON_DATA_HP_EV, &ev);
                SetMonData(&party[i], MON_DATA_SPEED_EV, &ev);
                if (GetMonData(&party[i], MON_DATA_ATK) > GetMonData(&party[i], MON_DATA_SPATK))
                    SetMonData(&party[i], MON_DATA_ATK_EV, &ev);
                else
                    SetMonData(&party[i], MON_DATA_SPATK_EV, &ev);
                if (GetMonData(&party[i], MON_DATA_DEF) > GetMonData(&party[i], MON_DATA_SPDEF))
                    SetMonData(&party[i], MON_DATA_DEF_EV, &ev);
                else
                    SetMonData(&party[i], MON_DATA_SPDEF_EV, &ev);

                CalculateMonStats(&party[i]);
            }
        }

    }

    return gTrainers[trainerNum].partySize;
}

static void UNUSED HBlankCB_Battle(void)
{
    if (REG_VCOUNT < DISPLAY_HEIGHT && REG_VCOUNT >= 111)
        SetGpuReg(REG_OFFSET_BG0CNT, BGCNT_SCREENBASE(24) | BGCNT_TXT256x512);
=======
            personalityValue += personalityHash << 8;
            if (partyData[monIndex].gender == TRAINER_MON_MALE)
                personalityValue = (personalityValue & 0xFFFFFF00) | GeneratePersonalityForGender(MON_MALE, partyData[monIndex].species);
            else if (partyData[monIndex].gender == TRAINER_MON_FEMALE)
                personalityValue = (personalityValue & 0xFFFFFF00) | GeneratePersonalityForGender(MON_FEMALE, partyData[monIndex].species);
            else if (partyData[monIndex].gender == TRAINER_MON_RANDOM_GENDER)
                personalityValue = (personalityValue & 0xFFFFFF00) | GeneratePersonalityForGender(Random() & 1 ? MON_MALE : MON_FEMALE, partyData[monIndex].species);
            ModifyPersonalityForNature(&personalityValue, partyData[monIndex].nature);
            if (partyData[monIndex].isShiny)
            {
                otIdType = OT_ID_PRESET;
                fixedOtId = HIHALF(personalityValue) ^ LOHALF(personalityValue);
            }
            CreateMon(&party[i], partyData[monIndex].species, partyData[monIndex].lvl, 0, TRUE, personalityValue, otIdType, fixedOtId);
            SetMonData(&party[i], MON_DATA_HELD_ITEM, &partyData[monIndex].heldItem);

            CustomTrainerPartyAssignMoves(&party[i], &partyData[monIndex]);
            SetMonData(&party[i], MON_DATA_IVS, &(partyData[monIndex].iv));
            if (partyData[monIndex].ev != NULL)
            {
                SetMonData(&party[i], MON_DATA_HP_EV, &(partyData[monIndex].ev[0]));
                SetMonData(&party[i], MON_DATA_ATK_EV, &(partyData[monIndex].ev[1]));
                SetMonData(&party[i], MON_DATA_DEF_EV, &(partyData[monIndex].ev[2]));
                SetMonData(&party[i], MON_DATA_SPATK_EV, &(partyData[monIndex].ev[3]));
                SetMonData(&party[i], MON_DATA_SPDEF_EV, &(partyData[monIndex].ev[4]));
                SetMonData(&party[i], MON_DATA_SPEED_EV, &(partyData[monIndex].ev[5]));
            }
            if (partyData[monIndex].ability != ABILITY_NONE)
            {
                const struct SpeciesInfo *speciesInfo = &gSpeciesInfo[partyData[monIndex].species];
                u32 maxAbilityNum = ARRAY_COUNT(speciesInfo->abilities);
                for (abilityNum = 0; abilityNum < maxAbilityNum; ++abilityNum)
                {
                    if (speciesInfo->abilities[abilityNum] == partyData[monIndex].ability)
                        break;
                }
                if (abilityNum >= maxAbilityNum)
                    abilityNum = 0;
            }
            else if (B_TRAINER_MON_RANDOM_ABILITY)
            {
                const struct SpeciesInfo *speciesInfo = &gSpeciesInfo[partyData[monIndex].species];
                abilityNum = personalityHash % 3;
                while (speciesInfo->abilities[abilityNum] == ABILITY_NONE)
                {
                    abilityNum--;
                }
            }
            SetMonData(&party[i], MON_DATA_ABILITY_NUM, &abilityNum);
            SetMonData(&party[i], MON_DATA_FRIENDSHIP, &(partyData[monIndex].friendship));
            if (partyData[monIndex].ball != ITEM_NONE)
            {
                ball = partyData[monIndex].ball;
                SetMonData(&party[i], MON_DATA_POKEBALL, &ball);
            }
            if (partyData[monIndex].nickname != NULL)
            {
                SetMonData(&party[i], MON_DATA_NICKNAME, partyData[monIndex].nickname);
            }
            if (partyData[monIndex].isShiny)
            {
                u32 data = TRUE;
                SetMonData(&party[i], MON_DATA_IS_SHINY, &data);
            }
            if (partyData[monIndex].dynamaxLevel > 0)
            {
                u32 data = partyData[monIndex].dynamaxLevel;
                if (partyData[monIndex].shouldUseDynamax)
                    gBattleStruct->opponentMonCanDynamax |= 1 << i;
                SetMonData(&party[i], MON_DATA_DYNAMAX_LEVEL, &data);
            }
            if (partyData[monIndex].gigantamaxFactor)
            {
                u32 data = partyData[monIndex].gigantamaxFactor;
                SetMonData(&party[i], MON_DATA_GIGANTAMAX_FACTOR, &data);
            }
            if (partyData[monIndex].teraType > 0)
            {
                gBattleStruct->opponentMonCanTera |= 1 << i;
                u32 data = partyData[monIndex].teraType;
                SetMonData(&party[i], MON_DATA_TERA_TYPE, &data);
            }
            CalculateMonStats(&party[i]);

            if (B_TRAINER_CLASS_POKE_BALLS >= GEN_7 && ball == -1)
            {
                ball = gTrainerClasses[trainer->trainerClass].ball ?: ITEM_POKE_BALL;
                SetMonData(&party[i], MON_DATA_POKEBALL, &ball);
            }
        }
    }

    return trainer->partySize;
}

static u8 CreateNPCTrainerParty(struct Pokemon *party, u16 trainerNum, bool8 firstTrainer)
{
    u8 retVal;
    if (trainerNum == TRAINER_SECRET_BASE)
        return 0;
    if (GetTrainerStructFromId(trainerNum)->overrideTrainer)
    {
        struct Trainer tempTrainer;
        memcpy(&tempTrainer, GetTrainerStructFromId(trainerNum), sizeof(struct Trainer));
        const struct Trainer *origTrainer = GetTrainerStructFromId(tempTrainer.overrideTrainer);

        tempTrainer.party = origTrainer->party;

        tempTrainer.poolSize = origTrainer->poolSize;
        if (tempTrainer.partySize == 0)
            tempTrainer.partySize = origTrainer->partySize;

        retVal = CreateNPCTrainerPartyFromTrainer(party, (const struct Trainer *)(&tempTrainer), firstTrainer, gBattleTypeFlags);
    }
    else
    {
        retVal = CreateNPCTrainerPartyFromTrainer(party, GetTrainerStructFromId(trainerNum), firstTrainer, gBattleTypeFlags);
    }
    return retVal;
}

void CreateTrainerPartyForPlayer(void)
{
    Script_RequestEffects(SCREFF_V1);

    ZeroPlayerPartyMons();
    gPartnerTrainerId = gSpecialVar_0x8004;
    CreateNPCTrainerPartyFromTrainer(gPlayerParty, GetTrainerStructFromId(gSpecialVar_0x8004), TRUE, BATTLE_TYPE_TRAINER);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void VBlankCB_Battle(void)
{
    // Change gRngSeed every vblank unless the battle could be recorded.
    if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_FRONTIER | BATTLE_TYPE_RECORDED)))
<<<<<<< HEAD
        Random();
=======
        AdvanceRandom();
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    SetGpuReg(REG_OFFSET_BG0HOFS, gBattle_BG0_X);
    SetGpuReg(REG_OFFSET_BG0VOFS, gBattle_BG0_Y);
    SetGpuReg(REG_OFFSET_BG1HOFS, gBattle_BG1_X);
    SetGpuReg(REG_OFFSET_BG1VOFS, gBattle_BG1_Y);
    SetGpuReg(REG_OFFSET_BG2HOFS, gBattle_BG2_X);
    SetGpuReg(REG_OFFSET_BG2VOFS, gBattle_BG2_Y);
    SetGpuReg(REG_OFFSET_BG3HOFS, gBattle_BG3_X);
    SetGpuReg(REG_OFFSET_BG3VOFS, gBattle_BG3_Y);
    SetGpuReg(REG_OFFSET_WIN0H, gBattle_WIN0H);
    SetGpuReg(REG_OFFSET_WIN0V, gBattle_WIN0V);
    SetGpuReg(REG_OFFSET_WIN1H, gBattle_WIN1H);
    SetGpuReg(REG_OFFSET_WIN1V, gBattle_WIN1V);
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
    ScanlineEffect_InitHBlankDmaTransfer();
}

void SpriteCB_VsLetterDummy(struct Sprite *sprite)
{

}

static void SpriteCB_VsLetter(struct Sprite *sprite)
{
    if (sprite->data[0] != 0)
        sprite->x = sprite->data[1] + ((sprite->data[2] & 0xFF00) >> 8);
    else
        sprite->x = sprite->data[1] - ((sprite->data[2] & 0xFF00) >> 8);

    sprite->data[2] += 0x180;

    if (sprite->affineAnimEnded)
    {
        FreeSpriteTilesByTag(ANIM_SPRITES_START);
        FreeSpritePaletteByTag(ANIM_SPRITES_START);
        FreeSpriteOamMatrix(sprite);
        DestroySprite(sprite);
    }
}

void SpriteCB_VsLetterInit(struct Sprite *sprite)
{
    StartSpriteAffineAnim(sprite, 1);
    sprite->callback = SpriteCB_VsLetter;
    PlaySE(SE_MUGSHOT);
}

static void BufferPartyVsScreenHealth_AtEnd(u8 taskId)
{
    struct Pokemon *party1 = NULL;
    struct Pokemon *party2 = NULL;
    u8 multiplayerId = gBattleScripting.multiplayerId;
    u32 flags;
    s32 i;

    if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
    {
        switch (gLinkPlayers[multiplayerId].id)
        {
        case 0:
        case 2:
            party1 = gPlayerParty;
            party2 = gEnemyParty;
            break;
        case 1:
        case 3:
            party1 = gEnemyParty;
            party2 = gPlayerParty;
            break;
        }
    }
    else
    {
        party1 = gPlayerParty;
        party2 = gEnemyParty;
    }

    flags = 0;
    BUFFER_PARTY_VS_SCREEN_STATUS(party1, flags, i);
    gTasks[taskId].data[3] = flags;

    flags = 0;
    BUFFER_PARTY_VS_SCREEN_STATUS(party2, flags, i);
    gTasks[taskId].data[4] = flags;
}

void CB2_InitEndLinkBattle(void)
{
    s32 i;
    u8 taskId;

    SetHBlankCallback(NULL);
    SetVBlankCallback(NULL);
    gBattleTypeFlags &= ~BATTLE_TYPE_LINK_IN_BATTLE;

    if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
    {
        SetMainCallback2(gMain.savedCallback);
        FreeBattleResources();
        FreeBattleSpritesData();
        FreeMonSpritesGfx();
    }
    else
    {
        CpuFill32(0, (void *)(VRAM), VRAM_SIZE);
        SetGpuReg(REG_OFFSET_MOSAIC, 0);
        SetGpuReg(REG_OFFSET_WIN0H, DISPLAY_WIDTH);
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(DISPLAY_HEIGHT / 2, DISPLAY_HEIGHT / 2 + 1));
        SetGpuReg(REG_OFFSET_WININ, 0);
        SetGpuReg(REG_OFFSET_WINOUT, 0);
        gBattle_WIN0H = DISPLAY_WIDTH;
        gBattle_WIN0V = WIN_RANGE(DISPLAY_HEIGHT / 2, DISPLAY_HEIGHT / 2 + 1);
        ScanlineEffect_Clear();

        i = 0;
        while (i < 80)
        {
            gScanlineEffectRegBuffers[0][i] = 0xF0;
            gScanlineEffectRegBuffers[1][i] = 0xF0;
            i++;
        }

        while (i < 160)
        {
            gScanlineEffectRegBuffers[0][i] = 0xFF10;
            gScanlineEffectRegBuffers[1][i] = 0xFF10;
            i++;
        }

        ResetPaletteFade();

        gBattle_BG0_X = 0;
        gBattle_BG0_Y = 0;
        gBattle_BG1_X = 0;
        gBattle_BG1_Y = 0;
        gBattle_BG2_X = 0;
        gBattle_BG2_Y = 0;
        gBattle_BG3_X = 0;
        gBattle_BG3_Y = 0;

        InitBattleBgsVideo();
<<<<<<< HEAD
        LoadCompressedPalette(gBattleTextboxPalette, BG_PLTT_ID(0), 2 * PLTT_SIZE_4BPP);
=======
        LoadPalette(gBattleTextboxPalette, BG_PLTT_ID(0), 2 * PLTT_SIZE_4BPP);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        LoadBattleMenuWindowGfx();
        ResetSpriteData();
        ResetTasks();
        DrawBattleEntryBackground();
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_BG1 | WINOUT_WIN01_BG2 | WINOUT_WIN01_OBJ | WINOUT_WIN01_CLR);
        FreeAllSpritePalettes();
        gReservedSpritePaletteCount = MAX_BATTLERS_COUNT;
        SetVBlankCallback(VBlankCB_Battle);

        // Show end Vs screen with battle results
        taskId = CreateTask(InitLinkBattleVsScreen, 0);
        gTasks[taskId].data[1] = 0x10E;
        gTasks[taskId].data[2] = 0x5A;
        gTasks[taskId].data[5] = 1;
        BufferPartyVsScreenHealth_AtEnd(taskId);

        SetMainCallback2(CB2_EndLinkBattle);
        gBattleCommunication[MULTIUSE_STATE] = 0;
    }
}

static void CB2_EndLinkBattle(void)
{
    EndLinkBattleInSteps();
    AnimateSprites();
    BuildOamBuffer();
    RunTextPrinters();
    UpdatePaletteFade();
    RunTasks();
}

static void EndLinkBattleInSteps(void)
{
    s32 i;

    switch (gBattleCommunication[MULTIUSE_STATE])
    {
    case 0:
        ShowBg(0);
        ShowBg(1);
        ShowBg(2);
        gBattleCommunication[1] = 0xFF;
        gBattleCommunication[MULTIUSE_STATE]++;
        break;
    case 1:
        if (--gBattleCommunication[1] == 0)
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 2:
        if (!gPaletteFade.active)
        {
<<<<<<< HEAD
            u8 battlerCount;
=======
            u32 battlerCount;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

            gMain.anyLinkBattlerHasFrontierPass = RecordedBattle_GetFrontierPassFlag();

            if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                battlerCount = 4;
            else
                battlerCount = 2;

            for (i = 0; i < battlerCount && (gLinkPlayers[i].version & 0xFF) == VERSION_EMERALD; i++);

            if (!gSaveBlock2Ptr->frontier.disableRecordBattle && i == battlerCount)
            {
                if (FlagGet(FLAG_SYS_FRONTIER_PASS))
                {
                    // Ask player if they want to record the battle
                    FreeAllWindowBuffers();
                    SetMainCallback2(CB2_InitAskRecordBattle);
                }
                else if (!gMain.anyLinkBattlerHasFrontierPass)
                {
                    // No players can record this battle, end
                    SetMainCallback2(gMain.savedCallback);
                    FreeBattleResources();
                    FreeBattleSpritesData();
                    FreeMonSpritesGfx();
                }
                else if (gReceivedRemoteLinkPlayers == 0)
                {
                    // Player can't record battle but
                    // another player can, reconnect with them
                    CreateTask(Task_ReconnectWithLinkPlayers, 5);
                    gBattleCommunication[MULTIUSE_STATE]++;
                }
                else
                {
                    gBattleCommunication[MULTIUSE_STATE]++;
                }
            }
            else
            {
                SetMainCallback2(gMain.savedCallback);
                FreeBattleResources();
                FreeBattleSpritesData();
                FreeMonSpritesGfx();
            }
        }
        break;
    case 3:
        CpuFill32(0, (void *)VRAM, VRAM_SIZE);

        for (i = 0; i < 2; i++)
            LoadChosenBattleElement(i);

        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gBattleCommunication[MULTIUSE_STATE]++;
        break;
    case 4:
        if (!gPaletteFade.active)
            gBattleCommunication[MULTIUSE_STATE]++;
        break;
    case 5:
        if (!FuncIsActiveTask(Task_ReconnectWithLinkPlayers))
            gBattleCommunication[MULTIUSE_STATE]++;
        break;
    case 6:
        if (IsLinkTaskFinished() == TRUE)
        {
            SetLinkStandbyCallback();
            BattlePutTextOnWindow(gText_LinkStandby3, B_WIN_MSG);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 7:
        if (!IsTextPrinterActive(B_WIN_MSG))
        {
            if (IsLinkTaskFinished() == TRUE)
                gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case 8:
        if (!gWirelessCommType)
            SetCloseLinkCallback();
        gBattleCommunication[MULTIUSE_STATE]++;
        break;
    case 9:
        if (!gMain.anyLinkBattlerHasFrontierPass || gWirelessCommType || gReceivedRemoteLinkPlayers != 1)
        {
            gMain.anyLinkBattlerHasFrontierPass = FALSE;
            SetMainCallback2(gMain.savedCallback);
            FreeBattleResources();
            FreeBattleSpritesData();
            FreeMonSpritesGfx();
        }
        break;
    }
}

u32 GetBattleBgTemplateData(u8 arrayId, u8 caseId)
{
    u32 ret = 0;

    switch (caseId)
    {
    case 0:
        ret = gBattleBgTemplates[arrayId].bg;
        break;
    case 1:
        ret = gBattleBgTemplates[arrayId].charBaseIndex;
        break;
    case 2:
        ret = gBattleBgTemplates[arrayId].mapBaseIndex;
        break;
    case 3:
        ret = gBattleBgTemplates[arrayId].screenSize;
        break;
    case 4:
        ret = gBattleBgTemplates[arrayId].paletteMode;
        break;
    case 5: // Only this case is used
        ret = gBattleBgTemplates[arrayId].priority;
        break;
    case 6:
        ret = gBattleBgTemplates[arrayId].baseTile;
        break;
    }

    return ret;
}

static void CB2_InitAskRecordBattle(void)
{
    s32 i;

    SetHBlankCallback(NULL);
    SetVBlankCallback(NULL);
    CpuFill32(0, (void *)(VRAM), VRAM_SIZE);
    ResetPaletteFade();
    gBattle_BG0_X = 0;
    gBattle_BG0_Y = 0;
    gBattle_BG1_X = 0;
    gBattle_BG1_Y = 0;
    gBattle_BG2_X = 0;
    gBattle_BG2_Y = 0;
    gBattle_BG3_X = 0;
    gBattle_BG3_Y = 0;
    InitBattleBgsVideo();
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    LoadBattleMenuWindowGfx();

    for (i = 0; i < 2; i++)
        LoadChosenBattleElement(i);

    ResetSpriteData();
    ResetTasks();
    FreeAllSpritePalettes();
    gReservedSpritePaletteCount = MAX_BATTLERS_COUNT;
    SetVBlankCallback(VBlankCB_Battle);
    SetMainCallback2(CB2_AskRecordBattle);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK);
    gBattleCommunication[MULTIUSE_STATE] = 0;
}

static void CB2_AskRecordBattle(void)
{
    AskRecordBattle();
    AnimateSprites();
    BuildOamBuffer();
    RunTextPrinters();
    UpdatePaletteFade();
    RunTasks();
}


// States for AskRecordBattle
#define STATE_INIT             0
#define STATE_LINK             1
#define STATE_WAIT_LINK        2
#define STATE_ASK_RECORD       3
#define STATE_PRINT_YES_NO     4
#define STATE_HANDLE_YES_NO    5
#define STATE_RECORD_NO        6
#define STATE_END_RECORD_NO    7
#define STATE_WAIT_END         8
#define STATE_END              9
#define STATE_RECORD_YES      10
#define STATE_RECORD_WAIT     11
#define STATE_END_RECORD_YES  12

static void AskRecordBattle(void)
{
    switch (gBattleCommunication[MULTIUSE_STATE])
    {
    case STATE_INIT:
        ShowBg(0);
        ShowBg(1);
        ShowBg(2);
        gBattleCommunication[MULTIUSE_STATE]++;
        break;
    case STATE_LINK:
        if (gMain.anyLinkBattlerHasFrontierPass && gReceivedRemoteLinkPlayers == 0)
            CreateTask(Task_ReconnectWithLinkPlayers, 5);
        gBattleCommunication[MULTIUSE_STATE]++;
        break;
    case STATE_WAIT_LINK:
        if (!FuncIsActiveTask(Task_ReconnectWithLinkPlayers))
            gBattleCommunication[MULTIUSE_STATE]++;
        break;
    case STATE_ASK_RECORD:
        if (!gPaletteFade.active)
        {
            // "Would you like to record your battle on your FRONTIER PASS?"
            BattlePutTextOnWindow(gText_RecordBattleToPass, B_WIN_MSG);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case STATE_PRINT_YES_NO:
        if (!IsTextPrinterActive(B_WIN_MSG))
        {
            HandleBattleWindow(YESNOBOX_X_Y, 0);
            BattlePutTextOnWindow(gText_BattleYesNoChoice, B_WIN_YESNO);
            gBattleCommunication[CURSOR_POSITION] = 1;
            BattleCreateYesNoCursorAt(1);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case STATE_HANDLE_YES_NO:
        if (JOY_NEW(DPAD_UP))
        {
            if (gBattleCommunication[CURSOR_POSITION] != 0)
            {
                // Moved cursor onto Yes
                PlaySE(SE_SELECT);
                BattleDestroyYesNoCursorAt(gBattleCommunication[CURSOR_POSITION]);
                gBattleCommunication[CURSOR_POSITION] = 0;
                BattleCreateYesNoCursorAt(0);
            }
        }
        else if (JOY_NEW(DPAD_DOWN))
        {
            if (gBattleCommunication[CURSOR_POSITION] == 0)
            {
                // Moved cursor onto No
                PlaySE(SE_SELECT);
                BattleDestroyYesNoCursorAt(gBattleCommunication[CURSOR_POSITION]);
                gBattleCommunication[CURSOR_POSITION] = 1;
                BattleCreateYesNoCursorAt(1);
            }
        }
        else if (JOY_NEW(A_BUTTON))
        {
            PlaySE(SE_SELECT);
            if (gBattleCommunication[CURSOR_POSITION] == 0)
            {
                // Selected Yes
                HandleBattleWindow(YESNOBOX_X_Y, WINDOW_CLEAR);
                gBattleCommunication[1] = MoveRecordedBattleToSaveData();
                gBattleCommunication[MULTIUSE_STATE] = STATE_RECORD_YES;
            }
            else
            {
                // Selected No
                gBattleCommunication[MULTIUSE_STATE]++;
            }
        }
        else if (JOY_NEW(B_BUTTON))
        {
            PlaySE(SE_SELECT);
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case STATE_RECORD_NO:
        if (IsLinkTaskFinished() == TRUE)
        {
            HandleBattleWindow(YESNOBOX_X_Y, WINDOW_CLEAR);
            if (gMain.anyLinkBattlerHasFrontierPass)
            {
                // Other battlers may be recording, wait for them
                SetLinkStandbyCallback();
                BattlePutTextOnWindow(gText_LinkStandby3, B_WIN_MSG);
            }
            gBattleCommunication[MULTIUSE_STATE]++; // STATE_END_RECORD_NO
        }
        break;
    case STATE_WAIT_END:
        if (--gBattleCommunication[1] == 0)
        {
            if (gMain.anyLinkBattlerHasFrontierPass && !gWirelessCommType)
                SetCloseLinkCallback();
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case STATE_END:
        if (!gMain.anyLinkBattlerHasFrontierPass || gWirelessCommType || gReceivedRemoteLinkPlayers != 1)
        {
            gMain.anyLinkBattlerHasFrontierPass = FALSE;
            if (!gPaletteFade.active)
            {
                SetMainCallback2(gMain.savedCallback);
                FreeBattleResources();
                FreeBattleSpritesData();
                FreeMonSpritesGfx();
            }
        }
        break;
    case STATE_RECORD_YES:
        if (gBattleCommunication[1] == 1)
        {
            PlaySE(SE_SAVE);
            BattleStringExpandPlaceholdersToDisplayedString(gText_BattleRecordedOnPass);
            BattlePutTextOnWindow(gDisplayedStringBattle, B_WIN_MSG);
            gBattleCommunication[1] = 128; // Delay
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        else
        {
            BattleStringExpandPlaceholdersToDisplayedString(BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved);
            BattlePutTextOnWindow(gDisplayedStringBattle, B_WIN_MSG);
            gBattleCommunication[1] = 128; // Delay
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case STATE_RECORD_WAIT:
        if (IsLinkTaskFinished() == TRUE && !IsTextPrinterActive(B_WIN_MSG) && --gBattleCommunication[1] == 0)
        {
            if (gMain.anyLinkBattlerHasFrontierPass)
            {
                SetLinkStandbyCallback();
                BattlePutTextOnWindow(gText_LinkStandby3, B_WIN_MSG);
            }
            gBattleCommunication[MULTIUSE_STATE]++;
        }
        break;
    case STATE_END_RECORD_YES:
    case STATE_END_RECORD_NO:
        if (!IsTextPrinterActive(B_WIN_MSG))
        {
            if (gMain.anyLinkBattlerHasFrontierPass)
            {
                if (IsLinkTaskFinished() == TRUE)
                {
                    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
                    gBattleCommunication[1] = 32; // Delay
                    gBattleCommunication[MULTIUSE_STATE] = STATE_WAIT_END;
                }

            }
            else
            {
                BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
                gBattleCommunication[1] = 32; // Delay
                gBattleCommunication[MULTIUSE_STATE] = STATE_WAIT_END;
            }
        }
        break;
    }
}

static void TryCorrectShedinjaLanguage(struct Pokemon *mon)
{
    u8 nickname[POKEMON_NAME_LENGTH + 1];
    u8 language = LANGUAGE_JAPANESE;

    if (GetMonData(mon, MON_DATA_SPECIES) == SPECIES_SHEDINJA
     && GetMonData(mon, MON_DATA_LANGUAGE) != language)
    {
        GetMonData(mon, MON_DATA_NICKNAME, nickname);
        if (StringCompareWithoutExtCtrlCodes(nickname, sText_ShedinjaJpnName) == 0)
            SetMonData(mon, MON_DATA_LANGUAGE, &language);
    }
}

u32 GetBattleWindowTemplatePixelWidth(u32 windowsType, u32 tableId)
{
    return gBattleWindowTemplates[windowsType][tableId].width * 8;
}

#define sBattler            data[0]
#define sSpeciesId          data[2]

void SpriteCB_WildMon(struct Sprite *sprite)
{
<<<<<<< HEAD
    if (gSaveBlock2Ptr->optionsFastIntro == 1)
    {
        sprite->callback = SpriteCB_MoveWildMonToRight;
        StartSpriteAnimIfDifferent(sprite, 0);
        BeginNormalPaletteFade(0x20000, 0, 10, 10, RGB(8, 8, 8));
    }
    else
    {
        sprite->callback = SpriteCB_MoveWildMonToRight;
        StartSpriteAnimIfDifferent(sprite, 0);
    }

=======
    sprite->callback = SpriteCB_MoveWildMonToRight;
    StartSpriteAnimIfDifferent(sprite, 0);
    if (B_FAST_INTRO_NO_SLIDE == FALSE && !gTestRunnerHeadless)
    {
        if (WILD_DOUBLE_BATTLE)
            BeginNormalPaletteFade((0x10000 << sprite->sBattler) | (0x10000 << BATTLE_PARTNER(sprite->sBattler)), 0, 10, 10, RGB(8, 8, 8));
        else
            BeginNormalPaletteFade((0x10000 << sprite->sBattler), 0, 10, 10, RGB(8, 8, 8));
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

static void SpriteCB_MoveWildMonToRight(struct Sprite *sprite)
{
<<<<<<< HEAD
    if (gSaveBlock2Ptr->optionsFastIntro == 1)
    {
        if ((gIntroSlideFlags & 1) == 0)
        {
            sprite->x2 += 2;
            if (sprite->x2 == 0)
            {
                sprite->callback = SpriteCB_WildMonShowHealthbox;
            }
        }
    }
    else
    {
        if ((gIntroSlideFlags & 1) == 0)
        {
            sprite->x2 = 0;
=======
    if ((gIntroSlideFlags & 1) == 0)
    {
        if (B_FAST_INTRO_NO_SLIDE == FALSE && !gTestRunnerHeadless)
            sprite->x2 += 2;
        else
            sprite->x2 = 0;

        if (sprite->x2 == 0)
        {
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            sprite->callback = SpriteCB_WildMonShowHealthbox;
        }
    }
}

static void SpriteCB_WildMonShowHealthbox(struct Sprite *sprite)
{
    if (sprite->animEnded)
    {
<<<<<<< HEAD
        if (gSaveBlock2Ptr->optionsFastIntro == 1)
        {
            StartHealthboxSlideIn(sprite->sBattler);
            SetHealthboxSpriteVisible(gHealthboxSpriteIds[sprite->sBattler]);
            sprite->callback = SpriteCB_WildMonAnimate;
            StartSpriteAnimIfDifferent(sprite, 0);
            BeginNormalPaletteFade(0x20000, 0, 10, 0, RGB(8, 8, 8));
        }
        else
        {
            StartHealthboxSlideIn(sprite->sBattler);
            SetHealthboxSpriteVisible(gHealthboxSpriteIds[sprite->sBattler]);
            sprite->callback = SpriteCB_WildMonAnimate;
            StartSpriteAnimIfDifferent(sprite, 0);
=======
        StartHealthboxSlideIn(sprite->sBattler);
        SetHealthboxSpriteVisible(gHealthboxSpriteIds[sprite->sBattler]);
        sprite->callback = SpriteCB_WildMonAnimate;
        StartSpriteAnimIfDifferent(sprite, 0);
        if (B_FAST_INTRO_NO_SLIDE == FALSE && !gTestRunnerHeadless)
        {
            if (WILD_DOUBLE_BATTLE)
                BeginNormalPaletteFade((0x10000 << sprite->sBattler) | (0x10000 << BATTLE_PARTNER(sprite->sBattler)), 0, 10, 0, RGB(8, 8, 8));
            else
                BeginNormalPaletteFade((0x10000 << sprite->sBattler), 0, 10, 0, RGB(8, 8, 8));
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        }
    }
}

static void SpriteCB_WildMonAnimate(struct Sprite *sprite)
{
    if (!gPaletteFade.active)
    {
        BattleAnimateFrontSprite(sprite, sprite->sSpeciesId, FALSE, 1);
    }
}

void SpriteCallbackDummy_2(struct Sprite *sprite)
{

}

<<<<<<< HEAD
#define sNumFlickers data[3]
#define sDelay       data[4]

static void UNUSED SpriteCB_InitFlicker(struct Sprite *sprite)
{
    sprite->sNumFlickers = 6;
    sprite->sDelay = 1;
    sprite->callback = SpriteCB_Flicker;
}

static void SpriteCB_Flicker(struct Sprite *sprite)
{
    sprite->sDelay--;
    if (sprite->sDelay == 0)
    {
        sprite->sDelay = 8;
        sprite->invisible ^= 1;
        sprite->sNumFlickers--;
        if (sprite->sNumFlickers == 0)
        {
            sprite->invisible = FALSE;
            sprite->callback = SpriteCallbackDummy_2;
            sFlickerArray[0] = 0;
        }
    }
}

#undef sNumFlickers
#undef sDelay

extern const struct MonCoords gMonFrontPicCoords[];
extern const struct MonCoords gCastformFrontSpriteCoords[];

void SpriteCB_FaintOpponentMon(struct Sprite *sprite)
{
    u8 battler = sprite->sBattler;
=======
void SpriteCB_FaintOpponentMon(struct Sprite *sprite)
{
    u8 battler = sprite->sBattler;
    u32 personality = GetMonData(GetBattlerMon(battler), MON_DATA_PERSONALITY);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    u16 species;
    u8 yOffset;

    if (gBattleSpritesDataPtr->battlerData[battler].transformSpecies != 0)
        species = gBattleSpritesDataPtr->battlerData[battler].transformSpecies;
    else
        species = sprite->sSpeciesId;

<<<<<<< HEAD
    GetMonData(&gEnemyParty[gBattlerPartyIndexes[battler]], MON_DATA_PERSONALITY);  // Unused return value.

    if (species == SPECIES_UNOWN)
    {
        u32 personalityValue = GetMonData(&gEnemyParty[gBattlerPartyIndexes[battler]], MON_DATA_PERSONALITY);
        u16 unownForm = GET_UNOWN_LETTER(personalityValue);
        u16 unownSpecies;

        if (unownForm == 0)
            unownSpecies = SPECIES_UNOWN;  // Use the A Unown form.
        else
            unownSpecies = NUM_SPECIES + unownForm;  // Use one of the other Unown letters.

        yOffset = gMonFrontPicCoords[unownSpecies].y_offset;
    }
    else if (species == SPECIES_CASTFORM)
    {
        yOffset = gCastformFrontSpriteCoords[gBattleMonForms[battler]].y_offset;
    }
    else if (species > NUM_SPECIES)
    {
        yOffset = gMonFrontPicCoords[SPECIES_NONE].y_offset;
    }
    else
    {
        yOffset = gMonFrontPicCoords[species].y_offset;
    }
=======
    species = SanitizeSpeciesId(species);
    if (species == SPECIES_UNOWN)
        species = GetUnownSpeciesId(personality);
    yOffset = gSpeciesInfo[species].frontPicYOffset;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    sprite->data[3] = 8 - yOffset / 8;
    sprite->data[4] = 1;
    sprite->callback = SpriteCB_AnimFaintOpponent;
}

static void SpriteCB_AnimFaintOpponent(struct Sprite *sprite)
{
    s32 i;

    if (--sprite->data[4] == 0)
    {
        sprite->data[4] = 2;
        sprite->y2 += 8; // Move the sprite down.
        if (--sprite->data[3] < 0)
        {
            FreeSpriteOamMatrix(sprite);
            DestroySprite(sprite);
        }
        else // Erase bottom part of the sprite to create a smooth illusion of mon falling down.
        {
<<<<<<< HEAD
            u8 *dst = gMonSpritesGfxPtr->sprites.byte[GetBattlerPosition(sprite->sBattler)] + (gBattleMonForms[sprite->sBattler] << 11) + (sprite->data[3] << 8);
=======
            u8 *dst = &gMonSpritesGfxPtr->spritesGfx[GetBattlerPosition(sprite->sBattler)][(sprite->data[3] << 8)];
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

            for (i = 0; i < 0x100; i++)
                *(dst++) = 0;

<<<<<<< HEAD
            StartSpriteAnim(sprite, gBattleMonForms[sprite->sBattler]);
=======
            StartSpriteAnim(sprite, 0);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        }
    }
}

// Used when selecting a move, which can hit multiple targets, in double battles.
void SpriteCB_ShowAsMoveTarget(struct Sprite *sprite)
{
    sprite->data[3] = 8;
    sprite->data[4] = sprite->invisible;
    sprite->callback = SpriteCB_BlinkVisible;
}

static void SpriteCB_BlinkVisible(struct Sprite *sprite)
{
    if (--sprite->data[3] == 0)
    {
        sprite->invisible ^= 1;
        sprite->data[3] = 8;
    }
}

void SpriteCB_HideAsMoveTarget(struct Sprite *sprite)
{
    sprite->invisible = sprite->data[4];
    sprite->data[4] = FALSE;
    sprite->callback = SpriteCallbackDummy_2;
}

void SpriteCB_OpponentMonFromBall(struct Sprite *sprite)
{
<<<<<<< HEAD
    if (gSaveBlock2Ptr->optionsBattleSceneOff == 1)
    {
        sprite->callback = SpriteCallbackDummy;
    }
    else
    {
        if (sprite->affineAnimEnded)
        {
            if (!(gHitMarker & HITMARKER_NO_ANIMATIONS) || gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            {
                if (HasTwoFramesAnimation(sprite->sSpeciesId))
                    StartSpriteAnim(sprite, 1);
            }
            BattleAnimateFrontSprite(sprite, sprite->sSpeciesId, TRUE, 1);
        }
=======
    if (sprite->affineAnimEnded)
    {
        if (!(gHitMarker & HITMARKER_NO_ANIMATIONS) || gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
        {
            if (HasTwoFramesAnimation(sprite->sSpeciesId))
                StartSpriteAnim(sprite, 1);
        }
        BattleAnimateFrontSprite(sprite, sprite->sSpeciesId, TRUE, 1);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }
}

// This callback is frequently overwritten by SpriteCB_TrainerSlideIn
void SpriteCB_BattleSpriteStartSlideLeft(struct Sprite *sprite)
{
    sprite->callback = SpriteCB_BattleSpriteSlideLeft;
}

static void SpriteCB_BattleSpriteSlideLeft(struct Sprite *sprite)
{
    if (!(gIntroSlideFlags & 1))
    {
        sprite->x2 -= 2;
        if (sprite->x2 == 0)
        {
            sprite->callback = SpriteCB_Idle;
            sprite->data[1] = 0;
        }
    }
}

static void UNUSED SetIdleSpriteCallback(struct Sprite *sprite)
{
    sprite->callback = SpriteCB_Idle;
}

static void SpriteCB_Idle(struct Sprite *sprite)
{
}

#define sSpeedX data[1]
#define sSpeedY data[2]

void SpriteCB_FaintSlideAnim(struct Sprite *sprite)
{
    if (!(gIntroSlideFlags & 1))
    {
        sprite->x2 += sprite->sSpeedX;
        sprite->y2 += sprite->sSpeedY;
    }
}

#undef sSpeedX
#undef sSpeedY

<<<<<<< HEAD
#define sSinIndex           data[0]
#define sDelta              data[1]
#define sAmplitude          data[2]
#define sBouncerSpriteId    data[3]
#define sWhich              data[4]
=======
#define sSinIndex           data[3]
#define sDelta              data[4]
#define sAmplitude          data[5]
#define sBouncerSpriteId    data[6]
#define sWhich              data[7]
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

void DoBounceEffect(u8 battler, u8 which, s8 delta, s8 amplitude)
{
    u8 invisibleSpriteId;
    u8 bouncerSpriteId;

    switch (which)
    {
    case BOUNCE_HEALTHBOX:
    default:
        if (gBattleSpritesDataPtr->healthBoxesData[battler].healthboxIsBouncing)
            return;
        break;
    case BOUNCE_MON:
        if (gBattleSpritesDataPtr->healthBoxesData[battler].battlerIsBouncing)
            return;
        break;
    }

    invisibleSpriteId = CreateInvisibleSpriteWithCallback(SpriteCB_BounceEffect);
    if (which == BOUNCE_HEALTHBOX)
    {
        bouncerSpriteId = gHealthboxSpriteIds[battler];
        gBattleSpritesDataPtr->healthBoxesData[battler].healthboxBounceSpriteId = invisibleSpriteId;
        gBattleSpritesDataPtr->healthBoxesData[battler].healthboxIsBouncing = 1;
        gSprites[invisibleSpriteId].sSinIndex = 128; // 0
    }
    else
    {
        bouncerSpriteId = gBattlerSpriteIds[battler];
        gBattleSpritesDataPtr->healthBoxesData[battler].battlerBounceSpriteId = invisibleSpriteId;
        gBattleSpritesDataPtr->healthBoxesData[battler].battlerIsBouncing = 1;
        gSprites[invisibleSpriteId].sSinIndex = 192; // -1
    }
    gSprites[invisibleSpriteId].sDelta = delta;
    gSprites[invisibleSpriteId].sAmplitude = amplitude;
    gSprites[invisibleSpriteId].sBouncerSpriteId = bouncerSpriteId;
    gSprites[invisibleSpriteId].sWhich = which;
<<<<<<< HEAD
=======
    gSprites[invisibleSpriteId].sBattler = battler;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    gSprites[bouncerSpriteId].x2 = 0;
    gSprites[bouncerSpriteId].y2 = 0;
}

void EndBounceEffect(u8 battler, u8 which)
{
    u8 bouncerSpriteId;

    if (which == BOUNCE_HEALTHBOX)
    {
        if (!gBattleSpritesDataPtr->healthBoxesData[battler].healthboxIsBouncing)
            return;

        bouncerSpriteId = gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].healthboxBounceSpriteId].sBouncerSpriteId;
        DestroySprite(&gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].healthboxBounceSpriteId]);
        gBattleSpritesDataPtr->healthBoxesData[battler].healthboxIsBouncing = 0;
    }
    else
    {
        if (!gBattleSpritesDataPtr->healthBoxesData[battler].battlerIsBouncing)
            return;

        bouncerSpriteId = gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].battlerBounceSpriteId].sBouncerSpriteId;
        DestroySprite(&gSprites[gBattleSpritesDataPtr->healthBoxesData[battler].battlerBounceSpriteId]);
        gBattleSpritesDataPtr->healthBoxesData[battler].battlerIsBouncing = 0;
    }

    gSprites[bouncerSpriteId].x2 = 0;
    gSprites[bouncerSpriteId].y2 = 0;
}

static void SpriteCB_BounceEffect(struct Sprite *sprite)
{
    u8 bouncerSpriteId = sprite->sBouncerSpriteId;
<<<<<<< HEAD
    s32 index;

    if (sprite->sWhich == BOUNCE_HEALTHBOX)
        index = sprite->sSinIndex;
    else
        index = sprite->sSinIndex;

    gSprites[bouncerSpriteId].y2 = Sin(index, sprite->sAmplitude) + sprite->sAmplitude;
=======
    s32 index = sprite->sSinIndex;
    s32 y = Sin(index, sprite->sAmplitude) + sprite->sAmplitude;

    gSprites[bouncerSpriteId].y2 = y;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    sprite->sSinIndex = (sprite->sSinIndex + sprite->sDelta) & 0xFF;
}

#undef sSinIndex
#undef sDelta
#undef sAmplitude
#undef sBouncerSpriteId
#undef sWhich

void SpriteCB_PlayerMonFromBall(struct Sprite *sprite)
{
    if (sprite->affineAnimEnded)
        BattleAnimateBackSprite(sprite, sprite->sSpeciesId);
}

<<<<<<< HEAD
void SpriteCB_PlayerMonSlideIn(struct Sprite *sprite) {
    if (sprite->data[3] == 0) {
        PlaySE(SE_BALL_TRAY_ENTER);
        sprite->data[3]++;
    } else if (sprite->data[3] == 1) {
=======
void SpriteCB_PlayerMonSlideIn(struct Sprite *sprite)
{
    if (sprite->data[3] == 0)
    {
        PlaySE(SE_BALL_TRAY_ENTER);
        sprite->data[3]++;
    }
    else if (sprite->data[3] == 1)
    {
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        if (sprite->animEnded)
            return;
        sprite->data[4] = sprite->x;
        sprite->x = -33;
        sprite->invisible = FALSE;
        sprite->data[3]++;
<<<<<<< HEAD
    } else if (sprite->data[3] < 27) {
        sprite->x += 4;
        sprite->data[3]++;
    } else {
=======
    }
    else if (sprite->data[3] < 27)
    {
        sprite->x += 4;
        sprite->data[3]++;
    }
    else
    {
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        sprite->data[3] = 0;
        sprite->x = sprite->data[4];
        sprite->data[4] = 0;
        sprite->callback = SpriteCB_PlayerMonFromBall;
        PlayCry_ByMode(sprite->sSpeciesId, -25, CRY_MODE_NORMAL);
    }
}

static void SpriteCB_TrainerThrowObject_Main(struct Sprite *sprite)
{
    AnimSetCenterToCornerVecX(sprite);
    if (sprite->animEnded)
        sprite->callback = SpriteCB_Idle;
}

// Sprite callback for a trainer back pic to throw an object
// (Wally throwing a ball, throwing Pokéblocks/balls in the Safari Zone)
void SpriteCB_TrainerThrowObject(struct Sprite *sprite)
{
    StartSpriteAnim(sprite, 1);
    sprite->callback = SpriteCB_TrainerThrowObject_Main;
}

void AnimSetCenterToCornerVecX(struct Sprite *sprite)
{
    if (sprite->animDelayCounter == 0)
        sprite->centerToCornerVecX = sCenterToCornerVecXs[sprite->animCmdIndex];
}

void BeginBattleIntroDummy(void)
{

}

void BeginBattleIntro(void)
{
    BattleStartClearSetData();
    gBattleCommunication[1] = 0;
<<<<<<< HEAD
    gBattleMainFunc = BattleIntroGetMonsData;
=======
    gBattleStruct->introState = 0;
    gBattleMainFunc = DoBattleIntro;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

static void BattleMainCB1(void)
{
<<<<<<< HEAD
    gBattleMainFunc();

    for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
        gBattlerControllerFuncs[gActiveBattler]();
=======
    u32 battler;

    gBattleMainFunc();
    for (battler = 0; battler < gBattlersCount; battler++)
        gBattlerControllerFuncs[battler](battler);
}

static void ClearSetBScriptingStruct(void)
{
    // windowsType is set up earlier in BattleInitBgsAndWindows, so we need to save the value
    u32 temp = gBattleScripting.windowsType;
    u32 specialBattleType = gBattleScripting.specialTrainerBattleType;
    memset(&gBattleScripting, 0, sizeof(gBattleScripting));

    gBattleScripting.windowsType = temp;
    if (TESTING)
        gBattleScripting.battleStyle = OPTIONS_BATTLE_STYLE_SET;
    else
        gBattleScripting.battleStyle = gSaveBlock2Ptr->optionsBattleStyle;
    gBattleScripting.expOnCatch = (B_EXP_CATCH >= GEN_6);
    gBattleScripting.specialTrainerBattleType = specialBattleType;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

static void BattleStartClearSetData(void)
{
    s32 i;
<<<<<<< HEAD
    u32 j;
    u8 *dataPtr;
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    TurnValuesCleanUp(FALSE);
    SpecialStatusesClear();

<<<<<<< HEAD
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
    {
        gStatuses3[i] = 0;

        dataPtr = (u8 *)&gDisableStructs[i];
        for (j = 0; j < sizeof(struct DisableStruct); j++)
            dataPtr[j] = 0;

        gDisableStructs[i].isFirstTurn = 2;
        sUnusedBattlersArray[i] = 0;
        gLastMoves[i] = MOVE_NONE;
        gLastLandedMoves[i] = MOVE_NONE;
        gLastHitByType[i] = 0;
=======
    memset(&gDisableStructs, 0, sizeof(gDisableStructs));
    memset(&gFieldTimers, 0, sizeof(gFieldTimers));
    memset(&gSideStatuses, 0, sizeof(gSideStatuses));
    memset(&gSideTimers, 0, sizeof(gSideTimers));
    memset(&gWishFutureKnock, 0, sizeof(gWishFutureKnock));
    memset(&gBattleResults, 0, sizeof(gBattleResults));
    ClearSetBScriptingStruct();

    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
    {
        gDisableStructs[i].isFirstTurn = 2;
        gLastMoves[i] = MOVE_NONE;
        gLastLandedMoves[i] = MOVE_NONE;
        gLastHitByType[i] = 0;
        gLastUsedMoveType[i] = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        gLastResultingMoves[i] = MOVE_NONE;
        gLastHitBy[i] = 0xFF;
        gLockedMoves[i] = MOVE_NONE;
        gLastPrintedMoves[i] = MOVE_NONE;
<<<<<<< HEAD
        gBattleResources->flags->flags[i] = 0;
        gPalaceSelectionBattleScripts[i] = 0;
    }

    for (i = 0; i < 2; i++)
    {
        gSideStatuses[i] = 0;

        dataPtr = (u8 *)&gSideTimers[i];
        for (j = 0; j < sizeof(struct SideTimer); j++)
            dataPtr[j] = 0;
    }

    gBattlerAttacker = 0;
    gBattlerTarget = 0;
    gBattleWeather = 0;

    dataPtr = (u8 *)&gWishFutureKnock;
    for (i = 0; i < sizeof(struct WishFutureKnock); i++)
        dataPtr[i] = 0;

=======
        gPalaceSelectionBattleScripts[i] = 0;
        gBattleStruct->lastTakenMove[i] = MOVE_NONE;
        gBattleStruct->choicedMove[i] = MOVE_NONE;
        gBattleStruct->changedItems[i] = 0;
        gBattleStruct->lastTakenMoveFrom[i][0] = MOVE_NONE;
        gBattleStruct->lastTakenMoveFrom[i][1] = MOVE_NONE;
        gBattleStruct->lastTakenMoveFrom[i][2] = MOVE_NONE;
        gBattleStruct->lastTakenMoveFrom[i][3] = MOVE_NONE;
        gBattleStruct->AI_monToSwitchIntoId[i] = PARTY_SIZE;
        gBattleStruct->skyDropTargets[i] = SKY_DROP_NO_TARGET;
    }

    gLastUsedMove = 0;
    gFieldStatuses = 0;

    gHasFetchedBall = FALSE;
    gLastUsedBall = 0;

    gBattlerAttacker = 0;
    gBattlerTarget = 0;
    gEffectBattler = 0;
    gBattlerAbility = 0;
    gBattleWeather = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    gHitMarker = 0;

    if (!(gBattleTypeFlags & BATTLE_TYPE_RECORDED))
    {
        if (!(gBattleTypeFlags & BATTLE_TYPE_LINK) && gSaveBlock2Ptr->optionsBattleSceneOff == TRUE)
            gHitMarker |= HITMARKER_NO_ANIMATIONS;
    }
    else if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK)) && GetBattleSceneInRecordedBattle())
<<<<<<< HEAD
        gHitMarker |= HITMARKER_NO_ANIMATIONS;

    gBattleScripting.battleStyle = gSaveBlock2Ptr->optionsBattleStyle;
    
    gBattleScripting.monCaught = FALSE;
    gBattleScripting.expOnCatch = TRUE;
=======
    {
        gHitMarker |= HITMARKER_NO_ANIMATIONS;
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    gMultiHitCounter = 0;
    gBattleOutcome = 0;
    gBattleControllerExecFlags = 0;
    gPaydayMoney = 0;
    gBattleResources->battleScriptsStack->size = 0;
    gBattleResources->battleCallbackStack->size = 0;

    for (i = 0; i < BATTLE_COMMUNICATION_ENTRIES_COUNT; i++)
        gBattleCommunication[i] = 0;

    gPauseCounterBattle = 0;
<<<<<<< HEAD
    gBattleMoveDamage = 0;
    gIntroSlideFlags = 0;
    gBattleScripting.animTurn = 0;
    gBattleScripting.animTargetsHit = 0;
=======
    gIntroSlideFlags = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    gLeveledUpInBattle = 0;
    gAbsentBattlerFlags = 0;
    gBattleStruct->runTries = 0;
    gBattleStruct->safariGoNearCounter = 0;
    gBattleStruct->safariPkblThrowCounter = 0;
<<<<<<< HEAD
    *(&gBattleStruct->safariCatchFactor) = gSpeciesInfo[GetMonData(&gEnemyParty[0], MON_DATA_SPECIES)].catchRate * 100 / 1275;
    gBattleStruct->safariEscapeFactor = 3;
    gBattleStruct->wildVictorySong = 0;
    if (partyMonHoldDoublePrizeEffect())
        gBattleStruct->moneyMultiplier = 2;
    else
        gBattleStruct->moneyMultiplier = 1;

    for (i = 0; i < 8; i++)
    {
        *((u8 *)gBattleStruct->lastTakenMove + i) = MOVE_NONE;
        *((u8 *)gBattleStruct->usedHeldItems + i) = ITEM_NONE;
        *((u8 *)gBattleStruct->choicedMove + i) = MOVE_NONE;
        *((u8 *)gBattleStruct->changedItems + i) = ITEM_NONE;
        *(i + 0 * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 0) = 0;
        *(i + 1 * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 0) = 0;
        *(i + 2 * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 0) = 0;
        *(i + 3 * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 0) = 0;
    }

    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
    {
        *(gBattleStruct->AI_monToSwitchIntoId + i) = PARTY_SIZE;
    }
=======
    gBattleStruct->safariCatchFactor = gSpeciesInfo[GetMonData(&gEnemyParty[0], MON_DATA_SPECIES)].catchRate * 100 / 1275;
    gBattleStruct->safariEscapeFactor = 3;
    gBattleStruct->wildVictorySong = 0;
    gBattleStruct->moneyMultiplier = 1;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    gBattleStruct->givenExpMons = 0;
    gBattleStruct->palaceFlags = 0;

<<<<<<< HEAD
    gRandomTurnNumber = Random();

    dataPtr = (u8 *)(&gBattleResults);
    for (i = 0; i < sizeof(struct BattleResults); i++)
        dataPtr[i] = 0;

=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    gBattleResults.shinyWildMon = IsMonShiny(&gEnemyParty[0]);

    gBattleStruct->arenaLostPlayerMons = 0;
    gBattleStruct->arenaLostOpponentMons = 0;
<<<<<<< HEAD
}

void SwitchInClearSetData(void)
{
    struct DisableStruct disableStructCopy = gDisableStructs[gActiveBattler];
    s32 i;
    u8 *ptr;

    if (gBattleMoves[gCurrentMove].effect != EFFECT_BATON_PASS)
    {
        for (i = 0; i < NUM_BATTLE_STATS; i++)
            gBattleMons[gActiveBattler].statStages[i] = DEFAULT_STAT_STAGE;
        for (i = 0; i < gBattlersCount; i++)
        {
            if ((gBattleMons[i].status2 & STATUS2_ESCAPE_PREVENTION) && gDisableStructs[i].battlerPreventingEscape == gActiveBattler)
                gBattleMons[i].status2 &= ~STATUS2_ESCAPE_PREVENTION;
            if ((gStatuses3[i] & STATUS3_ALWAYS_HITS) && gDisableStructs[i].battlerWithSureHit == gActiveBattler)
            {
                gStatuses3[i] &= ~STATUS3_ALWAYS_HITS;
=======

    for (i = 0; i < ARRAY_COUNT(gSideTimers); i++)
    {
        gSideTimers[i].stickyWebBattlerId = 0xFF;
    }
    gBattleStruct->appearedInBattle = 0;
    gBattleStruct->beatUpSlot = 0;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        gBattleStruct->usedHeldItems[i][B_SIDE_PLAYER] = 0;
        gBattleStruct->usedHeldItems[i][B_SIDE_OPPONENT] = 0;
        gBattleStruct->itemLost[B_SIDE_PLAYER][i].originalItem = GetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM);
        gBattleStruct->itemLost[B_SIDE_OPPONENT][i].originalItem = GetMonData(&gEnemyParty[i], MON_DATA_HELD_ITEM);
        gPartyCriticalHits[i] = 0;
    }

    gBattleStruct->swapDamageCategory = FALSE; // Photon Geyser, Shell Side Arm, Light That Burns the Sky
    gBattleStruct->categoryOverride = FALSE; // used for Z-Moves and Max Moves

    ClearPursuitValues();
    gSelectedMonPartyId = PARTY_SIZE; // Revival Blessing
    gCategoryIconSpriteId = 0xFF;

    if (IsSleepClauseEnabled())
    {
        // If monCausingSleepClause[side] equals PARTY_SIZE, Sleep Clause is not active for the given side.
        gBattleStruct->monCausingSleepClause[B_SIDE_PLAYER] = PARTY_SIZE;
        gBattleStruct->monCausingSleepClause[B_SIDE_OPPONENT] = PARTY_SIZE;
    }
}

#define UNPACK_VOLATILE_BATON_PASSABLES(_enum, _fieldName, _typeMaxValue, ...) __VA_OPT__(if ((FIRST(__VA_ARGS__)) & V_BATON_PASSABLE) gBattleMons[battler].volatiles._fieldName = volatilesCopy->_fieldName;)

void SwitchInClearSetData(u32 battler, struct Volatiles *volatilesCopy)
{
    s32 i;
    enum BattleMoveEffects effect = GetMoveEffect(gCurrentMove);
    struct DisableStruct disableStructCopy = gDisableStructs[battler];

    ClearIllusionMon(battler);
    if (effect != EFFECT_BATON_PASS)
    {
        for (i = 0; i < NUM_BATTLE_STATS; i++)
            gBattleMons[battler].statStages[i] = DEFAULT_STAT_STAGE;
        for (i = 0; i < gBattlersCount; i++)
        {
            if (gBattleMons[i].volatiles.escapePrevention && gDisableStructs[i].battlerPreventingEscape == battler)
                gBattleMons[i].volatiles.escapePrevention = FALSE;
            if (gBattleMons[i].volatiles.lockOn && gDisableStructs[i].battlerWithSureHit == battler)
            {
                gBattleMons[i].volatiles.lockOn = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                gDisableStructs[i].battlerWithSureHit = 0;
            }
        }
    }
<<<<<<< HEAD
    if (gBattleMoves[gCurrentMove].effect == EFFECT_BATON_PASS)
    {
        gBattleMons[gActiveBattler].status2 &= (STATUS2_CONFUSION | STATUS2_FOCUS_ENERGY | STATUS2_SUBSTITUTE | STATUS2_ESCAPE_PREVENTION | STATUS2_CURSED);
        gStatuses3[gActiveBattler] &= (STATUS3_LEECHSEED_BATTLER | STATUS3_LEECHSEED | STATUS3_ALWAYS_HITS | STATUS3_PERISH_SONG | STATUS3_ROOTED | STATUS3_MUDSPORT | STATUS3_WATERSPORT);

        for (i = 0; i < gBattlersCount; i++)
        {
            if (GetBattlerSide(gActiveBattler) != GetBattlerSide(i)
             && (gStatuses3[i] & STATUS3_ALWAYS_HITS) != 0
             && (gDisableStructs[i].battlerWithSureHit == gActiveBattler))
            {
                gStatuses3[i] &= ~STATUS3_ALWAYS_HITS;
                gStatuses3[i] |= STATUS3_ALWAYS_HITS_TURN(2);
            }
        }
    }
    else
    {
        gBattleMons[gActiveBattler].status2 = 0;
        gStatuses3[gActiveBattler] = 0;
=======

    // Clear volatiles - reapply some if Baton Pass was used
    memset(&gBattleMons[battler].volatiles, 0, sizeof(struct Volatiles));
    if (effect == EFFECT_BATON_PASS)
    {
        // Transfer Baton Passable volatile statuses
        VOLATILE_DEFINITIONS(UNPACK_VOLATILE_BATON_PASSABLES)
        /* Expands to the following (compiler removes `if` statements):
         * gBattleMons[battler].volatiles.confusionTurns = volatilesCopy->confusionTurns;
         * gBattleMons[battler].volatiles.substitute = volatilesCopy->substitute;
         * gBattleMons[battler].volatiles.escapePrevention = volatilesCopy->escapePrevention;
         * ...etc
         */

        for (i = 0; i < gBattlersCount; i++)
        {
            if (!IsBattlerAlly(battler, i)
             && gBattleMons[i].volatiles.lockOn != 0
             && (gDisableStructs[i].battlerWithSureHit == battler))
            {
                gBattleMons[i].volatiles.lockOn = 0;
            }
        }
        if (gBattleMons[battler].volatiles.powerTrick)
            SWAP(gBattleMons[battler].attack, gBattleMons[battler].defense, i);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }

    for (i = 0; i < gBattlersCount; i++)
    {
<<<<<<< HEAD
        if (gBattleMons[i].status2 & STATUS2_INFATUATED_WITH(gActiveBattler))
            gBattleMons[i].status2 &= ~STATUS2_INFATUATED_WITH(gActiveBattler);
        if ((gBattleMons[i].status2 & STATUS2_WRAPPED) && *(gBattleStruct->wrappedBy + i) == gActiveBattler)
            gBattleMons[i].status2 &= ~STATUS2_WRAPPED;
    }

    gActionSelectionCursor[gActiveBattler] = 0;
    gMoveSelectionCursor[gActiveBattler] = 0;

    ptr = (u8 *)&gDisableStructs[gActiveBattler];
    for (i = 0; i < sizeof(struct DisableStruct); i++)
        ptr[i] = 0;

    if (gBattleMoves[gCurrentMove].effect == EFFECT_BATON_PASS)
    {
        gDisableStructs[gActiveBattler].substituteHP = disableStructCopy.substituteHP;
        gDisableStructs[gActiveBattler].battlerWithSureHit = disableStructCopy.battlerWithSureHit;
        gDisableStructs[gActiveBattler].perishSongTimer = disableStructCopy.perishSongTimer;
        gDisableStructs[gActiveBattler].perishSongTimerStartValue = disableStructCopy.perishSongTimerStartValue;
        gDisableStructs[gActiveBattler].battlerPreventingEscape = disableStructCopy.battlerPreventingEscape;
    }

    gMoveResultFlags = 0;
    gDisableStructs[gActiveBattler].isFirstTurn = 2;
    gDisableStructs[gActiveBattler].truantSwitchInHack = disableStructCopy.truantSwitchInHack;
    gLastMoves[gActiveBattler] = MOVE_NONE;
    gLastLandedMoves[gActiveBattler] = MOVE_NONE;
    gLastHitByType[gActiveBattler] = 0;
    gLastResultingMoves[gActiveBattler] = MOVE_NONE;
    gLastPrintedMoves[gActiveBattler] = MOVE_NONE;
    gLastHitBy[gActiveBattler] = 0xFF;

    *(gBattleStruct->lastTakenMove + gActiveBattler * 2 + 0) = MOVE_NONE;
    *(gBattleStruct->lastTakenMove + gActiveBattler * 2 + 1) = MOVE_NONE;
    *(0 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 0) = 0;
    *(0 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 1) = 0;
    *(1 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 0) = 0;
    *(1 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 1) = 0;
    *(2 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 0) = 0;
    *(2 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 1) = 0;
    *(3 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 0) = 0;
    *(3 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 1) = 0;

    gBattleStruct->palaceFlags &= ~(gBitTable[gActiveBattler]);

    for (i = 0; i < gBattlersCount; i++)
    {
        if (i != gActiveBattler && GetBattlerSide(i) != GetBattlerSide(gActiveBattler))
        {
            *(gBattleStruct->lastTakenMove + i * 2 + 0) = MOVE_NONE;
            *(gBattleStruct->lastTakenMove + i * 2 + 1) = MOVE_NONE;
        }
        *(i * 8 + gActiveBattler * 2 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 0) = 0;
        *(i * 8 + gActiveBattler * 2 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 1) = 0;
    }

    *(u8 *)((u8 *)(&gBattleStruct->choicedMove[gActiveBattler]) + 0) = MOVE_NONE;
    *(u8 *)((u8 *)(&gBattleStruct->choicedMove[gActiveBattler]) + 1) = MOVE_NONE;

    gBattleResources->flags->flags[gActiveBattler] = 0;
    gCurrentMove = MOVE_NONE;
    gBattleStruct->arenaTurnCounter = 0xFF;

    ClearBattlerMoveHistory(gActiveBattler);
    ClearBattlerAbilityHistory(gActiveBattler);
}

void FaintClearSetData(void)
{
    s32 i;
    u8 *ptr;

    for (i = 0; i < NUM_BATTLE_STATS; i++)
        gBattleMons[gActiveBattler].statStages[i] = DEFAULT_STAT_STAGE;

    gBattleMons[gActiveBattler].status2 = 0;
    gStatuses3[gActiveBattler] = 0;

    for (i = 0; i < gBattlersCount; i++)
    {
        if ((gBattleMons[i].status2 & STATUS2_ESCAPE_PREVENTION) && gDisableStructs[i].battlerPreventingEscape == gActiveBattler)
            gBattleMons[i].status2 &= ~STATUS2_ESCAPE_PREVENTION;
        if (gBattleMons[i].status2 & STATUS2_INFATUATED_WITH(gActiveBattler))
            gBattleMons[i].status2 &= ~STATUS2_INFATUATED_WITH(gActiveBattler);
        if ((gBattleMons[i].status2 & STATUS2_WRAPPED) && *(gBattleStruct->wrappedBy + i) == gActiveBattler)
            gBattleMons[i].status2 &= ~STATUS2_WRAPPED;
    }

    gActionSelectionCursor[gActiveBattler] = 0;
    gMoveSelectionCursor[gActiveBattler] = 0;

    ptr = (u8 *)&gDisableStructs[gActiveBattler];
    for (i = 0; i < sizeof(struct DisableStruct); i++)
        ptr[i] = 0;

    gProtectStructs[gActiveBattler].protected = FALSE;
    gProtectStructs[gActiveBattler].endured = FALSE;
    gProtectStructs[gActiveBattler].noValidMoves = FALSE;
    gProtectStructs[gActiveBattler].helpingHand = FALSE;
    gProtectStructs[gActiveBattler].bounceMove = FALSE;
    gProtectStructs[gActiveBattler].stealMove = FALSE;
    gProtectStructs[gActiveBattler].flag0Unknown = FALSE;
    gProtectStructs[gActiveBattler].prlzImmobility = FALSE;
    gProtectStructs[gActiveBattler].confusionSelfDmg = FALSE;
    gProtectStructs[gActiveBattler].targetNotAffected = FALSE;
    gProtectStructs[gActiveBattler].chargingTurn = FALSE;
    gProtectStructs[gActiveBattler].fleeType = 0;
    gProtectStructs[gActiveBattler].usedImprisonedMove = FALSE;
    gProtectStructs[gActiveBattler].loveImmobility = FALSE;
    gProtectStructs[gActiveBattler].usedDisabledMove = FALSE;
    gProtectStructs[gActiveBattler].usedTauntedMove = FALSE;
    gProtectStructs[gActiveBattler].flag2Unknown = FALSE;
    gProtectStructs[gActiveBattler].flinchImmobility = FALSE;
    gProtectStructs[gActiveBattler].notFirstStrike = FALSE;

    gDisableStructs[gActiveBattler].isFirstTurn = 2;

    gLastMoves[gActiveBattler] = MOVE_NONE;
    gLastLandedMoves[gActiveBattler] = MOVE_NONE;
    gLastHitByType[gActiveBattler] = 0;
    gLastResultingMoves[gActiveBattler] = MOVE_NONE;
    gLastPrintedMoves[gActiveBattler] = MOVE_NONE;
    gLastHitBy[gActiveBattler] = 0xFF;

    *(u8 *)((u8 *)(&gBattleStruct->choicedMove[gActiveBattler]) + 0) = MOVE_NONE;
    *(u8 *)((u8 *)(&gBattleStruct->choicedMove[gActiveBattler]) + 1) = MOVE_NONE;

    *(gBattleStruct->lastTakenMove + gActiveBattler * 2 + 0) = MOVE_NONE;
    *(gBattleStruct->lastTakenMove + gActiveBattler * 2 + 1) = MOVE_NONE;
    *(0 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 0) = 0;
    *(0 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 1) = 0;
    *(1 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 0) = 0;
    *(1 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 1) = 0;
    *(2 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 0) = 0;
    *(2 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 1) = 0;
    *(3 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 0) = 0;
    *(3 * 2 + gActiveBattler * 8 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 1) = 0;

    gBattleStruct->palaceFlags &= ~(gBitTable[gActiveBattler]);

    for (i = 0; i < gBattlersCount; i++)
    {
        if (i != gActiveBattler && GetBattlerSide(i) != GetBattlerSide(gActiveBattler))
        {
            *(gBattleStruct->lastTakenMove + i * 2 + 0) = MOVE_NONE;
            *(gBattleStruct->lastTakenMove + i * 2 + 1) = MOVE_NONE;
        }
        *(i * 8 + gActiveBattler * 2 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 0) = 0;
        *(i * 8 + gActiveBattler * 2 + (u8 *)(gBattleStruct->lastTakenMoveFrom) + 1) = 0;
    }

    gBattleResources->flags->flags[gActiveBattler] = 0;

    gBattleMons[gActiveBattler].type1 = GetTypeBySpecies(gBattleMons[gActiveBattler].species, 1); //tx_randomizer_and_challenges
    gBattleMons[gActiveBattler].type2 = GetTypeBySpecies(gBattleMons[gActiveBattler].species, 2); //tx_randomizer_and_challenges

    ClearBattlerMoveHistory(gActiveBattler);
    ClearBattlerAbilityHistory(gActiveBattler);
}

static void BattleIntroGetMonsData(void)
{
    switch (gBattleCommunication[MULTIUSE_STATE])
    {
    case 0:
        gActiveBattler = gBattleCommunication[1];
        BtlController_EmitGetMonData(BUFFER_A, REQUEST_ALL_BATTLE, 0);
        MarkBattlerForControllerExec(gActiveBattler);
        gBattleCommunication[MULTIUSE_STATE]++;
        break;
    case 1:
        if (gBattleControllerExecFlags == 0)
        {
            gBattleCommunication[1]++;
            if (gBattleCommunication[1] == gBattlersCount)
                gBattleMainFunc = BattleIntroPrepareBackgroundSlide;
            else
                gBattleCommunication[MULTIUSE_STATE] = 0;
        }
        break;
    }
}

static void BattleIntroPrepareBackgroundSlide(void)
{
    if (gBattleControllerExecFlags == 0)
    {
        gActiveBattler = GetBattlerAtPosition(0);
        BtlController_EmitIntroSlide(BUFFER_A, gBattleTerrain);
        MarkBattlerForControllerExec(gActiveBattler);
        gBattleMainFunc = BattleIntroDrawTrainersOrMonsSprites;
        gBattleCommunication[MULTIUSE_STATE] = 0;
        gBattleCommunication[SPRITES_INIT_STATE1] = 0;
    }
}

static void BattleIntroDrawTrainersOrMonsSprites(void)
{
    u8 *ptr;
    s32 i;

    if (gBattleControllerExecFlags)
        return;

    for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
    {
        if ((gBattleTypeFlags & BATTLE_TYPE_SAFARI)
            && GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        {
            ptr = (u8 *)&gBattleMons[gActiveBattler];
            for (i = 0; i < sizeof(struct BattlePokemon); i++)
                ptr[i] = 0;
        }
        else
        {
            u16 *hpOnSwitchout;

            ptr = (u8 *)&gBattleMons[gActiveBattler];
            for (i = 0; i < sizeof(struct BattlePokemon); i++)
                ptr[i] = gBattleBufferB[gActiveBattler][4 + i];

            gBattleMons[gActiveBattler].type1 = GetTypeBySpecies(gBattleMons[gActiveBattler].species, 1); //tx_randomizer_and_challenges
            gBattleMons[gActiveBattler].type2 = GetTypeBySpecies(gBattleMons[gActiveBattler].species, 2); //tx_randomizer_and_challenges
            gBattleMons[gActiveBattler].ability = GetAbilityBySpecies(gBattleMons[gActiveBattler].species, gBattleMons[gActiveBattler].abilityNum);
            hpOnSwitchout = &gBattleStruct->hpOnSwitchout[GetBattlerSide(gActiveBattler)];
            *hpOnSwitchout = gBattleMons[gActiveBattler].hp;
            for (i = 0; i < NUM_BATTLE_STATS; i++)
                gBattleMons[gActiveBattler].statStages[i] = DEFAULT_STAT_STAGE;
            gBattleMons[gActiveBattler].status2 = 0;
        }

        if (GetBattlerPosition(gActiveBattler) == B_POSITION_PLAYER_LEFT)
        {
            BtlController_EmitDrawTrainerPic(BUFFER_A);
            MarkBattlerForControllerExec(gActiveBattler);
        }

        if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
        {
            if (GetBattlerPosition(gActiveBattler) == B_POSITION_OPPONENT_LEFT)
            {
                BtlController_EmitDrawTrainerPic(BUFFER_A);
                MarkBattlerForControllerExec(gActiveBattler);
            }
            if (GetBattlerSide(gActiveBattler) == B_SIDE_OPPONENT
             && !(gBattleTypeFlags & (BATTLE_TYPE_EREADER_TRAINER
                                      | BATTLE_TYPE_FRONTIER
                                      | BATTLE_TYPE_LINK
                                      | BATTLE_TYPE_RECORDED_LINK
                                      | BATTLE_TYPE_TRAINER_HILL)))
            {
                HandleSetPokedexFlag(SpeciesToNationalPokedexNum(gBattleMons[gActiveBattler].species), FLAG_SET_SEEN, gBattleMons[gActiveBattler].personality);
            }
        }
        else
        {
            if (GetBattlerSide(gActiveBattler) == B_SIDE_OPPONENT)
            {
                if (!(gBattleTypeFlags & (BATTLE_TYPE_EREADER_TRAINER
                                      | BATTLE_TYPE_FRONTIER
                                      | BATTLE_TYPE_LINK
                                      | BATTLE_TYPE_RECORDED_LINK
                                      | BATTLE_TYPE_TRAINER_HILL)))
                {
                    HandleSetPokedexFlag(SpeciesToNationalPokedexNum(gBattleMons[gActiveBattler].species), FLAG_SET_SEEN, gBattleMons[gActiveBattler].personality);
                }
                BtlController_EmitLoadMonSprite(BUFFER_A);
                MarkBattlerForControllerExec(gActiveBattler);
                gBattleResults.lastOpponentSpecies = GetMonData(&gEnemyParty[gBattlerPartyIndexes[gActiveBattler]], MON_DATA_SPECIES, NULL);
            }
        }

        if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
        {
            if (GetBattlerPosition(gActiveBattler) == B_POSITION_PLAYER_RIGHT
             || GetBattlerPosition(gActiveBattler) == B_POSITION_OPPONENT_RIGHT)
            {
                BtlController_EmitDrawTrainerPic(BUFFER_A);
                MarkBattlerForControllerExec(gActiveBattler);
            }
        }

        if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS && GetBattlerPosition(gActiveBattler) == B_POSITION_OPPONENT_RIGHT)
        {
            BtlController_EmitDrawTrainerPic(BUFFER_A);
            MarkBattlerForControllerExec(gActiveBattler);
        }

        if (gBattleTypeFlags & BATTLE_TYPE_ARENA)
            BattleArena_InitPoints();
    }
    gBattleMainFunc = BattleIntroDrawPartySummaryScreens;
}

static void BattleIntroDrawPartySummaryScreens(void)
{
    s32 i;
    struct HpAndStatus hpStatus[PARTY_SIZE];

    if (gBattleControllerExecFlags)
        return;

    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
    {
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (GetMonData(&gEnemyParty[i], MON_DATA_SPECIES_OR_EGG) == SPECIES_NONE
             || GetMonData(&gEnemyParty[i], MON_DATA_SPECIES_OR_EGG) == SPECIES_EGG)
            {
                hpStatus[i].hp = HP_EMPTY_SLOT;
                hpStatus[i].status = 0;
            }
            else
            {
                hpStatus[i].hp = GetMonData(&gEnemyParty[i], MON_DATA_HP);
                hpStatus[i].status = GetMonData(&gEnemyParty[i], MON_DATA_STATUS);
            }
        }
        gActiveBattler = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
        BtlController_EmitDrawPartyStatusSummary(BUFFER_A, hpStatus, PARTY_SUMM_SKIP_DRAW_DELAY);
        MarkBattlerForControllerExec(gActiveBattler);

        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG) == SPECIES_NONE
             || GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG) == SPECIES_EGG)
            {
                hpStatus[i].hp = HP_EMPTY_SLOT;
                hpStatus[i].status = 0;
            }
            else
            {
                hpStatus[i].hp = GetMonData(&gPlayerParty[i], MON_DATA_HP);
                hpStatus[i].status = GetMonData(&gPlayerParty[i], MON_DATA_STATUS);
            }
        }
        gActiveBattler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
        BtlController_EmitDrawPartyStatusSummary(BUFFER_A, hpStatus, PARTY_SUMM_SKIP_DRAW_DELAY);
        MarkBattlerForControllerExec(gActiveBattler);

        gBattleMainFunc = BattleIntroPrintTrainerWantsToBattle;
    }
    else
    {
        // The struct gets set here, but nothing is ever done with it since
        // wild battles don't show the party summary.
        // Still, there's no point in having dead code.

        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG) == SPECIES_NONE
             || GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG) == SPECIES_EGG)
            {
                hpStatus[i].hp = HP_EMPTY_SLOT;
                hpStatus[i].status = 0;
            }
            else
            {
                hpStatus[i].hp = GetMonData(&gPlayerParty[i], MON_DATA_HP);
                hpStatus[i].status = GetMonData(&gPlayerParty[i], MON_DATA_STATUS);
            }
        }

        gBattleMainFunc = BattleIntroPrintWildMonAttacked;
    }
}

static void BattleIntroPrintTrainerWantsToBattle(void)
{
    if (gBattleControllerExecFlags == 0)
    {
        gActiveBattler = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
        PrepareStringBattle(STRINGID_INTROMSG, gActiveBattler);
        gBattleMainFunc = BattleIntroPrintOpponentSendsOut;
    }
}

static void BattleIntroPrintWildMonAttacked(void)
{
    if (gBattleControllerExecFlags == 0)
    {
        if ((gSaveBlock2Ptr->optionsRunType == 1) || (gSaveBlock2Ptr->optionsRunType == 3))
            gBattleMainFunc = BattleIntroQuickRun;
        else
            gBattleMainFunc = BattleIntroPrintPlayerSendsOut;
        PrepareStringBattle(STRINGID_INTROMSG, 0);
    }
}

static void BattleIntroQuickRun(void)
{
    if (gSaveBlock2Ptr->optionsRunType == 1)
        {
        if (gBattleControllerExecFlags == 0)
        {
            if ((JOY_HELD(R_BUTTON))&&(JOY_HELD(L_BUTTON)))
            {
                if (!IsRunningFromBattleImpossible() && TryRunFromBattle(gBattlerAttacker)){
                    gBattleMainFunc = HandleEndTurn_RanFromBattle;
                    return;
                }
                PrepareStringBattle(STRINGID_CANTESCAPE, 0);
            }
            gBattleMainFunc = BattleIntroPrintPlayerSendsOut;
        }
    }
    else if (gSaveBlock2Ptr->optionsRunType == 3)
        {
        if (gBattleControllerExecFlags == 0)
        {
            if (JOY_HELD(B_BUTTON))
            {
                if (!IsRunningFromBattleImpossible() && TryRunFromBattle(gBattlerAttacker)){
                    gBattleMainFunc = HandleEndTurn_RanFromBattle;
                    return;
                }
                PrepareStringBattle(STRINGID_CANTESCAPE, 0);
            }
            gBattleMainFunc = BattleIntroPrintPlayerSendsOut;
        }
    }
}

static void BattleIntroPrintOpponentSendsOut(void)
{
    u32 position;

    if (gBattleControllerExecFlags)
        return;

    if (!(gBattleTypeFlags & BATTLE_TYPE_RECORDED))
        position = B_POSITION_OPPONENT_LEFT;
    else if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
    {
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_IS_MASTER)
            position = B_POSITION_OPPONENT_LEFT;
        else
            position = B_POSITION_PLAYER_LEFT;
    }
    else
        position = B_POSITION_OPPONENT_LEFT;

    PrepareStringBattle(STRINGID_INTROSENDOUT, GetBattlerAtPosition(position));
    gBattleMainFunc = BattleIntroOpponent1SendsOutMonAnimation;
}

static void BattleIntroOpponent2SendsOutMonAnimation(void)
{
    u32 position;

    if (!(gBattleTypeFlags & BATTLE_TYPE_RECORDED))
        position = B_POSITION_OPPONENT_RIGHT;
    else if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
    {
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_IS_MASTER)
            position = B_POSITION_OPPONENT_RIGHT;
        else
            position = B_POSITION_PLAYER_RIGHT;
    }
    else
        position = B_POSITION_OPPONENT_RIGHT;

    for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
    {
        if (GetBattlerPosition(gActiveBattler) == position)
        {
            BtlController_EmitIntroTrainerBallThrow(BUFFER_A);
            MarkBattlerForControllerExec(gActiveBattler);
        }
    }

    gBattleMainFunc = BattleIntroRecordMonsToDex;
}

static void BattleIntroOpponent1SendsOutMonAnimation(void)
{
    u32 position;

    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
    {
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
        {
            if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_IS_MASTER)
                position = B_POSITION_OPPONENT_LEFT;
            else
                position = B_POSITION_PLAYER_LEFT;
        }
        else
            position = B_POSITION_OPPONENT_LEFT;
    }
    else
        position = B_POSITION_OPPONENT_LEFT;

    if (gBattleControllerExecFlags)
        return;

    for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
    {
        if (GetBattlerPosition(gActiveBattler) == position)
        {
            BtlController_EmitIntroTrainerBallThrow(BUFFER_A);
            MarkBattlerForControllerExec(gActiveBattler);
            if (gBattleTypeFlags & (BATTLE_TYPE_MULTI | BATTLE_TYPE_TWO_OPPONENTS))
            {
                gBattleMainFunc = BattleIntroOpponent2SendsOutMonAnimation;
                return;
            }
        }
    }

    gBattleMainFunc = BattleIntroRecordMonsToDex;
}

static void BattleIntroRecordMonsToDex(void)
{
    if (gBattleControllerExecFlags == 0)
    {
        for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
        {
            if (GetBattlerSide(gActiveBattler) == B_SIDE_OPPONENT
             && !(gBattleTypeFlags & (BATTLE_TYPE_EREADER_TRAINER
                                      | BATTLE_TYPE_FRONTIER
                                      | BATTLE_TYPE_LINK
                                      | BATTLE_TYPE_RECORDED_LINK
                                      | BATTLE_TYPE_TRAINER_HILL)))
            {
                HandleSetPokedexFlag(SpeciesToNationalPokedexNum(gBattleMons[gActiveBattler].species), FLAG_SET_SEEN, gBattleMons[gActiveBattler].personality);
            }
        }
        gBattleMainFunc = BattleIntroPrintPlayerSendsOut;
    }
}

static void UNUSED BattleIntroSkipRecordMonsToDex(void)
{
    if (gBattleControllerExecFlags == 0)
        gBattleMainFunc = BattleIntroPrintPlayerSendsOut;
}

static void BattleIntroPrintPlayerSendsOut(void)
{
    if (gBattleControllerExecFlags == 0)
    {
        u8 position;

        if (!(gBattleTypeFlags & BATTLE_TYPE_RECORDED))
            position = B_POSITION_PLAYER_LEFT;
        else if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
        {
            if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_IS_MASTER)
                position = B_POSITION_PLAYER_LEFT;
            else
                position = B_POSITION_OPPONENT_LEFT;
        }
        else
            position = B_POSITION_PLAYER_LEFT;

        if (!(gBattleTypeFlags & BATTLE_TYPE_SAFARI))
            PrepareStringBattle(STRINGID_INTROSENDOUT, GetBattlerAtPosition(position));

        gBattleMainFunc = BattleIntroPlayer1SendsOutMonAnimation;
    }
}

static void BattleIntroPlayer2SendsOutMonAnimation(void)
{
    u32 position;

    if (!(gBattleTypeFlags & BATTLE_TYPE_RECORDED))
        position = B_POSITION_PLAYER_RIGHT;
    else if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
    {
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_IS_MASTER)
            position = B_POSITION_PLAYER_RIGHT;
        else
            position = B_POSITION_OPPONENT_RIGHT;
    }
    else
        position = B_POSITION_PLAYER_RIGHT;

    for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
    {
        if (GetBattlerPosition(gActiveBattler) == position)
        {
            BtlController_EmitIntroTrainerBallThrow(BUFFER_A);
            MarkBattlerForControllerExec(gActiveBattler);
        }
    }

    gBattleStruct->switchInAbilitiesCounter = 0;
    gBattleStruct->switchInItemsCounter = 0;
    gBattleStruct->overworldWeatherDone = FALSE;

    gBattleMainFunc = TryDoEventsBeforeFirstTurn;
}

static void BattleIntroPlayer1SendsOutMonAnimation(void)
{
    u32 position;

    if (!(gBattleTypeFlags & BATTLE_TYPE_RECORDED))
        position = B_POSITION_PLAYER_LEFT;
    else if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
    {
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_IS_MASTER)
            position = B_POSITION_PLAYER_LEFT;
        else
            position = B_POSITION_OPPONENT_LEFT;
    }
    else
        position = B_POSITION_PLAYER_LEFT;

    if (gBattleControllerExecFlags)
        return;

    for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
    {
        if (GetBattlerPosition(gActiveBattler) == position)
        {
            BtlController_EmitIntroTrainerBallThrow(BUFFER_A);
            MarkBattlerForControllerExec(gActiveBattler);
            if (gBattleTypeFlags & (BATTLE_TYPE_MULTI))
            {
                gBattleMainFunc = BattleIntroPlayer2SendsOutMonAnimation;
                return;
            }
        }
    }

    gBattleStruct->switchInAbilitiesCounter = 0;
    gBattleStruct->switchInItemsCounter = 0;
    gBattleStruct->overworldWeatherDone = FALSE;

    gBattleMainFunc = TryDoEventsBeforeFirstTurn;
}

static void UNUSED BattleIntroSwitchInPlayerMons(void)
{
    if (gBattleControllerExecFlags == 0)
    {
        for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
        {
            if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
            {
                BtlController_EmitSwitchInAnim(BUFFER_A, gBattlerPartyIndexes[gActiveBattler], FALSE);
                MarkBattlerForControllerExec(gActiveBattler);
            }
        }

        gBattleStruct->switchInAbilitiesCounter = 0;
        gBattleStruct->switchInItemsCounter = 0;
        gBattleStruct->overworldWeatherDone = FALSE;

        gBattleMainFunc = TryDoEventsBeforeFirstTurn;
=======
        if (gBattleMons[i].volatiles.infatuation == INFATUATED_WITH(battler))
            gBattleMons[i].volatiles.infatuation = 0;
        if (gBattleMons[i].volatiles.wrapped && gBattleStruct->wrappedBy[i] == battler)
            gBattleMons[i].volatiles.wrapped = FALSE;
        if (gBattleMons[i].volatiles.syrupBomb && gBattleStruct->stickySyrupdBy[i] == battler)
            gBattleMons[i].volatiles.syrupBomb = FALSE;
        if (gDisableStructs[i].octolock && gDisableStructs[i].octolockedBy == battler)
            gDisableStructs[i].octolock = FALSE;
    }

    gActionSelectionCursor[battler] = 0;
    gMoveSelectionCursor[battler] = 0;

    memset(&gDisableStructs[battler], 0, sizeof(struct DisableStruct));

    if (GetProtectType(gProtectStructs[battler].protected) == PROTECT_TYPE_SINGLE) // Side type protects expire at the end of the turn
        gProtectStructs[battler].protected = PROTECT_NONE;

    if (effect == EFFECT_BATON_PASS)
    {
        gDisableStructs[battler].substituteHP = disableStructCopy.substituteHP;
        gDisableStructs[battler].battlerWithSureHit = disableStructCopy.battlerWithSureHit;
        gDisableStructs[battler].perishSongTimer = disableStructCopy.perishSongTimer;
        gDisableStructs[battler].battlerPreventingEscape = disableStructCopy.battlerPreventingEscape;
        gDisableStructs[battler].embargoTimer = disableStructCopy.embargoTimer;
        gDisableStructs[battler].healBlockTimer = disableStructCopy.healBlockTimer;
    }
    else if (effect == EFFECT_SHED_TAIL)
    {
        gBattleMons[battler].volatiles.substitute = TRUE;
        gDisableStructs[battler].substituteHP = disableStructCopy.substituteHP;
    }

    gBattleStruct->moveResultFlags[battler] = 0;
    gDisableStructs[battler].isFirstTurn = 2;
    gDisableStructs[battler].truantSwitchInHack = disableStructCopy.truantSwitchInHack;
    gLastMoves[battler] = MOVE_NONE;
    gLastLandedMoves[battler] = MOVE_NONE;
    gLastHitByType[battler] = 0;
    gLastUsedMoveType[battler] = 0;
    gLastResultingMoves[battler] = MOVE_NONE;
    gLastPrintedMoves[battler] = MOVE_NONE;
    gLastHitBy[battler] = 0xFF;

    gBattleStruct->lastTakenMove[battler] = 0;
    gBattleStruct->metronomeItemCounter[battler] = 0;
    gBattleStruct->lastTakenMoveFrom[battler][0] = 0;
    gBattleStruct->lastTakenMoveFrom[battler][1] = 0;
    gBattleStruct->lastTakenMoveFrom[battler][2] = 0;
    gBattleStruct->lastTakenMoveFrom[battler][3] = 0;
    gBattleStruct->battlerState[battler].stompingTantrumTimer = 0;
    gBattleStruct->palaceFlags &= ~(1u << battler);
    gBattleStruct->battlerState[battler].canPickupItem = FALSE;
    gBattleStruct->hazardsCounter = 0;
    gDisableStructs[battler].hazardsDone = FALSE;
    gSpecialStatuses[battler].switchInItemDone = FALSE;

    ClearPursuitValuesIfSet(battler);

    for (i = 0; i < ARRAY_COUNT(gSideTimers); i++)
    {
        // Switched into sticky web user slot, so reset stored battler ID
        if (gSideTimers[i].stickyWebBattlerId == battler)
            gSideTimers[i].stickyWebBattlerId = 0xFF;
    }

    for (i = 0; i < gBattlersCount; i++)
    {
        if (i != battler && !IsBattlerAlly(i, battler))
            gBattleStruct->lastTakenMove[i] = MOVE_NONE;

        gBattleStruct->lastTakenMoveFrom[i][battler] = 0;
    }

    gBattleStruct->choicedMove[battler] = MOVE_NONE;
    gCurrentMove = MOVE_NONE;
    gBattleStruct->arenaTurnCounter = 0xFF;

    // Restore struct member so replacement does not miss timing
    gSpecialStatuses[battler].switchInAbilityDone = FALSE;

    // Reset damage to prevent things like red card activating if the switched-in mon is holding it
    gSpecialStatuses[battler].physicalDmg = 0;
    gSpecialStatuses[battler].specialDmg = 0;
    gSpecialStatuses[battler].enduredDamage = FALSE;

    // Reset Eject Button / Eject Pack switch detection
    gAiLogicData->ejectButtonSwitch = FALSE;
    gAiLogicData->ejectPackSwitch = FALSE;

    // Reset G-Max Chi Strike boosts.
    gBattleStruct->bonusCritStages[battler] = 0;

    // Clear selected party ID so Revival Blessing doesn't get confused.
    gSelectedMonPartyId = PARTY_SIZE;

    // Allow for illegal abilities within tests.
    #if TESTING
    if (gTestRunnerEnabled)
    {
        u32 side = GetBattlerSide(battler);
        u32 partyIndex = gBattlerPartyIndexes[battler];
        if (TestRunner_Battle_GetForcedAbility(side, partyIndex))
            gBattleMons[i].ability = TestRunner_Battle_GetForcedAbility(side, partyIndex);
    }
    #endif // TESTING

    Ai_UpdateSwitchInData(battler);
}

const u8* FaintClearSetData(u32 battler)
{
    s32 i;
    const u8 *result = NULL;

    for (i = 0; i < NUM_BATTLE_STATS; i++)
        gBattleMons[battler].statStages[i] = DEFAULT_STAT_STAGE;

    bool32 keepGastroAcid = gBattleMons[battler].volatiles.gastroAcid;
    memset(&gBattleMons[battler].volatiles, 0, sizeof(struct Volatiles));
    gBattleMons[battler].volatiles.gastroAcid = keepGastroAcid; // Edge case: Keep Gastro Acid if pokemon's ability can have effect after fainting, for example Innards Out.

    for (i = 0; i < gBattlersCount; i++)
    {
        if (gBattleMons[i].volatiles.escapePrevention && gDisableStructs[i].battlerPreventingEscape == battler)
            gBattleMons[i].volatiles.escapePrevention = FALSE;
        if (gBattleMons[i].volatiles.infatuation == INFATUATED_WITH(battler))
            gBattleMons[i].volatiles.infatuation = 0;
        if (gBattleMons[i].volatiles.wrapped && gBattleStruct->wrappedBy[i] == battler)
            gBattleMons[i].volatiles.wrapped = FALSE;
        if (gBattleMons[i].volatiles.syrupBomb && gBattleStruct->stickySyrupdBy[i] == battler)
            gBattleMons[i].volatiles.syrupBomb = FALSE;
        if (gDisableStructs[i].octolock && gDisableStructs[i].octolockedBy == battler)
            gDisableStructs[i].octolock = FALSE;
    }

    gActionSelectionCursor[battler] = 0;
    gMoveSelectionCursor[battler] = 0;

    memset(&gDisableStructs[battler], 0, sizeof(struct DisableStruct));

    if (GetProtectType(gProtectStructs[battler].protected) == PROTECT_TYPE_SINGLE) // Side type protects expire at the end of the turn
        gProtectStructs[battler].protected = PROTECT_NONE;

    gProtectStructs[battler].quash = FALSE;
    gProtectStructs[battler].noValidMoves = FALSE;
    gProtectStructs[battler].helpingHand = 0;
    gProtectStructs[battler].bounceMove = FALSE;
    gProtectStructs[battler].stealMove = FALSE;
    gProtectStructs[battler].nonVolatileStatusImmobility = FALSE;
    gProtectStructs[battler].unableToUseMove = FALSE;
    gProtectStructs[battler].confusionSelfDmg = FALSE;
    gProtectStructs[battler].chargingTurn = FALSE;
    gProtectStructs[battler].fleeType = 0;
    gProtectStructs[battler].notFirstStrike = FALSE;
    gProtectStructs[battler].statRaised = FALSE;
    gProtectStructs[battler].pranksterElevated = FALSE;

    gDisableStructs[battler].isFirstTurn = 2;

    gLastMoves[battler] = MOVE_NONE;
    gLastLandedMoves[battler] = MOVE_NONE;
    gLastHitByType[battler] = 0;
    gLastUsedMoveType[battler] = 0;
    gLastResultingMoves[battler] = MOVE_NONE;
    gLastPrintedMoves[battler] = MOVE_NONE;
    gLastHitBy[battler] = 0xFF;

    gBattleStruct->choicedMove[battler] = MOVE_NONE;
    gBattleStruct->metronomeItemCounter[battler] = 0;
    gBattleStruct->lastTakenMove[battler] = MOVE_NONE;
    gBattleStruct->lastTakenMoveFrom[battler][0] = 0;
    gBattleStruct->lastTakenMoveFrom[battler][1] = 0;
    gBattleStruct->lastTakenMoveFrom[battler][2] = 0;
    gBattleStruct->lastTakenMoveFrom[battler][3] = 0;
    gBattleStruct->palaceFlags &= ~(1u << battler);

    ClearPursuitValuesIfSet(battler);

    if (gBattleStruct->battlerState[battler].commanderSpecies != SPECIES_NONE)
    {
        u32 partner = BATTLE_PARTNER(battler);
        if (IsBattlerAlive(partner))
        {
            BtlController_EmitSpriteInvisibility(partner, B_COMM_TO_CONTROLLER, FALSE);
            MarkBattlerForControllerExec(partner);
        }
    }

    for (i = 0; i < ARRAY_COUNT(gSideTimers); i++)
    {
        // User of sticky web fainted, so reset the stored battler ID
        if (gSideTimers[i].stickyWebBattlerId == battler)
            gSideTimers[i].stickyWebBattlerId = 0xFF;
    }

    for (i = 0; i < gBattlersCount; i++)
    {
        if (i != battler && !IsBattlerAlly(i, battler))
            gBattleStruct->lastTakenMove[i] = MOVE_NONE;

        gBattleStruct->lastTakenMoveFrom[i][battler] = 0;
    }

    gBattleMons[battler].types[0] = GetSpeciesType(gBattleMons[battler].species, 0);
    gBattleMons[battler].types[1] = GetSpeciesType(gBattleMons[battler].species, 1);
    gBattleMons[battler].types[2] = TYPE_MYSTERY;

    Ai_UpdateFaintData(battler);
    TryBattleFormChange(battler, FORM_CHANGE_FAINT);

    // If the fainted mon was involved in a Sky Drop
    if (gBattleStruct->skyDropTargets[battler] != SKY_DROP_NO_TARGET)
    {
        // Get battler id of the other Pokemon involved in this Sky Drop
        u8 otherSkyDropper = gBattleStruct->skyDropTargets[battler];

        // Clear Sky Drop data
        gBattleStruct->skyDropTargets[battler] = SKY_DROP_NO_TARGET;
        gBattleStruct->skyDropTargets[otherSkyDropper] = SKY_DROP_NO_TARGET;

        // If the other Pokemon involved in this Sky Drop was the target, not the attacker
        if (gBattleMons[otherSkyDropper].volatiles.semiInvulnerable == STATE_SKY_DROP)
        {
            // Release the target and take them out of the semi-invulnerable state
            gBattleMons[otherSkyDropper].volatiles.semiInvulnerable = STATE_NONE;

            // Make the target's sprite visible
            gSprites[gBattlerSpriteIds[otherSkyDropper]].invisible = FALSE;

            // If the target was sky dropped in the middle of using Outrage/Petal Dance/Thrash,
            // confuse them upon release and print "confused via fatigue" message and animation.
            if (gBattleMons[otherSkyDropper].volatiles.lockConfusionTurns)
            {
                gBattleMons[otherSkyDropper].volatiles.lockConfusionTurns = 0;

                // If the released mon can be confused, do so.
                // Don't use CanBeConfused here, since it can cause issues in edge cases.
                if (!(GetBattlerAbility(otherSkyDropper) == ABILITY_OWN_TEMPO
                    || gBattleMons[otherSkyDropper].volatiles.confusionTurns
                    || IsBattlerTerrainAffected(otherSkyDropper, STATUS_FIELD_MISTY_TERRAIN)))
                {
                    gBattleMons[otherSkyDropper].volatiles.confusionTurns = ((Random()) % 4) + 2;
                    gBattlerAttacker = otherSkyDropper;
                    result = BattleScript_ThrashConfuses;
                }
            }
        }
    }

    return result;
}

static void DoBattleIntro(void)
{
    s32 i;
    u32 battler;

    switch ((enum BattleIntroStates)gBattleStruct->introState)
    {
    case BATTLE_INTRO_STATE_GET_MON_DATA:
        battler = gBattleCommunication[1];
        BtlController_EmitGetMonData(battler, B_COMM_TO_CONTROLLER, REQUEST_ALL_BATTLE, 0);
        MarkBattlerForControllerExec(battler);
        gBattleStruct->introState++;
        break;
    case BATTLE_INTRO_STATE_LOOP_BATTLER_DATA:
        if (!gBattleControllerExecFlags)
        {
            if (++gBattleCommunication[1] == gBattlersCount)
                gBattleStruct->introState++;
            else
                gBattleStruct->introState = BATTLE_INTRO_STATE_GET_MON_DATA;
        }
        break;
    case BATTLE_INTRO_STATE_PREPARE_BG_SLIDE:
        if (!gBattleControllerExecFlags)
        {
            battler = GetBattlerAtPosition(0);
            BtlController_EmitIntroSlide(battler, B_COMM_TO_CONTROLLER, gBattleEnvironment);
            MarkBattlerForControllerExec(battler);
            gBattleCommunication[0] = 0;
            gBattleCommunication[1] = 0;
            gBattleStruct->introState++;
        }
        break;
    case BATTLE_INTRO_STATE_WAIT_FOR_BG_SLIDE:
        if (!gBattleControllerExecFlags)
            gBattleStruct->introState++;
        break;
    case BATTLE_INTRO_STATE_DRAW_SPRITES:
        for (battler = 0; battler < gBattlersCount; battler++)
        {
            if ((gBattleTypeFlags & BATTLE_TYPE_SAFARI) && IsOnPlayerSide(battler))
            {
                memset(&gBattleMons[battler], 0, sizeof(struct BattlePokemon));
            }
            else
            {
                memcpy(&gBattleMons[battler], &gBattleResources->bufferB[battler][4], sizeof(struct BattlePokemon));
                gBattleMons[battler].types[0] = GetSpeciesType(gBattleMons[battler].species, 0);
                gBattleMons[battler].types[1] = GetSpeciesType(gBattleMons[battler].species, 1);
                gBattleMons[battler].types[2] = TYPE_MYSTERY;
                gBattleMons[battler].ability = GetAbilityBySpecies(gBattleMons[battler].species, gBattleMons[battler].abilityNum);
                gBattleStruct->hpOnSwitchout[GetBattlerSide(battler)] = gBattleMons[battler].hp;
                memset(&gBattleMons[battler].volatiles, 0, sizeof(struct Volatiles));
                for (i = 0; i < NUM_BATTLE_STATS; i++)
                    gBattleMons[battler].statStages[i] = DEFAULT_STAT_STAGE;
                #if TESTING
                if (gTestRunnerEnabled)
                {
                    u32 side = GetBattlerSide(battler);
                    u32 partyIndex = gBattlerPartyIndexes[battler];
                    if (TestRunner_Battle_GetForcedAbility(side, partyIndex))
                        gBattleMons[battler].ability = TestRunner_Battle_GetForcedAbility(side, partyIndex);
                }
                #endif
            }

            // Draw sprite.
            switch (GetBattlerPosition(battler))
            {
            case B_POSITION_PLAYER_LEFT: // player sprite
                BtlController_EmitDrawTrainerPic(battler, B_COMM_TO_CONTROLLER);
                MarkBattlerForControllerExec(battler);
                break;
            case B_POSITION_OPPONENT_LEFT:
                if (gBattleTypeFlags & BATTLE_TYPE_TRAINER) // opponent 1 sprite
                {
                    BtlController_EmitDrawTrainerPic(battler, B_COMM_TO_CONTROLLER);
                    MarkBattlerForControllerExec(battler);
                }
                else // wild mon 1
                {
                    BtlController_EmitLoadMonSprite(battler, B_COMM_TO_CONTROLLER);
                    MarkBattlerForControllerExec(battler);
                    gBattleResults.lastOpponentSpecies = GetMonData(GetBattlerMon(battler), MON_DATA_SPECIES, NULL);
                }
                break;
            case B_POSITION_PLAYER_RIGHT:
                if (gBattleTypeFlags & (BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER)) // partner sprite
                {
                    BtlController_EmitDrawTrainerPic(battler, B_COMM_TO_CONTROLLER);
                    MarkBattlerForControllerExec(battler);
                }
                break;
            case B_POSITION_OPPONENT_RIGHT:
                if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
                {
                    if (gBattleTypeFlags & (BATTLE_TYPE_MULTI | BATTLE_TYPE_TWO_OPPONENTS) && !BATTLE_TWO_VS_ONE_OPPONENT) // opponent 2 if exists
                    {
                        BtlController_EmitDrawTrainerPic(battler, B_COMM_TO_CONTROLLER);
                        MarkBattlerForControllerExec(battler);
                    }
                }
                else if (IsBattlerAlive(battler)) // wild mon 2 if alive
                {
                    BtlController_EmitLoadMonSprite(battler, B_COMM_TO_CONTROLLER);
                    MarkBattlerForControllerExec(battler);
                    gBattleResults.lastOpponentSpecies = GetMonData(GetBattlerMon(battler), MON_DATA_SPECIES, NULL);
                }
                break;
            }

            if (gBattleTypeFlags & BATTLE_TYPE_ARENA)
                BattleArena_InitPoints();
        }

        if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
            gBattleStruct->introState++;
        else // Skip party summary since it is a wild battle.
            gBattleStruct->introState = BATTLE_INTRO_STATE_INTRO_TEXT;
        break;
    case BATTLE_INTRO_STATE_DRAW_PARTY_SUMMARY:
        if (!gBattleControllerExecFlags)
        {
            struct HpAndStatus hpStatus[PARTY_SIZE];

            for (i = 0; i < PARTY_SIZE; i++)
            {
                if (GetMonData(&gEnemyParty[i], MON_DATA_SPECIES_OR_EGG) == SPECIES_NONE
                 || GetMonData(&gEnemyParty[i], MON_DATA_SPECIES_OR_EGG) == SPECIES_EGG)
                {
                    hpStatus[i].hp = HP_EMPTY_SLOT;
                    hpStatus[i].status = 0;
                }
                else
                {
                    hpStatus[i].hp = GetMonData(&gEnemyParty[i], MON_DATA_HP);
                    hpStatus[i].status = GetMonData(&gEnemyParty[i], MON_DATA_STATUS);
                }
            }

            battler = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
            BtlController_EmitDrawPartyStatusSummary(battler, B_COMM_TO_CONTROLLER, hpStatus, PARTY_SUMM_SKIP_DRAW_DELAY);
            MarkBattlerForControllerExec(battler);

            for (i = 0; i < PARTY_SIZE; i++)
            {
                if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG) == SPECIES_NONE
                 || GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG) == SPECIES_EGG)
                {
                    hpStatus[i].hp = HP_EMPTY_SLOT;
                    hpStatus[i].status = 0;
                }
                else
                {
                    hpStatus[i].hp = GetMonData(&gPlayerParty[i], MON_DATA_HP);
                    hpStatus[i].status = GetMonData(&gPlayerParty[i], MON_DATA_STATUS);
                }
            }

            battler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
            BtlController_EmitDrawPartyStatusSummary(battler, B_COMM_TO_CONTROLLER, hpStatus, PARTY_SUMM_SKIP_DRAW_DELAY);
            MarkBattlerForControllerExec(battler);

            gBattleStruct->introState++;
        }
        break;
    case BATTLE_INTRO_STATE_WAIT_FOR_PARTY_SUMMARY:
        if (!gBattleControllerExecFlags)
            gBattleStruct->introState++;
        break;
    case BATTLE_INTRO_STATE_INTRO_TEXT:
        if (!IsBattlerMarkedForControllerExec(GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)))
        {
            PrepareStringBattle(STRINGID_INTROMSG, GetBattlerAtPosition(B_POSITION_PLAYER_LEFT));
            gBattleStruct->introState++;
        }
        break;
    case BATTLE_INTRO_STATE_WAIT_FOR_INTRO_TEXT:
        if (!IsBattlerMarkedForControllerExec(GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)))
        {
            if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
            {
                gBattleStruct->introState++;
            }
            else
            {
                if (B_FAST_INTRO_PKMN_TEXT == TRUE)
                    gBattleStruct->introState = BATTLE_INTRO_STATE_WAIT_FOR_WILD_BATTLE_TEXT;
                else
                    gBattleStruct->introState = BATTLE_INTRO_STATE_WAIT_FOR_TRAINER_2_SEND_OUT_ANIM;
            }
        }
        break;
    case BATTLE_INTRO_STATE_TRAINER_SEND_OUT_TEXT:
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK && !(gBattleTypeFlags & BATTLE_TYPE_RECORDED_IS_MASTER))
            PrepareStringBattle(STRINGID_INTROSENDOUT, GetBattlerAtPosition(B_POSITION_PLAYER_LEFT));
        else
            PrepareStringBattle(STRINGID_INTROSENDOUT, GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT));
        gBattleStruct->introState++;
        break;
    case BATTLE_INTRO_STATE_WAIT_FOR_TRAINER_SEND_OUT_TEXT:
        if (!gBattleControllerExecFlags)
            gBattleStruct->introState++;
        break;
    case BATTLE_INTRO_STATE_TRAINER_1_SEND_OUT_ANIM:
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK && !(gBattleTypeFlags & BATTLE_TYPE_RECORDED_IS_MASTER))
            battler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
        else
            battler = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);

        BtlController_EmitIntroTrainerBallThrow(battler, B_COMM_TO_CONTROLLER);
        MarkBattlerForControllerExec(battler);
        gBattleStruct->introState++;
        break;
    case BATTLE_INTRO_STATE_TRAINER_2_SEND_OUT_ANIM:
        if (gBattleTypeFlags & (BATTLE_TYPE_MULTI | BATTLE_TYPE_TWO_OPPONENTS) && !BATTLE_TWO_VS_ONE_OPPONENT)
        {
            if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK && !(gBattleTypeFlags & BATTLE_TYPE_RECORDED_IS_MASTER))
                battler = GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT);
            else
                battler = GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT);

            BtlController_EmitIntroTrainerBallThrow(battler, B_COMM_TO_CONTROLLER);
            MarkBattlerForControllerExec(battler);
        }
        if (B_FAST_INTRO_PKMN_TEXT == TRUE
          && !(gBattleTypeFlags & (BATTLE_TYPE_RECORDED | BATTLE_TYPE_RECORDED_LINK | BATTLE_TYPE_RECORDED_IS_MASTER | BATTLE_TYPE_LINK)))
            gBattleStruct->introState = BATTLE_INTRO_STATE_WAIT_FOR_WILD_BATTLE_TEXT; // Print at the same time as trainer sends out second mon.
        else
            gBattleStruct->introState++;
        break;
    case BATTLE_INTRO_STATE_WAIT_FOR_TRAINER_2_SEND_OUT_ANIM:
        if (!gBattleControllerExecFlags)
            gBattleStruct->introState++;
        break;
    case BATTLE_INTRO_STATE_WAIT_FOR_WILD_BATTLE_TEXT:
        if (!IsBattlerMarkedForControllerExec(GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)))
            gBattleStruct->introState++;
        break;
    case BATTLE_INTRO_STATE_PRINT_PLAYER_SEND_OUT_TEXT:
        if (!(gBattleTypeFlags & BATTLE_TYPE_SAFARI))
        {
            if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK && !(gBattleTypeFlags & BATTLE_TYPE_RECORDED_IS_MASTER))
                battler = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
            else
                battler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);

            // A hack that makes fast intro work in trainer battles too.
            if (B_FAST_INTRO_PKMN_TEXT == TRUE
                && gBattleTypeFlags & BATTLE_TYPE_TRAINER
                && !(gBattleTypeFlags & (BATTLE_TYPE_RECORDED | BATTLE_TYPE_RECORDED_LINK | BATTLE_TYPE_RECORDED_IS_MASTER | BATTLE_TYPE_LINK))
                && gSprites[gHealthboxSpriteIds[battler ^ BIT_SIDE]].callback == SpriteCallbackDummy)
            {
                return;
            }

            PrepareStringBattle(STRINGID_INTROSENDOUT, battler);
        }
        gBattleStruct->introState++;
        break;
    case BATTLE_INTRO_STATE_WAIT_FOR_PLAYER_SEND_OUT_TEXT:
        if (!(gBattleTypeFlags & BATTLE_TYPE_LINK && gBattleControllerExecFlags))
        {
            if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK && !(gBattleTypeFlags & BATTLE_TYPE_RECORDED_IS_MASTER))
                battler = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
            else
                battler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);

            if (!IsBattlerMarkedForControllerExec(battler))
                gBattleStruct->introState++;
        }
        break;
    case BATTLE_INTRO_STATE_PRINT_PLAYER_1_SEND_OUT_TEXT:
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK && !(gBattleTypeFlags & BATTLE_TYPE_RECORDED_IS_MASTER))
            battler = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
        else
            battler = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);

        BtlController_EmitIntroTrainerBallThrow(battler, B_COMM_TO_CONTROLLER);
        MarkBattlerForControllerExec(battler);
        gBattleStruct->introState++;
        break;
    case BATTLE_INTRO_STATE_PRINT_PLAYER_2_SEND_OUT_TEXT:
        if (gBattleTypeFlags & (BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER))
        {
            if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK && !(gBattleTypeFlags & BATTLE_TYPE_RECORDED_IS_MASTER))
                battler = GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT);
            else
                battler = GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT);

            BtlController_EmitIntroTrainerBallThrow(battler, B_COMM_TO_CONTROLLER);
            MarkBattlerForControllerExec(battler);
        }
        gBattleStruct->introState++;
        break;
    case BATTLE_INTRO_STATE_SET_DEX_AND_BATTLE_VARS:
        if (!gBattleControllerExecFlags)
        {
            gBattleStruct->eventsBeforeFirstTurnState = 0;
            gBattleStruct->switchInBattlerCounter = 0;
            gBattleStruct->overworldWeatherDone = FALSE;
            Ai_InitPartyStruct(); // Save mons party counts, and first 2/4 mons on the battlefield.

            // mark all battlers as sent out
            for (battler = 0; battler < gBattlersCount; battler++)
                GetBattlerPartyState(battler)->sentOut = TRUE;

            // Try to set a status to start the battle with
            gBattleStruct->startingStatus = 0;
            if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS && GetTrainerStartingStatusFromId(TRAINER_BATTLE_PARAM.opponentB))
            {
                gBattleStruct->startingStatus = GetTrainerStartingStatusFromId(TRAINER_BATTLE_PARAM.opponentB);
                gBattleStruct->startingStatusTimer = 0; // infinite
            }
            else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER && GetTrainerStartingStatusFromId(TRAINER_BATTLE_PARAM.opponentA))
            {
                gBattleStruct->startingStatus = GetTrainerStartingStatusFromId(TRAINER_BATTLE_PARAM.opponentA);
                gBattleStruct->startingStatusTimer = 0; // infinite
            }
            else if (B_VAR_STARTING_STATUS != 0)
            {
                gBattleStruct->startingStatus = VarGet(B_VAR_STARTING_STATUS);
                gBattleStruct->startingStatusTimer = VarGet(B_VAR_STARTING_STATUS_TIMER);
            }
            gBattleMainFunc = TryDoEventsBeforeFirstTurn;
        }
        break;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }
}

static void TryDoEventsBeforeFirstTurn(void)
{
<<<<<<< HEAD
    s32 i;
    s32 j;
    u8 effect = 0;
=======
    s32 i, j;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    if (gBattleControllerExecFlags)
        return;

<<<<<<< HEAD
    // Set invalid mons as absent(for example when starting a double battle with only one pokemon).
    if (!(gBattleTypeFlags & BATTLE_TYPE_SAFARI))
    {
        for (i = 0; i < gBattlersCount; i++)
        {
            if (gBattleMons[i].hp == 0 || gBattleMons[i].species == SPECIES_NONE)
                gAbsentBattlerFlags |= gBitTable[i];
        }
    }

    if (gBattleStruct->switchInAbilitiesCounter == 0)
    {
=======
    switch ((enum FirstTurnEventsStates)gBattleStruct->eventsBeforeFirstTurnState)
    {
    case FIRST_TURN_EVENTS_START:
        // Set invalid mons as absent(for example when starting a double battle with only one pokemon).
        if (!(gBattleTypeFlags & BATTLE_TYPE_SAFARI))
        {
            for (i = 0; i < gBattlersCount; i++)
            {
                gBattleStruct->monToSwitchIntoId[i] = PARTY_SIZE; // Included here because switches can happen before during set ups (eg. eject pack)
                struct Pokemon *mon = GetBattlerMon(i);
                if (!IsBattlerAlive(i) || gBattleMons[i].species == SPECIES_NONE || GetMonData(mon, MON_DATA_IS_EGG))
                    gAbsentBattlerFlags |= 1u << i;
            }
        }

        // Allow for illegal abilities within tests.
        #if TESTING
        if (gTestRunnerEnabled)
        {
            for (i = 0; i < gBattlersCount; ++i)
            {
                u32 side = GetBattlerSide(i);
                u32 partyIndex = gBattlerPartyIndexes[i];
                if (TestRunner_Battle_GetForcedAbility(side, partyIndex))
                    gBattleMons[i].ability = TestRunner_Battle_GetForcedAbility(side, partyIndex);
            }
        }
        #endif // TESTING

        gBattleStruct->speedTieBreaks = RandomUniform(RNG_SPEED_TIE, 0, Factorial(MAX_BATTLERS_COUNT) - 1);
        gBattleTurnCounter = 0;

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        for (i = 0; i < gBattlersCount; i++)
            gBattlerByTurnOrder[i] = i;
        for (i = 0; i < gBattlersCount - 1; i++)
        {
            for (j = i + 1; j < gBattlersCount; j++)
            {
<<<<<<< HEAD
                if (GetWhoStrikesFirst(gBattlerByTurnOrder[i], gBattlerByTurnOrder[j], TRUE) != 0)
                    SwapTurnOrder(i, j);
            }
        }
    }
    if (!gBattleStruct->overworldWeatherDone
        && AbilityBattleEffects(0, 0, 0, ABILITYEFFECT_SWITCH_IN_WEATHER, 0) != 0)
    {
        gBattleStruct->overworldWeatherDone = TRUE;
        return;
    }
    // Check all switch in abilities happening from the fastest mon to slowest.
    while (gBattleStruct->switchInAbilitiesCounter < gBattlersCount)
    {
        if (AbilityBattleEffects(ABILITYEFFECT_ON_SWITCHIN, gBattlerByTurnOrder[gBattleStruct->switchInAbilitiesCounter], 0, 0, 0) != 0)
            effect++;

        gBattleStruct->switchInAbilitiesCounter++;

        if (effect != 0)
            return;
    }
    if (AbilityBattleEffects(ABILITYEFFECT_INTIMIDATE1, 0, 0, 0, 0) != 0)
        return;
    if (AbilityBattleEffects(ABILITYEFFECT_TRACE, 0, 0, 0, 0) != 0)
        return;
    // Check all switch in items having effect from the fastest mon to slowest.
    while (gBattleStruct->switchInItemsCounter < gBattlersCount)
    {
        if (ItemBattleEffects(ITEMEFFECT_ON_SWITCH_IN, gBattlerByTurnOrder[gBattleStruct->switchInItemsCounter], FALSE))
            effect++;

        gBattleStruct->switchInItemsCounter++;

        if (effect != 0)
            return;
    }
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
    {
        *(gBattleStruct->monToSwitchIntoId + i) = PARTY_SIZE;
        gChosenActionByBattler[i] = B_ACTION_NONE;
        gChosenMoveByBattler[i] = MOVE_NONE;
    }
    TurnValuesCleanUp(FALSE);
    SpecialStatusesClear();
    *(&gBattleStruct->absentBattlerFlags) = gAbsentBattlerFlags;
    BattlePutTextOnWindow(gText_EmptyString3, B_WIN_MSG);
    gBattleMainFunc = HandleTurnActionSelectionState;
    ResetSentPokesToOpponentValue();

    for (i = 0; i < BATTLE_COMMUNICATION_ENTRIES_COUNT; i++)
        gBattleCommunication[i] = 0;

    for (i = 0; i < gBattlersCount; i++)
        gBattleMons[i].status2 &= ~STATUS2_FLINCHED;

    *(&gBattleStruct->turnEffectsTracker) = 0;
    *(&gBattleStruct->turnEffectsBattlerId) = 0;
    *(&gBattleStruct->wishPerishSongState) = 0;
    *(&gBattleStruct->wishPerishSongBattlerId) = 0;
    gBattleScripting.moveendState = 0;
    gBattleStruct->faintedActionsState = 0;
    gBattleStruct->turnCountersTracker = 0;
    gMoveResultFlags = 0;

    gRandomTurnNumber = Random();

    if (gBattleTypeFlags & BATTLE_TYPE_ARENA)
    {
        StopCryAndClearCrySongs();
        BattleScriptExecute(BattleScript_ArenaTurnBeginning);
=======
                if (GetWhichBattlerFaster(gBattlerByTurnOrder[i], gBattlerByTurnOrder[j], TRUE) == -1)
                    SwapTurnOrder(i, j);
            }
        }
        gBattleStruct->eventsBeforeFirstTurnState++;
        break;
    case FIRST_TURN_EVENTS_OVERWORLD_WEATHER:
        if (!gBattleStruct->overworldWeatherDone
         && AbilityBattleEffects(ABILITYEFFECT_SWITCH_IN_WEATHER, 0, 0, ABILITYEFFECT_SWITCH_IN_WEATHER, 0) != 0)
        {
            gBattleStruct->overworldWeatherDone = TRUE;
            return;
        }
        gBattleStruct->eventsBeforeFirstTurnState++;
        break;
    case FIRST_TURN_EVENTS_TERRAIN:
        if (!gBattleStruct->terrainDone
         && AbilityBattleEffects(ABILITYEFFECT_SWITCH_IN_TERRAIN, 0, 0, ABILITYEFFECT_SWITCH_IN_TERRAIN, 0) != 0)
        {
            gBattleStruct->terrainDone = TRUE;
            return;
        }
        gBattleStruct->eventsBeforeFirstTurnState++;
        break;
    case FIRST_TURN_EVENTS_STARTING_STATUS:
        if (!gBattleStruct->startingStatusDone
         && gBattleStruct->startingStatus
         && AbilityBattleEffects(ABILITYEFFECT_SWITCH_IN_STATUSES, 0, 0, ABILITYEFFECT_SWITCH_IN_STATUSES, 0) != 0)
        {
            gBattleStruct->startingStatusDone = TRUE;
            return;
        }
        gBattleStruct->eventsBeforeFirstTurnState++;
        break;
    case FIRST_TURN_EVENTS_TOTEM_BOOST:
        for (i = 0; i < gBattlersCount; i++)
        {
            if (gQueuedStatBoosts[i].stats != 0 && !gProtectStructs[i].eatMirrorHerb && gProtectStructs[i].activateOpportunist == 0)
            {
                gBattlerAttacker = i;
                BattleScriptExecute(BattleScript_TotemVar);
                return;
            }
        }
        memset(gQueuedStatBoosts, 0, sizeof(gQueuedStatBoosts)); // erase all totem boosts for Mirror Herb and Opportunist
        gBattleStruct->eventsBeforeFirstTurnState++;
        break;
    case FIRST_TURN_EVENTS_NEUTRALIZING_GAS:
        if (AbilityBattleEffects(ABILITYEFFECT_NEUTRALIZINGGAS, 0, 0, 0, 0) != 0)
            return;
        gBattleStruct->eventsBeforeFirstTurnState++;
        break;
    case FIRST_TURN_EVENTS_SWITCH_IN_ABILITIES:
        while (gBattleStruct->switchInBattlerCounter < gBattlersCount) // From fastest to slowest
        {
            i = gBattlerByTurnOrder[gBattleStruct->switchInBattlerCounter++];

            if (TryPrimalReversion(i))
                return;
            if (AbilityBattleEffects(ABILITYEFFECT_ON_SWITCHIN, i, 0, 0, 0) != 0)
                return;
            if (TryClearIllusion(i, ABILITYEFFECT_ON_SWITCHIN))
                return;
            if (AbilityBattleEffects(ABILITYEFFECT_ON_SWITCHIN_IMMUNITIES, i, 0, 0, 0) != 0)
                return;
        }
        gBattleStruct->switchInBattlerCounter = 0;
        gBattleStruct->eventsBeforeFirstTurnState++;
        break;
    case FIRST_TURN_EVENTS_OPPORTUNIST_1:
        if (AbilityBattleEffects(ABILITYEFFECT_OPPORTUNIST, 0, 0, 0, 0))
            return;
        gBattleStruct->eventsBeforeFirstTurnState++;
        break;
    case FIRST_TURN_EVENTS_ITEM_EFFECTS:
        while (gBattleStruct->switchInBattlerCounter < gBattlersCount) // From fastest to slowest
        {
            if (ItemBattleEffects(ITEMEFFECT_ON_SWITCH_IN_FIRST_TURN, gBattlerByTurnOrder[gBattleStruct->switchInBattlerCounter++]))
                return;
        }
        gBattleStruct->switchInBattlerCounter = 0;
        gBattleStruct->eventsBeforeFirstTurnState++;
        break;
    case FIRST_TURN_EVENTS_OPPORTUNIST_2:
        if (AbilityBattleEffects(ABILITYEFFECT_OPPORTUNIST, 0, 0, 0, 0))
            return;
        gBattleStruct->eventsBeforeFirstTurnState++;
        break;
    case FIRST_TURN_EVENTS_EJECT_PACK:
        gBattleStruct->eventsBeforeFirstTurnState++;
        if (TrySwitchInEjectPack(ITEMEFFECT_ON_SWITCH_IN_FIRST_TURN))
            return;
        break;
    case FIRST_TURN_EVENTS_END:
        for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        {
            gBattleStruct->monToSwitchIntoId[i] = PARTY_SIZE;
            gChosenActionByBattler[i] = B_ACTION_NONE;
            gChosenMoveByBattler[i] = MOVE_NONE;
        }
        TurnValuesCleanUp(FALSE);
        SpecialStatusesClear();
        BattlePutTextOnWindow(gText_EmptyString3, B_WIN_MSG);
        AssignUsableGimmicks();
        gBattleMainFunc = HandleTurnActionSelectionState;
        ResetSentPokesToOpponentValue();

        for (i = 0; i < BATTLE_COMMUNICATION_ENTRIES_COUNT; i++)
            gBattleCommunication[i] = 0;

        for (i = 0; i < gBattlersCount; i++)
        {
            gBattleMons[i].volatiles.flinched = FALSE;
            // Record party slots of player's mons that appeared in battle
            if (!BattlerHasAi(i))
                gBattleStruct->appearedInBattle |= 1u << gBattlerPartyIndexes[i];
        }

        *(&gBattleStruct->eventBlockCounter) = 0;
        *(&gBattleStruct->turnEffectsBattlerId) = 0;
        gBattleScripting.moveendState = 0;
        gBattleStruct->faintedActionsState = 0;
        gBattleStruct->endTurnEventsCounter = 0;

        memset(gQueuedStatBoosts, 0, sizeof(gQueuedStatBoosts));
        SetShellSideArmCategory();
        SetAiLogicDataForTurn(gAiLogicData); // get assumed abilities, hold effects, etc of all battlers

        if (gBattleTypeFlags & BATTLE_TYPE_ARENA)
        {
            StopCryAndClearCrySongs();
            BattleScriptExecute(BattleScript_ArenaTurnBeginning);
        }

        if ((i = ShouldDoTrainerSlide(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), TRAINER_SLIDE_BEFORE_FIRST_TURN)))
            BattleScriptExecute(i == 1 ? BattleScript_TrainerASlideMsgEnd2 : BattleScript_TrainerBSlideMsgEnd2);
        gBattleStruct->eventsBeforeFirstTurnState = 0;
        break;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }
}

static void HandleEndTurn_ContinueBattle(void)
{
    s32 i;

    if (gBattleControllerExecFlags == 0)
    {
        gBattleMainFunc = BattleTurnPassed;
        for (i = 0; i < BATTLE_COMMUNICATION_ENTRIES_COUNT; i++)
            gBattleCommunication[i] = 0;
        for (i = 0; i < gBattlersCount; i++)
        {
<<<<<<< HEAD
            gBattleMons[i].status2 &= ~STATUS2_FLINCHED;
            if ((gBattleMons[i].status1 & STATUS1_SLEEP) && (gBattleMons[i].status2 & STATUS2_MULTIPLETURNS))
                CancelMultiTurnMoves(i);
        }
        gBattleStruct->turnEffectsTracker = 0;
        gBattleStruct->turnEffectsBattlerId = 0;
        gBattleStruct->wishPerishSongState = 0;
        gBattleStruct->wishPerishSongBattlerId = 0;
        gBattleStruct->turnCountersTracker = 0;
        gMoveResultFlags = 0;
=======
            gBattleMons[i].volatiles.flinched = FALSE;
            if ((gBattleMons[i].status1 & STATUS1_SLEEP) && (gBattleMons[i].volatiles.multipleTurns))
                CancelMultiTurnMoves(i, SKY_DROP_IGNORE);
        }
        gBattleStruct->eventBlockCounter = 0;
        gBattleStruct->turnEffectsBattlerId = 0;
        gBattleStruct->endTurnEventsCounter = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }
}

void BattleTurnPassed(void)
{
    s32 i;

<<<<<<< HEAD
    TurnValuesCleanUp(TRUE);
    if (gBattleOutcome == 0)
    {
        if (DoFieldEndTurnEffects())
            return;
        if (DoBattlerEndTurnEffects())
            return;
    }
    if (HandleFaintedMonActions())
        return;
    gBattleStruct->faintedActionsState = 0;
    if (HandleWishPerishSongOnTurnEnd())
        return;
=======
    gBattleStruct->speedTieBreaks = RandomUniform(RNG_SPEED_TIE, 0, Factorial(MAX_BATTLERS_COUNT) - 1);

    TurnValuesCleanUp(TRUE);

    if (gBattleOutcome == 0 && DoEndTurnEffects())
        return;
    if (BattleArenaTurnEnd())
        return;
    if (HandleFaintedMonActions())
        return;

    gBattleStruct->faintedActionsState = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    TurnValuesCleanUp(FALSE);
    gHitMarker &= ~HITMARKER_NO_ATTACKSTRING;
    gHitMarker &= ~HITMARKER_UNABLE_TO_USE_MOVE;
    gHitMarker &= ~HITMARKER_PLAYER_FAINTED;
<<<<<<< HEAD
    gHitMarker &= ~HITMARKER_PASSIVE_DAMAGE;
    gBattleScripting.animTurn = 0;
    gBattleScripting.animTargetsHit = 0;
    gBattleScripting.moveendState = 0;
    gBattleMoveDamage = 0;
    gMoveResultFlags = 0;
=======
    gHitMarker &= ~HITMARKER_PASSIVE_HP_UPDATE;
    gBattleScripting.animTurn = 0;
    gBattleScripting.animTargetsHit = 0;
    gBattleScripting.moveendState = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    for (i = 0; i < 5; i++)
        gBattleCommunication[i] = 0;

    if (gBattleOutcome != 0)
    {
        gCurrentActionFuncId = B_ACTION_FINISHED;
        gBattleMainFunc = RunTurnActionsFunctions;
        return;
    }

    if (gBattleResults.battleTurnCounter < 0xFF)
    {
        gBattleResults.battleTurnCounter++;
        gBattleStruct->arenaTurnCounter++;
    }

    for (i = 0; i < gBattlersCount; i++)
    {
        gChosenActionByBattler[i] = B_ACTION_NONE;
        gChosenMoveByBattler[i] = MOVE_NONE;
<<<<<<< HEAD
    }

    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        *(gBattleStruct->monToSwitchIntoId + i) = PARTY_SIZE;

    *(&gBattleStruct->absentBattlerFlags) = gAbsentBattlerFlags;
    BattlePutTextOnWindow(gText_EmptyString3, B_WIN_MSG);
    gBattleMainFunc = HandleTurnActionSelectionState;
    gRandomTurnNumber = Random();
=======
        gBattleStruct->monToSwitchIntoId[i] = PARTY_SIZE;
        gBattleMons[i].volatiles.electrified = FALSE;
        gBattleMons[i].volatiles.flinched = FALSE;
        gBattleMons[i].volatiles.powder = FALSE;

        if (gBattleStruct->battlerState[i].stompingTantrumTimer > 0)
            gBattleStruct->battlerState[i].stompingTantrumTimer--;
    }

    for (i = 0; i < NUM_BATTLE_SIDES; i++)
    {
        if (gSideTimers[i].retaliateTimer > 0)
            gSideTimers[i].retaliateTimer--;
    }

    gFieldStatuses &= ~STATUS_FIELD_ION_DELUGE;

    BattlePutTextOnWindow(gText_EmptyString3, B_WIN_MSG);
    AssignUsableGimmicks();
    SetShellSideArmCategory();
    SetAiLogicDataForTurn(gAiLogicData); // get assumed abilities, hold effects, etc of all battlers
    gBattleMainFunc = HandleTurnActionSelectionState;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    if (gBattleTypeFlags & BATTLE_TYPE_PALACE)
        BattleScriptExecute(BattleScript_PalacePrintFlavorText);
    else if (gBattleTypeFlags & BATTLE_TYPE_ARENA && gBattleStruct->arenaTurnCounter == 0)
        BattleScriptExecute(BattleScript_ArenaTurnBeginning);
<<<<<<< HEAD
}

u8 IsRunningFromBattleImpossible(void)
{
    u8 holdEffect;
    u8 side;
    s32 i;

    if (gBattleMons[gActiveBattler].item == ITEM_ENIGMA_BERRY)
        holdEffect = gEnigmaBerries[gActiveBattler].holdEffect;
    else
        holdEffect = ItemId_GetHoldEffect(gBattleMons[gActiveBattler].item);

    gPotentialItemEffectBattler = gActiveBattler;

    if (holdEffect == HOLD_EFFECT_CAN_ALWAYS_RUN)
        return BATTLE_RUN_SUCCESS;
    if (gBattleTypeFlags & BATTLE_TYPE_LINK)
        return BATTLE_RUN_SUCCESS;
    if (gBattleMons[gActiveBattler].ability == ABILITY_RUN_AWAY)
        return BATTLE_RUN_SUCCESS;

    side = GetBattlerSide(gActiveBattler);

    for (i = 0; i < gBattlersCount; i++)
    {
        if (side != GetBattlerSide(i)
         && gBattleMons[i].ability == ABILITY_SHADOW_TAG)
        {
            gBattleScripting.battler = i;
            gLastUsedAbility = gBattleMons[i].ability;
            gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_PREVENTS_ESCAPE;
            return BATTLE_RUN_FAILURE;
        }
        if (side != GetBattlerSide(i)
         && gBattleMons[gActiveBattler].ability != ABILITY_LEVITATE
         && !IS_BATTLER_OF_TYPE(gActiveBattler, TYPE_FLYING)
         && gBattleMons[i].ability == ABILITY_ARENA_TRAP)
        {
            gBattleScripting.battler = i;
            gLastUsedAbility = gBattleMons[i].ability;
            gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_PREVENTS_ESCAPE;
            return BATTLE_RUN_FAILURE;
        }
    }
    i = AbilityBattleEffects(ABILITYEFFECT_CHECK_FIELD_EXCEPT_BATTLER, gActiveBattler, ABILITY_MAGNET_PULL, 0, 0);
    if (i != 0 && IS_BATTLER_OF_TYPE(gActiveBattler, TYPE_STEEL))
=======
    else if ((i = ShouldDoTrainerSlide(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), TRAINER_SLIDE_LAST_LOW_HP)))
        BattleScriptExecute(i == 1 ? BattleScript_TrainerASlideMsgEnd2 : BattleScript_TrainerBSlideMsgEnd2);
    else if ((i = ShouldDoTrainerSlide(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), TRAINER_SLIDE_LAST_HALF_HP)))
        BattleScriptExecute(i == 1 ? BattleScript_TrainerASlideMsgEnd2 : BattleScript_TrainerBSlideMsgEnd2);
    else if ((i = ShouldDoTrainerSlide(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT)))
        BattleScriptExecute(i == 1 ? BattleScript_TrainerASlideMsgEnd2 : BattleScript_TrainerBSlideMsgEnd2);
    else if ((i = ShouldDoTrainerSlide(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT)))
        BattleScriptExecute(i == 1 ? BattleScript_TrainerASlideMsgEnd2 : BattleScript_TrainerBSlideMsgEnd2);
    else if ((i = ShouldDoTrainerSlide(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT)))
        BattleScriptExecute(i == 1 ? BattleScript_TrainerASlideMsgEnd2 : BattleScript_TrainerBSlideMsgEnd2);
    else if ((i = ShouldDoTrainerSlide(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE)))
        BattleScriptExecute(i == 1 ? BattleScript_TrainerASlideMsgEnd2 : BattleScript_TrainerBSlideMsgEnd2);
    else if ((i = ShouldDoTrainerSlide(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), TRAINER_SLIDE_ENEMY_MON_UNAFFECTED)))
        BattleScriptExecute(i == 1 ? BattleScript_TrainerASlideMsgEnd2 : BattleScript_TrainerBSlideMsgEnd2);
}

u8 IsRunningFromBattleImpossible(u32 battler)
{
    enum ItemHoldEffect holdEffect;
    u32 i;

    if (FlagGet(B_FLAG_NO_RUNNING))
    {
        gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_CANT_ESCAPE;
        return BATTLE_RUN_FORBIDDEN;
    }

    if (gBattleMons[battler].item == ITEM_ENIGMA_BERRY_E_READER)
        holdEffect = gEnigmaBerries[battler].holdEffect;
    else
        holdEffect = GetItemHoldEffect(gBattleMons[battler].item);

    gPotentialItemEffectBattler = battler;

    if (gBattleTypeFlags & BATTLE_TYPE_FIRST_BATTLE) // Cannot ever run from saving Birch's battle.
    {
        gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_DONT_LEAVE_BIRCH;
        return BATTLE_RUN_FORBIDDEN;
    }
    if (GetBattlerPosition(battler) == B_POSITION_PLAYER_RIGHT && WILD_DOUBLE_BATTLE
        && IsBattlerAlive(GetBattlerAtPosition(B_POSITION_PLAYER_LEFT))) // The second pokemon cannot run from a double wild battle, unless it's the only alive mon.
    {
        gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_CANT_ESCAPE;
        return BATTLE_RUN_FORBIDDEN;
    }

    if (holdEffect == HOLD_EFFECT_CAN_ALWAYS_RUN)
        return BATTLE_RUN_SUCCESS;
    if (B_GHOSTS_ESCAPE >= GEN_6 && IS_BATTLER_OF_TYPE(battler, TYPE_GHOST))
        return BATTLE_RUN_SUCCESS;
    if (gBattleTypeFlags & BATTLE_TYPE_LINK)
        return BATTLE_RUN_SUCCESS;
    if (GetBattlerAbility(battler) == ABILITY_RUN_AWAY)
        return BATTLE_RUN_SUCCESS;

    if ((i = IsAbilityPreventingEscape(battler)))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    {
        gBattleScripting.battler = i - 1;
        gLastUsedAbility = gBattleMons[i - 1].ability;
        gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_PREVENTS_ESCAPE;
        return BATTLE_RUN_FAILURE;
    }
<<<<<<< HEAD
    if ((gBattleMons[gActiveBattler].status2 & (STATUS2_ESCAPE_PREVENTION | STATUS2_WRAPPED))
        || (gStatuses3[gActiveBattler] & STATUS3_ROOTED))
=======

    if (!CanBattlerEscape(battler))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    {
        gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_CANT_ESCAPE;
        return BATTLE_RUN_FORBIDDEN;
    }
<<<<<<< HEAD
    if (gBattleTypeFlags & BATTLE_TYPE_FIRST_BATTLE)
    {
        gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_DONT_LEAVE_BIRCH;
        return BATTLE_RUN_FORBIDDEN;
    }
    return BATTLE_RUN_SUCCESS;
}

void SwitchPartyOrder(u8 battler)
{
    s32 i;
    u8 partyId1;
    u8 partyId2;
=======
    return BATTLE_RUN_SUCCESS;
}

void SwitchTwoBattlersInParty(u32 battler, u32 battler2)
{
    s32 i;
    u32 partyId1, partyId2;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    for (i = 0; i < (int)ARRAY_COUNT(gBattlePartyCurrentOrder); i++)
        gBattlePartyCurrentOrder[i] = *(battler * 3 + i + (u8 *)(gBattleStruct->battlerPartyOrders));

    partyId1 = GetPartyIdFromBattlePartyId(gBattlerPartyIndexes[battler]);
<<<<<<< HEAD
    partyId2 = GetPartyIdFromBattlePartyId(*(gBattleStruct->monToSwitchIntoId + battler));
    SwitchPartyMonSlots(partyId1, partyId2);

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
=======
    partyId2 = GetPartyIdFromBattlePartyId(gBattlerPartyIndexes[battler2]);
    SwitchPartyMonSlots(partyId1, partyId2);

    for (i = 0; i < (int)ARRAY_COUNT(gBattlePartyCurrentOrder); i++)
    {
        *(battler * 3 + i + (u8 *)(gBattleStruct->battlerPartyOrders)) = gBattlePartyCurrentOrder[i];
        *(BATTLE_PARTNER(battler) * 3 + i + (u8 *)(gBattleStruct->battlerPartyOrders)) = gBattlePartyCurrentOrder[i];
    }
}

void SwitchPartyOrder(u32 battler)
{
    s32 i;
    u32 partyId1, partyId2;

    for (i = 0; i < (int)ARRAY_COUNT(gBattlePartyCurrentOrder); i++)
        gBattlePartyCurrentOrder[i] = *(battler * 3 + i + (u8 *)(gBattleStruct->battlerPartyOrders));

    partyId1 = GetPartyIdFromBattlePartyId(gBattlerPartyIndexes[battler]);
    partyId2 = GetPartyIdFromBattlePartyId(gBattleStruct->monToSwitchIntoId[battler]);
    SwitchPartyMonSlots(partyId1, partyId2);

    if (IsDoubleBattle())
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    {
        for (i = 0; i < (int)ARRAY_COUNT(gBattlePartyCurrentOrder); i++)
        {
            *(battler * 3 + i + (u8 *)(gBattleStruct->battlerPartyOrders)) = gBattlePartyCurrentOrder[i];
            *(BATTLE_PARTNER(battler) * 3 + i + (u8 *)(gBattleStruct->battlerPartyOrders)) = gBattlePartyCurrentOrder[i];
        }
    }
    else
    {
        for (i = 0; i < (int)ARRAY_COUNT(gBattlePartyCurrentOrder); i++)
        {
            *(battler * 3 + i + (u8 *)(gBattleStruct->battlerPartyOrders)) = gBattlePartyCurrentOrder[i];
        }
    }
}

enum
{
    STATE_TURN_START_RECORD,
    STATE_BEFORE_ACTION_CHOSEN,
    STATE_WAIT_ACTION_CHOSEN,
    STATE_WAIT_ACTION_CASE_CHOSEN,
    STATE_WAIT_ACTION_CONFIRMED_STANDBY,
    STATE_WAIT_ACTION_CONFIRMED,
    STATE_SELECTION_SCRIPT,
    STATE_WAIT_SET_BEFORE_ACTION,
    STATE_SELECTION_SCRIPT_MAY_RUN
};

static void HandleTurnActionSelectionState(void)
{
<<<<<<< HEAD
    s32 i;

    gBattleCommunication[ACTIONS_CONFIRMED_COUNT] = 0;
    for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
    {
        u8 position = GetBattlerPosition(gActiveBattler);
        switch (gBattleCommunication[gActiveBattler])
        {
        case STATE_TURN_START_RECORD: // Recorded battle related action on start of every turn.
            RecordedBattle_CopyBattlerMoves();
            gBattleCommunication[gActiveBattler] = STATE_BEFORE_ACTION_CHOSEN;
            break;
        case STATE_BEFORE_ACTION_CHOSEN: // Choose an action.
            *(gBattleStruct->monToSwitchIntoId + gActiveBattler) = PARTY_SIZE;
            if (gBattleTypeFlags & BATTLE_TYPE_MULTI
                || (position & BIT_FLANK) == B_FLANK_LEFT
                || gBattleStruct->absentBattlerFlags & gBitTable[GetBattlerAtPosition(BATTLE_PARTNER(position))]
                || gBattleCommunication[GetBattlerAtPosition(BATTLE_PARTNER(position))] == STATE_WAIT_ACTION_CONFIRMED)
            {
                if (gBattleStruct->absentBattlerFlags & gBitTable[gActiveBattler])
                {
                    gChosenActionByBattler[gActiveBattler] = B_ACTION_NOTHING_FAINTED;
                    if (!(gBattleTypeFlags & BATTLE_TYPE_MULTI))
                        gBattleCommunication[gActiveBattler] = STATE_WAIT_ACTION_CONFIRMED;
                    else
                        gBattleCommunication[gActiveBattler] = STATE_WAIT_ACTION_CONFIRMED_STANDBY;
                }
                else
                {
                    if (gBattleMons[gActiveBattler].status2 & STATUS2_MULTIPLETURNS
                        || gBattleMons[gActiveBattler].status2 & STATUS2_RECHARGE)
                    {
                        gChosenActionByBattler[gActiveBattler] = B_ACTION_USE_MOVE;
                        gBattleCommunication[gActiveBattler] = STATE_WAIT_ACTION_CONFIRMED_STANDBY;
                    }
                    else
                    {
                        BtlController_EmitChooseAction(BUFFER_A, gChosenActionByBattler[0], gBattleBufferB[0][1] | (gBattleBufferB[0][2] << 8));
                        MarkBattlerForControllerExec(gActiveBattler);
                        gBattleCommunication[gActiveBattler]++;
=======
    s32 i, battler;

    gBattleCommunication[ACTIONS_CONFIRMED_COUNT] = 0;
    for (battler = 0; battler < gBattlersCount; battler++)
    {
        u32 position = GetBattlerPosition(battler);
        switch (gBattleCommunication[battler])
        {
        case STATE_TURN_START_RECORD: // Recorded battle related action on start of every turn.
            RecordedBattle_CopyBattlerMoves(battler);
            gBattleCommunication[battler] = STATE_BEFORE_ACTION_CHOSEN;
            ComputeBattlerDecisions(battler); // Do AI score computations here so we can use them in AI_TrySwitchOrUseItem
            // fallthrough
        case STATE_BEFORE_ACTION_CHOSEN: // Choose an action.
            gBattleStruct->monToSwitchIntoId[battler] = PARTY_SIZE;
            if (gBattleTypeFlags & BATTLE_TYPE_MULTI
                || (position & BIT_FLANK) == B_FLANK_LEFT
                || gAbsentBattlerFlags & 1u << GetBattlerAtPosition(BATTLE_PARTNER(position))
                || gBattleCommunication[GetBattlerAtPosition(BATTLE_PARTNER(position))] == STATE_WAIT_ACTION_CONFIRMED)
            {
                if (gAbsentBattlerFlags & 1u << battler || gBattleStruct->battlerState[battler].commandingDondozo)
                {
                    gChosenActionByBattler[battler] = B_ACTION_NOTHING_FAINTED;
                    if (!(gBattleTypeFlags & BATTLE_TYPE_MULTI))
                        gBattleCommunication[battler] = STATE_WAIT_ACTION_CONFIRMED;
                    else
                        gBattleCommunication[battler] = STATE_WAIT_ACTION_CONFIRMED_STANDBY;
                }
                else
                {
                    if (gBattleMons[battler].volatiles.multipleTurns
                        || gDisableStructs[battler].rechargeTimer > 0)
                    {
                        gChosenActionByBattler[battler] = B_ACTION_USE_MOVE;
                        gBattleCommunication[battler] = STATE_WAIT_ACTION_CONFIRMED_STANDBY;
                    }
                    else if (WILD_DOUBLE_BATTLE
                             && position == B_POSITION_PLAYER_RIGHT
                             && (gBattleStruct->throwingPokeBall || gChosenActionByBattler[GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)] == B_ACTION_RUN)
                             && gChosenActionByBattler[GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)] != B_ACTION_NOTHING_FAINTED)
                    {
                        gBattleStruct->throwingPokeBall = FALSE;
                        gChosenActionByBattler[battler] = B_ACTION_NOTHING_FAINTED; // Not fainted, but it cannot move, because of the throwing ball.
                        gBattleCommunication[battler] = STATE_WAIT_ACTION_CONFIRMED_STANDBY;
                    }
                    else if (B_RUN_TRAINER_BATTLE
                          && gBattleTypeFlags & BATTLE_TYPE_DOUBLE
                          && position == B_POSITION_PLAYER_RIGHT
                          && gChosenActionByBattler[GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)] == B_ACTION_RUN
                          && gChosenActionByBattler[GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)] != B_ACTION_NOTHING_FAINTED)
                    {
                        gChosenActionByBattler[battler] = B_ACTION_USE_MOVE;
                        gBattleCommunication[battler] = STATE_WAIT_ACTION_CONFIRMED_STANDBY;
                    }
                    else
                    {
                        gBattleStruct->itemPartyIndex[battler] = PARTY_SIZE;
                        BtlController_EmitChooseAction(battler, B_COMM_TO_CONTROLLER, gChosenActionByBattler[0], gBattleResources->bufferB[0][1] | (gBattleResources->bufferB[0][2] << 8));
                        MarkBattlerForControllerExec(battler);
                        gBattleCommunication[battler]++;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                    }
                }
            }
            break;
        case STATE_WAIT_ACTION_CHOSEN: // Try to perform an action.
<<<<<<< HEAD
            if (!(gBattleControllerExecFlags & ((gBitTable[gActiveBattler]) | (0xF << 28) | (gBitTable[gActiveBattler] << 4) | (gBitTable[gActiveBattler] << 8) | (gBitTable[gActiveBattler] << 12))))
            {
                RecordedBattle_SetBattlerAction(gActiveBattler, gBattleBufferB[gActiveBattler][1]);
                gChosenActionByBattler[gActiveBattler] = gBattleBufferB[gActiveBattler][1];

                switch (gBattleBufferB[gActiveBattler][1])
                {
                case B_ACTION_USE_MOVE:
                    if (AreAllMovesUnusable())
                    {
                        gBattleCommunication[gActiveBattler] = STATE_SELECTION_SCRIPT;
                        *(gBattleStruct->selectionScriptFinished + gActiveBattler) = FALSE;
                        *(gBattleStruct->stateIdAfterSelScript + gActiveBattler) = STATE_WAIT_ACTION_CONFIRMED_STANDBY;
                        *(gBattleStruct->moveTarget + gActiveBattler) = gBattleBufferB[gActiveBattler][3];
                        return;
                    }
                    else if (gDisableStructs[gActiveBattler].encoredMove != 0)
                    {
                        gChosenMoveByBattler[gActiveBattler] = gDisableStructs[gActiveBattler].encoredMove;
                        *(gBattleStruct->chosenMovePositions + gActiveBattler) = gDisableStructs[gActiveBattler].encoredMovePos;
                        gBattleCommunication[gActiveBattler] = STATE_WAIT_ACTION_CONFIRMED_STANDBY;
=======
            if (!IsBattleControllerActiveOrPendingSyncAnywhere(battler))
            {
                RecordedBattle_SetBattlerAction(battler, gBattleResources->bufferB[battler][1]);
                gChosenActionByBattler[battler] = gBattleResources->bufferB[battler][1];

                switch (gBattleResources->bufferB[battler][1])
                {
                case B_ACTION_USE_MOVE:
                    if (AreAllMovesUnusable(battler))
                    {
                        gBattleCommunication[battler] = STATE_SELECTION_SCRIPT;
                        gBattleStruct->selectionScriptFinished[battler] = FALSE;
                        gBattleStruct->stateIdAfterSelScript[battler] = STATE_WAIT_ACTION_CONFIRMED_STANDBY;
                        gBattleStruct->moveTarget[battler] = gBattleResources->bufferB[battler][3];
                        return;
                    }
                    else if (GetGenConfig(GEN_CONFIG_ENCORE_TARGET) < GEN_5 && gDisableStructs[battler].encoredMove != MOVE_NONE)
                    {
                        gChosenMoveByBattler[battler] = gDisableStructs[battler].encoredMove;
                        gBattleStruct->chosenMovePositions[battler] = gDisableStructs[battler].encoredMovePos;
                        gBattleCommunication[battler] = STATE_WAIT_ACTION_CONFIRMED_STANDBY;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                        return;
                    }
                    else
                    {
                        struct ChooseMoveStruct moveInfo;

<<<<<<< HEAD
                        moveInfo.species = gBattleMons[gActiveBattler].species;
                        moveInfo.monType1 = gBattleMons[gActiveBattler].type1;
                        moveInfo.monType2 = gBattleMons[gActiveBattler].type2;

                        for (i = 0; i < MAX_MON_MOVES; i++)
                        {
                            moveInfo.moves[i] = gBattleMons[gActiveBattler].moves[i];
                            moveInfo.currentPp[i] = gBattleMons[gActiveBattler].pp[i];
                            moveInfo.maxPp[i] = CalculatePPWithBonus(
                                                            gBattleMons[gActiveBattler].moves[i],
                                                            gBattleMons[gActiveBattler].ppBonuses,
                                                            i);
                        }

                        BtlController_EmitChooseMove(BUFFER_A, (gBattleTypeFlags & BATTLE_TYPE_DOUBLE) != 0, FALSE, &moveInfo);
                        MarkBattlerForControllerExec(gActiveBattler);
                    }
                    break;
                case B_ACTION_USE_ITEM:
                #if TX_DEBUG_SYSTEM_ENABLE == TRUE
                    if (FlagGet(FLAG_SYS_NO_BAG_USE) || gBattleTypeFlags & (BATTLE_TYPE_LINK
                                            | BATTLE_TYPE_FRONTIER_NO_PYRAMID
                                            | BATTLE_TYPE_EREADER_TRAINER
                                            | BATTLE_TYPE_RECORDED_LINK))
                    {
                        RecordedBattle_ClearBattlerAction(gActiveBattler, 1);
                        gSelectionBattleScripts[gActiveBattler] = BattleScript_ActionSelectionItemsCantBeUsed;
                        gBattleCommunication[gActiveBattler] = STATE_SELECTION_SCRIPT;
                        *(gBattleStruct->selectionScriptFinished + gActiveBattler) = FALSE;
                        *(gBattleStruct->stateIdAfterSelScript + gActiveBattler) = STATE_BEFORE_ACTION_CHOSEN;
                        return;
                    }
                #endif

                    if (gBattleTypeFlags & (BATTLE_TYPE_LINK
                                            | BATTLE_TYPE_FRONTIER_NO_PYRAMID
                                            | BATTLE_TYPE_EREADER_TRAINER
                                            | BATTLE_TYPE_RECORDED_LINK))
                    {
                        RecordedBattle_ClearBattlerAction(gActiveBattler, 1);
                        gSelectionBattleScripts[gActiveBattler] = BattleScript_ActionSelectionItemsCantBeUsed;
                        gBattleCommunication[gActiveBattler] = STATE_SELECTION_SCRIPT;
                        *(gBattleStruct->selectionScriptFinished + gActiveBattler) = FALSE;
                        *(gBattleStruct->stateIdAfterSelScript + gActiveBattler) = STATE_BEFORE_ACTION_CHOSEN;
=======
                        moveInfo.zmove = gBattleStruct->zmove;
                        moveInfo.species = gBattleMons[battler].species;
                        moveInfo.monTypes[0] = gBattleMons[battler].types[0];
                        moveInfo.monTypes[1] = gBattleMons[battler].types[1];
                        moveInfo.monTypes[2] = gBattleMons[battler].types[2];

                        for (i = 0; i < MAX_MON_MOVES; i++)
                        {
                            moveInfo.moves[i] = gBattleMons[battler].moves[i];
                            moveInfo.currentPp[i] = gBattleMons[battler].pp[i];
                            moveInfo.maxPp[i] = CalculatePPWithBonus(
                                                            gBattleMons[battler].moves[i],
                                                            gBattleMons[battler].ppBonuses,
                                                            i);
                        }

                        BtlController_EmitChooseMove(battler, B_COMM_TO_CONTROLLER, IsDoubleBattle() != 0, FALSE, &moveInfo);
                        MarkBattlerForControllerExec(battler);
                    }
                    break;
                case B_ACTION_USE_ITEM:
                    if (FlagGet(B_FLAG_NO_BAG_USE))
                    {
                        RecordedBattle_ClearBattlerAction(battler, 1);
                        gSelectionBattleScripts[battler] = BattleScript_ActionSelectionItemsCantBeUsed;
                        gBattleCommunication[battler] = STATE_SELECTION_SCRIPT;
                        gBattleStruct->selectionScriptFinished[battler] = FALSE;
                        gBattleStruct->stateIdAfterSelScript[battler] = STATE_BEFORE_ACTION_CHOSEN;
                        return;
                    }

                    if (((gBattleTypeFlags & (BATTLE_TYPE_LINK
                                            | BATTLE_TYPE_FRONTIER_NO_PYRAMID
                                            | BATTLE_TYPE_EREADER_TRAINER
                                            | BATTLE_TYPE_RECORDED_LINK))
                                            && !gTestRunnerEnabled)
                                            // Or if currently held by Sky Drop
                                            || gBattleMons[battler].volatiles.semiInvulnerable == STATE_SKY_DROP)
                    {
                        RecordedBattle_ClearBattlerAction(battler, 1);
                        gSelectionBattleScripts[battler] = BattleScript_ActionSelectionItemsCantBeUsed;
                        gBattleCommunication[battler] = STATE_SELECTION_SCRIPT;
                        gBattleStruct->selectionScriptFinished[battler] = FALSE;
                        gBattleStruct->stateIdAfterSelScript[battler] = STATE_BEFORE_ACTION_CHOSEN;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                        return;
                    }
                    else
                    {
<<<<<<< HEAD
                        BtlController_EmitChooseItem(BUFFER_A, gBattleStruct->battlerPartyOrders[gActiveBattler]);
                        MarkBattlerForControllerExec(gActiveBattler);
                    }
                    break;
                case B_ACTION_SWITCH:
                    *(gBattleStruct->battlerPartyIndexes + gActiveBattler) = gBattlerPartyIndexes[gActiveBattler];
                    if (gBattleMons[gActiveBattler].status2 & (STATUS2_WRAPPED | STATUS2_ESCAPE_PREVENTION)
                        || gBattleTypeFlags & BATTLE_TYPE_ARENA
                        || gStatuses3[gActiveBattler] & STATUS3_ROOTED)
                    {
                        BtlController_EmitChoosePokemon(BUFFER_A, PARTY_ACTION_CANT_SWITCH, PARTY_SIZE, ABILITY_NONE, gBattleStruct->battlerPartyOrders[gActiveBattler]);
                    }
                    else if ((i = ABILITY_ON_OPPOSING_FIELD(gActiveBattler, ABILITY_SHADOW_TAG))
                             || ((i = ABILITY_ON_OPPOSING_FIELD(gActiveBattler, ABILITY_ARENA_TRAP))
                                 && !IS_BATTLER_OF_TYPE(gActiveBattler, TYPE_FLYING)
                                 && gBattleMons[gActiveBattler].ability != ABILITY_LEVITATE)
                             || ((i = AbilityBattleEffects(ABILITYEFFECT_CHECK_FIELD_EXCEPT_BATTLER, gActiveBattler, ABILITY_MAGNET_PULL, 0, 0))
                                 && IS_BATTLER_OF_TYPE(gActiveBattler, TYPE_STEEL)))
                    {
                        BtlController_EmitChoosePokemon(BUFFER_A, ((i - 1) << 4) | PARTY_ACTION_ABILITY_PREVENTS, PARTY_SIZE, gLastUsedAbility, gBattleStruct->battlerPartyOrders[gActiveBattler]);
                    }
                    else
                    {
                        if (gActiveBattler == 2 && gChosenActionByBattler[0] == B_ACTION_SWITCH)
                            BtlController_EmitChoosePokemon(BUFFER_A, PARTY_ACTION_CHOOSE_MON, *(gBattleStruct->monToSwitchIntoId + 0), ABILITY_NONE, gBattleStruct->battlerPartyOrders[gActiveBattler]);
                        else if (gActiveBattler == 3 && gChosenActionByBattler[1] == B_ACTION_SWITCH)
                            BtlController_EmitChoosePokemon(BUFFER_A, PARTY_ACTION_CHOOSE_MON, *(gBattleStruct->monToSwitchIntoId + 1), ABILITY_NONE, gBattleStruct->battlerPartyOrders[gActiveBattler]);
                        else
                            BtlController_EmitChoosePokemon(BUFFER_A, PARTY_ACTION_CHOOSE_MON, PARTY_SIZE, ABILITY_NONE, gBattleStruct->battlerPartyOrders[gActiveBattler]);
                    }
                    MarkBattlerForControllerExec(gActiveBattler);
=======
                        BtlController_EmitChooseItem(battler, B_COMM_TO_CONTROLLER, gBattleStruct->battlerPartyOrders[battler]);
                        MarkBattlerForControllerExec(battler);
                    }
                    break;
                case B_ACTION_SWITCH:
                    gBattleStruct->battlerPartyIndexes[battler] = gBattlerPartyIndexes[battler];
                    if (gBattleTypeFlags & BATTLE_TYPE_ARENA
                        || !CanBattlerEscape(battler))
                    {
                        BtlController_EmitChoosePokemon(battler, B_COMM_TO_CONTROLLER, PARTY_ACTION_CANT_SWITCH, PARTY_SIZE, ABILITY_NONE, 0, gBattleStruct->battlerPartyOrders[battler]);
                    }
                    else if (GetItemHoldEffect(gBattleMons[battler].item) != HOLD_EFFECT_SHED_SHELL
                      && (i = IsAbilityPreventingEscape(battler)))   // must be last to keep i value integrity
                    {
                        BtlController_EmitChoosePokemon(battler, B_COMM_TO_CONTROLLER, PARTY_ACTION_ABILITY_PREVENTS, PARTY_SIZE, gBattleMons[i - 1].ability, i - 1, gBattleStruct->battlerPartyOrders[battler]);
                    }
                    else
                    {
                        if (battler == 2 && gChosenActionByBattler[0] == B_ACTION_SWITCH)
                            BtlController_EmitChoosePokemon(battler, B_COMM_TO_CONTROLLER, PARTY_ACTION_CHOOSE_MON, gBattleStruct->monToSwitchIntoId[0], ABILITY_NONE, 0, gBattleStruct->battlerPartyOrders[battler]);
                        else if (battler == 3 && gChosenActionByBattler[1] == B_ACTION_SWITCH)
                            BtlController_EmitChoosePokemon(battler, B_COMM_TO_CONTROLLER, PARTY_ACTION_CHOOSE_MON, gBattleStruct->monToSwitchIntoId[1], ABILITY_NONE, 0, gBattleStruct->battlerPartyOrders[battler]);
                        else
                            BtlController_EmitChoosePokemon(battler, B_COMM_TO_CONTROLLER, PARTY_ACTION_CHOOSE_MON, PARTY_SIZE, ABILITY_NONE, 0, gBattleStruct->battlerPartyOrders[battler]);
                    }
                    MarkBattlerForControllerExec(battler);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                    break;
                case B_ACTION_SAFARI_BALL:
                    if (IsPlayerPartyAndPokemonStorageFull())
                    {
<<<<<<< HEAD
                        gSelectionBattleScripts[gActiveBattler] = BattleScript_PrintFullBox;
                        gBattleCommunication[gActiveBattler] = STATE_SELECTION_SCRIPT;
                        *(gBattleStruct->selectionScriptFinished + gActiveBattler) = FALSE;
                        *(gBattleStruct->stateIdAfterSelScript + gActiveBattler) = STATE_BEFORE_ACTION_CHOSEN;
                        return;
                    }
                    else if (IsNuzlockeActive() || IsOneTypeChallengeActive()) //tx_randomizer_and_challenges
                    {
                        if (NuzlockeIsCaptureBlocked)
                            gSelectionBattleScripts[gActiveBattler] = BattleScript_Safari_NuzlockeCaptureBlocked;
                        else if (NuzlockeIsSpeciesClauseActive == 2) //already have THIS_mon
                            gSelectionBattleScripts[gActiveBattler] = BattleScript_Safari_SameSpeciesCaptureBlocked;
                        else if (OneTypeChallengeCaptureBlocked) //pkmn not of the TYPE CHALLENGE type
                            gSelectionBattleScripts[gActiveBattler] = BattleScript_Safari_OneTypeChallengeCaptureBlocked;
                        else if (NuzlockeIsSpeciesClauseActive)
                            gSelectionBattleScripts[gActiveBattler] = BattleScript_Safari_SpeciesClauseCaptureBlocked;
                        else
                            break;

                        gBattleCommunication[gActiveBattler] = STATE_SELECTION_SCRIPT;
                        *(gBattleStruct->selectionScriptFinished + gActiveBattler) = FALSE;
                        *(gBattleStruct->stateIdAfterSelScript + gActiveBattler) = STATE_BEFORE_ACTION_CHOSEN;
=======
                        gSelectionBattleScripts[battler] = BattleScript_PrintFullBox;
                        gBattleCommunication[battler] = STATE_SELECTION_SCRIPT;
                        gBattleStruct->selectionScriptFinished[battler] = FALSE;
                        gBattleStruct->stateIdAfterSelScript[battler] = STATE_BEFORE_ACTION_CHOSEN;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                        return;
                    }
                    break;
                case B_ACTION_SAFARI_POKEBLOCK:
<<<<<<< HEAD
                    BtlController_EmitChooseItem(BUFFER_A, gBattleStruct->battlerPartyOrders[gActiveBattler]);
                    MarkBattlerForControllerExec(gActiveBattler);
                    break;
                case B_ACTION_CANCEL_PARTNER:
                    gBattleCommunication[gActiveBattler] = STATE_WAIT_SET_BEFORE_ACTION;
                    gBattleCommunication[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)))] = STATE_BEFORE_ACTION_CHOSEN;
                    RecordedBattle_ClearBattlerAction(gActiveBattler, 1);
                    if (gBattleMons[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)))].status2 & STATUS2_MULTIPLETURNS
                        || gBattleMons[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)))].status2 & STATUS2_RECHARGE)
                    {
                        BtlController_EmitEndBounceEffect(BUFFER_A);
                        MarkBattlerForControllerExec(gActiveBattler);
                        return;
                    }
                    else if (gChosenActionByBattler[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)))] == B_ACTION_SWITCH)
                    {
                        RecordedBattle_ClearBattlerAction(GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler))), 2);
                    }
                    else if (gChosenActionByBattler[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)))] == B_ACTION_RUN)
                    {
                        RecordedBattle_ClearBattlerAction(GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler))), 1);
                    }
                    else if (gChosenActionByBattler[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)))] == B_ACTION_USE_MOVE
                             && (gProtectStructs[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)))].noValidMoves
                                || gDisableStructs[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)))].encoredMove))
                    {
                        RecordedBattle_ClearBattlerAction(GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler))), 1);
                    }
                    else if (gBattleTypeFlags & BATTLE_TYPE_PALACE
                             && gChosenActionByBattler[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler)))] == B_ACTION_USE_MOVE)
                    {
                        gRngValue = gBattlePalaceMoveSelectionRngValue;
                        RecordedBattle_ClearBattlerAction(GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler))), 1);
                    }
                    else
                    {
                        RecordedBattle_ClearBattlerAction(GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(gActiveBattler))), 3);
                    }
                    BtlController_EmitEndBounceEffect(BUFFER_A);
                    MarkBattlerForControllerExec(gActiveBattler);
                    return;
=======
                    BtlController_EmitChooseItem(battler, B_COMM_TO_CONTROLLER, gBattleStruct->battlerPartyOrders[battler]);
                    MarkBattlerForControllerExec(battler);
                    break;
                case B_ACTION_CANCEL_PARTNER:
                    gBattleCommunication[battler] = STATE_WAIT_SET_BEFORE_ACTION;
                    gBattleCommunication[GetPartnerBattler(battler)] = STATE_BEFORE_ACTION_CHOSEN;
                    RecordedBattle_ClearBattlerAction(battler, 1);
                    if (gBattleMons[GetPartnerBattler(battler)].volatiles.multipleTurns
                        || gDisableStructs[GetPartnerBattler(battler)].rechargeTimer > 0)
                    {
                        BtlController_EmitEndBounceEffect(battler, B_COMM_TO_CONTROLLER);
                        MarkBattlerForControllerExec(battler);
                        return;
                    }
                    else if (gChosenActionByBattler[GetPartnerBattler(battler)] == B_ACTION_SWITCH)
                    {
                        RecordedBattle_ClearBattlerAction(GetPartnerBattler(battler), 2);
                    }
                    else if (gChosenActionByBattler[GetPartnerBattler(battler)] == B_ACTION_RUN)
                    {
                        RecordedBattle_ClearBattlerAction(GetPartnerBattler(battler), 1);
                    }
                    else if (gChosenActionByBattler[GetPartnerBattler(battler)] == B_ACTION_USE_MOVE
                             && (gProtectStructs[GetPartnerBattler(battler)].noValidMoves
                                || gDisableStructs[GetPartnerBattler(battler)].encoredMove))
                    {
                        RecordedBattle_ClearBattlerAction(GetPartnerBattler(battler), 1);
                    }
                    else if (gBattleTypeFlags & BATTLE_TYPE_PALACE
                             && gChosenActionByBattler[GetPartnerBattler(battler)] == B_ACTION_USE_MOVE)
                    {
                        gRngValue = gBattlePalaceMoveSelectionRngValue;
                        RecordedBattle_ClearBattlerAction(GetPartnerBattler(battler), 1);
                    }
                    else
                    {
                        RecordedBattle_ClearBattlerAction(GetPartnerBattler(battler), 3);
                    }

                    gBattleStruct->gimmick.toActivate &= ~((1u << BATTLE_PARTNER(GetBattlerPosition(battler))));
                    BtlController_EmitEndBounceEffect(battler, B_COMM_TO_CONTROLLER);
                    MarkBattlerForControllerExec(battler);
                    return;
                case B_ACTION_DEBUG:
                    BtlController_EmitDebugMenu(battler, B_COMM_TO_CONTROLLER);
                    MarkBattlerForControllerExec(battler);
                    break;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                }

                if (gBattleTypeFlags & BATTLE_TYPE_TRAINER
                    && gBattleTypeFlags & (BATTLE_TYPE_FRONTIER | BATTLE_TYPE_TRAINER_HILL)
<<<<<<< HEAD
                    && gBattleBufferB[gActiveBattler][1] == B_ACTION_RUN)
                {
                    gSelectionBattleScripts[gActiveBattler] = BattleScript_AskIfWantsToForfeitMatch;
                    gBattleCommunication[gActiveBattler] = STATE_SELECTION_SCRIPT_MAY_RUN;
                    *(gBattleStruct->selectionScriptFinished + gActiveBattler) = FALSE;
                    *(gBattleStruct->stateIdAfterSelScript + gActiveBattler) = STATE_BEFORE_ACTION_CHOSEN;
                    return;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER
                         && !(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
                         && gBattleBufferB[gActiveBattler][1] == B_ACTION_RUN)
                {
                    BattleScriptExecute(BattleScript_PrintCantRunFromTrainer);
                    gBattleCommunication[gActiveBattler] = STATE_BEFORE_ACTION_CHOSEN;
                }
                else if (IsRunningFromBattleImpossible() != BATTLE_RUN_SUCCESS
                         && gBattleBufferB[gActiveBattler][1] == B_ACTION_RUN)
                {
                    gSelectionBattleScripts[gActiveBattler] = BattleScript_PrintCantEscapeFromBattle;
                    gBattleCommunication[gActiveBattler] = STATE_SELECTION_SCRIPT;
                    *(gBattleStruct->selectionScriptFinished + gActiveBattler) = FALSE;
                    *(gBattleStruct->stateIdAfterSelScript + gActiveBattler) = STATE_BEFORE_ACTION_CHOSEN;
=======
                    && gBattleResources->bufferB[battler][1] == B_ACTION_RUN)
                {
                    gSelectionBattleScripts[battler] = BattleScript_AskIfWantsToForfeitMatch;
                    gBattleCommunication[battler] = STATE_SELECTION_SCRIPT_MAY_RUN;
                    gBattleStruct->selectionScriptFinished[battler] = FALSE;
                    gBattleStruct->stateIdAfterSelScript[battler] = STATE_BEFORE_ACTION_CHOSEN;
                    return;
                }
                else if (CanPlayerForfeitNormalTrainerBattle() && gBattleResources->bufferB[battler][1] == B_ACTION_RUN)
                {
                    gSelectionBattleScripts[battler] = BattleScript_QuestionForfeitBattle;
                    gBattleCommunication[battler] = STATE_SELECTION_SCRIPT_MAY_RUN;
                    gBattleStruct->selectionScriptFinished[battler] = FALSE;
                    gBattleStruct->stateIdAfterSelScript[battler] = STATE_BEFORE_ACTION_CHOSEN;
                    return;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER
                      && !(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
                      && gBattleResources->bufferB[battler][1] == B_ACTION_RUN)
                {
                    BattleScriptExecute(BattleScript_PrintCantRunFromTrainer);
                    gBattleCommunication[battler] = STATE_BEFORE_ACTION_CHOSEN;
                }
                else if ((IsRunningFromBattleImpossible(battler) != BATTLE_RUN_SUCCESS
                         && gBattleResources->bufferB[battler][1] == B_ACTION_RUN)
                         || (FlagGet(B_FLAG_NO_RUNNING) == TRUE && gBattleResources->bufferB[battler][1] == B_ACTION_RUN))
                {
                    gSelectionBattleScripts[battler] = BattleScript_PrintCantEscapeFromBattle;
                    gBattleCommunication[battler] = STATE_SELECTION_SCRIPT;
                    gBattleStruct->selectionScriptFinished[battler] = FALSE;
                    gBattleStruct->stateIdAfterSelScript[battler] = STATE_BEFORE_ACTION_CHOSEN;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                    return;
                }
                else
                {
<<<<<<< HEAD
                    gBattleCommunication[gActiveBattler]++;
=======
                    gBattleCommunication[battler]++;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                }
            }
            break;
        case STATE_WAIT_ACTION_CASE_CHOSEN:
<<<<<<< HEAD
            if (!(gBattleControllerExecFlags & ((gBitTable[gActiveBattler]) | (0xF << 28) | (gBitTable[gActiveBattler] << 4) | (gBitTable[gActiveBattler] << 8) | (gBitTable[gActiveBattler] << 12))))
            {
                switch (gChosenActionByBattler[gActiveBattler])
                {
                case B_ACTION_USE_MOVE:
                    switch (gBattleBufferB[gActiveBattler][1])
=======
            if (!IsBattleControllerActiveOrPendingSyncAnywhere(battler))
            {
                switch (gChosenActionByBattler[battler])
                {
                case B_ACTION_USE_MOVE:
                    switch (gBattleResources->bufferB[battler][1])
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                    {
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
<<<<<<< HEAD
                        gChosenActionByBattler[gActiveBattler] = gBattleBufferB[gActiveBattler][1];
                        return;
                    case 15:
                        gChosenActionByBattler[gActiveBattler] = B_ACTION_SWITCH;
                        UpdateBattlerPartyOrdersOnSwitch();
                        return;
                    default:
                        RecordedBattle_CheckMovesetChanges(B_RECORD_MODE_PLAYBACK);
                        if ((gBattleBufferB[gActiveBattler][2] | (gBattleBufferB[gActiveBattler][3] << 8)) == 0xFFFF)
                        {
                            gBattleCommunication[gActiveBattler] = STATE_BEFORE_ACTION_CHOSEN;
                            RecordedBattle_ClearBattlerAction(gActiveBattler, 1);
                        }
                        else if (TrySetCantSelectMoveBattleScript())
                        {
                            RecordedBattle_ClearBattlerAction(gActiveBattler, 1);
                            gBattleCommunication[gActiveBattler] = STATE_SELECTION_SCRIPT;
                            *(gBattleStruct->selectionScriptFinished + gActiveBattler) = FALSE;
                            gBattleBufferB[gActiveBattler][1] = B_ACTION_USE_MOVE;
                            *(gBattleStruct->stateIdAfterSelScript + gActiveBattler) = STATE_WAIT_ACTION_CHOSEN;
=======
                        gChosenActionByBattler[battler] = gBattleResources->bufferB[battler][1];
                        return;
                    case 15:
                        gChosenActionByBattler[battler] = B_ACTION_SWITCH;
                        UpdateBattlerPartyOrdersOnSwitch(battler);
                        return;
                    default:
                        RecordedBattle_CheckMovesetChanges(B_RECORD_MODE_PLAYBACK);
                        if ((gBattleResources->bufferB[battler][2] | (gBattleResources->bufferB[battler][3] << 8)) == 0xFFFF)
                        {
                            gBattleCommunication[battler] = STATE_BEFORE_ACTION_CHOSEN;
                            RecordedBattle_ClearBattlerAction(battler, 1);
                        }
                        else if (TrySetCantSelectMoveBattleScript(battler))
                        {
                            RecordedBattle_ClearBattlerAction(battler, 1);
                            gBattleCommunication[battler] = STATE_SELECTION_SCRIPT;
                            gBattleStruct->selectionScriptFinished[battler] = FALSE;
                            gBattleResources->bufferB[battler][1] = B_ACTION_USE_MOVE;
                            gBattleStruct->stateIdAfterSelScript[battler] = STATE_WAIT_ACTION_CHOSEN;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                            return;
                        }
                        else
                        {
                            if (!(gBattleTypeFlags & BATTLE_TYPE_PALACE))
                            {
<<<<<<< HEAD
                                RecordedBattle_SetBattlerAction(gActiveBattler, gBattleBufferB[gActiveBattler][2]);
                                RecordedBattle_SetBattlerAction(gActiveBattler, gBattleBufferB[gActiveBattler][3]);
                            }
                            *(gBattleStruct->chosenMovePositions + gActiveBattler) = gBattleBufferB[gActiveBattler][2];
                            gChosenMoveByBattler[gActiveBattler] = gBattleMons[gActiveBattler].moves[*(gBattleStruct->chosenMovePositions + gActiveBattler)];
                            *(gBattleStruct->moveTarget + gActiveBattler) = gBattleBufferB[gActiveBattler][3];
                            gBattleCommunication[gActiveBattler]++;
=======
                                RecordedBattle_SetBattlerAction(battler, gBattleResources->bufferB[battler][2]);
                                RecordedBattle_SetBattlerAction(battler, gBattleResources->bufferB[battler][3]);
                            }

                            // Get the chosen move position (and thus the chosen move) and target from the returned buffer.
                            gBattleStruct->chosenMovePositions[battler] = gBattleResources->bufferB[battler][2] & ~RET_GIMMICK;
                            gChosenMoveByBattler[battler] = gBattleMons[battler].moves[gBattleStruct->chosenMovePositions[battler]];
                            gBattleStruct->moveTarget[battler] = gBattleResources->bufferB[battler][3];
                            if (IsBattleMoveStatus(gChosenMoveByBattler[battler]) && GetBattlerAbility(battler) == ABILITY_MYCELIUM_MIGHT)
                                gProtectStructs[battler].myceliumMight = TRUE;
                            if (GetBattlerHoldEffect(battler, TRUE) == HOLD_EFFECT_LAGGING_TAIL)
                                gProtectStructs[battler].laggingTail = TRUE;

                            // Check to see if any gimmicks need to be prepared.
                            if (gBattleResources->bufferB[battler][2] & RET_GIMMICK)
                                gBattleStruct->gimmick.toActivate |= 1u << battler;

                            // Max Move check
                            if (GetActiveGimmick(battler) == GIMMICK_DYNAMAX || IsGimmickSelected(battler, GIMMICK_DYNAMAX))
                            {
                                gBattleStruct->dynamax.baseMoves[battler] = gBattleMons[battler].moves[gBattleStruct->chosenMovePositions[battler]];
                            }
                            gBattleCommunication[battler]++;

                            if (gTestRunnerEnabled)
                            {
                                TestRunner_Battle_CheckChosenMove(battler, gChosenMoveByBattler[battler], gBattleStruct->moveTarget[battler]);
                            }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                        }
                        break;
                    }
                    break;
                case B_ACTION_USE_ITEM:
<<<<<<< HEAD
                    if ((gBattleBufferB[gActiveBattler][1] | (gBattleBufferB[gActiveBattler][2] << 8)) == 0)
                    {
                        gBattleCommunication[gActiveBattler] = STATE_BEFORE_ACTION_CHOSEN;
                    }
                    else
                    {
                        gLastUsedItem = (gBattleBufferB[gActiveBattler][1] | (gBattleBufferB[gActiveBattler][2] << 8));
                        gBattleCommunication[gActiveBattler]++;
                    }
                    break;
                case B_ACTION_SWITCH:
                    if (gBattleBufferB[gActiveBattler][1] == PARTY_SIZE)
                    {
                        gBattleCommunication[gActiveBattler] = STATE_BEFORE_ACTION_CHOSEN;
                        RecordedBattle_ClearBattlerAction(gActiveBattler, 1);
                    }
                    else
                    {
                        UpdateBattlerPartyOrdersOnSwitch();
                        gBattleCommunication[gActiveBattler]++;
=======
                    if ((gBattleResources->bufferB[battler][1] | (gBattleResources->bufferB[battler][2] << 8)) == 0)
                    {
                        gBattleCommunication[battler] = STATE_BEFORE_ACTION_CHOSEN;
                    }
                    else
                    {
                        gLastUsedItem = (gBattleResources->bufferB[battler][1] | (gBattleResources->bufferB[battler][2] << 8));
                        if (GetItemPocket(gLastUsedItem) == POCKET_POKE_BALLS)
                            gBattleStruct->throwingPokeBall = TRUE;
                        gBattleCommunication[battler]++;
                    }
                    break;
                case B_ACTION_SWITCH:
                    if (gBattleResources->bufferB[battler][1] == PARTY_SIZE)
                    {
                        gBattleCommunication[battler] = STATE_BEFORE_ACTION_CHOSEN;
                        RecordedBattle_ClearBattlerAction(battler, 1);
                    }
                    else
                    {
                        UpdateBattlerPartyOrdersOnSwitch(battler);
                        gBattleCommunication[battler]++;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                    }
                    break;
                case B_ACTION_RUN:
                    gHitMarker |= HITMARKER_RUN;
<<<<<<< HEAD
                    gBattleCommunication[gActiveBattler]++;
                    break;
                case B_ACTION_SAFARI_WATCH_CAREFULLY:
                    gBattleCommunication[gActiveBattler]++;
                    break;
                case B_ACTION_THROW_BALL:
                    gBattleStruct->throwingPokeBall = TRUE;
                    gBattleCommunication[gActiveBattler]++;
                    break;
                case B_ACTION_SAFARI_BALL:
                    gBattleCommunication[gActiveBattler]++;
                    break;
                case B_ACTION_SAFARI_POKEBLOCK:
                    if ((gBattleBufferB[gActiveBattler][1] | (gBattleBufferB[gActiveBattler][2] << 8)) != 0)
                        gBattleCommunication[gActiveBattler]++;
                    else
                        gBattleCommunication[gActiveBattler] = STATE_BEFORE_ACTION_CHOSEN;
                    break;
                case B_ACTION_SAFARI_GO_NEAR:
                    gBattleCommunication[gActiveBattler]++;
                    break;
                case B_ACTION_SAFARI_RUN:
                    gHitMarker |= HITMARKER_RUN;
                    gBattleCommunication[gActiveBattler]++;
                    break;
                case B_ACTION_WALLY_THROW:
                    gBattleCommunication[gActiveBattler]++;
=======
                    gBattleCommunication[battler]++;
                    break;
                case B_ACTION_SAFARI_WATCH_CAREFULLY:
                    gBattleCommunication[battler]++;
                    break;
                case B_ACTION_SAFARI_BALL:
                    gBattleCommunication[battler]++;
                    break;
                case B_ACTION_THROW_BALL:
                    gBattleStruct->throwingPokeBall = TRUE;
                    gBattleCommunication[battler]++;
                    break;
                case B_ACTION_SAFARI_POKEBLOCK:
                    if ((gBattleResources->bufferB[battler][1] | (gBattleResources->bufferB[battler][2] << 8)) != 0)
                        gBattleCommunication[battler]++;
                    else
                        gBattleCommunication[battler] = STATE_BEFORE_ACTION_CHOSEN;
                    break;
                case B_ACTION_SAFARI_GO_NEAR:
                    gBattleCommunication[battler]++;
                    break;
                case B_ACTION_SAFARI_RUN:
                    gHitMarker |= HITMARKER_RUN;
                    gBattleCommunication[battler]++;
                    break;
                case B_ACTION_WALLY_THROW:
                    gBattleCommunication[battler]++;
                    break;
                case B_ACTION_DEBUG:
                    gBattleCommunication[battler] = STATE_BEFORE_ACTION_CHOSEN;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                    break;
                }
            }
            break;
        case STATE_WAIT_ACTION_CONFIRMED_STANDBY:
<<<<<<< HEAD
            if (!(gBattleControllerExecFlags & ((gBitTable[gActiveBattler])
                                                | (0xF << 28)
                                                | (gBitTable[gActiveBattler] << 4)
                                                | (gBitTable[gActiveBattler] << 8)
                                                | (gBitTable[gActiveBattler] << 12))))
=======
            if (!IsBattleControllerActiveOrPendingSyncAnywhere(battler))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            {
                if (AllAtActionConfirmed())
                    i = TRUE;
                else
                    i = FALSE;

<<<<<<< HEAD
                if (((gBattleTypeFlags & BATTLE_TYPE_MULTI) || !(gBattleTypeFlags &  BATTLE_TYPE_DOUBLE))
                    || (position & BIT_FLANK) != B_FLANK_LEFT
                    || (*(&gBattleStruct->absentBattlerFlags) & gBitTable[GetBattlerAtPosition(BATTLE_PARTNER(position))]))
                {
                    BtlController_EmitLinkStandbyMsg(BUFFER_A, LINK_STANDBY_MSG_STOP_BOUNCE, i);
                }
                else
                {
                    BtlController_EmitLinkStandbyMsg(BUFFER_A, LINK_STANDBY_STOP_BOUNCE_ONLY, i);
                }
                MarkBattlerForControllerExec(gActiveBattler);
                gBattleCommunication[gActiveBattler]++;
            }
            break;
        case STATE_WAIT_ACTION_CONFIRMED:
            if (!(gBattleControllerExecFlags & ((gBitTable[gActiveBattler]) | (0xF << 28) | (gBitTable[gActiveBattler] << 4) | (gBitTable[gActiveBattler] << 8) | (gBitTable[gActiveBattler] << 12))))
=======
                if (((gBattleTypeFlags & BATTLE_TYPE_MULTI) || !IsDoubleBattle())
                    || (position & BIT_FLANK) != B_FLANK_LEFT
                    || gAbsentBattlerFlags & 1u << GetBattlerAtPosition(BATTLE_PARTNER(position)))
                {
                    BtlController_EmitLinkStandbyMsg(battler, B_COMM_TO_CONTROLLER, LINK_STANDBY_MSG_STOP_BOUNCE, i);
                }
                else
                {
                    BtlController_EmitLinkStandbyMsg(battler, B_COMM_TO_CONTROLLER, LINK_STANDBY_STOP_BOUNCE_ONLY, i);
                }
                MarkBattlerForControllerExec(battler);
                gBattleCommunication[battler]++;
            }
            break;
        case STATE_WAIT_ACTION_CONFIRMED:
            if (!IsBattleControllerActiveOrPendingSyncAnywhere(battler))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            {
                gBattleCommunication[ACTIONS_CONFIRMED_COUNT]++;
            }
            break;
        case STATE_SELECTION_SCRIPT:
<<<<<<< HEAD
            if (*(gBattleStruct->selectionScriptFinished + gActiveBattler))
            {
                gBattleCommunication[gActiveBattler] = *(gBattleStruct->stateIdAfterSelScript + gActiveBattler);
            }
            else
            {
                gBattlerAttacker = gActiveBattler;
                gBattlescriptCurrInstr = gSelectionBattleScripts[gActiveBattler];
                if (!(gBattleControllerExecFlags & ((gBitTable[gActiveBattler]) | (0xF << 28) | (gBitTable[gActiveBattler] << 4) | (gBitTable[gActiveBattler] << 8) | (gBitTable[gActiveBattler] << 12))))
                {
                    gBattleScriptingCommandsTable[gBattlescriptCurrInstr[0]]();
                }
                gSelectionBattleScripts[gActiveBattler] = gBattlescriptCurrInstr;
            }
            break;
        case STATE_WAIT_SET_BEFORE_ACTION:
            if (!(gBattleControllerExecFlags & ((gBitTable[gActiveBattler]) | (0xF << 28) | (gBitTable[gActiveBattler] << 4) | (gBitTable[gActiveBattler] << 8) | (gBitTable[gActiveBattler] << 12))))
            {
                gBattleCommunication[gActiveBattler] = STATE_BEFORE_ACTION_CHOSEN;
            }
            break;
        case STATE_SELECTION_SCRIPT_MAY_RUN:
            if (*(gBattleStruct->selectionScriptFinished + gActiveBattler))
            {
                if (gBattleBufferB[gActiveBattler][1] == B_ACTION_NOTHING_FAINTED)
                {
                    gHitMarker |= HITMARKER_RUN;
                    gChosenActionByBattler[gActiveBattler] = B_ACTION_RUN;
                    gBattleCommunication[gActiveBattler] = STATE_WAIT_ACTION_CONFIRMED_STANDBY;
                }
                else
                {
                    RecordedBattle_ClearBattlerAction(gActiveBattler, 1);
                    gBattleCommunication[gActiveBattler] = *(gBattleStruct->stateIdAfterSelScript + gActiveBattler);
=======
            if (gBattleStruct->selectionScriptFinished[battler])
            {
                gBattleCommunication[battler] = gBattleStruct->stateIdAfterSelScript[battler];
            }
            else
            {
                gBattlerAttacker = battler;
                gBattlescriptCurrInstr = gSelectionBattleScripts[battler];
                if (!IsBattleControllerActiveOrPendingSyncAnywhere(battler))
                {
                    gBattleScriptingCommandsTable[gBattlescriptCurrInstr[0]]();
                }
                gSelectionBattleScripts[battler] = gBattlescriptCurrInstr;
            }
            break;
        case STATE_WAIT_SET_BEFORE_ACTION:
            if (!IsBattleControllerActiveOrPendingSyncAnywhere(battler))
            {
                gBattleCommunication[battler] = STATE_BEFORE_ACTION_CHOSEN;
            }
            break;
        case STATE_SELECTION_SCRIPT_MAY_RUN:
            if (gBattleStruct->selectionScriptFinished[battler])
            {
                if (gBattleResources->bufferB[battler][1] == B_ACTION_NOTHING_FAINTED)
                {
                    gHitMarker |= HITMARKER_RUN;
                    gChosenActionByBattler[battler] = B_ACTION_RUN;
                    gBattleCommunication[battler] = STATE_WAIT_ACTION_CONFIRMED_STANDBY;
                }
                else
                {
                    RecordedBattle_ClearBattlerAction(battler, 1);
                    gBattleCommunication[battler] = gBattleStruct->stateIdAfterSelScript[battler];
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                }
            }
            else
            {
<<<<<<< HEAD
                gBattlerAttacker = gActiveBattler;
                gBattlescriptCurrInstr = gSelectionBattleScripts[gActiveBattler];
                if (!(gBattleControllerExecFlags & ((gBitTable[gActiveBattler]) | (0xF << 28) | (gBitTable[gActiveBattler] << 4) | (gBitTable[gActiveBattler] << 8) | (gBitTable[gActiveBattler] << 12))))
                {
                    gBattleScriptingCommandsTable[gBattlescriptCurrInstr[0]]();
                }
                gSelectionBattleScripts[gActiveBattler] = gBattlescriptCurrInstr;
=======
                gBattlerAttacker = battler;
                gBattlescriptCurrInstr = gSelectionBattleScripts[battler];
                if (!IsBattleControllerActiveOrPendingSyncAnywhere(battler))
                {
                    gBattleScriptingCommandsTable[gBattlescriptCurrInstr[0]]();
                }
                gSelectionBattleScripts[battler] = gBattlescriptCurrInstr;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            }
            break;
        }
    }

    // Check if everyone chose actions.
    if (gBattleCommunication[ACTIONS_CONFIRMED_COUNT] == gBattlersCount)
    {
        RecordedBattle_CheckMovesetChanges(B_RECORD_MODE_RECORDING);
<<<<<<< HEAD
=======

        if (WILD_DOUBLE_BATTLE
            && gBattleStruct->throwingPokeBall
            && gChosenActionByBattler[GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT)] != B_ACTION_NOTHING_FAINTED)
        {
            // if we choose to throw a ball with our second mon, skip the action of the first
            // (if we have chosen throw ball with first, second's is already skipped)
            // if throwing a ball in a wild battle with an in-game partner, skip partner's turn when throwing a ball
            if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
                gChosenActionByBattler[GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT)] = B_ACTION_NOTHING_FAINTED;
            else
                gChosenActionByBattler[GetBattlerAtPosition(B_POSITION_PLAYER_LEFT)] = B_ACTION_NOTHING_FAINTED;
        }

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        gBattleMainFunc = SetActionsAndBattlersTurnOrder;

        if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
        {
            for (i = 0; i < gBattlersCount; i++)
            {
                if (gChosenActionByBattler[i] == B_ACTION_SWITCH)
<<<<<<< HEAD
                    SwitchPartyOrderInGameMulti(i, *(gBattleStruct->monToSwitchIntoId + i));
=======
                    SwitchPartyOrderInGameMulti(i, gBattleStruct->monToSwitchIntoId[i]);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            }
        }
    }
}

static bool8 AllAtActionConfirmed(void)
{
    s32 i, count;

    for (count = 0, i = 0; i < gBattlersCount; i++)
    {
        if (gBattleCommunication[i] == STATE_WAIT_ACTION_CONFIRMED)
            count++;
    }

    if (count + 1 == gBattlersCount)
        return TRUE;
    else
        return FALSE;
}

<<<<<<< HEAD
static void UpdateBattlerPartyOrdersOnSwitch(void)
{
    *(gBattleStruct->monToSwitchIntoId + gActiveBattler) = gBattleBufferB[gActiveBattler][1];
    RecordedBattle_SetBattlerAction(gActiveBattler, gBattleBufferB[gActiveBattler][1]);

    if (gBattleTypeFlags & BATTLE_TYPE_LINK && gBattleTypeFlags & BATTLE_TYPE_MULTI)
    {
        *(gActiveBattler * 3 + (u8 *)(gBattleStruct->battlerPartyOrders) + 0) &= 0xF;
        *(gActiveBattler * 3 + (u8 *)(gBattleStruct->battlerPartyOrders) + 0) |= (gBattleBufferB[gActiveBattler][2] & 0xF0);
        *(gActiveBattler * 3 + (u8 *)(gBattleStruct->battlerPartyOrders) + 1) = gBattleBufferB[gActiveBattler][3];

        *((BATTLE_PARTNER(gActiveBattler)) * 3 + (u8 *)(gBattleStruct->battlerPartyOrders) + 0) &= (0xF0);
        *((BATTLE_PARTNER(gActiveBattler)) * 3 + (u8 *)(gBattleStruct->battlerPartyOrders) + 0) |= (gBattleBufferB[gActiveBattler][2] & 0xF0) >> 4;
        *((BATTLE_PARTNER(gActiveBattler)) * 3 + (u8 *)(gBattleStruct->battlerPartyOrders) + 2) = gBattleBufferB[gActiveBattler][3];
=======
static void UpdateBattlerPartyOrdersOnSwitch(u32 battler)
{
    gBattleStruct->monToSwitchIntoId[battler] = gBattleResources->bufferB[battler][1];
    RecordedBattle_SetBattlerAction(battler, gBattleResources->bufferB[battler][1]);

    if (gBattleTypeFlags & BATTLE_TYPE_LINK && gBattleTypeFlags & BATTLE_TYPE_MULTI)
    {
        *(battler * 3 + (u8 *)(gBattleStruct->battlerPartyOrders) + 0) &= 0xF;
        *(battler * 3 + (u8 *)(gBattleStruct->battlerPartyOrders) + 0) |= (gBattleResources->bufferB[battler][2] & 0xF0);
        *(battler * 3 + (u8 *)(gBattleStruct->battlerPartyOrders) + 1) = gBattleResources->bufferB[battler][3];

        *((BATTLE_PARTNER(battler)) * 3 + (u8 *)(gBattleStruct->battlerPartyOrders) + 0) &= (0xF0);
        *((BATTLE_PARTNER(battler)) * 3 + (u8 *)(gBattleStruct->battlerPartyOrders) + 0) |= (gBattleResources->bufferB[battler][2] & 0xF0) >> 4;
        *((BATTLE_PARTNER(battler)) * 3 + (u8 *)(gBattleStruct->battlerPartyOrders) + 2) = gBattleResources->bufferB[battler][3];
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }
}

void SwapTurnOrder(u8 id1, u8 id2)
{
    u32 temp;

    SWAP(gActionsByTurnOrder[id1], gActionsByTurnOrder[id2], temp);
    SWAP(gBattlerByTurnOrder[id1], gBattlerByTurnOrder[id2], temp);
}

<<<<<<< HEAD
u8 GetWhoStrikesFirst(u8 battler1, u8 battler2, bool8 ignoreChosenMoves)
{
    u8 strikesFirst = 0;
    u8 speedMultiplierBattler1 = 0, speedMultiplierBattler2 = 0;
    u32 speedBattler1 = 0, speedBattler2 = 0;
    u8 holdEffect = 0;
    u8 holdEffectParam = 0;
    u16 moveBattler1 = 0, moveBattler2 = 0;

    if (WEATHER_HAS_EFFECT)
    {
        if ((gBattleMons[battler1].ability == ABILITY_SWIFT_SWIM && gBattleWeather & B_WEATHER_RAIN)
            || (gBattleMons[battler1].ability == ABILITY_CHLOROPHYLL && gBattleWeather & B_WEATHER_SUN))
            speedMultiplierBattler1 = 2;
        else
            speedMultiplierBattler1 = 1;

        if ((gBattleMons[battler2].ability == ABILITY_SWIFT_SWIM && gBattleWeather & B_WEATHER_RAIN)
            || (gBattleMons[battler2].ability == ABILITY_CHLOROPHYLL && gBattleWeather & B_WEATHER_SUN))
            speedMultiplierBattler2 = 2;
        else
            speedMultiplierBattler2 = 1;
    }
    else
    {
        speedMultiplierBattler1 = 1;
        speedMultiplierBattler2 = 1;
    }

    speedBattler1 = (gBattleMons[battler1].speed * speedMultiplierBattler1)
                * (gStatStageRatios[gBattleMons[battler1].statStages[STAT_SPEED]][0])
                / (gStatStageRatios[gBattleMons[battler1].statStages[STAT_SPEED]][1]);

    if (gBattleMons[battler1].item == ITEM_ENIGMA_BERRY)
    {
        holdEffect = gEnigmaBerries[battler1].holdEffect;
        holdEffectParam = gEnigmaBerries[battler1].holdEffectParam;
    }
    else
    {
        holdEffect = ItemId_GetHoldEffect(gBattleMons[battler1].item);
        holdEffectParam = ItemId_GetHoldEffectParam(gBattleMons[battler1].item);
    }

    // badge boost
    if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK | BATTLE_TYPE_FRONTIER))
        && FlagGet(FLAG_BADGE03_GET)
        && (gSaveBlock2Ptr->optionsDifficulty == 2)
        && GetBattlerSide(battler1) == B_SIDE_PLAYER)
    {
        speedBattler1 = (speedBattler1 * 110) / 100;
    }

    if (holdEffect == HOLD_EFFECT_MACHO_BRACE)
        speedBattler1 /= 2;

    if (gBattleMons[battler1].status1 & STATUS1_PARALYSIS)
        speedBattler1 /= 4;

    if (holdEffect == HOLD_EFFECT_QUICK_CLAW && gRandomTurnNumber < (0xFFFF * holdEffectParam) / 100)
        speedBattler1 = UINT_MAX;

    // check second battlerId's speed

    speedBattler2 = (gBattleMons[battler2].speed * speedMultiplierBattler2)
                * (gStatStageRatios[gBattleMons[battler2].statStages[STAT_SPEED]][0])
                / (gStatStageRatios[gBattleMons[battler2].statStages[STAT_SPEED]][1]);

    if (gBattleMons[battler2].item == ITEM_ENIGMA_BERRY)
    {
        holdEffect = gEnigmaBerries[battler2].holdEffect;
        holdEffectParam = gEnigmaBerries[battler2].holdEffectParam;
    }
    else
    {
        holdEffect = ItemId_GetHoldEffect(gBattleMons[battler2].item);
        holdEffectParam = ItemId_GetHoldEffectParam(gBattleMons[battler2].item);
    }

    // badge boost
    if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK | BATTLE_TYPE_FRONTIER))
        && FlagGet(FLAG_BADGE03_GET)
        && (gSaveBlock2Ptr->optionsDifficulty == 2)
        && GetBattlerSide(battler2) == B_SIDE_PLAYER)
    {
        speedBattler2 = (speedBattler2 * 110) / 100;
    }

    if (holdEffect == HOLD_EFFECT_MACHO_BRACE)
        speedBattler2 /= 2;

    if (gBattleMons[battler2].status1 & STATUS1_PARALYSIS)
        speedBattler2 /= 4;

    if (holdEffect == HOLD_EFFECT_QUICK_CLAW && gRandomTurnNumber < (0xFFFF * holdEffectParam) / 100)
        speedBattler2 = UINT_MAX;

    if (ignoreChosenMoves)
    {
        moveBattler1 = MOVE_NONE;
        moveBattler2 = MOVE_NONE;
    }
    else
    {
        if (gChosenActionByBattler[battler1] == B_ACTION_USE_MOVE)
        {
            if (gProtectStructs[battler1].noValidMoves)
                moveBattler1 = MOVE_STRUGGLE;
            else
                moveBattler1 = gBattleMons[battler1].moves[*(gBattleStruct->chosenMovePositions + battler1)];
        }
        else
            moveBattler1 = MOVE_NONE;

        if (gChosenActionByBattler[battler2] == B_ACTION_USE_MOVE)
        {
            if (gProtectStructs[battler2].noValidMoves)
                moveBattler2 = MOVE_STRUGGLE;
            else
                moveBattler2 = gBattleMons[battler2].moves[*(gBattleStruct->chosenMovePositions + battler2)];
        }
        else
            moveBattler2 = MOVE_NONE;
    }

    // both move priorities are different than 0
    if (gBattleMoves[moveBattler1].priority != 0 || gBattleMoves[moveBattler2].priority != 0)
    {
        // both priorities are the same
        if (gBattleMoves[moveBattler1].priority == gBattleMoves[moveBattler2].priority)
        {
            if (speedBattler1 == speedBattler2 && Random() & 1)
                strikesFirst = 2; // same speeds, same priorities
            else if (speedBattler1 < speedBattler2)
                strikesFirst = 1; // battler2 has more speed

            // else battler1 has more speed
        }
        else if (gBattleMoves[moveBattler1].priority < gBattleMoves[moveBattler2].priority)
            strikesFirst = 1; // battler2's move has greater priority

        // else battler1's move has greater priority
    }
    // both priorities are equal to 0
    else
    {
        if (speedBattler1 == speedBattler2 && Random() & 1)
            strikesFirst = 2; // same speeds, same priorities
        else if (speedBattler1 < speedBattler2)
            strikesFirst = 1; // battler2 has more speed

        // else battler1 has more speed
    }

=======
// For AI, so it doesn't 'cheat' by knowing player's ability
u32 GetBattlerTotalSpeedStatArgs(u32 battler, u32 ability, enum ItemHoldEffect holdEffect)
{
    u32 speed = gBattleMons[battler].speed;

    // stat stages
    speed *= gStatStageRatios[gBattleMons[battler].statStages[STAT_SPEED]][0];
    speed /= gStatStageRatios[gBattleMons[battler].statStages[STAT_SPEED]][1];

    // weather abilities
    if (HasWeatherEffect())
    {
        if (ability == ABILITY_SWIFT_SWIM       && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA && gBattleWeather & B_WEATHER_RAIN)
            speed *= 2;
        else if (ability == ABILITY_CHLOROPHYLL && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA && gBattleWeather & B_WEATHER_SUN)
            speed *= 2;
        else if (ability == ABILITY_SAND_RUSH   && gBattleWeather & B_WEATHER_SANDSTORM)
            speed *= 2;
        else if (ability == ABILITY_SLUSH_RUSH  && (gBattleWeather & (B_WEATHER_HAIL | B_WEATHER_SNOW)))
            speed *= 2;
    }

    // other abilities
    if (ability == ABILITY_QUICK_FEET && gBattleMons[battler].status1 & STATUS1_ANY)
        speed = (speed * 150) / 100;
    else if (ability == ABILITY_SURGE_SURFER && gFieldStatuses & STATUS_FIELD_ELECTRIC_TERRAIN)
        speed *= 2;
    else if (ability == ABILITY_SLOW_START && gDisableStructs[battler].slowStartTimer != 0)
        speed /= 2;
    else if (ability == ABILITY_PROTOSYNTHESIS && !(gBattleMons[battler].volatiles.transformed) && ((gBattleWeather & B_WEATHER_SUN && HasWeatherEffect()) || gDisableStructs[battler].boosterEnergyActivated))
        speed = (GetHighestStatId(battler) == STAT_SPEED) ? (speed * 150) / 100 : speed;
    else if (ability == ABILITY_QUARK_DRIVE && !(gBattleMons[battler].volatiles.transformed) && (gFieldStatuses & STATUS_FIELD_ELECTRIC_TERRAIN || gDisableStructs[battler].boosterEnergyActivated))
        speed = (GetHighestStatId(battler) == STAT_SPEED) ? (speed * 150) / 100 : speed;
    else if (ability == ABILITY_UNBURDEN && gDisableStructs[battler].unburdenActive)
        speed *= 2;

    // player's badge boost
    if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK | BATTLE_TYPE_FRONTIER))
        && ShouldGetStatBadgeBoost(B_FLAG_BADGE_BOOST_SPEED, battler)
        && IsOnPlayerSide(battler))
    {
        speed = uq4_12_multiply_by_int_half_down(GetBadgeBoostModifier(), speed);
    }

    // item effects
    if (holdEffect == HOLD_EFFECT_MACHO_BRACE || holdEffect == HOLD_EFFECT_POWER_ITEM)
        speed /= 2;
    else if (holdEffect == HOLD_EFFECT_IRON_BALL)
        speed /= 2;
    else if (holdEffect == HOLD_EFFECT_CHOICE_SCARF && GetActiveGimmick(battler) != GIMMICK_DYNAMAX)
        speed = (speed * 150) / 100;
    else if (holdEffect == HOLD_EFFECT_QUICK_POWDER && gBattleMons[battler].species == SPECIES_DITTO && !(gBattleMons[battler].volatiles.transformed))
        speed *= 2;

    // various effects
    if (gSideStatuses[GetBattlerSide(battler)] & SIDE_STATUS_TAILWIND)
        speed *= 2;

    // paralysis drop
    if (gBattleMons[battler].status1 & STATUS1_PARALYSIS && ability != ABILITY_QUICK_FEET)
        speed /= GetGenConfig(GEN_CONFIG_PARALYSIS_SPEED) >= GEN_7 ? 2 : 4;

    if (gSideStatuses[GetBattlerSide(battler)] & SIDE_STATUS_SWAMP)
        speed /= 4;

    return speed;
}

u32 GetBattlerTotalSpeedStat(u32 battler)
{
    u32 ability = GetBattlerAbility(battler);
    enum ItemHoldEffect holdEffect = GetBattlerHoldEffect(battler, TRUE);
    return GetBattlerTotalSpeedStatArgs(battler, ability, holdEffect);
}

s32 GetChosenMovePriority(u32 battler, u32 ability)
{
    u16 move;

    gProtectStructs[battler].pranksterElevated = FALSE;
    if (gProtectStructs[battler].noValidMoves)
        move = MOVE_STRUGGLE;
    else
        move = gBattleMons[battler].moves[gBattleStruct->chosenMovePositions[battler]];

    return GetBattleMovePriority(battler, ability, move);
}

s32 GetBattleMovePriority(u32 battler, u32 ability, u32 move)
{
    s32 priority = 0;

    if (GetActiveGimmick(battler) == GIMMICK_Z_MOVE && !IsBattleMoveStatus(move))
        move = GetUsableZMove(battler, move);

    priority = GetMovePriority(move);

    // Max Guard check
    if (GetActiveGimmick(battler) == GIMMICK_DYNAMAX && GetMoveCategory(move) == DAMAGE_CATEGORY_STATUS)
        return GetMovePriority(MOVE_MAX_GUARD);

    if (gProtectStructs[battler].quash)
    {
        priority = -8;
    }
    else if (ability == ABILITY_GALE_WINGS
          && (GetGenConfig(GEN_CONFIG_GALE_WINGS) < GEN_7 || IsBattlerAtMaxHp(battler))
          && GetMoveType(move) == TYPE_FLYING)
    {
        priority++;
    }
    else if (IsBattleMoveStatus(move) && IsAbilityAndRecord(battler, ability, ABILITY_PRANKSTER))
    {
        gProtectStructs[battler].pranksterElevated = 1;
        priority++;
    }
    else if (GetMoveEffect(move) == EFFECT_GRASSY_GLIDE && IsBattlerTerrainAffected(battler, STATUS_FIELD_GRASSY_TERRAIN) && GetActiveGimmick(gBattlerAttacker) != GIMMICK_DYNAMAX && !IsGimmickSelected(battler, GIMMICK_DYNAMAX))
    {
        priority++;
    }
    else if (ability == ABILITY_TRIAGE && IsHealingMove(move))
    {
        priority += 3;
    }

    return priority;
}

s32 GetWhichBattlerFasterArgs(u32 battler1, u32 battler2, bool32 ignoreChosenMoves, u32 ability1, u32 ability2,
                              enum ItemHoldEffect holdEffectBattler1, enum ItemHoldEffect holdEffectBattler2, u32 speedBattler1, u32 speedBattler2, s32 priority1, s32 priority2)
{
    u32 strikesFirst = 0;

    if (priority1 == priority2)
    {
        // Quick Claw / Quick Draw / Custap Berry - always first
        // Stall / Mycelium Might - last but before Lagging Tail
        // Lagging Tail - always last
        bool32 battler1HasQuickEffect = gProtectStructs[battler1].quickDraw || gProtectStructs[battler1].usedCustapBerry;
        bool32 battler2HasQuickEffect = gProtectStructs[battler2].quickDraw || gProtectStructs[battler2].usedCustapBerry;
        bool32 battler1HasStallingAbility = ability1 == ABILITY_STALL || gProtectStructs[battler1].myceliumMight;
        bool32 battler2HasStallingAbility = ability2 == ABILITY_STALL || gProtectStructs[battler2].myceliumMight;

        if (battler1HasQuickEffect && !battler2HasQuickEffect)
            strikesFirst = 1;
        else if (battler2HasQuickEffect && !battler1HasQuickEffect)
            strikesFirst = -1;
        else if (gProtectStructs[battler1].laggingTail && !gProtectStructs[battler2].laggingTail)
            strikesFirst = -1;
        else if (gProtectStructs[battler2].laggingTail && !gProtectStructs[battler1].laggingTail)
            strikesFirst = 1;
        else if (battler1HasStallingAbility && !battler2HasStallingAbility)
            strikesFirst = -1;
        else if (battler2HasStallingAbility && !battler1HasStallingAbility)
            strikesFirst = 1;
        else
        {
            if (speedBattler1 == speedBattler2)
            {
                // same speeds, same priorities
                strikesFirst = 0;
            }
            else if (speedBattler1 < speedBattler2)
            {
                // battler2 has more speed
                if (gFieldStatuses & STATUS_FIELD_TRICK_ROOM)
                    strikesFirst = 1;
                else
                    strikesFirst = -1;
            }
            else
            {
                // battler1 has more speed
                if (gFieldStatuses & STATUS_FIELD_TRICK_ROOM)
                    strikesFirst = -1;
                else
                    strikesFirst = 1;
            }
        }
    }
    else if (priority1 < priority2)
    {
        strikesFirst = -1; // battler2's move has greater priority
    }
    else
    {
        strikesFirst = 1; // battler1's move has greater priority
    }
    return strikesFirst;
}

s32 GetWhichBattlerFasterOrTies(u32 battler1, u32 battler2, bool32 ignoreChosenMoves)
{
    s32 priority1 = 0, priority2 = 0;
    u32 ability1 = GetBattlerAbility(battler1);
    u32 speedBattler1 = GetBattlerTotalSpeedStat(battler1);
    enum ItemHoldEffect holdEffectBattler1 = GetBattlerHoldEffect(battler1, TRUE);
    u32 speedBattler2 = GetBattlerTotalSpeedStat(battler2);
    enum ItemHoldEffect holdEffectBattler2 = GetBattlerHoldEffect(battler2, TRUE);
    u32 ability2 = GetBattlerAbility(battler2);

    if (!ignoreChosenMoves)
    {
        if (gChosenActionByBattler[battler1] == B_ACTION_USE_MOVE)
            priority1 = GetChosenMovePriority(battler1, ability1);
        if (gChosenActionByBattler[battler2] == B_ACTION_USE_MOVE)
            priority2 = GetChosenMovePriority(battler2, ability2);
    }

    return GetWhichBattlerFasterArgs(
        battler1, battler2,
        ignoreChosenMoves,
        ability1, ability2,
        holdEffectBattler1, holdEffectBattler2,
        speedBattler1, speedBattler2,
        priority1, priority2
    );
}

// 24 == MAX_BATTLERS_COUNT!.
// These are the possible orders if all the battlers speed tie.
// An order is chosen at the start of the turn.
static const u8 sBattlerOrders[24][4] =
{
    { 0, 1, 2, 3 },
    { 0, 1, 3, 2 },
    { 0, 2, 1, 3 },
    { 0, 2, 3, 1 },
    { 0, 3, 1, 2 },
    { 0, 3, 2, 1 },
    { 1, 0, 2, 3 },
    { 1, 0, 3, 2 },
    { 1, 2, 0, 3 },
    { 1, 2, 3, 0 },
    { 1, 3, 0, 2 },
    { 1, 3, 2, 0 },
    { 2, 0, 1, 3 },
    { 2, 0, 3, 1 },
    { 2, 1, 0, 3 },
    { 2, 1, 3, 0 },
    { 2, 3, 0, 1 },
    { 2, 3, 1, 0 },
    { 3, 0, 1, 2 },
    { 3, 0, 2, 1 },
    { 3, 1, 0, 2 },
    { 3, 1, 2, 0 },
    { 3, 2, 0, 1 },
    { 3, 2, 1, 0 },
};

s32 GetWhichBattlerFaster(u32 battler1, u32 battler2, bool32 ignoreChosenMoves)
{
    s32 strikesFirst = GetWhichBattlerFasterOrTies(battler1, battler2, ignoreChosenMoves);
    if (strikesFirst == 0)
    {
        s32 order1 = sBattlerOrders[gBattleStruct->speedTieBreaks][battler1];
        s32 order2 = sBattlerOrders[gBattleStruct->speedTieBreaks][battler2];
        if (order1 < order2)
            strikesFirst = 1;
        else
            strikesFirst = -1;
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    return strikesFirst;
}

static void SetActionsAndBattlersTurnOrder(void)
{
    s32 turnOrderId = 0;
<<<<<<< HEAD
    s32 i, j;

    if (gBattleTypeFlags & BATTLE_TYPE_SAFARI)
    {
        for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
        {
            gActionsByTurnOrder[turnOrderId] = gChosenActionByBattler[gActiveBattler];
            gBattlerByTurnOrder[turnOrderId] = gActiveBattler;
=======
    s32 i, j, battler;

    if (gBattleTypeFlags & BATTLE_TYPE_SAFARI)
    {
        for (battler = 0; battler < gBattlersCount; battler++)
        {
            gActionsByTurnOrder[turnOrderId] = gChosenActionByBattler[battler];
            gBattlerByTurnOrder[turnOrderId] = battler;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            turnOrderId++;
        }
    }
    else
    {
        if (gBattleTypeFlags & BATTLE_TYPE_LINK)
        {
<<<<<<< HEAD
            for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
            {
                if (gChosenActionByBattler[gActiveBattler] == B_ACTION_RUN)
=======
            for (battler = 0; battler < gBattlersCount; battler++)
            {
                if (gChosenActionByBattler[battler] == B_ACTION_RUN)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                {
                    turnOrderId = 5;
                    break;
                }
            }
        }
        else
        {
            if (gChosenActionByBattler[0] == B_ACTION_RUN)
            {
<<<<<<< HEAD
                gActiveBattler = 0;
=======
                battler = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                turnOrderId = 5;
            }
            if (gChosenActionByBattler[2] == B_ACTION_RUN)
            {
<<<<<<< HEAD
                gActiveBattler = 2;
=======
                battler = 2;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                turnOrderId = 5;
            }
        }

        if (turnOrderId == 5) // One of battlers wants to run.
        {
<<<<<<< HEAD
            gActionsByTurnOrder[0] = gChosenActionByBattler[gActiveBattler];
            gBattlerByTurnOrder[0] = gActiveBattler;
            turnOrderId = 1;
            for (i = 0; i < gBattlersCount; i++)
            {
                if (i != gActiveBattler)
=======
            gActionsByTurnOrder[0] = gChosenActionByBattler[battler];
            gBattlerByTurnOrder[0] = battler;
            turnOrderId = 1;
            for (i = 0; i < gBattlersCount; i++)
            {
                if (i != battler)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                {
                    gActionsByTurnOrder[turnOrderId] = gChosenActionByBattler[i];
                    gBattlerByTurnOrder[turnOrderId] = i;
                    turnOrderId++;
                }
            }
<<<<<<< HEAD
            gBattleMainFunc = CheckFocusPunch_ClearVarsBeforeTurnStarts;
            gBattleStruct->focusPunchBattlerId = 0;
            return;
        }
        else
        {
            for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
            {
                if (gChosenActionByBattler[gActiveBattler] == B_ACTION_USE_ITEM || gChosenActionByBattler[gActiveBattler] == B_ACTION_SWITCH)
                {
                    gActionsByTurnOrder[turnOrderId] = gChosenActionByBattler[gActiveBattler];
                    gBattlerByTurnOrder[turnOrderId] = gActiveBattler;
                    turnOrderId++;
                }
            }
            for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
            {
                if (gChosenActionByBattler[gActiveBattler] != B_ACTION_USE_ITEM && gChosenActionByBattler[gActiveBattler] != B_ACTION_SWITCH)
                {
                    gActionsByTurnOrder[turnOrderId] = gChosenActionByBattler[gActiveBattler];
                    gBattlerByTurnOrder[turnOrderId] = gActiveBattler;
=======
        }
        else
        {
            u32 quickClawRandom[MAX_BATTLERS_COUNT] = {0};
            u32 quickDrawRandom[MAX_BATTLERS_COUNT] = {0};

            for (battler = 0; battler < gBattlersCount; battler++)
            {
                if (gChosenActionByBattler[battler] == B_ACTION_USE_ITEM
                  || gChosenActionByBattler[battler] == B_ACTION_SWITCH
                  || gChosenActionByBattler[battler] == B_ACTION_THROW_BALL)
                {
                    gActionsByTurnOrder[turnOrderId] = gChosenActionByBattler[battler];
                    gBattlerByTurnOrder[turnOrderId] = battler;
                    turnOrderId++;
                }
            }
            for (battler = 0; battler < gBattlersCount; battler++)
            {
                if (gChosenActionByBattler[battler] != B_ACTION_USE_ITEM
                  && gChosenActionByBattler[battler] != B_ACTION_SWITCH
                  && gChosenActionByBattler[battler] != B_ACTION_THROW_BALL)
                {
                    gActionsByTurnOrder[turnOrderId] = gChosenActionByBattler[battler];
                    gBattlerByTurnOrder[turnOrderId] = battler;
                    quickClawRandom[battler] = RandomPercentage(RNG_QUICK_CLAW, GetBattlerHoldEffectParam(battler));
                    quickDrawRandom[battler] = RandomPercentage(RNG_QUICK_DRAW, 30);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                    turnOrderId++;
                }
            }
            for (i = 0; i < gBattlersCount - 1; i++)
            {
                for (j = i + 1; j < gBattlersCount; j++)
                {
                    u8 battler1 = gBattlerByTurnOrder[i];
                    u8 battler2 = gBattlerByTurnOrder[j];
<<<<<<< HEAD
=======
                    TryChangingTurnOrderEffects(battler1, battler2, quickClawRandom, quickDrawRandom);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                    if (gActionsByTurnOrder[i] != B_ACTION_USE_ITEM
                        && gActionsByTurnOrder[j] != B_ACTION_USE_ITEM
                        && gActionsByTurnOrder[i] != B_ACTION_SWITCH
                        && gActionsByTurnOrder[j] != B_ACTION_SWITCH
                        && gActionsByTurnOrder[i] != B_ACTION_THROW_BALL
                        && gActionsByTurnOrder[j] != B_ACTION_THROW_BALL)
                    {
<<<<<<< HEAD
                        if (GetWhoStrikesFirst(battler1, battler2, FALSE))
=======
                        if (GetWhichBattlerFaster(battler1, battler2, FALSE) == -1)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                            SwapTurnOrder(i, j);
                    }
                }
            }
        }
    }
<<<<<<< HEAD
    gBattleMainFunc = CheckFocusPunch_ClearVarsBeforeTurnStarts;
    gBattleStruct->focusPunchBattlerId = 0;
=======
    gBattleMainFunc = CheckChangingTurnOrderEffects;
    gBattleStruct->quickClawBattlerId = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

static void TurnValuesCleanUp(bool8 var0)
{
    s32 i;
<<<<<<< HEAD
    u8 *dataPtr;

    for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
    {
        if (var0)
        {
            gProtectStructs[gActiveBattler].protected = 0;
            gProtectStructs[gActiveBattler].endured = 0;
        }
        else
        {
            dataPtr = (u8 *)(&gProtectStructs[gActiveBattler]);
            for (i = 0; i < sizeof(struct ProtectStruct); i++)
                dataPtr[i] = 0;

            if (gDisableStructs[gActiveBattler].isFirstTurn)
                gDisableStructs[gActiveBattler].isFirstTurn--;

            if (gDisableStructs[gActiveBattler].rechargeTimer)
            {
                gDisableStructs[gActiveBattler].rechargeTimer--;
                if (gDisableStructs[gActiveBattler].rechargeTimer == 0)
                    gBattleMons[gActiveBattler].status2 &= ~STATUS2_RECHARGE;
            }
        }

        if (gDisableStructs[gActiveBattler].substituteHP == 0)
            gBattleMons[gActiveBattler].status2 &= ~STATUS2_SUBSTITUTE;
    }

    gSideTimers[0].followmeTimer = 0;
    gSideTimers[1].followmeTimer = 0;
=======

    for (i = 0; i < gBattlersCount; i++)
    {
        if (var0)
        {
            gProtectStructs[i].protected = PROTECT_NONE;
            gProtectStructs[i].quash = FALSE;
            gProtectStructs[i].usedCustapBerry = FALSE;
            gProtectStructs[i].quickDraw = FALSE;
            memset(&gQueuedStatBoosts[i], 0, sizeof(struct QueuedStatBoost));
        }
        else
        {
            memset(&gProtectStructs[i], 0, sizeof(struct ProtectStruct));

            if (gDisableStructs[i].isFirstTurn)
                gDisableStructs[i].isFirstTurn--;

            if (gDisableStructs[i].rechargeTimer)
                gDisableStructs[i].rechargeTimer--;

            gBattleStruct->battlerState[i].canPickupItem = FALSE;
        }

        if (gDisableStructs[i].substituteHP == 0)
            gBattleMons[i].volatiles.substitute = FALSE;

        if (gBattleMons[i].volatiles.semiInvulnerable != STATE_COMMANDER)
            gBattleStruct->battlerState[i].commandingDondozo = FALSE;

        gSpecialStatuses[i].parentalBondState = PARENTAL_BOND_OFF;
        gBattleStruct->battlerState[i].usedEjectItem = FALSE;
        gProtectStructs[i].lashOutAffected = FALSE;
        gDisableStructs[i].endured = FALSE;
    }

    gSideTimers[B_SIDE_PLAYER].followmeTimer = 0;
    gSideTimers[B_SIDE_OPPONENT].followmeTimer = 0;

    gBattleStruct->pledgeMove = FALSE; // combined pledge move may not have been used due to a canceller
    ClearPursuitValues();
    ClearDamageCalcResults();
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void SpecialStatusesClear(void)
{
<<<<<<< HEAD
    for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
    {
        s32 i;
        u8 *dataPtr = (u8 *)(&gSpecialStatuses[gActiveBattler]);

        for (i = 0; i < sizeof(struct SpecialStatus); i++)
            dataPtr[i] = 0;
    }
}

static void CheckFocusPunch_ClearVarsBeforeTurnStarts(void)
{
    if (!(gHitMarker & HITMARKER_RUN))
    {
        while (gBattleStruct->focusPunchBattlerId < gBattlersCount)
        {
            gActiveBattler = gBattlerAttacker = gBattleStruct->focusPunchBattlerId;
            gBattleStruct->focusPunchBattlerId++;
            if (gChosenMoveByBattler[gActiveBattler] == MOVE_FOCUS_PUNCH
                && !(gBattleMons[gActiveBattler].status1 & STATUS1_SLEEP)
                && !(gDisableStructs[gBattlerAttacker].truantCounter)
                && !(gProtectStructs[gActiveBattler].noValidMoves))
            {
                BattleScriptExecute(BattleScript_FocusPunchSetUp);
=======
    memset(&gSpecialStatuses, 0, sizeof(gSpecialStatuses));
}

static void PopulateArrayWithBattlers(u8 *battlers)
{
    u32 i;
    for (i = 0; i < gBattlersCount; i++)
        battlers[i] = i;
}

static bool32 TryActivateGimmick(u32 battler)
{
    if ((gBattleStruct->gimmick.toActivate & (1u << battler)) && !(gProtectStructs[battler].noValidMoves))
    {
        gBattlerAttacker = gBattleScripting.battler = battler;
        gBattleStruct->gimmick.toActivate &= ~(1u << battler);
        if (gGimmicksInfo[gBattleStruct->gimmick.usableGimmick[battler]].ActivateGimmick != NULL)
        {
            gGimmicksInfo[gBattleStruct->gimmick.usableGimmick[battler]].ActivateGimmick(battler);
            return TRUE;
        }
    }
    return FALSE;
}

static bool32 TryDoGimmicksBeforeMoves(void)
{
    if (!(gHitMarker & HITMARKER_RUN) && gBattleStruct->gimmick.toActivate)
    {
        u32 i;
        u8 order[MAX_BATTLERS_COUNT];

        PopulateArrayWithBattlers(order);
        SortBattlersBySpeed(order, FALSE);
        for (i = 0; i < gBattlersCount; i++)
        {
            // Search through each battler and activate their gimmick if they have one prepared.
            if (TryActivateGimmick(order[i]))
                return TRUE;
        }
    }

    if (GetGenConfig(GEN_CONFIG_MEGA_EVO_TURN_ORDER) >= GEN_7)
        TryChangeTurnOrder(); // This will just do nothing if no mon has mega evolved.
    return FALSE;
}

static bool32 TryDoMoveEffectsBeforeMoves(void)
{
    if (!(gHitMarker & HITMARKER_RUN))
    {
        u32 i;
        u8 battlers[MAX_BATTLERS_COUNT];

        PopulateArrayWithBattlers(battlers);
        SortBattlersBySpeed(battlers, FALSE);
        for (i = 0; i < gBattlersCount; i++)
        {
            if (!gBattleStruct->battlerState[battlers[i]].focusPunchBattlers
                && !(gBattleMons[battlers[i]].status1 & STATUS1_SLEEP)
                && !(gDisableStructs[battlers[i]].truantCounter)
                && !(gProtectStructs[battlers[i]].noValidMoves))
            {
                gBattleStruct->battlerState[battlers[i]].focusPunchBattlers = TRUE;
                gBattlerAttacker = battlers[i];
                switch (GetMoveEffect(gChosenMoveByBattler[gBattlerAttacker]))
                {
                case EFFECT_FOCUS_PUNCH:
                    BattleScriptExecute(BattleScript_FocusPunchSetUp);
                    return TRUE;
                case EFFECT_BEAK_BLAST:
                    BattleScriptExecute(BattleScript_BeakBlastSetUp);
                    return TRUE;
                case EFFECT_SHELL_TRAP:
                    BattleScriptExecute(BattleScript_ShellTrapSetUp);
                    return TRUE;
                default:
                    break;
                }
            }
        }
    }

    return FALSE;
}

// In gen7, priority and speed are recalculated during the turn in which a pokemon mega evolves
static void TryChangeTurnOrder(void)
{
    u32 i, j;
    for (i = gCurrentTurnActionNumber; i < gBattlersCount - 1; i++)
    {
        for (j = i + 1; j < gBattlersCount; j++)
        {
            u32 battler1 = gBattlerByTurnOrder[i];
            u32 battler2 = gBattlerByTurnOrder[j];

            if (gActionsByTurnOrder[i] == B_ACTION_USE_MOVE
                && gActionsByTurnOrder[j] == B_ACTION_USE_MOVE)
            {
                if (GetWhichBattlerFaster(battler1, battler2, FALSE) == -1)
                    SwapTurnOrder(i, j);
            }
        }
    }
}

static void TryChangingTurnOrderEffects(u32 battler1, u32 battler2, u32 *quickClawRandom, u32 *quickDrawRandom)
{
    u32 ability1 = GetBattlerAbility(battler1);
    enum ItemHoldEffect holdEffectBattler1 = GetBattlerHoldEffect(battler1, TRUE);
    enum ItemHoldEffect holdEffectBattler2 = GetBattlerHoldEffect(battler2, TRUE);
    u32 ability2 = GetBattlerAbility(battler2);

    // Battler 1
    // Quick Draw
    if (ability1 == ABILITY_QUICK_DRAW && !IsBattleMoveStatus(gChosenMoveByBattler[battler1]) && quickDrawRandom[battler1])
        gProtectStructs[battler1].quickDraw = TRUE;
    // Quick Claw and Custap Berry
    if (!gProtectStructs[battler1].quickDraw
     && ((holdEffectBattler1 == HOLD_EFFECT_QUICK_CLAW && quickClawRandom[battler1])
     || (holdEffectBattler1 == HOLD_EFFECT_CUSTAP_BERRY && HasEnoughHpToEatBerry(battler1, 4, gBattleMons[battler1].item))))
        gProtectStructs[battler1].usedCustapBerry = TRUE;

    // Battler 2
    // Quick Draw
    if (ability2 == ABILITY_QUICK_DRAW && !IsBattleMoveStatus(gChosenMoveByBattler[battler2]) && quickDrawRandom[battler2])
        gProtectStructs[battler2].quickDraw = TRUE;
    // Quick Claw and Custap Berry
    if (!gProtectStructs[battler2].quickDraw
     && ((holdEffectBattler2 == HOLD_EFFECT_QUICK_CLAW && quickClawRandom[battler2])
     || (holdEffectBattler2 == HOLD_EFFECT_CUSTAP_BERRY && HasEnoughHpToEatBerry(battler2, 4, gBattleMons[battler2].item))))
        gProtectStructs[battler2].usedCustapBerry = TRUE;
}

static void CheckChangingTurnOrderEffects(void)
{
    u32 i, battler;

    if (!(gHitMarker & HITMARKER_RUN))
    {
        while (gBattleStruct->quickClawBattlerId < gBattlersCount)
        {
            battler = gBattlerAttacker = gBattleStruct->quickClawBattlerId;
            gBattleStruct->quickClawBattlerId++;
            if (gChosenActionByBattler[battler] == B_ACTION_USE_MOVE
             && gChosenMoveByBattler[battler] != MOVE_FOCUS_PUNCH   // quick claw message doesn't need to activate here
             && (gProtectStructs[battler].usedCustapBerry || gProtectStructs[battler].quickDraw)
             && !(gBattleMons[battler].status1 & STATUS1_SLEEP)
             && !(gDisableStructs[gBattlerAttacker].truantCounter)
             && !(gProtectStructs[battler].noValidMoves))
            {
                if (gProtectStructs[battler].usedCustapBerry)
                {
                    gLastUsedItem = gBattleMons[battler].item;
                    PREPARE_ITEM_BUFFER(gBattleTextBuff1, gLastUsedItem);
                    if (GetBattlerHoldEffect(battler, FALSE) == HOLD_EFFECT_CUSTAP_BERRY)
                    {
                        // don't record berry since its gone now
                        BattleScriptExecute(BattleScript_CustapBerryActivation);
                    }
                    else
                    {
                        RecordItemEffectBattle(battler, GetBattlerHoldEffect(battler, FALSE));
                        BattleScriptExecute(BattleScript_QuickClawActivation);
                    }
                }
                else if (gProtectStructs[battler].quickDraw)
                {
                    gBattlerAbility = battler;
                    gLastUsedAbility = gBattleMons[battler].ability;
                    PREPARE_ABILITY_BUFFER(gBattleTextBuff1, gLastUsedAbility);
                    RecordAbilityBattle(battler, gLastUsedAbility);
                    BattleScriptExecute(BattleScript_QuickDrawActivation);
                }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                return;
            }
        }
    }

<<<<<<< HEAD
    TryClearRageStatuses();
    gCurrentTurnActionNumber = 0;
    gCurrentActionFuncId = gActionsByTurnOrder[gCurrentTurnActionNumber];
    gDynamicBasePower = 0;
    gBattleStruct->dynamicMoveType = 0;
=======
    // setup stuff before turns/actions
    TryClearRageAndFuryCutter();
    gCurrentTurnActionNumber = 0;
    gCurrentActionFuncId = gActionsByTurnOrder[0];
    gBattleStruct->dynamicMoveType = 0;
    gBattleStruct->effectsBeforeUsingMoveDone = FALSE;
    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
    {
        gBattleStruct->battlerState[i].focusPunchBattlers = FALSE;
        gBattleStruct->battlerState[i].ateBoost = FALSE;
        gSpecialStatuses[i].gemBoost = FALSE;
    }

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    gBattleMainFunc = RunTurnActionsFunctions;
    gBattleCommunication[3] = 0;
    gBattleCommunication[4] = 0;
    gBattleScripting.multihitMoveEffect = 0;
    gBattleResources->battleScriptsStack->size = 0;
}

static void RunTurnActionsFunctions(void)
{
    if (gBattleOutcome != 0)
        gCurrentActionFuncId = B_ACTION_FINISHED;

<<<<<<< HEAD
=======
    // Mega Evolve / Focus Punch-like moves after switching, items, running, but before using a move.
    if (gCurrentActionFuncId == B_ACTION_USE_MOVE && !gBattleStruct->effectsBeforeUsingMoveDone)
    {
        if (!IsPursuitTargetSet())
        {
            if (TryDoGimmicksBeforeMoves())
                return;
            else if (TryDoMoveEffectsBeforeMoves())
                return;
            gBattleStruct->effectsBeforeUsingMoveDone = TRUE;
        }
        else
        {
            if (TryActivateGimmick(gBattlerByTurnOrder[gCurrentTurnActionNumber]))
                return;
        }
    }

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    *(&gBattleStruct->savedTurnActionNumber) = gCurrentTurnActionNumber;
    sTurnActionsFuncsTable[gCurrentActionFuncId]();

    if (gCurrentTurnActionNumber >= gBattlersCount) // everyone did their actions, turn finished
    {
<<<<<<< HEAD
        gHitMarker &= ~HITMARKER_PASSIVE_DAMAGE;
=======
        gHitMarker &= ~HITMARKER_PASSIVE_HP_UPDATE;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        gBattleMainFunc = sEndTurnFuncsTable[gBattleOutcome & 0x7F];
    }
    else
    {
<<<<<<< HEAD
        if (gBattleStruct->savedTurnActionNumber != gCurrentTurnActionNumber) // action turn has been done, clear hitmarker bits for another battlerId
=======
        if (gBattleStruct->savedTurnActionNumber != gCurrentTurnActionNumber) // action turn has been done, clear hitmarker bits for another battler
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        {
            gHitMarker &= ~HITMARKER_NO_ATTACKSTRING;
            gHitMarker &= ~HITMARKER_UNABLE_TO_USE_MOVE;
        }
    }
}

static void HandleEndTurn_BattleWon(void)
{
    gCurrentActionFuncId = 0;

    if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
    {
        gSpecialVar_Result = gBattleOutcome;
        gBattleTextBuff1[0] = gBattleOutcome;
        gBattlerAttacker = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
        gBattlescriptCurrInstr = BattleScript_LinkBattleWonOrLost;
        gBattleOutcome &= ~B_OUTCOME_LINK_BATTLE_RAN;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER
            && gBattleTypeFlags & (BATTLE_TYPE_FRONTIER | BATTLE_TYPE_TRAINER_HILL | BATTLE_TYPE_EREADER_TRAINER))
    {
        BattleStopLowHpSound();
        gBattlescriptCurrInstr = BattleScript_FrontierTrainerBattleWon;

<<<<<<< HEAD
        if (gTrainerBattleOpponent_A == TRAINER_FRONTIER_BRAIN)
        {
            if ((gSaveBlock2Ptr->optionsFrontierTrainerBattleMusic == 0) || (gSaveBlock2Ptr->optionsFrontierTrainerBattleMusic == 1))
                PlayBGM(MUS_HG_VICTORY_FRONTIER_BRAIN);
            else if (gSaveBlock2Ptr->optionsFrontierTrainerBattleMusic == 2)
                PlayBGM(MUS_HG_VICTORY_FRONTIER_BRAIN);
            else if((gSaveBlock2Ptr->optionsFrontierTrainerBattleMusic == 3) || (gSaveBlock2Ptr->optionsFrontierTrainerBattleMusic == 4))
                PlayBGM(MUS_HG_VICTORY_FRONTIER_BRAIN);
            else if (gSaveBlock2Ptr->optionsFrontierTrainerBattleMusic == 5)
            {
                if((Random() % 3) == 1)
                    PlayBGM(MUS_HG_VICTORY_FRONTIER_BRAIN);
                if((Random() % 3) == 2)
                    PlayBGM(MUS_HG_VICTORY_FRONTIER_BRAIN);
                else
                    PlayBGM(MUS_HG_VICTORY_FRONTIER_BRAIN);
            }
        }
        else
        {
            if ((gSaveBlock2Ptr->optionsFrontierTrainerBattleMusic == 0) || (gSaveBlock2Ptr->optionsFrontierTrainerBattleMusic == 1))
                PlayBGM(MUS_HG_VICTORY_TRAINER);
            else if (gSaveBlock2Ptr->optionsFrontierTrainerBattleMusic == 2)
                PlayBGM(MUS_HG_VICTORY_TRAINER);
            else if((gSaveBlock2Ptr->optionsFrontierTrainerBattleMusic == 3) || (gSaveBlock2Ptr->optionsFrontierTrainerBattleMusic == 4))
                PlayBGM(MUS_HG_VICTORY_TRAINER);
            else if (gSaveBlock2Ptr->optionsFrontierTrainerBattleMusic == 5)
            {
                if((Random() % 3) == 1)
                    PlayBGM(MUS_HG_VICTORY_TRAINER);
                if((Random() % 3) == 2)
                    PlayBGM(MUS_HG_VICTORY_TRAINER);
                else
                    PlayBGM(MUS_HG_VICTORY_TRAINER);
            }  
        }
=======
        if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_FRONTIER_BRAIN)
            PlayBGM(MUS_VICTORY_GYM_LEADER);
        else
            PlayBGM(MUS_VICTORY_TRAINER);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER && !(gBattleTypeFlags & BATTLE_TYPE_LINK))
    {
        BattleStopLowHpSound();
        gBattlescriptCurrInstr = BattleScript_LocalTrainerBattleWon;

<<<<<<< HEAD
        switch (gTrainers[gTrainerBattleOpponent_A].trainerClass)
        {
        case TRAINER_CLASS_ELITE_FOUR:
            {
                if ((gSaveBlock2Ptr->optionsTrainerBattleMusic == 0) || (gSaveBlock2Ptr->optionsTrainerBattleMusic == 1) || (gSaveBlock2Ptr->optionsTrainerBattleMusic == 3) || (gSaveBlock2Ptr->optionsTrainerBattleMusic == 4))
                    PlayBGM(MUS_DP_VICTORY_ELITE_FOUR);
                else if (gSaveBlock2Ptr->optionsTrainerBattleMusic == 2)
                    PlayBGM(MUS_DP_VICTORY_ELITE_FOUR);
                else if (gSaveBlock2Ptr->optionsTrainerBattleMusic == 5)
                    {
                        if((Random() % 2) == 1)
                            PlayBGM(MUS_DP_VICTORY_ELITE_FOUR);
                        else
                            PlayBGM(MUS_DP_VICTORY_ELITE_FOUR);
                    }
            }
            break;
        case TRAINER_CLASS_CHAMPION:
            {
                if ((gSaveBlock2Ptr->optionsTrainerBattleMusic == 0) || (gSaveBlock2Ptr->optionsTrainerBattleMusic == 1) || (gSaveBlock2Ptr->optionsTrainerBattleMusic == 3) || (gSaveBlock2Ptr->optionsTrainerBattleMusic == 4))
                    PlayBGM(MUS_DP_VICTORY_CHAMPION);
                else if (gSaveBlock2Ptr->optionsTrainerBattleMusic == 2)
                    PlayBGM(MUS_DP_VICTORY_CHAMPION);
                else if (gSaveBlock2Ptr->optionsTrainerBattleMusic == 5)
                    {
                        if((Random() % 2) == 1)
                            PlayBGM(MUS_DP_VICTORY_CHAMPION);
                        else
                            PlayBGM(MUS_DP_VICTORY_CHAMPION);
                    }
            }
=======
        switch (GetTrainerClassFromId(TRAINER_BATTLE_PARAM.opponentA))
        {
        case TRAINER_CLASS_ELITE_FOUR:
        case TRAINER_CLASS_CHAMPION:
            PlayBGM(MUS_VICTORY_LEAGUE);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            break;
        case TRAINER_CLASS_TEAM_AQUA:
        case TRAINER_CLASS_TEAM_MAGMA:
        case TRAINER_CLASS_AQUA_ADMIN:
        case TRAINER_CLASS_AQUA_LEADER:
        case TRAINER_CLASS_MAGMA_ADMIN:
        case TRAINER_CLASS_MAGMA_LEADER:
<<<<<<< HEAD
            {
                if ((gSaveBlock2Ptr->optionsTrainerBattleMusic == 0) || (gSaveBlock2Ptr->optionsTrainerBattleMusic == 1) || (gSaveBlock2Ptr->optionsTrainerBattleMusic == 3) || (gSaveBlock2Ptr->optionsTrainerBattleMusic == 4))
                    PlayBGM(MUS_VICTORY_AQUA_MAGMA);
                else if (gSaveBlock2Ptr->optionsTrainerBattleMusic == 2)
                    PlayBGM(MUS_DP_VICTORY_GALACTIC);
                else if (gSaveBlock2Ptr->optionsTrainerBattleMusic == 5)
                    {
                        if((Random() % 2) == 1)
                            PlayBGM(MUS_DP_VICTORY_GALACTIC);
                        else
                            PlayBGM(MUS_VICTORY_AQUA_MAGMA);
                    }
            }
            break;
        case TRAINER_CLASS_LEADER:
            {
                if ((gSaveBlock2Ptr->optionsTrainerBattleMusic == 0) || (gSaveBlock2Ptr->optionsTrainerBattleMusic == 1))
                    PlayBGM(MUS_HG_VICTORY_GYM_LEADER);
                else if (gSaveBlock2Ptr->optionsTrainerBattleMusic == 2)
                    PlayBGM(MUS_HG_VICTORY_GYM_LEADER);
                else if((gSaveBlock2Ptr->optionsTrainerBattleMusic == 3) || (gSaveBlock2Ptr->optionsTrainerBattleMusic == 4))
                    PlayBGM(MUS_HG_VICTORY_GYM_LEADER);
                else if (gSaveBlock2Ptr->optionsTrainerBattleMusic == 5)
                    {
                        if((Random() % 3) == 1)
                            PlayBGM(MUS_HG_VICTORY_GYM_LEADER);
                        if((Random() % 3) == 2)
                            PlayBGM(MUS_HG_VICTORY_GYM_LEADER);
                        else
                            PlayBGM(MUS_HG_VICTORY_GYM_LEADER);
                    }
            }
            break;
        default:
            {
                if ((gSaveBlock2Ptr->optionsTrainerBattleMusic == 0) || (gSaveBlock2Ptr->optionsTrainerBattleMusic == 1))
                    PlayBGM(MUS_HG_VICTORY_TRAINER);
                else if (gSaveBlock2Ptr->optionsTrainerBattleMusic == 2)
                    PlayBGM(MUS_HG_VICTORY_TRAINER);
                else if((gSaveBlock2Ptr->optionsTrainerBattleMusic == 3) || (gSaveBlock2Ptr->optionsTrainerBattleMusic == 4))
                    PlayBGM(MUS_HG_VICTORY_TRAINER);
                else if (gSaveBlock2Ptr->optionsTrainerBattleMusic == 5)
                {
                    if((Random() % 3) == 1)
                        PlayBGM(MUS_HG_VICTORY_TRAINER);
                    if((Random() % 3) == 2)
                        PlayBGM(MUS_HG_VICTORY_TRAINER);
                    else
                        PlayBGM(MUS_HG_VICTORY_TRAINER);
                }  
            }
=======
            PlayBGM(MUS_VICTORY_AQUA_MAGMA);
            break;
        case TRAINER_CLASS_LEADER:
            PlayBGM(MUS_VICTORY_GYM_LEADER);
            break;
        default:
            PlayBGM(MUS_VICTORY_TRAINER);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            break;
        }
    }
    else
    {
        gBattlescriptCurrInstr = BattleScript_PayDayMoneyAndPickUpItems;
    }

    gBattleMainFunc = HandleEndTurn_FinishBattle;
}

static void HandleEndTurn_BattleLost(void)
{
    gCurrentActionFuncId = 0;

    if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
    {
        if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        {
            if (gBattleOutcome & B_OUTCOME_LINK_BATTLE_RAN)
            {
                gBattlescriptCurrInstr = BattleScript_PrintPlayerForfeitedLinkBattle;
                gBattleOutcome &= ~B_OUTCOME_LINK_BATTLE_RAN;
                gSaveBlock2Ptr->frontier.disableRecordBattle = TRUE;
            }
            else
            {
                gBattlescriptCurrInstr = BattleScript_FrontierLinkBattleLost;
                gBattleOutcome &= ~B_OUTCOME_LINK_BATTLE_RAN;
            }
        }
        else
        {
            gBattleTextBuff1[0] = gBattleOutcome;
            gBattlerAttacker = GetBattlerAtPosition(B_POSITION_PLAYER_LEFT);
            gBattlescriptCurrInstr = BattleScript_LinkBattleWonOrLost;
            gBattleOutcome &= ~B_OUTCOME_LINK_BATTLE_RAN;
        }
    }
    else
    {
        gBattlescriptCurrInstr = BattleScript_LocalBattleLost;
    }

    gBattleMainFunc = HandleEndTurn_FinishBattle;
}

static void HandleEndTurn_RanFromBattle(void)
{
    gCurrentActionFuncId = 0;

    if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER && gBattleTypeFlags & BATTLE_TYPE_TRAINER)
    {
        gBattlescriptCurrInstr = BattleScript_PrintPlayerForfeited;
        gBattleOutcome = B_OUTCOME_FORFEITED;
        gSaveBlock2Ptr->frontier.disableRecordBattle = TRUE;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
    {
        gBattlescriptCurrInstr = BattleScript_PrintPlayerForfeited;
        gBattleOutcome = B_OUTCOME_FORFEITED;
    }
<<<<<<< HEAD
=======
    else if (CanPlayerForfeitNormalTrainerBattle())
    {
        gBattlescriptCurrInstr = BattleScript_ForfeitBattleGaveMoney;
        gBattleOutcome = B_OUTCOME_FORFEITED;
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    else
    {
        switch (gProtectStructs[gBattlerAttacker].fleeType)
        {
        default:
            gBattlescriptCurrInstr = BattleScript_GotAwaySafely;
            break;
        case FLEE_ITEM:
            gBattlescriptCurrInstr = BattleScript_SmokeBallEscape;
            break;
        case FLEE_ABILITY:
            gBattlescriptCurrInstr = BattleScript_RanAwayUsingMonAbility;
            break;
        }
    }

    gBattleMainFunc = HandleEndTurn_FinishBattle;
}

static void HandleEndTurn_MonFled(void)
{
    gCurrentActionFuncId = 0;

    PREPARE_MON_NICK_BUFFER(gBattleTextBuff1, gBattlerAttacker, gBattlerPartyIndexes[gBattlerAttacker]);
    gBattlescriptCurrInstr = BattleScript_WildMonFled;

    gBattleMainFunc = HandleEndTurn_FinishBattle;
}

static void HandleEndTurn_FinishBattle(void)
{
<<<<<<< HEAD
    u8 j;
    if (gCurrentActionFuncId == B_ACTION_TRY_FINISH || gCurrentActionFuncId == B_ACTION_FINISHED)
    {
        if (gSaveBlock1Ptr->tx_Challenges_Mirror && !gSaveBlock1Ptr->tx_Challenges_Mirror_Thief && (gBattleTypeFlags & BATTLE_TYPE_TRAINER || gBattleTypeFlags & BATTLE_TYPE_DOUBLE))
        {
            for (j = 0; j < PARTY_SIZE; j++)
                gPlayerParty[j] = gPlayerPartyBackup[j];
        }

=======
    u32 i, battler;

    if (gCurrentActionFuncId == B_ACTION_TRY_FINISH || gCurrentActionFuncId == B_ACTION_FINISHED)
    {
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK
                                  | BATTLE_TYPE_RECORDED_LINK
                                  | BATTLE_TYPE_FIRST_BATTLE
                                  | BATTLE_TYPE_SAFARI
                                  | BATTLE_TYPE_EREADER_TRAINER
                                  | BATTLE_TYPE_WALLY_TUTORIAL
                                  | BATTLE_TYPE_FRONTIER)))
        {
<<<<<<< HEAD
            for (gActiveBattler = 0; gActiveBattler < gBattlersCount; gActiveBattler++)
            {
                if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
                {
                    if (gBattleResults.playerMon1Species == SPECIES_NONE)
                    {
                        gBattleResults.playerMon1Species = GetMonData(&gPlayerParty[gBattlerPartyIndexes[gActiveBattler]], MON_DATA_SPECIES, NULL);
                        GetMonData(&gPlayerParty[gBattlerPartyIndexes[gActiveBattler]], MON_DATA_NICKNAME, gBattleResults.playerMon1Name);
                    }
                    else
                    {
                        gBattleResults.playerMon2Species = GetMonData(&gPlayerParty[gBattlerPartyIndexes[gActiveBattler]], MON_DATA_SPECIES, NULL);
                        GetMonData(&gPlayerParty[gBattlerPartyIndexes[gActiveBattler]], MON_DATA_NICKNAME, gBattleResults.playerMon2Name);
=======
            for (battler = 0; battler < gBattlersCount; battler++)
            {
                if (IsOnPlayerSide(battler))
                {
                    if (gBattleResults.playerMon1Species == SPECIES_NONE)
                    {
                        gBattleResults.playerMon1Species = GetMonData(GetBattlerMon(battler), MON_DATA_SPECIES, NULL);
                        GetMonData(GetBattlerMon(battler), MON_DATA_NICKNAME, gBattleResults.playerMon1Name);
                    }
                    else
                    {
                        gBattleResults.playerMon2Species = GetMonData(GetBattlerMon(battler), MON_DATA_SPECIES, NULL);
                        GetMonData(GetBattlerMon(battler), MON_DATA_NICKNAME, gBattleResults.playerMon2Name);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                    }
                }
            }
            TryPutPokemonTodayOnAir();
        }

        if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK
<<<<<<< HEAD
=======
                                  | BATTLE_TYPE_EREADER_TRAINER
                                  | BATTLE_TYPE_RECORDED_LINK
                                  | BATTLE_TYPE_TRAINER_HILL
                                  | BATTLE_TYPE_FRONTIER)))
        {
            for (u32 side = 0; side < NUM_BATTLE_SIDES; side++)
            {
                struct Pokemon *party = GetSideParty(side);

                if (side == B_SIDE_PLAYER && !B_PARTNER_MONS_MARKED_SEEN)
                    continue;

                for (u32 partySlot = 0; partySlot < PARTY_SIZE; partySlot++)
                {
                    if (gBattleStruct->partyState[side][partySlot].sentOut)
                        HandleSetPokedexFlagFromMon(&party[partySlot], FLAG_SET_SEEN);
                }
            }
        }

        if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                                  | BATTLE_TYPE_RECORDED_LINK
                                  | BATTLE_TYPE_TRAINER
                                  | BATTLE_TYPE_FIRST_BATTLE
                                  | BATTLE_TYPE_SAFARI
                                  | BATTLE_TYPE_FRONTIER
                                  | BATTLE_TYPE_EREADER_TRAINER
                                  | BATTLE_TYPE_WALLY_TUTORIAL))
            && gBattleResults.shinyWildMon)
        {
            TryPutBreakingNewsOnAir();
        }
<<<<<<< HEAD
        if ((gSaveBlock1Ptr->tx_Features_PkmnDeath) && (!IsNuzlockeActive()))
        {
            if (!(gBattleTypeFlags &(BATTLE_TYPE_LINK
                                        | BATTLE_TYPE_LINK_IN_BATTLE
                                        | BATTLE_TYPE_FIRST_BATTLE
                                        | BATTLE_TYPE_WALLY_TUTORIAL
                                        | BATTLE_TYPE_INGAME_PARTNER
                                        | BATTLE_TYPE_TOWER_LINK_MULTI
                                        | BATTLE_TYPE_RECORDED_LINK
                                        | BATTLE_TYPE_FRONTIER)))
                NuzlockeDeleteFaintedPartyPokemon();
        //tx_difficulty_challenges
        }
        if (IsNuzlockeActive())
        {
            if (!(gBattleTypeFlags &(BATTLE_TYPE_LINK
                                        | BATTLE_TYPE_LINK_IN_BATTLE
                                        | BATTLE_TYPE_FIRST_BATTLE
                                        | BATTLE_TYPE_WALLY_TUTORIAL
                                        | BATTLE_TYPE_INGAME_PARTNER
                                        | BATTLE_TYPE_TOWER_LINK_MULTI
                                        | BATTLE_TYPE_RECORDED_LINK
                                        | BATTLE_TYPE_FRONTIER)))
                NuzlockeDeleteFaintedPartyPokemon();
            if (!(gBattleTypeFlags & (BATTLE_TYPE_DOUBLE
                                        | BATTLE_TYPE_LINK
                                        | BATTLE_TYPE_TRAINER
                                        | BATTLE_TYPE_FIRST_BATTLE
                                        | BATTLE_TYPE_LINK_IN_BATTLE
                                        | BATTLE_TYPE_MULTI
                                        | BATTLE_TYPE_BATTLE_TOWER
                                        | BATTLE_TYPE_WALLY_TUTORIAL
                                        | BATTLE_TYPE_LEGENDARY
                                        | BATTLE_TYPE_REGI
                                        | BATTLE_TYPE_TWO_OPPONENTS
                                        | BATTLE_TYPE_INGAME_PARTNER
                                        | BATTLE_TYPE_TOWER_LINK_MULTI
                                        | BATTLE_TYPE_RECORDED_LINK)))
            {
                if (!NuzlockeIsSpeciesClauseActive && !OneTypeChallengeCaptureBlocked)
                    NuzlockeFlagSet(NuzlockeGetCurrentRegionMapSectionId());
            }
            NuzlockeIsCaptureBlocked = FALSE;
            NuzlockeIsSpeciesClauseActive = FALSE;
            OneTypeChallengeCaptureBlocked = FALSE;
        }

        RecordedBattle_SetPlaybackFinished();
        BeginFastPaletteFade(3);
        FadeOutMapMusic(5);
=======

        RecordedBattle_SetPlaybackFinished();
        if (gTestRunnerEnabled)
            TestRunner_Battle_AfterLastTurn();
        BeginFastPaletteFade(3);
        FadeOutMapMusic(5);
        if (B_TRAINERS_KNOCK_OFF_ITEMS == TRUE || B_RESTORE_HELD_BATTLE_ITEMS >= GEN_9)
            TryRestoreHeldItems();

        // Undo Dynamax HP multiplier before recalculating stats.
        for (battler = 0; battler < gBattlersCount; ++battler)
        {
            if (GetActiveGimmick(battler) == GIMMICK_DYNAMAX)
                UndoDynamax(battler);
        }

        for (i = 0; i < PARTY_SIZE; i++)
        {
            bool8 changedForm = TryRevertPartyMonFormChange(i);
            gBattleStruct->partyState[B_SIDE_OPPONENT][i].changedSpecies = SPECIES_NONE;

            // Recalculate the stats of every party member before the end
            if (!changedForm && B_RECALCULATE_STATS >= GEN_5)
                CalculateMonStats(&gPlayerParty[i]);
        }
        // Clear battle mon species to avoid a bug on the next battle that causes
        // healthboxes loading incorrectly due to it trying to create a Mega Indicator
        // if the previous battler would've had it.
        for (i = 0; i < MAX_BATTLERS_COUNT; i++)
        {
            gBattleMons[i].species = SPECIES_NONE;
        }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        gBattleMainFunc = FreeResetData_ReturnToOvOrDoEvolutions;
        gCB2_AfterEvolution = BattleMainCB2;
    }
    else
    {
        if (gBattleControllerExecFlags == 0)
            gBattleScriptingCommandsTable[gBattlescriptCurrInstr[0]]();
    }
}

static void FreeResetData_ReturnToOvOrDoEvolutions(void)
{
    if (!gPaletteFade.active)
    {
        gIsFishingEncounter = FALSE;
<<<<<<< HEAD
        ResetSpriteData();
        if (gLeveledUpInBattle == 0 || (gBattleOutcome != B_OUTCOME_WON && gBattleOutcome != B_OUTCOME_CAUGHT))
        {
            gBattleMainFunc = ReturnFromBattleToOverworld;
            return;
        }
        else
        {
            gBattleMainFunc = TryEvolvePokemon;
=======
        gIsSurfingEncounter = FALSE;
        if (gDexNavSpecies && (gBattleOutcome == B_OUTCOME_WON || gBattleOutcome == B_OUTCOME_CAUGHT))
        {
            IncrementDexNavChain();
            TryIncrementSpeciesSearchLevel();
        }
        else
            gSaveBlock3Ptr->dexNavChain = 0;

        ClearCurrentTrainerWantRematchVsSeeker();
        gDexNavSpecies = SPECIES_NONE;
        ResetSpriteData();
        if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK
                                  | BATTLE_TYPE_RECORDED_LINK
                                  | BATTLE_TYPE_FIRST_BATTLE
                                  | BATTLE_TYPE_SAFARI
                                  | BATTLE_TYPE_FRONTIER
                                  | BATTLE_TYPE_EREADER_TRAINER
                                  | BATTLE_TYPE_WALLY_TUTORIAL))
            && (B_EVOLUTION_AFTER_WHITEOUT >= GEN_6
                || gBattleOutcome == B_OUTCOME_WON
                || gBattleOutcome == B_OUTCOME_CAUGHT))
        {
            gBattleMainFunc = TryEvolvePokemon;
        }
        else
        {
            gBattleMainFunc = ReturnFromBattleToOverworld;
            return;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        }
    }

    FreeAllWindowBuffers();
    if (!(gBattleTypeFlags & BATTLE_TYPE_LINK))
    {
<<<<<<< HEAD
=======
        // To account for Battle Factory and Slateport Battle Tent, enemy parties are zeroed out in the facilitites respective src/xxx.c files
        // The ZeroEnemyPartyMons() call happens in SaveXXXChallenge function (eg. SaveFactoryChallenge)
        if (!(gBattleTypeFlags & (BATTLE_TYPE_FRONTIER | BATTLE_TYPE_ROAMER)))
        {
            ZeroEnemyPartyMons();
        }
        ResetDynamicAiFunc();
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        FreeMonSpritesGfx();
        FreeBattleResources();
        FreeBattleSpritesData();
    }
}

static void TryEvolvePokemon(void)
{
    s32 i;

<<<<<<< HEAD
    while (gLeveledUpInBattle != 0 && gSaveBlock1Ptr->tx_Challenges_EvoLimit != 2) //tx_randomizer_and_challenges
    {
        for (i = 0; i < PARTY_SIZE; i++)
        {
            if (gLeveledUpInBattle & gBitTable[i])
            {
                u16 species;
                u8 levelUpBits = gLeveledUpInBattle;

                levelUpBits &= ~(gBitTable[i]);
                gLeveledUpInBattle = levelUpBits;

                species = GetEvolutionTargetSpecies(&gPlayerParty[i], EVO_MODE_NORMAL, levelUpBits);
                if (species != SPECIES_NONE)
                {
                    FreeAllWindowBuffers();
                    gBattleMainFunc = WaitForEvoSceneToFinish;
                    EvolutionScene(&gPlayerParty[i], species, TRUE, i);
                    return;
                }
            }
        }
    }

=======
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (!(sTriedEvolving & (1u << i)))
        {
            bool32 canStopEvo = TRUE;
            enum EvolutionMode mode = EVO_MODE_BATTLE_SPECIAL;
            u32 evolutionItemArg = i;
            u32 species = GetEvolutionTargetSpecies(&gPlayerParty[i], mode, evolutionItemArg, NULL, &canStopEvo, CHECK_EVO);
            sTriedEvolving |= 1u << i;

            if (species == SPECIES_NONE && (gLeveledUpInBattle & (1u << i)))
            {
                gLeveledUpInBattle &= ~(1u << i);
                mode = EVO_MODE_BATTLE_ONLY;
                evolutionItemArg = gLeveledUpInBattle;
                species = GetEvolutionTargetSpecies(&gPlayerParty[i], mode, evolutionItemArg, NULL, &canStopEvo, CHECK_EVO);
            }

            if (species != SPECIES_NONE)
            {
                FreeAllWindowBuffers();
                gBattleMainFunc = WaitForEvoSceneToFinish;
                GetEvolutionTargetSpecies(&gPlayerParty[i], mode, evolutionItemArg, NULL, &canStopEvo, DO_EVO);
                EvolutionScene(&gPlayerParty[i], species, canStopEvo, i);
                return;
            }
        }
    }
    sTriedEvolving = 0;
    gLeveledUpInBattle = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    gBattleMainFunc = ReturnFromBattleToOverworld;
}

static void WaitForEvoSceneToFinish(void)
{
    if (gMain.callback2 == BattleMainCB2)
        gBattleMainFunc = TryEvolvePokemon;
}

static void ReturnFromBattleToOverworld(void)
{
    if (!(gBattleTypeFlags & BATTLE_TYPE_LINK))
    {
        RandomlyGivePartyPokerus(gPlayerParty);
        PartySpreadPokerus(gPlayerParty);
    }

    if (gBattleTypeFlags & BATTLE_TYPE_LINK && gReceivedRemoteLinkPlayers)
        return;

    gSpecialVar_Result = gBattleOutcome;
    gMain.inBattle = FALSE;
    gMain.callback1 = gPreBattleCallback1;

    if (gBattleTypeFlags & BATTLE_TYPE_ROAMER)
    {
        UpdateRoamerHPStatus(&gEnemyParty[0]);
<<<<<<< HEAD
=======
        ZeroEnemyPartyMons();
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#ifndef BUGFIX
        if ((gBattleOutcome & B_OUTCOME_WON) || gBattleOutcome == B_OUTCOME_CAUGHT)
#else
        if ((gBattleOutcome == B_OUTCOME_WON) || gBattleOutcome == B_OUTCOME_CAUGHT) // Bug: When Roar is used by roamer, gBattleOutcome is B_OUTCOME_PLAYER_TELEPORTED (5).
#endif                                                                               // & with B_OUTCOME_WON (1) will return TRUE and deactivates the roamer.
<<<<<<< HEAD
            SetRoamerInactive();
=======
            SetRoamerInactive(gEncounteredRoamerIndex);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }

    m4aSongNumStop(SE_LOW_HEALTH);
    SetMainCallback2(gMain.savedCallback);
}

void RunBattleScriptCommands_PopCallbacksStack(void)
{
    if (gCurrentActionFuncId == B_ACTION_TRY_FINISH || gCurrentActionFuncId == B_ACTION_FINISHED)
    {
        if (gBattleResources->battleCallbackStack->size != 0)
            gBattleResources->battleCallbackStack->size--;
        gBattleMainFunc = gBattleResources->battleCallbackStack->function[gBattleResources->battleCallbackStack->size];
    }
    else
    {
        if (gBattleControllerExecFlags == 0)
            gBattleScriptingCommandsTable[gBattlescriptCurrInstr[0]]();
    }
}

void RunBattleScriptCommands(void)
{
    if (gBattleControllerExecFlags == 0)
        gBattleScriptingCommandsTable[gBattlescriptCurrInstr[0]]();
}

<<<<<<< HEAD
static bool8 partyMonHoldDoublePrizeEffect(void){
    int i;
    for (i = 0; i < PARTY_SIZE; i++){
        u8 item = GetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM);
        if (ItemId_GetHoldEffect(item) == HOLD_EFFECT_DOUBLE_PRIZE){
            return TRUE;
        }
    }
    return FALSE;   
=======
u32 TrySetAteType(u32 move, u32 battlerAtk, u32 attackerAbility)
{
    u32 ateType = TYPE_NONE;

    switch (GetMoveEffect(move))
    {
    case EFFECT_TERA_BLAST:
        if (GetActiveGimmick(battlerAtk) == GIMMICK_TERA)
            return ateType;
        break;
    case EFFECT_TERA_STARSTORM:
        if (gBattleMons[battlerAtk].species == SPECIES_TERAPAGOS_STELLAR)
            return ateType;
        break;
    case EFFECT_HIDDEN_POWER:
    case EFFECT_WEATHER_BALL:
    case EFFECT_NATURAL_GIFT:
    case EFFECT_CHANGE_TYPE_ON_ITEM:
    case EFFECT_REVELATION_DANCE:
    case EFFECT_TERRAIN_PULSE:
        return ateType;
    default:
        break;
    }

    switch (attackerAbility)
    {
    case ABILITY_PIXILATE:
        ateType = TYPE_FAIRY;
        break;
    case ABILITY_REFRIGERATE:
        ateType = TYPE_ICE;
        break;
    case ABILITY_AERILATE:
        ateType = TYPE_FLYING;
        break;
    case ABILITY_GALVANIZE:
        ateType = TYPE_ELECTRIC;
        break;
    default:
        ateType = TYPE_NONE;
        break;
    }

    return ateType;
}

// Returns TYPE_NONE if type doesn't change.
u32 GetDynamicMoveType(struct Pokemon *mon, u32 move, u32 battler, enum MonState state)
{
    u32 moveType = GetMoveType(move);
    enum BattleMoveEffects moveEffect = GetMoveEffect(move);
    u32 species, heldItem, ability, type1, type2, type3;
    enum ItemHoldEffect holdEffect;
    enum Gimmick gimmick = GetActiveGimmick(battler);

    if (state == MON_IN_BATTLE)
    {
        if (moveEffect == EFFECT_STRUGGLE)
            return TYPE_MYSTERY;

        species = gBattleMons[battler].species;
        heldItem = gBattleMons[battler].item;
        holdEffect = GetBattlerHoldEffect(battler, TRUE);
        ability = GetBattlerAbility(battler);
        type1 = gBattleMons[battler].types[0];
        type2 = gBattleMons[battler].types[1];
        type3 = gBattleMons[battler].types[2];
    }
    else
    {
        species = GetMonData(mon, MON_DATA_SPECIES);
        heldItem = GetMonData(mon, MON_DATA_HELD_ITEM, 0);
        holdEffect = GetItemHoldEffect(heldItem);
        ability = GetMonAbility(mon);
        type1 = GetSpeciesType(species, 0);
        type2 = GetSpeciesType(species, 1);
        type3 = TYPE_MYSTERY;
    }

    switch (moveEffect)
    {
    case EFFECT_WEATHER_BALL:
        if (state == MON_IN_BATTLE)
        {
            if (HasWeatherEffect())
            {
                if (gBattleWeather & B_WEATHER_RAIN && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA)
                    return TYPE_WATER;
                else if (gBattleWeather & B_WEATHER_SANDSTORM)
                    return TYPE_ROCK;
                else if (gBattleWeather & B_WEATHER_SUN && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA)
                    return TYPE_FIRE;
                else if (gBattleWeather & (B_WEATHER_SNOW | B_WEATHER_HAIL))
                    return TYPE_ICE;
                else
                    return moveType;
            }
        }
        else
        {
            switch (gWeatherPtr->currWeather)
            {
            case WEATHER_DROUGHT:
                if (holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA)
                    return TYPE_FIRE;
                break;
            case WEATHER_RAIN:
            case WEATHER_RAIN_THUNDERSTORM:
            case WEATHER_DOWNPOUR:
                if (holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA)
                    return TYPE_WATER;
                break;
            case WEATHER_SNOW:
                return TYPE_ICE;
            case WEATHER_SANDSTORM:
                return TYPE_ROCK;
            }
            return moveType;
        }
        break;
    case EFFECT_HIDDEN_POWER:
        {
            u32 typeBits = 0;
            if (state == MON_IN_BATTLE)
            {
                typeBits = ((gBattleMons[battler].hpIV & 1) << 0)
                        | ((gBattleMons[battler].attackIV & 1) << 1)
                        | ((gBattleMons[battler].defenseIV & 1) << 2)
                        | ((gBattleMons[battler].speedIV & 1) << 3)
                        | ((gBattleMons[battler].spAttackIV & 1) << 4)
                        | ((gBattleMons[battler].spDefenseIV & 1) << 5);
            }
            else
            {
                typeBits = ((GetMonData(mon, MON_DATA_HP_IV) & 1) << 0)
                        | ((GetMonData(mon, MON_DATA_ATK_IV) & 1) << 1)
                        | ((GetMonData(mon, MON_DATA_DEF_IV) & 1) << 2)
                        | ((GetMonData(mon, MON_DATA_SPEED_IV) & 1) << 3)
                        | ((GetMonData(mon, MON_DATA_SPATK_IV) & 1) << 4)
                        | ((GetMonData(mon, MON_DATA_SPDEF_IV) & 1) << 5);
            }

            u32 hpTypes[NUMBER_OF_MON_TYPES] = {0};
            u32 i, hpTypeCount = 0;
            for (i = 0; i < NUMBER_OF_MON_TYPES; i++)
            {
                if (gTypesInfo[i].isHiddenPowerType)
                    hpTypes[hpTypeCount++] = i;
            }
            moveType = ((hpTypeCount - 1) * typeBits) / 63;
            return ((hpTypes[moveType] | F_DYNAMIC_TYPE_IGNORE_PHYSICALITY) & 0x3F);
        }
        break;
    case EFFECT_CHANGE_TYPE_ON_ITEM:
        if (holdEffect == GetMoveEffectArg_HoldEffect(move))
            return GetItemSecondaryId(heldItem);
        break;
    case EFFECT_REVELATION_DANCE:
        if (gimmick != GIMMICK_Z_MOVE)
        {
            u32 teraType;
            if (gimmick == GIMMICK_TERA && ((teraType = GetMonData(mon, MON_DATA_TERA_TYPE)) != TYPE_STELLAR))
                return teraType;
            else if (type1 != TYPE_MYSTERY && !(gDisableStructs[battler].roostActive && type1 == TYPE_FLYING))
                return type1;
            else if (type2 != TYPE_MYSTERY && !(gDisableStructs[battler].roostActive && type2 == TYPE_FLYING))
                return type2;
            else if (gDisableStructs[battler].roostActive)
                return (B_ROOST_PURE_FLYING >= GEN_5 ? TYPE_NORMAL : TYPE_MYSTERY);
            else if (type3 != TYPE_MYSTERY)
                return type3;
            else
                return TYPE_MYSTERY;
        }
        break;
    case EFFECT_RAGING_BULL:
        switch (species)
        {
        case SPECIES_TAUROS_PALDEA_COMBAT:
        case SPECIES_TAUROS_PALDEA_BLAZE:
        case SPECIES_TAUROS_PALDEA_AQUA:
            return GetSpeciesType(species, 1);
        }
        break;
    case EFFECT_IVY_CUDGEL:
        switch (species)
        {
        case SPECIES_OGERPON_WELLSPRING:
        case SPECIES_OGERPON_WELLSPRING_TERA:
        case SPECIES_OGERPON_HEARTHFLAME:
        case SPECIES_OGERPON_HEARTHFLAME_TERA:
        case SPECIES_OGERPON_CORNERSTONE:
        case SPECIES_OGERPON_CORNERSTONE_TERA:
            return GetSpeciesType(species, 1);
        }
        break;
    case EFFECT_NATURAL_GIFT:
        if (GetItemPocket(heldItem) == POCKET_BERRIES)
            return gNaturalGiftTable[ITEM_TO_BERRY(heldItem)].type;
        else
            return moveType;
    case EFFECT_TERRAIN_PULSE:
        if (state == MON_IN_BATTLE)
        {
            if (IsBattlerTerrainAffected(battler, STATUS_FIELD_TERRAIN_ANY))
            {
                if (gFieldStatuses & STATUS_FIELD_ELECTRIC_TERRAIN)
                    return TYPE_ELECTRIC;
                else if (gFieldStatuses & STATUS_FIELD_GRASSY_TERRAIN)
                    return TYPE_GRASS;
                else if (gFieldStatuses & STATUS_FIELD_MISTY_TERRAIN)
                    return TYPE_FAIRY;
                else if (gFieldStatuses & STATUS_FIELD_PSYCHIC_TERRAIN)
                    return TYPE_PSYCHIC;
                else //failsafe
                    return moveType;
            }
        }
        else
        {
            switch (gWeatherPtr->currWeather)
            {
            case WEATHER_RAIN_THUNDERSTORM:
                if (B_THUNDERSTORM_TERRAIN)
                    return TYPE_ELECTRIC;
                break;
            case WEATHER_FOG_HORIZONTAL:
            case WEATHER_FOG_DIAGONAL:
                if (B_OVERWORLD_FOG >= GEN_8)
                    return TYPE_FAIRY;
                break;
            }
            return moveType;
        }
        break;
    case EFFECT_TERA_BLAST:
        if (gimmick == GIMMICK_TERA)
            return GetMonData(mon, MON_DATA_TERA_TYPE);
        break;
    case EFFECT_TERA_STARSTORM:
        if (species == SPECIES_TERAPAGOS_STELLAR)
            return TYPE_STELLAR;
        break;
    default:
        break;
    }

    if (IsSoundMove(move) && ability == ABILITY_LIQUID_VOICE)
    {
        return TYPE_WATER;
    }
    else if (moveEffect == EFFECT_AURA_WHEEL
          && species == SPECIES_MORPEKO_HANGRY
          && ability != ABILITY_NORMALIZE)
    {
        return TYPE_DARK;
    }
    else if (moveType == TYPE_NORMAL
          && ability != ABILITY_NORMALIZE
          && gimmick != GIMMICK_DYNAMAX
          && gimmick != GIMMICK_Z_MOVE)
    {
        u32 ateType = TrySetAteType(move, battler, ability);
        if (ateType != TYPE_NONE && state == MON_IN_BATTLE)
            gBattleStruct->battlerState[battler].ateBoost = TRUE;
        return ateType;
    }
    else if (moveEffect != EFFECT_CHANGE_TYPE_ON_ITEM
          && moveEffect != EFFECT_TERRAIN_PULSE
          && moveEffect != EFFECT_NATURAL_GIFT
          && moveEffect != EFFECT_HIDDEN_POWER
          && moveEffect != EFFECT_WEATHER_BALL
          && ability == ABILITY_NORMALIZE
          && gimmick != GIMMICK_Z_MOVE)
    {
        if (state == MON_IN_BATTLE && gimmick != GIMMICK_DYNAMAX)
            gBattleStruct->battlerState[battler].ateBoost = TRUE;
        return TYPE_NORMAL;
    }

    return TYPE_NONE;
}

void SetTypeBeforeUsingMove(u32 move, u32 battler)
{
    u32 moveType;
    u32 heldItem = gBattleMons[battler].item;
    enum ItemHoldEffect holdEffect = GetBattlerHoldEffect(battler, TRUE);

    gBattleStruct->dynamicMoveType = 0;
    gBattleStruct->battlerState[battler].ateBoost = FALSE;
    gSpecialStatuses[battler].gemBoost = FALSE;

    moveType = GetDynamicMoveType(GetBattlerMon(battler),
                                  move,
                                  battler,
                                  MON_IN_BATTLE);

    if (moveType != TYPE_NONE)
        gBattleStruct->dynamicMoveType = moveType | F_DYNAMIC_TYPE_SET;

    moveType = GetBattleMoveType(move);
    if ((gFieldStatuses & STATUS_FIELD_ION_DELUGE && moveType == TYPE_NORMAL)
     || gBattleMons[battler].volatiles.electrified)
        gBattleStruct->dynamicMoveType = TYPE_ELECTRIC | F_DYNAMIC_TYPE_SET;

    // Check if a gem should activate.
    u32 effect = GetMoveEffect(move);
    if (holdEffect == HOLD_EFFECT_GEMS
        && GetBattleMoveType(move) == GetItemSecondaryId(heldItem)
        && effect != EFFECT_PLEDGE
        && effect != EFFECT_OHKO
        && effect != EFFECT_SHEER_COLD)
    {
        gSpecialStatuses[battler].gemParam = GetBattlerHoldEffectParam(battler);
        gSpecialStatuses[battler].gemBoost = TRUE;
    }
}

// Queues stat boosts for a given battler for totem battles
void ScriptSetTotemBoost(struct ScriptContext *ctx)
{
    u32 battler = VarGet(ScriptReadHalfword(ctx));
    u32 stat;
    u32 i;

    Script_RequestEffects(SCREFF_V1);

    for (i = 0; i < (NUM_BATTLE_STATS - 1); i++)
    {
        stat = VarGet(ScriptReadHalfword(ctx));
        if (stat)
        {
            gQueuedStatBoosts[battler].stats |= (1 << i);
            gQueuedStatBoosts[battler].statChanges[i] = stat;
            gQueuedStatBoosts[battler].stats |= 0x80;  // used as a flag for the "totem flared to life" script
        }
    }
}

bool32 IsWildMonSmart(void)
{
#if B_SMART_WILD_AI_FLAG != 0
    return (FlagGet(B_SMART_WILD_AI_FLAG));
#else
    return FALSE;
#endif
}

static s32 Factorial(s32 n)
{
    s32 f = 1, i;
    for (i = 2; i <= n; i++)
        f *= i;
    return f;
}

bool32 CanPlayerForfeitNormalTrainerBattle(void)
{
    if (!B_RUN_TRAINER_BATTLE)
        return FALSE;

    if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        return FALSE;

    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_INVALID)
        return FALSE;

    return (gBattleTypeFlags & BATTLE_TYPE_TRAINER);
}

bool32 DidPlayerForfeitNormalTrainerBattle(void)
{
    if (!CanPlayerForfeitNormalTrainerBattle())
        return FALSE;

    return (gBattleOutcome == B_OUTCOME_FORFEITED);
}

// Wins the battle instantly. Used in the battle debug with LIST_ITEM_INSTANT_WIN
void BattleDebug_WonBattle(void)
{
    gBattleOutcome |= B_OUTCOME_WON;
    gBattleMainFunc = sEndTurnFuncsTable[gBattleOutcome & 0x7F];
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}
