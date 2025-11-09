//CREDITS
//TheXaman:             https://github.com/TheXaman/pokeemerald/tree/tx_debug_system
//CODE USED FROM:
//ketsuban:             https://github.com/pret/pokeemerald/wiki/Add-a-debug-menu
//Pyredrid:             https://github.com/Pyredrid/pokeemerald/tree/debugmenu
//AsparagusEduardo:     https://github.com/AsparagusEduardo/pokeemerald/tree/InfusedEmerald_v2
//Ghoulslash:           https://github.com/ghoulslash/pokeemerald
//Jaizu:                https://jaizu.moe/
<<<<<<< HEAD
#include "global.h"
#include "battle.h"
#include "battle_setup.h"
=======
//AND OTHER RHH POKEEMERALD-EXPANSION CONTRIBUTORS
#include "global.h"
#include "battle.h"
#include "battle_setup.h"
#include "berry.h"
#include "clock.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "coins.h"
#include "credits.h"
#include "data.h"
#include "daycare.h"
#include "debug.h"
<<<<<<< HEAD
#include "debug_pokemon_creator.h"
=======
#include "decoration.h"
#include "decoration_inventory.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_message_box.h"
#include "field_screen_effect.h"
#include "field_weather.h"
<<<<<<< HEAD
=======
#include "follower_npc.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "international_string_util.h"
#include "item.h"
#include "item_icon.h"
#include "list_menu.h"
#include "m4a.h"
#include "main.h"
#include "main_menu.h"
#include "malloc.h"
#include "map_name_popup.h"
#include "menu.h"
#include "money.h"
#include "naming_screen.h"
#include "new_game.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "pokedex.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "pokemon_storage_system.h"
#include "random.h"
#include "region_map.h"
<<<<<<< HEAD
=======
#include "rtc.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "script.h"
#include "script_pokemon_util.h"
#include "sound.h"
#include "strings.h"
#include "string_util.h"
#include "task.h"
<<<<<<< HEAD
#include "pokemon_summary_screen.h"
#include "wild_encounter.h"
#include "constants/abilities.h"
#include "constants/battle_frontier.h"
=======
#include "tv.h"
#include "pokemon_summary_screen.h"
#include "wild_encounter.h"
#include "constants/abilities.h"
#include "constants/battle_ai.h"
#include "constants/battle_frontier.h"
#include "constants/coins.h"
#include "constants/decorations.h"
#include "constants/event_objects.h"
#include "constants/expansion.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "constants/flags.h"
#include "constants/items.h"
#include "constants/map_groups.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/species.h"
#include "constants/weather.h"
<<<<<<< HEAD
#include "save.h"


#if TX_DEBUG_SYSTEM_ENABLE == TRUE
// *******************************
// Enums
enum { // Main
    DEBUG_MENU_ITEM_UTILITIES,
    DEBUG_MENU_ITEM_SCRIPTS,
    DEBUG_MENU_ITEM_FLAGVAR,
    DEBUG_MENU_ITEM_BATTLE,
    DEBUG_MENU_ITEM_GIVE,
    DEBUG_MENU_ITEM_POKEMON_CREATOR,
    DEBUG_MENU_ITEM_FILL,
    DEBUG_MENU_ITEM_SOUND,
    DEBUG_MENU_ITEM_ACCESS_PC,
    DEBUG_MENU_ITEM_CANCEL
};
enum { // Util
    DEBUG_UTIL_MENU_ITEM_HEAL_PARTY,
    DEBUG_UTIL_MENU_ITEM_FLY,
    DEBUG_UTIL_MENU_ITEM_WARP,
    DEBUG_UTIL_MENU_ITEM_POISON_MONS,
    DEBUG_UTIL_MENU_ITEM_SAVEBLOCK,
    DEBUG_UTIL_MENU_ITEM_WEATHER,
    DEBUG_UTIL_MENU_ITEM_CHECKWALLCLOCK,
    DEBUG_UTIL_MENU_ITEM_SETWALLCLOCK,
    DEBUG_UTIL_MENU_ITEM_WATCHCREDITS,
    DEBUG_UTIL_MENU_ITEM_TRAINER_NAME,
    DEBUG_UTIL_MENU_ITEM_TRAINER_GENDER,
    DEBUG_UTIL_MENU_ITEM_TRAINER_ID,
    DEBUG_UTIL_MENU_ITEM_CHEAT,
};
enum { // Scripts
    DEBUG_UTIL_MENU_ITEM_SCRIPT_1,
    DEBUG_UTIL_MENU_ITEM_SCRIPT_2,
    DEBUG_UTIL_MENU_ITEM_SCRIPT_3,
    DEBUG_UTIL_MENU_ITEM_SCRIPT_4,
    DEBUG_UTIL_MENU_ITEM_SCRIPT_5,
    DEBUG_UTIL_MENU_ITEM_SCRIPT_6,
    DEBUG_UTIL_MENU_ITEM_SCRIPT_7,
    DEBUG_UTIL_MENU_ITEM_SCRIPT_8,
};
enum { // Flags and Vars
=======
#include "siirtc.h"
#include "rtc.h"
#include "fake_rtc.h"
#include "save.h"

enum FollowerNPCCreateDebugMenu
{
    DEBUG_FNPC_BRENDAN,
    DEBUG_FNPC_MAY,
    DEBUG_FNPC_STEVEN,
    DEBUG_FNPC_WALLY,
    DEBUG_FNPC_RED,
    DEBUG_FNPC_LEAF,
    DEBUG_FNPC_COUNT,
};

enum FlagsVarsDebugMenu
{
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    DEBUG_FLAGVAR_MENU_ITEM_FLAGS,
    DEBUG_FLAGVAR_MENU_ITEM_VARS,
    DEBUG_FLAGVAR_MENU_ITEM_DEXFLAGS_ALL,
    DEBUG_FLAGVAR_MENU_ITEM_DEXFLAGS_RESET,
<<<<<<< HEAD
    DEBUG_FLAGVAR_MENU_ITEM_DEXFLAGS_SEEN,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_POKEDEX,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_NATDEX,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_POKENAV,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_RUN_SHOES,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_LOCATIONS,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BADGES_ALL,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_FRONTIER_PASS,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BATTLE_DMG,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_COLISSION,
=======
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_POKEDEX,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_NATDEX,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_POKENAV,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_MATCH_CALL,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_RUN_SHOES,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_LOCATIONS,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BADGES_ALL,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_GAME_CLEAR,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_FRONTIER_PASS,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_COLLISION,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_ENCOUNTER,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_TRAINER_SEE,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BAG_USE,
    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_CATCHING,
};
<<<<<<< HEAD
enum { // Battle 0 Type
    DEBUG_BATTLE_0_MENU_ITEM_WILD,
#ifdef BATTLE_ENGINE
    DEBUG_BATTLE_0_MENU_ITEM_WILD_DOUBLE,
#endif
=======

enum DebugBattleType
{
    DEBUG_BATTLE_0_MENU_ITEM_WILD,
    DEBUG_BATTLE_0_MENU_ITEM_WILD_DOUBLE,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    DEBUG_BATTLE_0_MENU_ITEM_SINGLE,
    DEBUG_BATTLE_0_MENU_ITEM_DOUBLE,
    DEBUG_BATTLE_0_MENU_ITEM_MULTI,
};
<<<<<<< HEAD
enum { // Battle 1 AI FLags
=======

enum DebugBattleAIFlags
{
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_00,
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_01,
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_02,
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_03,
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_04,
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_05,
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_06,
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_07,
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_08,
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_09,
<<<<<<< HEAD
#ifdef BATTLE_ENGINE
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_10,
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_11,
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_12,
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_13,
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_14,
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_15,
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_16,
<<<<<<< HEAD
#endif
    DEBUG_BATTLE_1_MENU_ITEM_CONTINUE,
};
enum { // Battle 2 Terrain
    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_0,   
    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_1,   
    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_2,   
    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_3,   
    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_4,   
    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_5,   
    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_6,   
    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_7,   
    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_8,   
    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_9,
};   
enum { // Give
    DEBUG_GIVE_MENU_ITEM_ITEM_X,
    DEBUG_GIVE_MENU_ITEM_ALLTMS,
    DEBUG_GIVE_MENU_ITEM_POKEMON_SIMPLE,
    DEBUG_GIVE_MENU_ITEM_POKEMON_COMPLEX,
    DEBUG_GIVE_MENU_ITEM_MAX_MONEY,
    DEBUG_GIVE_MENU_ITEM_MAX_COINS,
    DEBUG_GIVE_MENU_ITEM_MAX_BATTLE_POINTS,
    DEBUG_GIVE_MENU_ITEM_DAYCARE_EGG,
    DEBUG_GIVE_MENU_ITEM_HATCH_AN_EGG,
};
enum {
    DEBUG_PKM_CREATOR_MENU_ITEM_PARTY_ADD,               // Add to party
    DEBUG_PKM_CREATOR_MENU_ITEM_PARTY_EDIT,              // Edit party
    DEBUG_PKM_CREATOR_MENU_ITEM_PC_EDIT,                 // Edit PC Box
    DEBUG_PKM_CREATOR_MENU_ITEM_ENEMY_PARTY_EDIT,        // Edit enemy party (usable as a sandbox)
    DEBUG_PKM_CREATOR_MENU_ITEM_ENEMY_PARTY_EDIT_DEBUG,  // Edit enemy party for debug battle
    DEBUG_PKM_CREATOR_MENU_ITEM_DEBUG_EDIT,              // Edit party for debug battle
    DEBUG_PKM_CREATOR_MENU_ITEM_ENEMY_PARTY_ADD,         // Add to enemy party (Unused)
    DEBUG_PKM_CREATOR_MENU_ITEM_TESTING,                 // Testing mode (Dont alter parties)
    DEBUG_PKM_CREATOR_MENU_ITEM_TESTING_COPY,            // Testing mode (use first mon as template)
};
enum { // Give Fill
    DEBUG_FILL_MENU_ITEM_PC_BOXES_FAST,
    DEBUG_FILL_MENU_ITEM_PC_BOXES_SLOW,
    DEBUG_FILL_MENU_ITEM_PC_ITEMS,
    DEBUG_FILL_MENU_ITEM_POCKET_ITEMS,
    DEBUG_FILL_MENU_ITEM_POCKET_BALLS,
    DEBUG_FILL_MENU_ITEM_POCKET_TMHM,
    DEBUG_FILL_MENU_ITEM_POCKET_BERRIES,
    DEBUG_FILL_MENU_ITEM_POCKET_KEY_ITEMS,
};
enum { //Sound
    DEBUG_SOUND_MENU_ITEM_SE,
    DEBUG_SOUND_MENU_ITEM_MUS,
};


// *******************************
// Constants
#define DEBUG_MENU_WIDTH_MAIN 16
=======
    DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_17,
    DEBUG_BATTLE_1_MENU_ITEM_CONTINUE,
};

enum DebugBattleEnvironment
{
    DEBUG_BATTLE_2_MENU_ITEM_ENVIRONMENT_0,
    DEBUG_BATTLE_2_MENU_ITEM_ENVIRONMENT_1,
    DEBUG_BATTLE_2_MENU_ITEM_ENVIRONMENT_2,
    DEBUG_BATTLE_2_MENU_ITEM_ENVIRONMENT_3,
    DEBUG_BATTLE_2_MENU_ITEM_ENVIRONMENT_4,
    DEBUG_BATTLE_2_MENU_ITEM_ENVIRONMENT_5,
    DEBUG_BATTLE_2_MENU_ITEM_ENVIRONMENT_6,
    DEBUG_BATTLE_2_MENU_ITEM_ENVIRONMENT_7,
    DEBUG_BATTLE_2_MENU_ITEM_ENVIRONMENT_8,
    DEBUG_BATTLE_2_MENU_ITEM_ENVIRONMENT_9,
};

// *******************************
// Constants
#define DEBUG_MENU_FONT FONT_NORMAL

#define DEBUG_MENU_WIDTH_MAIN 17
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#define DEBUG_MENU_HEIGHT_MAIN 9

#define DEBUG_MENU_WIDTH_EXTRA 10
#define DEBUG_MENU_HEIGHT_EXTRA 4

#define DEBUG_MENU_WIDTH_WEATHER 15
#define DEBUG_MENU_HEIGHT_WEATHER 3

#define DEBUG_MENU_WIDTH_SOUND 20
#define DEBUG_MENU_HEIGHT_SOUND 6

#define DEBUG_MENU_WIDTH_FLAGVAR 4
#define DEBUG_MENU_HEIGHT_FLAGVAR 2

#define DEBUG_NUMBER_DIGITS_FLAGS 4
#define DEBUG_NUMBER_DIGITS_VARIABLES 5
#define DEBUG_NUMBER_DIGITS_VARIABLE_VALUE 5
#define DEBUG_NUMBER_DIGITS_ITEMS 4
<<<<<<< HEAD
#define DEBUG_NUMBER_DIGITS_ITEM_QUANTITY 2
=======
#define DEBUG_NUMBER_DIGITS_ITEM_QUANTITY 3
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#define DEBUG_NUMBER_ICON_X 210
#define DEBUG_NUMBER_ICON_Y 50

<<<<<<< HEAD
// *******************************
struct DebugMonData
{
    u16 mon_speciesId;
    u8  mon_level;
    u8  isShiny;
    u16 mon_natureId;
    u16 mon_abilityNum;
    u8  mon_iv_hp;
    u8  mon_iv_atk;
    u8  mon_iv_def;
    u8  mon_iv_speed;
    u8  mon_iv_satk;
    u8  mon_iv_sdef;
    u16 mon_move_0;
    u16 mon_move_1;
    u16 mon_move_2;
    u16 mon_move_3;
=======
#define DEBUG_MAX_MENU_ITEMS 20
#define DEBUG_MAX_SUB_MENU_LEVELS 4

// *******************************
struct DebugMenuOption;

typedef void (*DebugFunc)(u8 taskId);
typedef void (*DebugSubmenuFunc)(u8 taskId, const struct DebugMenuOption *items);

struct DebugMenuOption
{
    const u8 *text;
    const void *action;
    const void *actionParams;
};

struct DebugMonData
{
    u16 species;
    u8 level;
    bool8 isShiny:1;
    u8 nature:5;
    u8 abilityNum:2;
    u8 monIVs[NUM_STATS];
    u16 monMoves[MAX_MON_MOVES];
    u8 monEVs[NUM_STATS];
    u8 teraType;
    u8 dynamaxLevel:7;
    u8 gmaxFactor:1;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
};

struct DebugMenuListData
{
<<<<<<< HEAD
    struct ListMenuItem listItems[20 + 1];
    u8 itemNames[PC_ITEMS_COUNT + 1][26];
    u8 listId;
};

struct DebugBattleData
{
    u8 submenu;
    u8 battleType;
    u8 battleTerrain;
#ifdef BATTLE_ENGINE
    bool8 aiFlags[17];
#else
    bool8 aiFlags[10];
#endif
};

// EWRAM
static EWRAM_DATA struct DebugMonData *sDebugMonData = NULL;
static EWRAM_DATA struct DebugMenuListData *sDebugMenuListData = NULL;
static EWRAM_DATA struct DebugBattleData *sDebugBattleData = NULL;
EWRAM_DATA bool8 gIsDebugBattle = FALSE;
EWRAM_DATA u32 gDebugAIFlags = 0;

// *******************************
// Define functions
static void Debug_ReShowMainMenu(void);
static u8 Debug_ShowMenu(void (*HandleInput)(u8), struct ListMenuTemplate LMtemplate);
static void Debug_DestroyMenu(u8 taskId);
static void Debug_DestroyMenu_Full(u8 taskId);
static void DebugAction_Cancel(u8 taskId);
static void DebugAction_DestroyExtraWindow(u8 taskId);
static void DebugTask_HandleMenuInput(u8 taskId, void (*HandleInput)(u8));
static void Debug_InitDebugBattleData(void);
static void Debug_RefreshListMenu(u8 taskId);
static void Debug_RedrawListMenu(u8 taskId);

static void DebugAction_Util_Script_1(u8 taskId);
static void DebugAction_Util_Script_2(u8 taskId);
static void DebugAction_Util_Script_3(u8 taskId);
static void DebugAction_Util_Script_4(u8 taskId);
static void DebugAction_Util_Script_5(u8 taskId);
static void DebugAction_Util_Script_6(u8 taskId);
static void DebugAction_Util_Script_7(u8 taskId);
static void DebugAction_Util_Script_8(u8 taskId);

static void DebugAction_OpenUtilitiesMenu(u8 taskId);
static void DebugAction_OpenScriptsMenu(u8 taskId);
static void DebugAction_OpenFlagsVarsMenu(u8 taskId);
static void DebugAction_OpenBattleMenu(u8 taskId);
static void DebugAction_OpenGiveMenu(u8 taskId);
static void DebugAction_OpenPokemonCreator(u8 taskId);
static void DebugAction_OpenFillMenu(u8 taskId);
static void DebugAction_OpenSoundMenu(u8 taskId);
static void DebugAction_AccessPC(u8 taskId);
static void DebugTask_HandleMenuInput_Main(u8 taskId);
static void DebugTask_HandleMenuInput_Utilities(u8 taskId);
static void DebugTask_HandleMenuInput_Scripts(u8 taskId);
static void DebugTask_HandleMenuInput_FlagsVars(u8 taskId);
static void DebugTask_HandleMenuInput_Battle(u8 taskId);
static void DebugTask_HandleMenuInput_Give(u8 taskId);
static void DebugTask_HandleMenuInput_PkmCreator(u8 taskId);
static void DebugTask_HandleMenuInput_Fill(u8 taskId);
static void DebugTask_HandleMenuInput_Sound(u8 taskId);

static void DebugAction_Util_HealParty(u8 taskId);
=======
    const struct DebugMenuOption *subMenuItems[DEBUG_MAX_SUB_MENU_LEVELS];
    struct ListMenuItem listItems[DEBUG_MAX_MENU_ITEMS + 1];
    u8 itemNames[DEBUG_MAX_MENU_ITEMS + 1][26];
    u8 listId;
};

// EWRAM
static EWRAM_DATA struct DebugMonData *sDebugMonData = NULL;
static EWRAM_DATA struct DebugMenuListData *sDebugMenuListData = NULL;
EWRAM_DATA bool8 gIsDebugBattle = FALSE;
EWRAM_DATA u64 gDebugAIFlags = 0;

// *******************************
// Define functions
static void Debug_ShowMenu(DebugFunc HandleInput, const struct DebugMenuOption *items);
static u8 Debug_GenerateListMenuNames(void);
static void Debug_DestroyMenu(u8 taskId);
static void DebugAction_Cancel(u8 taskId);
static void DebugAction_DestroyExtraWindow(u8 taskId);
static void Debug_RefreshListMenu(u8 taskId);

static void DebugAction_OpenSubMenu(u8 taskId, const struct DebugMenuOption *items);
static void DebugAction_OpenSubMenuFlagsVars(u8 taskId, const struct DebugMenuOption *items);
static void DebugAction_OpenSubMenuFakeRTC(u8 taskId, const struct DebugMenuOption *items);
static void DebugAction_OpenSubMenuCreateFollowerNPC(u8 taskId, const struct DebugMenuOption *items);
static void DebugAction_ExecuteScript(u8 taskId, const u8 *script);
static void DebugAction_ToggleFlag(u8 taskId);

static void DebugTask_HandleMenuInput_General(u8 taskId);

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_Util_Fly(u8 taskId);
static void DebugAction_Util_Warp_Warp(u8 taskId);
static void DebugAction_Util_Warp_SelectMapGroup(u8 taskId);
static void DebugAction_Util_Warp_SelectMap(u8 taskId);
static void DebugAction_Util_Warp_SelectWarp(u8 taskId);
<<<<<<< HEAD
static void DebugAction_FlagsVars_RunningShoes(u8 taskId);
static void DebugAction_Util_PoisonMons(u8 taskId);
static void DebugAction_Util_CheckSaveBlock(u8 taskId);
static void DebugAction_Util_Weather(u8 taskId);
static void DebugAction_Util_Weather_SelectId(u8 taskId);
static void DebugAction_Util_CheckWallClock(u8 taskId);
static void DebugAction_Util_SetWallClock(u8 taskId);
static void DebugAction_Util_WatchCredits(u8 taskId);
static void DebugAction_Util_Trainer_Name(u8 taskId);
static void DebugAction_Util_Trainer_Gender(u8 taskId);
static void DebugAction_Util_Trainer_Id(u8 taskId);
static void DebugAction_Util_CheatStart(u8 taskId);

=======
static void DebugAction_Util_Weather(u8 taskId);
static void DebugAction_Util_Weather_SelectId(u8 taskId);
static void DebugAction_Util_WatchCredits(u8 taskId);
static void DebugAction_Util_CheatStart(u8 taskId);

static void DebugAction_TimeMenu_ChangeTimeOfDay(u8 taskId);
static void DebugAction_TimeMenu_ChangeWeekdays(u8 taskId);

static void DebugAction_CreateFollowerNPC(u8 taskId);
static void DebugAction_DestroyFollowerNPC(u8 taskId);

static void DebugAction_PCBag_Fill_PCBoxes_Fast(u8 taskId);
static void DebugAction_PCBag_Fill_PCBoxes_Slow(u8 taskId);
static void DebugAction_PCBag_Fill_PCItemStorage(u8 taskId);
static void DebugAction_PCBag_Fill_PocketItems(u8 taskId);
static void DebugAction_PCBag_Fill_PocketPokeBalls(u8 taskId);
static void DebugAction_PCBag_Fill_PocketTMHM(u8 taskId);
static void DebugAction_PCBag_Fill_PocketBerries(u8 taskId);
static void DebugAction_PCBag_Fill_PocketKeyItems(u8 taskId);
static void DebugAction_PCBag_ClearBag(u8 taskId);
static void DebugAction_PCBag_ClearBoxes(u8 taskId);

static void DebugAction_Party_HealParty(u8 taskId);
static void DebugAction_Party_ClearParty(u8 taskId);
static void DebugAction_Party_SetParty(u8 taskId);
static void DebugAction_Party_BattleSingle(u8 taskId);

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_FlagsVars_Flags(u8 taskId);
static void DebugAction_FlagsVars_FlagsSelect(u8 taskId);
static void DebugAction_FlagsVars_Vars(u8 taskId);
static void DebugAction_FlagsVars_Select(u8 taskId);
static void DebugAction_FlagsVars_SetValue(u8 taskId);
static void DebugAction_FlagsVars_PokedexFlags_All(u8 taskId);
static void DebugAction_FlagsVars_PokedexFlags_Reset(u8 taskId);
<<<<<<< HEAD
static void DebugAction_FlagsVars_PokedexFlags_Seen(u8 taskId);
static void DebugAction_FlagsVars_SwitchDex(u8 taskId);
static void DebugAction_FlagsVars_SwitchNatDex(u8 taskId);
static void DebugAction_FlagsVars_SwitchPokeNav(u8 taskId);
static void DebugAction_FlagsVars_ToggleFlyFlags(u8 taskId);
static void DebugAction_FlagsVars_ToggleBadgeFlags(u8 taskId);
static void DebugAction_FlagsVars_ToggleFrontierPass(u8 taskId);
static void DebugAction_FlagsVars_BattleDmgOnOff(u8 taskId);
=======
static void DebugAction_FlagsVars_SwitchDex(u8 taskId);
static void DebugAction_FlagsVars_SwitchNatDex(u8 taskId);
static void DebugAction_FlagsVars_SwitchPokeNav(u8 taskId);
static void DebugAction_FlagsVars_SwitchMatchCall(u8 taskId);
static void DebugAction_FlagsVars_ToggleFlyFlags(u8 taskId);
static void DebugAction_FlagsVars_ToggleBadgeFlags(u8 taskId);
static void DebugAction_FlagsVars_ToggleGameClear(u8 taskId);
static void DebugAction_FlagsVars_ToggleFrontierPass(u8 taskId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_FlagsVars_CollisionOnOff(u8 taskId);
static void DebugAction_FlagsVars_EncounterOnOff(u8 taskId);
static void DebugAction_FlagsVars_TrainerSeeOnOff(u8 taskId);
static void DebugAction_FlagsVars_BagUseOnOff(u8 taskId);
static void DebugAction_FlagsVars_CatchingOnOff(u8 taskId);
<<<<<<< HEAD

static void Debug_InitializeBattle(u8 taskId);
=======
static void DebugAction_FlagsVars_RunningShoes(u8 taskId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

static void DebugAction_Give_Item(u8 taskId);
static void DebugAction_Give_Item_SelectId(u8 taskId);
static void DebugAction_Give_Item_SelectQuantity(u8 taskId);
<<<<<<< HEAD
static void DebugAction_Give_AllTMs(u8 taskId);
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_Give_PokemonSimple(u8 taskId);
static void DebugAction_Give_PokemonComplex(u8 taskId);
static void DebugAction_Give_Pokemon_SelectId(u8 taskId);
static void DebugAction_Give_Pokemon_SelectLevel(u8 taskId);
static void DebugAction_Give_Pokemon_SelectShiny(u8 taskId);
static void DebugAction_Give_Pokemon_SelectNature(u8 taskId);
static void DebugAction_Give_Pokemon_SelectAbility(u8 taskId);
<<<<<<< HEAD
static void DebugAction_Give_Pokemon_SelectIVs(u8 taskId);
static void DebugAction_Give_Pokemon_ComplexCreateMon(u8 taskId);
static void DebugAction_Give_Pokemon_Move(u8 taskId);
=======
static void DebugAction_Give_Pokemon_SelectTeraType(u8 taskId);
static void DebugAction_Give_Pokemon_SelectDynamaxLevel(u8 taskId);
static void DebugAction_Give_Pokemon_SelectGigantamaxFactor(u8 taskId);
static void DebugAction_Give_Pokemon_SelectIVs(u8 taskId);
static void DebugAction_Give_Pokemon_SelectEVs(u8 taskId);
static void DebugAction_Give_Pokemon_ComplexCreateMon(u8 taskId);
static void DebugAction_Give_Pokemon_Move(u8 taskId);
static void DebugAction_Give_Decoration(u8 taskId);
static void DebugAction_Give_Decoration_SelectId(u8 taskId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_Give_MaxMoney(u8 taskId);
static void DebugAction_Give_MaxCoins(u8 taskId);
static void DebugAction_Give_MaxBattlePoints(u8 taskId);
static void DebugAction_Give_DayCareEgg(u8 taskId);

<<<<<<< HEAD
static void DebugAction_PkmCreator_Party_Add(u8 taskid);
static void DebugAction_PkmCreator_Party_Edit(u8 taskid);
static void DebugAction_PkmCreator_PC_Edit(u8 taskid);
static void DebugAction_PkmCreator_Enemy_Party_Edit(u8 taskId);
static void DebugAction_PkmCreator_Enemy_Party_Edit_Debug(u8 taskId);
static void DebugAction_PkmCreator_Debug_Edit(u8 taskid);
static void DebugAction_PkmCreator_Enemy_Party_Add(u8 taskid);
static void DebugAction_PkmCreator_Testing(u8 taskid);
static void DebugAction_PkmCreator_Testing_Copy(u8 taskid); 

static void DebugAction_Fill_PCBoxes_Fast(u8 taskId);
static void DebugAction_Fill_PCBoxes_Slow(u8 taskId);
static void DebugAction_Fill_PCItemStorage(u8 taskId);
static void DebugAction_Fill_PocketItems(u8 taskId);
static void DebugAction_Fill_PocketPokeBalls(u8 taskId);
static void DebugAction_Fill_PocketTMHM(u8 taskId);
static void DebugAction_Fill_PocketBerries(u8 taskId);
static void DebugAction_Fill_PocketKeyItems(u8 taskId);

=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_Sound_SE(u8 taskId);
static void DebugAction_Sound_SE_SelectId(u8 taskId);
static void DebugAction_Sound_MUS(u8 taskId);
static void DebugAction_Sound_MUS_SelectId(u8 taskId);

<<<<<<< HEAD
static void DebugAction_HatchAnEgg(u8 taskId);

extern u8 Debug_Script_1[];
extern u8 Debug_Script_2[];
extern u8 Debug_Script_3[];
extern u8 Debug_Script_4[];
extern u8 Debug_Script_5[];
extern u8 Debug_Script_6[];
extern u8 Debug_Script_7[];
extern u8 Debug_Script_8[];
extern const u8 Debug_CheckSaveBlock[];
extern const u8 Debug_HatchAnEgg[];

extern u8 Debug_ShowFieldMessageStringVar4[];
extern u8 Debug_CheatStart[];
extern u8 PlayersHouse_2F_EventScript_SetWallClock[];
extern u8 PlayersHouse_2F_EventScript_CheckWallClock[];
#ifdef BATTLE_ENGINE
#define ABILITY_NAME_LENGTH 16
#else
#define ABILITY_NAME_LENGTH 12
#endif
extern const u8 gAbilityNames[][ABILITY_NAME_LENGTH + 1];


// *******************************
//Maps per map group COPY FROM /include/constants/map_groups.h
static const u8 MAP_GROUP_COUNT[] = {71, 5, 5, 6, 5, 29, 9, 10, 6, 6, 6, 5, 5, 7, 6, 9, 7, 18, 10, 12, 1, 7, 27, 28, 87, 0, 27, 126, 113, 126, 74, 97, 0};

// Text
// General
=======
static void DebugAction_BerryFunctions_ClearAll(u8 taskId);
static void DebugAction_BerryFunctions_Ready(u8 taskId);
static void DebugAction_BerryFunctions_NextStage(u8 taskId);
static void DebugAction_BerryFunctions_Pests(u8 taskId);
static void DebugAction_BerryFunctions_Weeds(u8 taskId);

static void DebugAction_Player_Name(u8 taskId);
static void DebugAction_Player_Gender(u8 taskId);
static void DebugAction_Player_Id(u8 taskId);

extern const u8 Debug_FlagsNotSetOverworldConfigMessage[];
extern const u8 Debug_FlagsNotSetBattleConfigMessage[];
extern const u8 Debug_FlagsAndVarNotSetBattleConfigMessage[];
extern const u8 Debug_EventScript_FontTest[];
extern const u8 Debug_EventScript_CheckEVs[];
extern const u8 Debug_EventScript_CheckIVs[];
extern const u8 Debug_EventScript_InflictStatus1[];
extern const u8 Debug_EventScript_SetHiddenNature[];
extern const u8 Debug_EventScript_Script_1[];
extern const u8 Debug_EventScript_Script_2[];
extern const u8 Debug_EventScript_Script_3[];
extern const u8 Debug_EventScript_Script_4[];
extern const u8 Debug_EventScript_Script_5[];
extern const u8 Debug_EventScript_Script_6[];
extern const u8 Debug_EventScript_Script_7[];
extern const u8 Debug_EventScript_Script_8[];
extern const u8 DebugScript_DaycareMonsNotCompatible[];
extern const u8 DebugScript_OneDaycareMons[];
extern const u8 DebugScript_ZeroDaycareMons[];

extern const u8 Debug_ShowFieldMessageStringVar4[];
extern const u8 Debug_CheatStart[];
extern const u8 Debug_HatchAnEgg[];
extern const u8 PlayersHouse_2F_EventScript_SetWallClock[];
extern const u8 PlayersHouse_2F_EventScript_CheckWallClock[];
extern const u8 Debug_CheckSaveBlock[];
extern const u8 Debug_CheckROMSpace[];
extern const u8 Debug_BoxFilledMessage[];
extern const u8 Debug_ShowExpansionVersion[];
extern const u8 Debug_EventScript_EWRAMCounters[];
extern const u8 Debug_Follower_NPC_Event_Script[];
extern const u8 Debug_Follower_NPC_Not_Enabled[];
extern const u8 Debug_EventScript_Steven_Multi[];
extern const u8 Debug_EventScript_PrintTimeOfDay[];
extern const u8 Debug_EventScript_TellTheTime[];
extern const u8 Debug_EventScript_FakeRTCNotEnabled[];

extern const u8 Debug_BerryPestsDisabled[];
extern const u8 Debug_BerryWeedsDisabled[];

extern const u8 FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon[];

#include "data/map_group_count.h"

// Text
// General
static const u8 sDebugText_Arrow[] =          _("{CLEAR_TO 110}{RIGHT_ARROW}");
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static const u8 sDebugText_True[] =          _("TRUE");
static const u8 sDebugText_False[] =         _("FALSE");
static const u8 sDebugText_Colored_True[] =  _("{COLOR GREEN}TRUE");
static const u8 sDebugText_Colored_False[] = _("{COLOR RED}FALSE");
static const u8 sDebugText_Dashes[] =        _("---");
static const u8 sDebugText_Empty[] =         _("");
<<<<<<< HEAD
static const u8 sDebugText_Continue[] =      _("Continue…{CLEAR_TO 110}{RIGHT_ARROW}");
// Main Menu
static const u8 sDebugText_Utilities[] =        _("Utilities…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Scripts[] =          _("Scripts…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_FlagsVars[] =        _("Flags & Vars…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Battle[] =           _("Battle Test…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Give[] =             _("Give X…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_PkmCreator[] =       _("Pokémon Creator…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Fill[] =             _("Fill PC/Pockets…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Sound[] =            _("Sound…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_AccessPC[] =         _("Access PC…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Cancel[] =           _("Cancel");
// Script menu
static const u8 sDebugText_Util_Script_1[] =               _("Open Challenges Menu");
static const u8 sDebugText_Util_Script_2[] =               _("Grow Berry Tree");
static const u8 sDebugText_Util_Script_3[] =               _("Script 3 (Empty)");
static const u8 sDebugText_Util_Script_4[] =               _("Script 4 (Empty)");
static const u8 sDebugText_Util_Script_5[] =               _("Script 5 (Empty)");
static const u8 sDebugText_Util_Script_6[] =               _("Script 6 (Empty)");
static const u8 sDebugText_Util_Script_7[] =               _("Script 7 (Empty)");
static const u8 sDebugText_Util_Script_8[] =               _("Script 8 (Empty)");
// Util Menu
static const u8 sDebugText_Util_HealParty[] =               _("Heal Party");
static const u8 sDebugText_Util_Fly[] =                     _("Fly to map…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Util_WarpToMap[] =               _("Warp to map warp…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Util_WarpToMap_SelectMapGroup[] =_("Group: {STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n\n{STR_VAR_3}{CLEAR_TO 90}");
static const u8 sDebugText_Util_WarpToMap_SelectMap[] =     _("Map: {STR_VAR_1}{CLEAR_TO 90}\nMapSec:{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}\n{STR_VAR_3}{CLEAR_TO 90}");
static const u8 sDebugText_Util_WarpToMap_SelectWarp[] =    _("Warp:{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_3}{CLEAR_TO 90}");
static const u8 sDebugText_Util_WarpToMap_SelMax[] =        _("{STR_VAR_1} / {STR_VAR_2}");
static const u8 sDebugText_Util_PoisonMons[] =              _("Poison all mons");
static const u8 sDebugText_Util_SaveBlockSpace[] =          _("SaveBlock Space…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Util_Weather[] =                 _("Set weather…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Util_Weather_ID[] =              _("Weather Id: {STR_VAR_3}\n{STR_VAR_1}\n{STR_VAR_2}");
static const u8 sDebugText_Util_CheckWallClock[] =          _("Check Wall Clock…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Util_SetWallClock[] =            _("Set Wall Clock…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Util_WatchCredits[] =            _("Watch Credits…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Util_Trainer_Name[] =            _("Trainer name");
static const u8 sDebugText_Util_Trainer_Gender[] =          _("Toggle T. Gender");
static const u8 sDebugText_Util_Trainer_Id[] =              _("New Trainer Id");
static const u8 sDebugText_Util_CheatStart[] =              _("CHEAT Start");
// Flags/Vars Menu
static const u8 sDebugText_FlagsVars_Flags[] =                  _("Set Flag XYZ…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_FlagsVars_Flag[] =                   _("Flag: {STR_VAR_1}{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}\n{STR_VAR_3}");
static const u8 sDebugText_FlagsVars_FlagHex[] =                _("{STR_VAR_1}{CLEAR_TO 90}\n0x{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_FlagsVars_Vars[] =                   _("Set Var XYZ…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_FlagsVars_VariableHex[] =            _("{STR_VAR_1}{CLEAR_TO 90}\n0x{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_FlagsVars_Variable[] =               _("Var: {STR_VAR_1}{CLEAR_TO 90}\nVal: {STR_VAR_3}{CLEAR_TO 90}\n{STR_VAR_2}");
static const u8 sDebugText_FlagsVars_VariableValueSet[] =       _("Var: {STR_VAR_1}{CLEAR_TO 90}\nVal: {STR_VAR_3}{CLEAR_TO 90}\n{STR_VAR_2}");
static const u8 sDebugText_FlagsVars_PokedexFlags_All[] =       _("Pokédex Flags All");
static const u8 sDebugText_FlagsVars_PokedexFlags_Reset[] =     _("Pokédex Flags Reset");
static const u8 sDebugText_FlagsVars_PokedexFlags_Seen[] =       _("Pokédex Flags Seen");
static const u8 sDebugText_FlagsVars_SwitchDex[] =              _("Toggle {STR_VAR_1}Pokédex");
static const u8 sDebugText_FlagsVars_SwitchNationalDex[] =      _("Toggle {STR_VAR_1}NatDex");
static const u8 sDebugText_FlagsVars_SwitchPokeNav[] =          _("Toggle {STR_VAR_1}PokéNav");
static const u8 sDebugText_FlagsVars_RunningShoes[] =           _("Toggle {STR_VAR_1}Running Shoes");
static const u8 sDebugText_FlagsVars_ToggleFlyFlags[] =         _("Toggle {STR_VAR_1}Fly Flags");
static const u8 sDebugText_FlagsVars_ToggleAllBadges[] =        _("Toggle {STR_VAR_1}All badges");
static const u8 sDebugText_FlagsVars_ToggleFrontierPass[] =     _("Toggle {STR_VAR_1}Frontier Pass");
static const u8 sDebugText_FlagsVars_BattleDmg[] =              _("Toggle {STR_VAR_1}BattleDmg OFF");
static const u8 sDebugText_FlagsVars_SwitchCollision[] =        _("Toggle {STR_VAR_1}Collision OFF");
static const u8 sDebugText_FlagsVars_SwitchEncounter[] =        _("Toggle {STR_VAR_1}Encounter OFF");
static const u8 sDebugText_FlagsVars_SwitchTrainerSee[] =       _("Toggle {STR_VAR_1}TrainerSee OFF");
static const u8 sDebugText_FlagsVars_SwitchBagUse[] =           _("Toggle {STR_VAR_1}BagUse OFF");
static const u8 sDebugText_FlagsVars_SwitchCatching[] =         _("Toggle {STR_VAR_1}Catching OFF");
// Battle
static const u8 sDebugText_Battle_0_Wild[] =        _("Wild…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Battle_0_WildDouble[] =  _("Wild Double…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Battle_0_Single[] =      _("Single…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Battle_0_Double[] =      _("Double…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Battle_0_Mulit[] =       _("Multi…{CLEAR_TO 110}{RIGHT_ARROW}");
#ifndef BATTLE_ENGINE
static const u8 sDebugText_Battle_1_AIFlag_00[] =   _("{STR_VAR_1}Check bad move");
static const u8 sDebugText_Battle_1_AIFlag_01[] =   _("{STR_VAR_1}Try to faint");
static const u8 sDebugText_Battle_1_AIFlag_02[] =   _("{STR_VAR_1}Check viability");
static const u8 sDebugText_Battle_1_AIFlag_03[] =   _("{STR_VAR_1}Setup first turn");
static const u8 sDebugText_Battle_1_AIFlag_04[] =   _("{STR_VAR_1}Risky");
static const u8 sDebugText_Battle_1_AIFlag_05[] =   _("{STR_VAR_1}Prefer power extremes");
static const u8 sDebugText_Battle_1_AIFlag_06[] =   _("{STR_VAR_1}Prefer baton pass");
static const u8 sDebugText_Battle_1_AIFlag_07[] =   _("{STR_VAR_1}Double battle");
static const u8 sDebugText_Battle_1_AIFlag_08[] =   _("{STR_VAR_1}Hp aware");
static const u8 sDebugText_Battle_1_AIFlag_09[] =   _("{STR_VAR_1}Try sunny day start");
#else
static const u8 sDebugText_Battle_1_AIFlag_00[] =   _("{STR_VAR_1}Check bad move");
static const u8 sDebugText_Battle_1_AIFlag_01[] =   _("{STR_VAR_1}Try to faint");
static const u8 sDebugText_Battle_1_AIFlag_02[] =   _("{STR_VAR_1}Check viability");
static const u8 sDebugText_Battle_1_AIFlag_03[] =   _("{STR_VAR_1}Setup first turn");
static const u8 sDebugText_Battle_1_AIFlag_04[] =   _("{STR_VAR_1}Risky");
static const u8 sDebugText_Battle_1_AIFlag_05[] =   _("{STR_VAR_1}Prefer strongest move");
static const u8 sDebugText_Battle_1_AIFlag_06[] =   _("{STR_VAR_1}Prefer baton pass");
static const u8 sDebugText_Battle_1_AIFlag_07[] =   _("{STR_VAR_1}Double battle");
static const u8 sDebugText_Battle_1_AIFlag_08[] =   _("{STR_VAR_1}Hp aware");
static const u8 sDebugText_Battle_1_AIFlag_09[] =   _("{STR_VAR_1}Negate unaware");
static const u8 sDebugText_Battle_1_AIFlag_10[] =   _("{STR_VAR_1}Will suicide");
static const u8 sDebugText_Battle_1_AIFlag_11[] =   _("{STR_VAR_1}Help partner");
static const u8 sDebugText_Battle_1_AIFlag_12[] =   _("{STR_VAR_1}Prefer status moves");
static const u8 sDebugText_Battle_1_AIFlag_13[] =   _("{STR_VAR_1}Stall");
static const u8 sDebugText_Battle_1_AIFlag_14[] =   _("{STR_VAR_1}Screener");
static const u8 sDebugText_Battle_1_AIFlag_15[] =   _("{STR_VAR_1}Smart switching");
static const u8 sDebugText_Battle_1_AIFlag_16[] =   _("{STR_VAR_1}Ace pokemon");
#endif
static const u8 sDebugText_Battle_2_Terrain_0[] =   _("Grass…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Battle_2_Terrain_1[] =   _("Long grass…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Battle_2_Terrain_2[] =   _("Sand…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Battle_2_Terrain_3[] =   _("Underwater…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Battle_2_Terrain_4[] =   _("Water…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Battle_2_Terrain_5[] =   _("Pond…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Battle_2_Terrain_6[] =   _("Mountain…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Battle_2_Terrain_7[] =   _("Cave…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Battle_2_Terrain_8[] =   _("Building…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Battle_2_Terrain_9[] =   _("Plain…{CLEAR_TO 110}{RIGHT_ARROW}");
// Give Menu
static const u8 sDebugText_Give_GiveItem[] =            _("Give item XYZ…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_ItemQuantity[] =             _("Quantity:{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n\n{STR_VAR_2}");
static const u8 sDebugText_ItemID[] =                   _("Item Id: {STR_VAR_3}\n{STR_VAR_1}{CLEAR_TO 90}\n\n{STR_VAR_2}");
static const u8 sDebugText_Give_AllTMs[] =              _("Give all TMs");
static const u8 sDebugText_Give_GivePokemonSimple[] =   _("Pkm (lvl)…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Give_GivePokemonComplex[] =  _("Pkm (l,s,n,a,IV,mov)…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_PokemonID[] =                _("Species: {STR_VAR_3}\n{STR_VAR_1}{CLEAR_TO 90}\n\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_PokemonLevel[] =             _("Level:{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_PokemonShiny[] =             _("Shiny:{CLEAR_TO 90}\n   {STR_VAR_2}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{CLEAR_TO 90}");
static const u8 sDebugText_PokemonNature[] =            _("NatureId: {STR_VAR_3}{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_PokemonAbility[] =           _("AbilityNum: {STR_VAR_3}{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_PokemonIVs[] =               _("All IVs:{CLEAR_TO 90}\n    {STR_VAR_3}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_PokemonIV_0[] =              _("IV HP:{CLEAR_TO 90}\n    {STR_VAR_3}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_PokemonIV_1[] =              _("IV Attack:{CLEAR_TO 90}\n    {STR_VAR_3}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_PokemonIV_2[] =              _("IV Defense:{CLEAR_TO 90}\n    {STR_VAR_3}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_PokemonIV_3[] =              _("IV Speed:{CLEAR_TO 90}\n    {STR_VAR_3}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_PokemonIV_4[] =              _("IV Sp. Attack:{CLEAR_TO 90}\n    {STR_VAR_3}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_PokemonIV_5[] =              _("IV Sp. Defense:{CLEAR_TO 90}\n    {STR_VAR_3}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_PokemonMove_0[] =            _("Move 0: {STR_VAR_3}{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_PokemonMove_1[] =            _("Move 1: {STR_VAR_3}{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_PokemonMove_2[] =            _("Move 2: {STR_VAR_3}{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_PokemonMove_3[] =            _("Move 3: {STR_VAR_3}{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_Give_MaxMoney[] =            _("Max Money");
static const u8 sDebugText_Give_MaxCoins[] =            _("Max Coins");
static const u8 sDebugText_Give_BattlePoints[] =        _("Max Battle Points");
static const u8 sDebugText_Give_DaycareEgg[] =          _("Daycare Egg");
// Pokemon Creator
static const u8 sDebugText_PkmCreator_Party_Add[] =                 _("Party add");
static const u8 sDebugText_PkmCreator_Party_Edit[] =                _("Party edit");
static const u8 sDebugText_PkmCreator_PC_Edit[] =                   _("PC edit");
static const u8 sDebugText_PkmCreator_Enemy_Party_Edit[] =          _("Enemy edit");
static const u8 sDebugText_PkmCreator_Enemy_Party_Edit_Debug[] =    _("Enemy edit debug");
static const u8 sDebugText_PkmCreator_Debug_Edit[] =                _("Debug edit");
static const u8 sDebugText_PkmCreator_Enemy_Party_Add[] =           _("Enemy add");
static const u8 sDebugText_PkmCreator_Testing[] =                   _("Testing");
static const u8 sDebugText_PkmCreator_Testing_Copy[] =              _("Testing (copy 1st mon)");
// Fill Menu
static const u8 sDebugText_Fill_Pc_Fast[] =        _("Fill PCBoxes Fast");
static const u8 sDebugText_Fill_Pc_Slow[] =        _("Fill PCBoxes Slow (LAG!)");
static const u8 sDebugText_Fill_Pc_Items[] =       _("Fill PCItems");
static const u8 sDebugText_Fill_PocketItems[] =    _("Fill Pocket Items");
static const u8 sDebugText_Fill_PocketPokeBalls[] =_("Fill Pocket PokeBalls");
static const u8 sDebugText_Fill_PocketTMHM[] =     _("Fill Pocket TMHM");
static const u8 sDebugText_Fill_PocketBerries[] =  _("Fill Pocket Berries");
static const u8 sDebugText_Fill_PocketKeyItems[] = _("Fill Pocket KeyItems");
// Sound Mneu
static const u8 sDebugText_Sound_SE[] =                 _("Effects…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Sound_SE_ID[] =              _("Sound Id: {STR_VAR_3}\n{STR_VAR_1}    \n{STR_VAR_2}");
static const u8 sDebugText_Sound_MUS[] =                _("Music…{CLEAR_TO 110}{RIGHT_ARROW}");
static const u8 sDebugText_Sound_MUS_ID[] =             _("Music Id: {STR_VAR_3}\n{STR_VAR_1}    \n{STR_VAR_2}");

static const u8 sDebugText_PartyBoxes_HatchAnEgg[] =         _("Hatch an Egg");

static const u8 digitInidicator_1[] =               _("{LEFT_ARROW}+1{RIGHT_ARROW}        ");
static const u8 digitInidicator_10[] =              _("{LEFT_ARROW}+10{RIGHT_ARROW}       ");
static const u8 digitInidicator_100[] =             _("{LEFT_ARROW}+100{RIGHT_ARROW}      ");
static const u8 digitInidicator_1000[] =            _("{LEFT_ARROW}+1000{RIGHT_ARROW}     ");
static const u8 digitInidicator_10000[] =           _("{LEFT_ARROW}+10000{RIGHT_ARROW}    ");
static const u8 digitInidicator_100000[] =          _("{LEFT_ARROW}+100000{RIGHT_ARROW}   ");
static const u8 digitInidicator_1000000[] =         _("{LEFT_ARROW}+1000000{RIGHT_ARROW}  ");
static const u8 digitInidicator_10000000[] =        _("{LEFT_ARROW}+10000000{RIGHT_ARROW} ");
const u8 * const gText_DigitIndicator[] =
{
    digitInidicator_1,
    digitInidicator_10,
    digitInidicator_100,
    digitInidicator_1000,
    digitInidicator_10000,
    digitInidicator_100000,
    digitInidicator_1000000,
    digitInidicator_10000000
};
=======
static const u8 sDebugText_Continue[] =      _("Continue…");
// Util Menu
static const u8 sDebugText_Util_WarpToMap_SelectMapGroup[] = _("Group: {STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n\n{STR_VAR_3}{CLEAR_TO 90}");
static const u8 sDebugText_Util_WarpToMap_SelectMap[] =      _("Map: {STR_VAR_1}{CLEAR_TO 90}\nMapSec:{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}\n{STR_VAR_3}{CLEAR_TO 90}");
static const u8 sDebugText_Util_WarpToMap_SelectWarp[] =     _("Warp:{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_3}{CLEAR_TO 90}");
static const u8 sDebugText_Util_WarpToMap_SelMax[] =         _("{STR_VAR_1} / {STR_VAR_2}");
static const u8 sDebugText_Util_Weather_ID[] =               _("Weather ID: {STR_VAR_3}\n{STR_VAR_1}\n{STR_VAR_2}");

//Time Menu

static const u8 *const gDayNameStringsTable[WEEKDAY_COUNT] = {
    COMPOUND_STRING("Sunday"),
    COMPOUND_STRING("Monday"),
    COMPOUND_STRING("Tuesday"),
    COMPOUND_STRING("Wednesday"),
    COMPOUND_STRING("Thursday"),
    COMPOUND_STRING("Friday"),
    COMPOUND_STRING("Saturday"),
};

static const u8 *const gTimeOfDayStringsTable[TIMES_OF_DAY_COUNT] = {
    COMPOUND_STRING("Morning"),
    COMPOUND_STRING("Day"),
    COMPOUND_STRING("Evening"),
    COMPOUND_STRING("Night"),
};

// Follower NPC

static const u8 *const gFollowerNPCStringsTable[DEBUG_FNPC_COUNT] = {
    COMPOUND_STRING("Brendan"),
    COMPOUND_STRING("May"),
    COMPOUND_STRING("Steven"),
    COMPOUND_STRING("Wally"),
    COMPOUND_STRING("Red"),
    COMPOUND_STRING("Leaf"),
};

// Flags/Vars Menu
static const u8 sDebugText_FlagsVars_VariableHex[] =         _("{STR_VAR_1}{CLEAR_TO 90}\n0x{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_FlagsVars_Variable[] =            _("Var: {STR_VAR_1}{CLEAR_TO 90}\nVal: {STR_VAR_3}{CLEAR_TO 90}\n{STR_VAR_2}");
static const u8 sDebugText_FlagsVars_VariableValueSet[] =    _("Var: {STR_VAR_1}{CLEAR_TO 90}\nVal: {STR_VAR_3}{CLEAR_TO 90}\n{STR_VAR_2}");
// Give Menu
static const u8 sDebugText_PokemonShiny[] =             _("Shiny:{CLEAR_TO 90}\n   {STR_VAR_2}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{CLEAR_TO 90}");
static const u8 sDebugText_IVs[] =                      _("IV {STR_VAR_1}:{CLEAR_TO 90}\n    {STR_VAR_3}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
static const u8 sDebugText_EVs[] =                      _("EV {STR_VAR_1}:{CLEAR_TO 90}\n    {STR_VAR_3}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}");
// Sound Menu
static const u8 sDebugText_Sound_SFX_ID[] =             _("SFX ID: {STR_VAR_3}   {START_BUTTON} Stop\n{STR_VAR_1}    \n{STR_VAR_2}");
static const u8 sDebugText_Sound_Music_ID[] =           _("Music ID: {STR_VAR_3}   {START_BUTTON} Stop\n{STR_VAR_1}    \n{STR_VAR_2}");

const u8 *const gText_DigitIndicator[] =
{
    COMPOUND_STRING("{LEFT_ARROW}+1{RIGHT_ARROW}        "),
    COMPOUND_STRING("{LEFT_ARROW}+10{RIGHT_ARROW}       "),
    COMPOUND_STRING("{LEFT_ARROW}+100{RIGHT_ARROW}      "),
    COMPOUND_STRING("{LEFT_ARROW}+1000{RIGHT_ARROW}     "),
    COMPOUND_STRING("{LEFT_ARROW}+10000{RIGHT_ARROW}    "),
    COMPOUND_STRING("{LEFT_ARROW}+100000{RIGHT_ARROW}   "),
    COMPOUND_STRING("{LEFT_ARROW}+1000000{RIGHT_ARROW}  "),
    COMPOUND_STRING("{LEFT_ARROW}+10000000{RIGHT_ARROW} "),
};

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static const s32 sPowersOfTen[] =
{
             1,
            10,
           100,
          1000,
         10000,
        100000,
       1000000,
      10000000,
     100000000,
    1000000000,
};

// *******************************
<<<<<<< HEAD
// List Menu Items
static const struct ListMenuItem sDebugMenu_Items_Main[] =
{
    [DEBUG_MENU_ITEM_UTILITIES]       = {sDebugText_Utilities,  DEBUG_MENU_ITEM_UTILITIES},
    [DEBUG_MENU_ITEM_SCRIPTS]         = {sDebugText_Scripts,    DEBUG_MENU_ITEM_SCRIPTS},
    [DEBUG_MENU_ITEM_FLAGVAR]         = {sDebugText_FlagsVars,  DEBUG_MENU_ITEM_FLAGVAR},
    [DEBUG_MENU_ITEM_BATTLE]          = {sDebugText_Battle,     DEBUG_MENU_ITEM_BATTLE},
    [DEBUG_MENU_ITEM_GIVE]            = {sDebugText_Give,       DEBUG_MENU_ITEM_GIVE},
    [DEBUG_MENU_ITEM_POKEMON_CREATOR] = {sDebugText_PkmCreator, DEBUG_MENU_ITEM_POKEMON_CREATOR},
    [DEBUG_MENU_ITEM_FILL]            = {sDebugText_Fill,       DEBUG_MENU_ITEM_FILL},
    [DEBUG_MENU_ITEM_SOUND]           = {sDebugText_Sound,      DEBUG_MENU_ITEM_SOUND},
    [DEBUG_MENU_ITEM_ACCESS_PC]       = {sDebugText_AccessPC,   DEBUG_MENU_ITEM_ACCESS_PC},
    [DEBUG_MENU_ITEM_CANCEL]          = {sDebugText_Cancel,     DEBUG_MENU_ITEM_CANCEL}
};
static const struct ListMenuItem sDebugMenu_Items_Utilities[] =
{
    [DEBUG_UTIL_MENU_ITEM_HEAL_PARTY]       = {sDebugText_Util_HealParty,        DEBUG_UTIL_MENU_ITEM_HEAL_PARTY},
    [DEBUG_UTIL_MENU_ITEM_FLY]              = {sDebugText_Util_Fly,              DEBUG_UTIL_MENU_ITEM_FLY},
    [DEBUG_UTIL_MENU_ITEM_WARP]             = {sDebugText_Util_WarpToMap,        DEBUG_UTIL_MENU_ITEM_WARP},
    [DEBUG_UTIL_MENU_ITEM_POISON_MONS]      = {sDebugText_Util_PoisonMons,       DEBUG_UTIL_MENU_ITEM_POISON_MONS},
    [DEBUG_UTIL_MENU_ITEM_SAVEBLOCK]        = {sDebugText_Util_SaveBlockSpace,   DEBUG_UTIL_MENU_ITEM_SAVEBLOCK},
    [DEBUG_UTIL_MENU_ITEM_WEATHER]          = {sDebugText_Util_Weather,          DEBUG_UTIL_MENU_ITEM_WEATHER},
    [DEBUG_UTIL_MENU_ITEM_CHECKWALLCLOCK]   = {sDebugText_Util_CheckWallClock,   DEBUG_UTIL_MENU_ITEM_CHECKWALLCLOCK},
    [DEBUG_UTIL_MENU_ITEM_SETWALLCLOCK]     = {sDebugText_Util_SetWallClock,     DEBUG_UTIL_MENU_ITEM_SETWALLCLOCK},
    [DEBUG_UTIL_MENU_ITEM_WATCHCREDITS]     = {sDebugText_Util_WatchCredits,     DEBUG_UTIL_MENU_ITEM_WATCHCREDITS},
    [DEBUG_UTIL_MENU_ITEM_TRAINER_NAME]     = {sDebugText_Util_Trainer_Name,     DEBUG_UTIL_MENU_ITEM_TRAINER_NAME},
    [DEBUG_UTIL_MENU_ITEM_TRAINER_GENDER]   = {sDebugText_Util_Trainer_Gender,   DEBUG_UTIL_MENU_ITEM_TRAINER_GENDER},
    [DEBUG_UTIL_MENU_ITEM_TRAINER_ID]       = {sDebugText_Util_Trainer_Id,       DEBUG_UTIL_MENU_ITEM_TRAINER_ID},
    [DEBUG_UTIL_MENU_ITEM_CHEAT]            = {sDebugText_Util_CheatStart,        DEBUG_UTIL_MENU_ITEM_CHEAT},
};
static const struct ListMenuItem sDebugMenu_Items_Scripts[] =
{
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_1]     = {sDebugText_Util_Script_1,    DEBUG_UTIL_MENU_ITEM_SCRIPT_1},
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_2]     = {sDebugText_Util_Script_2,    DEBUG_UTIL_MENU_ITEM_SCRIPT_2},
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_3]     = {sDebugText_Util_Script_3,    DEBUG_UTIL_MENU_ITEM_SCRIPT_3},
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_4]     = {sDebugText_Util_Script_4,    DEBUG_UTIL_MENU_ITEM_SCRIPT_4},
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_5]     = {sDebugText_Util_Script_5,    DEBUG_UTIL_MENU_ITEM_SCRIPT_5},
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_6]     = {sDebugText_Util_Script_6,    DEBUG_UTIL_MENU_ITEM_SCRIPT_6},
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_7]     = {sDebugText_Util_Script_7,    DEBUG_UTIL_MENU_ITEM_SCRIPT_7},
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_8]     = {sDebugText_Util_Script_8,    DEBUG_UTIL_MENU_ITEM_SCRIPT_8},
};
static const struct ListMenuItem sDebugMenu_Items_FlagsVars[] =
{
    [DEBUG_FLAGVAR_MENU_ITEM_FLAGS]                = {sDebugText_FlagsVars_Flags,              DEBUG_FLAGVAR_MENU_ITEM_FLAGS},
    [DEBUG_FLAGVAR_MENU_ITEM_VARS]                 = {sDebugText_FlagsVars_Vars,               DEBUG_FLAGVAR_MENU_ITEM_VARS},
    [DEBUG_FLAGVAR_MENU_ITEM_DEXFLAGS_ALL]         = {sDebugText_FlagsVars_PokedexFlags_All,   DEBUG_FLAGVAR_MENU_ITEM_DEXFLAGS_ALL},
    [DEBUG_FLAGVAR_MENU_ITEM_DEXFLAGS_RESET]       = {sDebugText_FlagsVars_PokedexFlags_Reset, DEBUG_FLAGVAR_MENU_ITEM_DEXFLAGS_RESET},
    [DEBUG_FLAGVAR_MENU_ITEM_DEXFLAGS_SEEN]        = {sDebugText_FlagsVars_PokedexFlags_Seen,  DEBUG_FLAGVAR_MENU_ITEM_DEXFLAGS_SEEN},
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_POKEDEX]       = {sDebugText_FlagsVars_SwitchDex,          DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_POKEDEX},
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_NATDEX]        = {sDebugText_FlagsVars_SwitchNationalDex,  DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_NATDEX},
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_POKENAV]       = {sDebugText_FlagsVars_SwitchPokeNav,      DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_POKENAV},
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_RUN_SHOES]     = {sDebugText_FlagsVars_RunningShoes,       DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_RUN_SHOES},
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_LOCATIONS]     = {sDebugText_FlagsVars_ToggleFlyFlags,     DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_LOCATIONS},
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BADGES_ALL]    = {sDebugText_FlagsVars_ToggleAllBadges,    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BADGES_ALL},
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_FRONTIER_PASS] = {sDebugText_FlagsVars_ToggleFrontierPass, DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_FRONTIER_PASS},
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BATTLE_DMG]    = {sDebugText_FlagsVars_BattleDmg,          DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BATTLE_DMG},
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_COLISSION]     = {sDebugText_FlagsVars_SwitchCollision,    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_COLISSION},
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_ENCOUNTER]     = {sDebugText_FlagsVars_SwitchEncounter,    DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_ENCOUNTER},
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_TRAINER_SEE]   = {sDebugText_FlagsVars_SwitchTrainerSee,   DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_TRAINER_SEE},
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BAG_USE]       = {sDebugText_FlagsVars_SwitchBagUse,       DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BAG_USE},
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_CATCHING]      = {sDebugText_FlagsVars_SwitchCatching,     DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_CATCHING},
};
static const struct ListMenuItem sDebugMenu_Items_Battle_0[] =
{
    [DEBUG_BATTLE_0_MENU_ITEM_WILD]        = {sDebugText_Battle_0_Wild,       DEBUG_BATTLE_0_MENU_ITEM_WILD},
    #ifdef BATTLE_ENGINE
    [DEBUG_BATTLE_0_MENU_ITEM_WILD_DOUBLE] = {sDebugText_Battle_0_WildDouble, DEBUG_BATTLE_0_MENU_ITEM_WILD_DOUBLE},
    #endif
    [DEBUG_BATTLE_0_MENU_ITEM_SINGLE]      = {sDebugText_Battle_0_Single,     DEBUG_BATTLE_0_MENU_ITEM_SINGLE},
    [DEBUG_BATTLE_0_MENU_ITEM_DOUBLE]      = {sDebugText_Battle_0_Double,     DEBUG_BATTLE_0_MENU_ITEM_DOUBLE},
    [DEBUG_BATTLE_0_MENU_ITEM_MULTI]       = {sDebugText_Battle_0_Mulit,      DEBUG_BATTLE_0_MENU_ITEM_MULTI},
};
static const struct ListMenuItem sDebugMenu_Items_Battle_1[] =
{
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_00] = {sDebugText_Battle_1_AIFlag_00, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_00},
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_01] = {sDebugText_Battle_1_AIFlag_01, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_01},
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_02] = {sDebugText_Battle_1_AIFlag_02, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_02},
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_03] = {sDebugText_Battle_1_AIFlag_03, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_03},
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_04] = {sDebugText_Battle_1_AIFlag_04, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_04},
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_05] = {sDebugText_Battle_1_AIFlag_05, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_05},
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_06] = {sDebugText_Battle_1_AIFlag_06, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_06},
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_07] = {sDebugText_Battle_1_AIFlag_07, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_07},
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_08] = {sDebugText_Battle_1_AIFlag_08, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_08},
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_09] = {sDebugText_Battle_1_AIFlag_09, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_09},
#ifdef BATTLE_ENGINE
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_10] = {sDebugText_Battle_1_AIFlag_10, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_10},
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_11] = {sDebugText_Battle_1_AIFlag_11, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_11},
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_12] = {sDebugText_Battle_1_AIFlag_12, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_12},
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_13] = {sDebugText_Battle_1_AIFlag_13, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_13},
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_14] = {sDebugText_Battle_1_AIFlag_14, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_14},
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_15] = {sDebugText_Battle_1_AIFlag_15, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_15},
    [DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_16] = {sDebugText_Battle_1_AIFlag_16, DEBUG_BATTLE_1_MENU_ITEM_AI_FLAG_16},
#endif
    [DEBUG_BATTLE_1_MENU_ITEM_CONTINUE]   = {sDebugText_Continue,           DEBUG_BATTLE_1_MENU_ITEM_CONTINUE},
};
static const struct ListMenuItem sDebugMenu_Items_Battle_2[] =
{
    [DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_0]     = {sDebugText_Battle_2_Terrain_0,    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_0},
    [DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_1]     = {sDebugText_Battle_2_Terrain_1,    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_1},
    [DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_2]     = {sDebugText_Battle_2_Terrain_2,    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_2},
    [DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_3]     = {sDebugText_Battle_2_Terrain_3,    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_3},
    [DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_4]     = {sDebugText_Battle_2_Terrain_4,    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_4},
    [DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_5]     = {sDebugText_Battle_2_Terrain_5,    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_5},
    [DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_6]     = {sDebugText_Battle_2_Terrain_6,    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_6},
    [DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_7]     = {sDebugText_Battle_2_Terrain_7,    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_7},
    [DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_8]     = {sDebugText_Battle_2_Terrain_8,    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_8},
    [DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_9]     = {sDebugText_Battle_2_Terrain_9,    DEBUG_BATTLE_2_MENU_ITEM_TERRAIN_9},
};
static const struct ListMenuItem sDebugMenu_Items_Give[] =
{
    [DEBUG_GIVE_MENU_ITEM_ITEM_X]            = {sDebugText_Give_GiveItem,           DEBUG_GIVE_MENU_ITEM_ITEM_X},
    [DEBUG_GIVE_MENU_ITEM_ALLTMS]            = {sDebugText_Give_AllTMs,             DEBUG_GIVE_MENU_ITEM_ALLTMS},
    [DEBUG_GIVE_MENU_ITEM_POKEMON_SIMPLE]    = {sDebugText_Give_GivePokemonSimple,  DEBUG_GIVE_MENU_ITEM_POKEMON_SIMPLE},
    [DEBUG_GIVE_MENU_ITEM_POKEMON_COMPLEX]   = {sDebugText_Give_GivePokemonComplex, DEBUG_GIVE_MENU_ITEM_POKEMON_COMPLEX},
    [DEBUG_GIVE_MENU_ITEM_MAX_MONEY]         = {sDebugText_Give_MaxMoney,           DEBUG_GIVE_MENU_ITEM_MAX_MONEY},
    [DEBUG_GIVE_MENU_ITEM_MAX_COINS]         = {sDebugText_Give_MaxCoins,           DEBUG_GIVE_MENU_ITEM_MAX_COINS},
    [DEBUG_GIVE_MENU_ITEM_MAX_BATTLE_POINTS] = {sDebugText_Give_BattlePoints,       DEBUG_GIVE_MENU_ITEM_MAX_BATTLE_POINTS},
    [DEBUG_GIVE_MENU_ITEM_DAYCARE_EGG]       = {sDebugText_Give_DaycareEgg,         DEBUG_GIVE_MENU_ITEM_DAYCARE_EGG},
    [DEBUG_GIVE_MENU_ITEM_HATCH_AN_EGG]      = {sDebugText_PartyBoxes_HatchAnEgg,   DEBUG_GIVE_MENU_ITEM_HATCH_AN_EGG},
};
static const struct ListMenuItem sDebugMenu_Items_PkmCreator[] =
{
    [DEBUG_PKM_CREATOR_MENU_ITEM_PARTY_ADD]              =  {sDebugText_PkmCreator_Party_Add,              DEBUG_PKM_CREATOR_MENU_ITEM_PARTY_ADD},
    [DEBUG_PKM_CREATOR_MENU_ITEM_PARTY_EDIT]             =  {sDebugText_PkmCreator_Party_Edit,             DEBUG_PKM_CREATOR_MENU_ITEM_PARTY_EDIT},
    [DEBUG_PKM_CREATOR_MENU_ITEM_PC_EDIT]                =  {sDebugText_PkmCreator_PC_Edit,                DEBUG_PKM_CREATOR_MENU_ITEM_PC_EDIT},
    [DEBUG_PKM_CREATOR_MENU_ITEM_ENEMY_PARTY_EDIT]       =  {sDebugText_PkmCreator_Enemy_Party_Edit,       DEBUG_PKM_CREATOR_MENU_ITEM_ENEMY_PARTY_EDIT},
    [DEBUG_PKM_CREATOR_MENU_ITEM_ENEMY_PARTY_EDIT_DEBUG] =  {sDebugText_PkmCreator_Enemy_Party_Edit_Debug, DEBUG_PKM_CREATOR_MENU_ITEM_ENEMY_PARTY_EDIT_DEBUG},
    [DEBUG_PKM_CREATOR_MENU_ITEM_DEBUG_EDIT]             =  {sDebugText_PkmCreator_Debug_Edit,             DEBUG_PKM_CREATOR_MENU_ITEM_DEBUG_EDIT},
    [DEBUG_PKM_CREATOR_MENU_ITEM_ENEMY_PARTY_ADD]        =  {sDebugText_PkmCreator_Enemy_Party_Add,        DEBUG_PKM_CREATOR_MENU_ITEM_ENEMY_PARTY_ADD},
    [DEBUG_PKM_CREATOR_MENU_ITEM_TESTING]                =  {sDebugText_PkmCreator_Testing,                DEBUG_PKM_CREATOR_MENU_ITEM_TESTING},
    [DEBUG_PKM_CREATOR_MENU_ITEM_TESTING_COPY]           =  {sDebugText_PkmCreator_Testing_Copy,           DEBUG_PKM_CREATOR_MENU_ITEM_TESTING_COPY},
};
static const struct ListMenuItem sDebugMenu_Items_Fill[] =
{
    [DEBUG_FILL_MENU_ITEM_PC_BOXES_FAST]    = {sDebugText_Fill_Pc_Fast,         DEBUG_FILL_MENU_ITEM_PC_BOXES_FAST},
    [DEBUG_FILL_MENU_ITEM_PC_BOXES_SLOW]    = {sDebugText_Fill_Pc_Slow,         DEBUG_FILL_MENU_ITEM_PC_BOXES_SLOW},
    [DEBUG_FILL_MENU_ITEM_PC_ITEMS]         = {sDebugText_Fill_Pc_Items ,       DEBUG_FILL_MENU_ITEM_PC_ITEMS},
    [DEBUG_FILL_MENU_ITEM_POCKET_ITEMS]     = {sDebugText_Fill_PocketItems,     DEBUG_FILL_MENU_ITEM_POCKET_ITEMS},
    [DEBUG_FILL_MENU_ITEM_POCKET_BALLS]     = {sDebugText_Fill_PocketPokeBalls, DEBUG_FILL_MENU_ITEM_POCKET_BALLS},
    [DEBUG_FILL_MENU_ITEM_POCKET_TMHM]      = {sDebugText_Fill_PocketTMHM,      DEBUG_FILL_MENU_ITEM_POCKET_TMHM},
    [DEBUG_FILL_MENU_ITEM_POCKET_BERRIES]   = {sDebugText_Fill_PocketBerries,   DEBUG_FILL_MENU_ITEM_POCKET_BERRIES},
    [DEBUG_FILL_MENU_ITEM_POCKET_KEY_ITEMS] = {sDebugText_Fill_PocketKeyItems,  DEBUG_FILL_MENU_ITEM_POCKET_KEY_ITEMS},
};
static const struct ListMenuItem sDebugMenu_Items_Sound[] =
{
    [DEBUG_SOUND_MENU_ITEM_SE]            = {sDebugText_Sound_SE,         DEBUG_SOUND_MENU_ITEM_SE},
    [DEBUG_SOUND_MENU_ITEM_MUS]           = {sDebugText_Sound_MUS,        DEBUG_SOUND_MENU_ITEM_MUS},
};

// *******************************
// Menu Actions
static void (*const sDebugMenu_Actions_Main[])(u8) =
{
    [DEBUG_MENU_ITEM_UTILITIES]       = DebugAction_OpenUtilitiesMenu,
    [DEBUG_MENU_ITEM_SCRIPTS]         = DebugAction_OpenScriptsMenu,
    [DEBUG_MENU_ITEM_FLAGVAR]         = DebugAction_OpenFlagsVarsMenu,
    [DEBUG_MENU_ITEM_BATTLE]          = DebugAction_OpenBattleMenu,
    [DEBUG_MENU_ITEM_GIVE]            = DebugAction_OpenGiveMenu,
    [DEBUG_MENU_ITEM_POKEMON_CREATOR] = DebugAction_OpenPokemonCreator,
    [DEBUG_MENU_ITEM_FILL]            = DebugAction_OpenFillMenu,
    [DEBUG_MENU_ITEM_SOUND]           = DebugAction_OpenSoundMenu,
    [DEBUG_MENU_ITEM_ACCESS_PC]       = DebugAction_AccessPC,
    [DEBUG_MENU_ITEM_CANCEL]          = DebugAction_Cancel
};
static void (*const sDebugMenu_Actions_Utilities[])(u8) =
{
    [DEBUG_UTIL_MENU_ITEM_HEAL_PARTY]       = DebugAction_Util_HealParty,
    [DEBUG_UTIL_MENU_ITEM_FLY]              = DebugAction_Util_Fly,
    [DEBUG_UTIL_MENU_ITEM_WARP]             = DebugAction_Util_Warp_Warp,
    [DEBUG_UTIL_MENU_ITEM_POISON_MONS]      = DebugAction_Util_PoisonMons,
    [DEBUG_UTIL_MENU_ITEM_SAVEBLOCK]        = DebugAction_Util_CheckSaveBlock,
    [DEBUG_UTIL_MENU_ITEM_WEATHER]          = DebugAction_Util_Weather,
    [DEBUG_UTIL_MENU_ITEM_CHECKWALLCLOCK]   = DebugAction_Util_CheckWallClock,
    [DEBUG_UTIL_MENU_ITEM_SETWALLCLOCK]     = DebugAction_Util_SetWallClock,
    [DEBUG_UTIL_MENU_ITEM_WATCHCREDITS]     = DebugAction_Util_WatchCredits,
    [DEBUG_UTIL_MENU_ITEM_TRAINER_NAME]     = DebugAction_Util_Trainer_Name,
    [DEBUG_UTIL_MENU_ITEM_TRAINER_GENDER]   = DebugAction_Util_Trainer_Gender,
    [DEBUG_UTIL_MENU_ITEM_TRAINER_ID]       = DebugAction_Util_Trainer_Id,
    [DEBUG_UTIL_MENU_ITEM_CHEAT]            = DebugAction_Util_CheatStart,
};
static void (*const sDebugMenu_Actions_Scripts[])(u8) =
{
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_1]     = DebugAction_Util_Script_1,
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_2]     = DebugAction_Util_Script_2,
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_3]     = DebugAction_Util_Script_3,
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_4]     = DebugAction_Util_Script_4,
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_5]     = DebugAction_Util_Script_5,
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_6]     = DebugAction_Util_Script_6,
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_7]     = DebugAction_Util_Script_7,
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_8]     = DebugAction_Util_Script_8,
};
static void (*const sDebugMenu_Actions_Flags[])(u8) =
{
    [DEBUG_FLAGVAR_MENU_ITEM_FLAGS]                = DebugAction_FlagsVars_Flags,
    [DEBUG_FLAGVAR_MENU_ITEM_VARS]                 = DebugAction_FlagsVars_Vars,
    [DEBUG_FLAGVAR_MENU_ITEM_DEXFLAGS_ALL]         = DebugAction_FlagsVars_PokedexFlags_All,
    [DEBUG_FLAGVAR_MENU_ITEM_DEXFLAGS_RESET]       = DebugAction_FlagsVars_PokedexFlags_Reset,
    [DEBUG_FLAGVAR_MENU_ITEM_DEXFLAGS_SEEN]        = DebugAction_FlagsVars_PokedexFlags_Seen,
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_POKEDEX]       = DebugAction_FlagsVars_SwitchDex,
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_NATDEX]        = DebugAction_FlagsVars_SwitchNatDex,
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_POKENAV]       = DebugAction_FlagsVars_SwitchPokeNav,
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_RUN_SHOES]     = DebugAction_FlagsVars_RunningShoes,
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_LOCATIONS]     = DebugAction_FlagsVars_ToggleFlyFlags,
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BADGES_ALL]    = DebugAction_FlagsVars_ToggleBadgeFlags,
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_FRONTIER_PASS] = DebugAction_FlagsVars_ToggleFrontierPass,
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BATTLE_DMG]    = DebugAction_FlagsVars_BattleDmgOnOff,
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_COLISSION]     = DebugAction_FlagsVars_CollisionOnOff,
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_ENCOUNTER]     = DebugAction_FlagsVars_EncounterOnOff,
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_TRAINER_SEE]   = DebugAction_FlagsVars_TrainerSeeOnOff,
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BAG_USE]       = DebugAction_FlagsVars_BagUseOnOff,
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_CATCHING]      = DebugAction_FlagsVars_CatchingOnOff,
};
static void (*const sDebugMenu_Actions_Give[])(u8) =
{
    [DEBUG_GIVE_MENU_ITEM_ITEM_X]            = DebugAction_Give_Item,
    [DEBUG_GIVE_MENU_ITEM_ALLTMS]            = DebugAction_Give_AllTMs,
    [DEBUG_GIVE_MENU_ITEM_POKEMON_SIMPLE]    = DebugAction_Give_PokemonSimple,
    [DEBUG_GIVE_MENU_ITEM_POKEMON_COMPLEX]   = DebugAction_Give_PokemonComplex,
    [DEBUG_GIVE_MENU_ITEM_MAX_MONEY]         = DebugAction_Give_MaxMoney,
    [DEBUG_GIVE_MENU_ITEM_MAX_COINS]         = DebugAction_Give_MaxCoins,
    [DEBUG_GIVE_MENU_ITEM_MAX_BATTLE_POINTS] = DebugAction_Give_MaxBattlePoints,
    [DEBUG_GIVE_MENU_ITEM_DAYCARE_EGG]       = DebugAction_Give_DayCareEgg,
    [DEBUG_GIVE_MENU_ITEM_HATCH_AN_EGG]      = DebugAction_HatchAnEgg,
};
static void (*const sDebugMenu_Actions_PkmCreator[])(u8) =
{
    [DEBUG_PKM_CREATOR_MENU_ITEM_PARTY_ADD]              = DebugAction_PkmCreator_Party_Add,
    [DEBUG_PKM_CREATOR_MENU_ITEM_PARTY_EDIT]             = DebugAction_PkmCreator_Party_Edit,
    [DEBUG_PKM_CREATOR_MENU_ITEM_PC_EDIT]                = DebugAction_PkmCreator_PC_Edit,
    [DEBUG_PKM_CREATOR_MENU_ITEM_ENEMY_PARTY_EDIT]       = DebugAction_PkmCreator_Enemy_Party_Edit,
    [DEBUG_PKM_CREATOR_MENU_ITEM_ENEMY_PARTY_EDIT_DEBUG] = DebugAction_PkmCreator_Enemy_Party_Edit_Debug,
    [DEBUG_PKM_CREATOR_MENU_ITEM_DEBUG_EDIT]             = DebugAction_PkmCreator_Debug_Edit,
    [DEBUG_PKM_CREATOR_MENU_ITEM_ENEMY_PARTY_ADD]        = DebugAction_PkmCreator_Enemy_Party_Add,
    [DEBUG_PKM_CREATOR_MENU_ITEM_TESTING]                = DebugAction_PkmCreator_Testing,
    [DEBUG_PKM_CREATOR_MENU_ITEM_TESTING_COPY]           = DebugAction_PkmCreator_Testing_Copy,
};
static void (*const sDebugMenu_Actions_Fill[])(u8) =
{
    [DEBUG_FILL_MENU_ITEM_PC_BOXES_FAST]    = DebugAction_Fill_PCBoxes_Fast,
    [DEBUG_FILL_MENU_ITEM_PC_BOXES_SLOW]    = DebugAction_Fill_PCBoxes_Slow,
    [DEBUG_FILL_MENU_ITEM_PC_ITEMS]         = DebugAction_Fill_PCItemStorage,
    [DEBUG_FILL_MENU_ITEM_POCKET_ITEMS]     = DebugAction_Fill_PocketItems,
    [DEBUG_FILL_MENU_ITEM_POCKET_BALLS]     = DebugAction_Fill_PocketPokeBalls,
    [DEBUG_FILL_MENU_ITEM_POCKET_TMHM]      = DebugAction_Fill_PocketTMHM,
    [DEBUG_FILL_MENU_ITEM_POCKET_BERRIES]   = DebugAction_Fill_PocketBerries,
    [DEBUG_FILL_MENU_ITEM_POCKET_KEY_ITEMS] = DebugAction_Fill_PocketKeyItems,
};

static void (*const sDebugMenu_Actions_Sound[])(u8) =
{
    [DEBUG_SOUND_MENU_ITEM_SE]      = DebugAction_Sound_SE,
    [DEBUG_SOUND_MENU_ITEM_MUS]     = DebugAction_Sound_MUS,
};

=======
// Menu Actions. Make sure that submenus are defined before the menus that call them.
static const struct DebugMenuOption sDebugMenu_Actions_TimeMenu_TimesOfDay[] =
{
    [TIME_MORNING] = { gTimeOfDayStringsTable[TIME_MORNING], DebugAction_TimeMenu_ChangeTimeOfDay },
    [TIME_DAY]     = { gTimeOfDayStringsTable[TIME_DAY],     DebugAction_TimeMenu_ChangeTimeOfDay },
    [TIME_EVENING] = { gTimeOfDayStringsTable[TIME_EVENING], DebugAction_TimeMenu_ChangeTimeOfDay },
    [TIME_NIGHT]   = { gTimeOfDayStringsTable[TIME_NIGHT],   DebugAction_TimeMenu_ChangeTimeOfDay },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_TimeMenu_Weekdays[] =
{
    [WEEKDAY_SUN] = { gDayNameStringsTable[WEEKDAY_SUN], DebugAction_TimeMenu_ChangeWeekdays },
    [WEEKDAY_MON] = { gDayNameStringsTable[WEEKDAY_MON], DebugAction_TimeMenu_ChangeWeekdays },
    [WEEKDAY_TUE] = { gDayNameStringsTable[WEEKDAY_TUE], DebugAction_TimeMenu_ChangeWeekdays },
    [WEEKDAY_WED] = { gDayNameStringsTable[WEEKDAY_WED], DebugAction_TimeMenu_ChangeWeekdays },
    [WEEKDAY_THU] = { gDayNameStringsTable[WEEKDAY_THU], DebugAction_TimeMenu_ChangeWeekdays },
    [WEEKDAY_FRI] = { gDayNameStringsTable[WEEKDAY_FRI], DebugAction_TimeMenu_ChangeWeekdays },
    [WEEKDAY_SAT] = { gDayNameStringsTable[WEEKDAY_SAT], DebugAction_TimeMenu_ChangeWeekdays },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_FollowerNPCMenu_Create[] =
{
    [DEBUG_FNPC_BRENDAN] = { gFollowerNPCStringsTable[DEBUG_FNPC_BRENDAN], DebugAction_CreateFollowerNPC },
    [DEBUG_FNPC_MAY] =     { gFollowerNPCStringsTable[DEBUG_FNPC_MAY],     DebugAction_CreateFollowerNPC },
    [DEBUG_FNPC_STEVEN] =  { gFollowerNPCStringsTable[DEBUG_FNPC_STEVEN],  DebugAction_CreateFollowerNPC },
    [DEBUG_FNPC_WALLY] =   { gFollowerNPCStringsTable[DEBUG_FNPC_WALLY],   DebugAction_CreateFollowerNPC },
    [DEBUG_FNPC_RED] =     { gFollowerNPCStringsTable[DEBUG_FNPC_RED],     DebugAction_CreateFollowerNPC },
    [DEBUG_FNPC_LEAF] =    { gFollowerNPCStringsTable[DEBUG_FNPC_LEAF],    DebugAction_CreateFollowerNPC },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_TimeMenu[] =
{
    { COMPOUND_STRING("Get time…"),         DebugAction_ExecuteScript, Debug_EventScript_TellTheTime },
    { COMPOUND_STRING("Get time of day…"),  DebugAction_ExecuteScript, Debug_EventScript_PrintTimeOfDay },
    { COMPOUND_STRING("Set time of day…"),  DebugAction_OpenSubMenuFakeRTC, sDebugMenu_Actions_TimeMenu_TimesOfDay },
    { COMPOUND_STRING("Set weekday…"),      DebugAction_OpenSubMenuFakeRTC, sDebugMenu_Actions_TimeMenu_Weekdays },
    { COMPOUND_STRING("Check wall clock…"), DebugAction_ExecuteScript, PlayersHouse_2F_EventScript_CheckWallClock },
    { COMPOUND_STRING("Set wall clock…"),   DebugAction_ExecuteScript, PlayersHouse_2F_EventScript_SetWallClock },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_BerryFunctions[] =
{
    { COMPOUND_STRING("Clear map trees"),      DebugAction_BerryFunctions_ClearAll },
    { COMPOUND_STRING("Ready map trees"),      DebugAction_BerryFunctions_Ready },
    { COMPOUND_STRING("Grow map trees"),       DebugAction_BerryFunctions_NextStage },
    { COMPOUND_STRING("Give map trees pests"), DebugAction_BerryFunctions_Pests },
    { COMPOUND_STRING("Give map trees weeds"), DebugAction_BerryFunctions_Weeds },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_FollowerNPCMenu[] =
{
    { COMPOUND_STRING("Create Follower"),  DebugAction_OpenSubMenuCreateFollowerNPC, sDebugMenu_Actions_FollowerNPCMenu_Create },
    { COMPOUND_STRING("Destroy Follower"), DebugAction_DestroyFollowerNPC },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_Utilities[] =
{
    { COMPOUND_STRING("Fly to map…"),       DebugAction_Util_Fly },
    { COMPOUND_STRING("Warp to map warp…"), DebugAction_Util_Warp_Warp },
    { COMPOUND_STRING("Set weather…"),      DebugAction_Util_Weather },
    { COMPOUND_STRING("Font Test…"),        DebugAction_ExecuteScript, Debug_EventScript_FontTest },
    { COMPOUND_STRING("Time Functions…"),   DebugAction_OpenSubMenu, sDebugMenu_Actions_TimeMenu, },
    { COMPOUND_STRING("Watch credits…"),    DebugAction_Util_WatchCredits },
    { COMPOUND_STRING("Cheat start"),       DebugAction_Util_CheatStart },
    { COMPOUND_STRING("Berry Functions…"),  DebugAction_OpenSubMenu, sDebugMenu_Actions_BerryFunctions },
    { COMPOUND_STRING("EWRAM Counters…"),   DebugAction_ExecuteScript, Debug_EventScript_EWRAMCounters },
    { COMPOUND_STRING("Follower NPC…"),     DebugAction_OpenSubMenu, sDebugMenu_Actions_FollowerNPCMenu },
    { COMPOUND_STRING("Steven Multi"),      DebugAction_ExecuteScript, Debug_EventScript_Steven_Multi },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_PCBag_Fill[] =
{
    { COMPOUND_STRING("Fill PC Boxes Fast"),        DebugAction_PCBag_Fill_PCBoxes_Fast },
    { COMPOUND_STRING("Fill PC Boxes Slow (LAG!)"), DebugAction_PCBag_Fill_PCBoxes_Slow },
    { COMPOUND_STRING("Fill PC Items") ,            DebugAction_PCBag_Fill_PCItemStorage },
    { COMPOUND_STRING("Fill Pocket Items"),         DebugAction_PCBag_Fill_PocketItems },
    { COMPOUND_STRING("Fill Pocket Poké Balls"),    DebugAction_PCBag_Fill_PocketPokeBalls },
    { COMPOUND_STRING("Fill Pocket TMHM"),          DebugAction_PCBag_Fill_PocketTMHM },
    { COMPOUND_STRING("Fill Pocket Berries"),       DebugAction_PCBag_Fill_PocketBerries },
    { COMPOUND_STRING("Fill Pocket Key Items"),     DebugAction_PCBag_Fill_PocketKeyItems },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_PCBag[] =
{
    { COMPOUND_STRING("Access PC"),           DebugAction_ExecuteScript, EventScript_PC },
    { COMPOUND_STRING("Fill…"),               DebugAction_OpenSubMenu, sDebugMenu_Actions_PCBag_Fill },
    { COMPOUND_STRING("Clear Bag"),           DebugAction_PCBag_ClearBag },
    { COMPOUND_STRING("Clear Storage Boxes"), DebugAction_PCBag_ClearBoxes },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_Party[] =
{
    { COMPOUND_STRING("Move Reminder"),      DebugAction_ExecuteScript, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon },
    { COMPOUND_STRING("Hatch an Egg"),       DebugAction_ExecuteScript, Debug_HatchAnEgg },
    { COMPOUND_STRING("Heal party"),         DebugAction_Party_HealParty },
    { COMPOUND_STRING("Inflict Status1"),    DebugAction_ExecuteScript, Debug_EventScript_InflictStatus1 },
    { COMPOUND_STRING("Set Hidden Nature"),  DebugAction_ExecuteScript, Debug_EventScript_SetHiddenNature },
    { COMPOUND_STRING("Check EVs"),          DebugAction_ExecuteScript, Debug_EventScript_CheckEVs },
    { COMPOUND_STRING("Check IVs"),          DebugAction_ExecuteScript, Debug_EventScript_CheckIVs },
    { COMPOUND_STRING("Clear Party"),        DebugAction_Party_ClearParty },
    { COMPOUND_STRING("Set Party"),          DebugAction_Party_SetParty },
    { COMPOUND_STRING("Start Debug Battle"), DebugAction_Party_BattleSingle },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_Give[] =
{
    { COMPOUND_STRING("Give item XYZ…"),    DebugAction_Give_Item },
    { COMPOUND_STRING("Pokémon (Basic)"),   DebugAction_Give_PokemonSimple },
    { COMPOUND_STRING("Pokémon (Complex)"), DebugAction_Give_PokemonComplex },
    { COMPOUND_STRING("Give Decoration…"),  DebugAction_Give_Decoration },
    { COMPOUND_STRING("Max Money"),         DebugAction_Give_MaxMoney },
    { COMPOUND_STRING("Max Coins"),         DebugAction_Give_MaxCoins },
    { COMPOUND_STRING("Max Battle Points"), DebugAction_Give_MaxBattlePoints },
    { COMPOUND_STRING("Daycare Egg"),       DebugAction_Give_DayCareEgg },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_Player[] =
{
    { COMPOUND_STRING("Player name"),    DebugAction_Player_Name },
    { COMPOUND_STRING("Toggle gender"),  DebugAction_Player_Gender },
    { COMPOUND_STRING("New Trainer ID"), DebugAction_Player_Id },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_Scripts[] =
{
    { COMPOUND_STRING("Script 1"), DebugAction_ExecuteScript, Debug_EventScript_Script_1 },
    { COMPOUND_STRING("Script 2"), DebugAction_ExecuteScript, Debug_EventScript_Script_2 },
    { COMPOUND_STRING("Script 3"), DebugAction_ExecuteScript, Debug_EventScript_Script_3 },
    { COMPOUND_STRING("Script 4"), DebugAction_ExecuteScript, Debug_EventScript_Script_4 },
    { COMPOUND_STRING("Script 5"), DebugAction_ExecuteScript, Debug_EventScript_Script_5 },
    { COMPOUND_STRING("Script 6"), DebugAction_ExecuteScript, Debug_EventScript_Script_6 },
    { COMPOUND_STRING("Script 7"), DebugAction_ExecuteScript, Debug_EventScript_Script_7 },
    { COMPOUND_STRING("Script 8"), DebugAction_ExecuteScript, Debug_EventScript_Script_8 },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_Sound[] =
{
    { COMPOUND_STRING("SFX…"),   DebugAction_Sound_SE },
    { COMPOUND_STRING("Music…"), DebugAction_Sound_MUS },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_ROMInfo2[] =
{
    { COMPOUND_STRING("Save Block space"),  DebugAction_ExecuteScript, Debug_CheckSaveBlock },
    { COMPOUND_STRING("ROM space"),         DebugAction_ExecuteScript, Debug_CheckROMSpace },
    { COMPOUND_STRING("Expansion Version"), DebugAction_ExecuteScript, Debug_ShowExpansionVersion },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_Flags[] =
{
    [DEBUG_FLAGVAR_MENU_ITEM_FLAGS]                = { COMPOUND_STRING("Set Flag XYZ…"),                     DebugAction_FlagsVars_Flags },
    [DEBUG_FLAGVAR_MENU_ITEM_VARS]                 = { COMPOUND_STRING("Set Var XYZ…"),                      DebugAction_FlagsVars_Vars },
    [DEBUG_FLAGVAR_MENU_ITEM_DEXFLAGS_ALL]         = { COMPOUND_STRING("Pokédex Flags All"),                 DebugAction_FlagsVars_PokedexFlags_All },
    [DEBUG_FLAGVAR_MENU_ITEM_DEXFLAGS_RESET]       = { COMPOUND_STRING("Pokédex Flags Reset"),               DebugAction_FlagsVars_PokedexFlags_Reset },
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_POKEDEX]       = { COMPOUND_STRING("Toggle {STR_VAR_1}Pokédex"),         DebugAction_ToggleFlag, DebugAction_FlagsVars_SwitchDex },
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_NATDEX]        = { COMPOUND_STRING("Toggle {STR_VAR_1}National Dex"),    DebugAction_ToggleFlag, DebugAction_FlagsVars_SwitchNatDex },
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_POKENAV]       = { COMPOUND_STRING("Toggle {STR_VAR_1}PokéNav"),         DebugAction_ToggleFlag, DebugAction_FlagsVars_SwitchPokeNav },
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_MATCH_CALL]    = { COMPOUND_STRING("Toggle {STR_VAR_1}Match Call"),      DebugAction_ToggleFlag, DebugAction_FlagsVars_SwitchMatchCall },
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_RUN_SHOES]     = { COMPOUND_STRING("Toggle {STR_VAR_1}Running Shoes"),   DebugAction_ToggleFlag, DebugAction_FlagsVars_RunningShoes },
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_LOCATIONS]     = { COMPOUND_STRING("Toggle {STR_VAR_1}Fly Flags"),       DebugAction_ToggleFlag, DebugAction_FlagsVars_ToggleFlyFlags },
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BADGES_ALL]    = { COMPOUND_STRING("Toggle {STR_VAR_1}All badges"),      DebugAction_ToggleFlag, DebugAction_FlagsVars_ToggleBadgeFlags },
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_GAME_CLEAR]    = { COMPOUND_STRING("Toggle {STR_VAR_1}Game clear"),      DebugAction_ToggleFlag, DebugAction_FlagsVars_ToggleGameClear },
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_FRONTIER_PASS] = { COMPOUND_STRING("Toggle {STR_VAR_1}Frontier Pass"),   DebugAction_ToggleFlag, DebugAction_FlagsVars_ToggleFrontierPass },
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_COLLISION]     = { COMPOUND_STRING("Toggle {STR_VAR_1}Collision OFF"),   DebugAction_ToggleFlag, DebugAction_FlagsVars_CollisionOnOff },
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_ENCOUNTER]     = { COMPOUND_STRING("Toggle {STR_VAR_1}Encounter OFF"),   DebugAction_ToggleFlag, DebugAction_FlagsVars_EncounterOnOff },
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_TRAINER_SEE]   = { COMPOUND_STRING("Toggle {STR_VAR_1}Trainer See OFF"), DebugAction_ToggleFlag, DebugAction_FlagsVars_TrainerSeeOnOff },
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BAG_USE]       = { COMPOUND_STRING("Toggle {STR_VAR_1}Bag Use OFF"),     DebugAction_ToggleFlag, DebugAction_FlagsVars_BagUseOnOff },
    [DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_CATCHING]      = { COMPOUND_STRING("Toggle {STR_VAR_1}Catching OFF"),    DebugAction_ToggleFlag, DebugAction_FlagsVars_CatchingOnOff },
    { NULL }
};

static const struct DebugMenuOption sDebugMenu_Actions_Main[] =
{
    { COMPOUND_STRING("Utilities…"),    DebugAction_OpenSubMenu, sDebugMenu_Actions_Utilities, },
    { COMPOUND_STRING("PC/Bag…"),       DebugAction_OpenSubMenu, sDebugMenu_Actions_PCBag, },
    { COMPOUND_STRING("Party…"),        DebugAction_OpenSubMenu, sDebugMenu_Actions_Party, },
    { COMPOUND_STRING("Give X…"),       DebugAction_OpenSubMenu, sDebugMenu_Actions_Give, },
    { COMPOUND_STRING("Player…"),       DebugAction_OpenSubMenu, sDebugMenu_Actions_Player, },
    { COMPOUND_STRING("Scripts…"),      DebugAction_OpenSubMenu, sDebugMenu_Actions_Scripts, },
    { COMPOUND_STRING("Flags & Vars…"), DebugAction_OpenSubMenuFlagsVars, sDebugMenu_Actions_Flags, },
    { COMPOUND_STRING("Sound…"),        DebugAction_OpenSubMenu, sDebugMenu_Actions_Sound, },
    { COMPOUND_STRING("ROM Info…"),     DebugAction_OpenSubMenu, sDebugMenu_Actions_ROMInfo2, },
    { COMPOUND_STRING("Cancel"),        DebugAction_Cancel, },
    { NULL }
};
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

// *******************************
// Windows
static const struct WindowTemplate sDebugMenuWindowTemplateMain =
{
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 1,
    .width = DEBUG_MENU_WIDTH_MAIN,
    .height = 2 * DEBUG_MENU_HEIGHT_MAIN,
    .paletteNum = 15,
    .baseBlock = 1,
};
<<<<<<< HEAD
=======

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static const struct WindowTemplate sDebugMenuWindowTemplateExtra =
{
    .bg = 0,
    .tilemapLeft = 30 - DEBUG_MENU_WIDTH_EXTRA - 1,
    .tilemapTop = 1,
    .width = DEBUG_MENU_WIDTH_EXTRA,
    .height = 2 * DEBUG_MENU_HEIGHT_EXTRA,
    .paletteNum = 15,
    .baseBlock = 1,
};
<<<<<<< HEAD
=======

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static const struct WindowTemplate sDebugMenuWindowTemplateWeather =
{
    .bg = 0,
    .tilemapLeft = 30 - DEBUG_MENU_WIDTH_WEATHER - 1,
    .tilemapTop = 1,
    .width = DEBUG_MENU_WIDTH_WEATHER,
    .height = 2 * DEBUG_MENU_HEIGHT_WEATHER,
    .paletteNum = 15,
    .baseBlock = 1,
};
<<<<<<< HEAD
=======

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static const struct WindowTemplate sDebugMenuWindowTemplateSound =
{
    .bg = 0,
    .tilemapLeft = 30 - DEBUG_MENU_WIDTH_SOUND - 1,
    .tilemapTop = 1,
    .width = DEBUG_MENU_WIDTH_SOUND,
    .height = DEBUG_MENU_HEIGHT_SOUND,
    .paletteNum = 15,
    .baseBlock = 1,
};
<<<<<<< HEAD
static const struct WindowTemplate sDebugMenuWindowTemplateFlagsVars =
{
    .bg = 0,
    .tilemapLeft = 30 - DEBUG_MENU_WIDTH_FLAGVAR - 1,
    .tilemapTop = 1,
    .width = DEBUG_MENU_WIDTH_FLAGVAR,
    .height = DEBUG_MENU_HEIGHT_FLAGVAR,
    .paletteNum = 15,
    .baseBlock = 1 + DEBUG_MENU_WIDTH_MAIN * DEBUG_MENU_HEIGHT_MAIN * 2,
};

// *******************************
// List Menu Templates
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Main =
{
    .items = sDebugMenu_Items_Main,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Main),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Utilities =
{
    .items = sDebugMenu_Items_Utilities,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Utilities),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Scripts =
{
    .items = sDebugMenu_Items_Scripts,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Scripts),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_FlagsVars =
{
    .items = sDebugMenu_Items_FlagsVars,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_FlagsVars),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Battle_0 =
{
    .items = sDebugMenu_Items_Battle_0,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Battle_0),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Battle_1 =
{
    .items = sDebugMenu_Items_Battle_1,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Battle_1),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Battle_2 =
{
    .items = sDebugMenu_Items_Battle_2,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Battle_2),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Give =
{
    .items = sDebugMenu_Items_Give,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Give),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_PkmCreator =
{
    .items = sDebugMenu_Items_PkmCreator,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_PkmCreator),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Fill =
{
    .items = sDebugMenu_Items_Fill,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Fill),
};
static const struct ListMenuTemplate sDebugMenu_ListTemplate_Sound =
{
    .items = sDebugMenu_Items_Sound,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Sound),
};

=======

static bool32 Debug_SaveCallbackMenu(struct DebugMenuOption *callbackItems);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

// *******************************
// Functions universal
void Debug_ShowMainMenu(void)
{
<<<<<<< HEAD
    sDebugBattleData = AllocZeroed(sizeof(*sDebugBattleData));
    sDebugMenuListData = AllocZeroed(sizeof(*sDebugMenuListData));
    Debug_InitDebugBattleData();

    Debug_ShowMenu(DebugTask_HandleMenuInput_Main, sDebugMenu_ListTemplate_Main);
}
static void Debug_ReShowMainMenu(void)
{
    Debug_ShowMenu(DebugTask_HandleMenuInput_Main, sDebugMenu_ListTemplate_Main);
}
static u8 Debug_ShowMenu(void (*HandleInput)(u8), struct ListMenuTemplate LMtemplate)
{
    struct ListMenuTemplate menuTemplate;
=======
    sDebugMenuListData = AllocZeroed(sizeof(*sDebugMenuListData));
    sDebugMenuListData->listId = 0;
    Debug_ShowMenu(DebugTask_HandleMenuInput_General, sDebugMenu_Actions_Main);
}

#define tMenuTaskId          data[0]
#define tWindowId            data[1]
#define tSubWindowId         data[2]
#define tInput               data[3]
#define tDigit               data[4]

static bool32 Debug_SaveCallbackMenu(struct DebugMenuOption *callbackItems)
{
    bool32 success = FALSE;
    for (u32 i = 0; i < DEBUG_MAX_SUB_MENU_LEVELS; i++)
    {
        if (sDebugMenuListData->subMenuItems[i] == NULL)
        {
            sDebugMenuListData->subMenuItems[i] = callbackItems;
            success = TRUE;
            break;
        }
    }
    return success;
}

static u32 Debug_RemoveCallbackMenu(void)
{
    u32 freeCallbackLevel = 0;
    for (u32 i = DEBUG_MAX_SUB_MENU_LEVELS; i > 0; i--)
    {
        if (sDebugMenuListData->subMenuItems[i - 1] != NULL)
        {
            sDebugMenuListData->subMenuItems[i - 1] = NULL;
            freeCallbackLevel = i - 1;
            break;
        }
    }
    return freeCallbackLevel;
}

static const struct DebugMenuOption *Debug_GetCurrentCallbackMenu(void)
{
    const struct DebugMenuOption *callbackItems = NULL;
    for (u32 i = DEBUG_MAX_SUB_MENU_LEVELS; i > 0; i--)
    {
        if (sDebugMenuListData->subMenuItems[i - 1] != NULL)
        {
            callbackItems = sDebugMenuListData->subMenuItems[i - 1];
            break;
        }
    }
    return callbackItems;
}

static bool32 IsSubMenuAction(const void *action)
{
    return action == DebugAction_OpenSubMenu
        || action == DebugAction_OpenSubMenuFlagsVars
        || action == DebugAction_OpenSubMenuFakeRTC
        || action == DebugAction_OpenSubMenuCreateFollowerNPC;
}

static void Debug_ShowMenu(DebugFunc HandleInput, const struct DebugMenuOption *items)
{
    struct ListMenuTemplate menuTemplate = {0};
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    u8 windowId;
    u8 menuTaskId;
    u8 inputTaskId;

<<<<<<< HEAD
=======
    if (items != NULL)
        Debug_SaveCallbackMenu((struct DebugMenuOption *)items);
    else
        items = Debug_GetCurrentCallbackMenu();

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    // create window
    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugMenuWindowTemplateMain);
    DrawStdWindowFrame(windowId, FALSE);

<<<<<<< HEAD
    // create list menu
    menuTemplate = LMtemplate;
=======
    u32 totalItems = 0;

    if (sDebugMenuListData->listId == 1)
    {
        totalItems = Debug_GenerateListMenuNames();
    }
    else
    {
        for (u32 i = 0; items[i].text != NULL; i++)
        {
            sDebugMenuListData->listItems[i].id = i;
            StringExpandPlaceholders(gStringVar4, items[i].text);
            if (IsSubMenuAction(items[i].action))
                StringAppend(gStringVar4, sDebugText_Arrow);
            StringCopy(&sDebugMenuListData->itemNames[i][0], gStringVar4);
            sDebugMenuListData->listItems[i].name = &sDebugMenuListData->itemNames[i][0];
            totalItems++;
        }
    }

    // create list menu
    menuTemplate.items = sDebugMenuListData->listItems;
    menuTemplate.moveCursorFunc = ListMenuDefaultCursorMoveFunc;
    menuTemplate.totalItems = totalItems;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    menuTemplate.maxShowed = DEBUG_MENU_HEIGHT_MAIN;
    menuTemplate.windowId = windowId;
    menuTemplate.header_X = 0;
    menuTemplate.item_X = 8;
    menuTemplate.cursor_X = 0;
    menuTemplate.upText_Y = 1;
    menuTemplate.cursorPal = 2;
    menuTemplate.fillValue = 1;
    menuTemplate.cursorShadowPal = 3;
    menuTemplate.lettersSpacing = 1;
    menuTemplate.itemVerticalPadding = 0;
    menuTemplate.scrollMultiple = LIST_NO_MULTIPLE_SCROLL;
<<<<<<< HEAD
    menuTemplate.fontId = 1;
=======
    menuTemplate.fontId = DEBUG_MENU_FONT;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    menuTemplate.cursorKind = 0;
    menuTaskId = ListMenuInit(&menuTemplate, 0, 0);

    // create input handler task
    inputTaskId = CreateTask(HandleInput, 3);
<<<<<<< HEAD
    gTasks[inputTaskId].data[0] = menuTaskId;
    gTasks[inputTaskId].data[1] = windowId;
    gTasks[inputTaskId].data[2] = 0;
=======
    gTasks[inputTaskId].tMenuTaskId = menuTaskId;
    gTasks[inputTaskId].tWindowId = windowId;
    gTasks[inputTaskId].tSubWindowId = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    Debug_RefreshListMenu(inputTaskId);

    // draw everything
<<<<<<< HEAD
    CopyWindowToVram(windowId, 3);

    // return taskId for use right after
    return inputTaskId;
}
void Debug_ReShowBattleDebugMenu(void)
{
    u8 taskId = Debug_ShowMenu(DebugTask_HandleMenuInput_Battle, gMultiuseListMenuTemplate);
    Debug_RedrawListMenu(taskId);
}
static void Debug_DestroyMenu(u8 taskId)
{
    DestroyListMenuTask(gTasks[taskId].data[0], NULL, NULL);
    RemoveWindow(gTasks[taskId].data[1]);
    DestroyTask(taskId);
}
static void Debug_DestroyMenu_Full(u8 taskId)
{
    if (gTasks[taskId].data[2] != 0)
    {
        ClearStdWindowAndFrame(gTasks[taskId].data[2], FALSE);
        DebugAction_DestroyExtraWindow(taskId);
    }
    DestroyListMenuTask(gTasks[taskId].data[0], NULL, NULL);
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);
    DestroyTask(taskId);
    UnfreezeObjectEvents();
    Free(sDebugMenuListData);
    Free(sDebugBattleData);
}
=======
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void Debug_DestroyMenu(u8 taskId)
{
    DestroyListMenuTask(gTasks[taskId].tMenuTaskId, NULL, NULL);
    RemoveWindow(gTasks[taskId].tWindowId);
    DestroyTask(taskId);
}

static void Debug_DestroyMenu_Full(u8 taskId)
{
    if (gTasks[taskId].tSubWindowId != 0)
    {
        ClearStdWindowAndFrame(gTasks[taskId].tSubWindowId, FALSE);
        DebugAction_DestroyExtraWindow(taskId);
    }
    DestroyListMenuTask(gTasks[taskId].tMenuTaskId, NULL, NULL);
    ClearStdWindowAndFrame(gTasks[taskId].tWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tWindowId);
    DestroyTask(taskId);
    UnfreezeObjectEvents();
    Free(sDebugMenuListData);
}

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void Debug_DestroyMenu_Full_Script(u8 taskId, const u8 *script)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    FreezeObjectEvents();
    ScriptContext_SetupScript(script);
}
<<<<<<< HEAD
=======

static void Debug_HandleInput_Numeric(u8 taskId, s32 min, s32 max, u32 digits)
{
    if (JOY_NEW(DPAD_UP))
    {
        gTasks[taskId].tInput += sPowersOfTen[gTasks[taskId].tDigit];
        if (gTasks[taskId].tInput > max)
            gTasks[taskId].tInput = max;
    }
    if (JOY_NEW(DPAD_DOWN))
    {
        gTasks[taskId].tInput -= sPowersOfTen[gTasks[taskId].tDigit];
        if (gTasks[taskId].tInput < min)
            gTasks[taskId].tInput = min;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (gTasks[taskId].tDigit > 0)
            gTasks[taskId].tDigit -= 1;
    }
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (gTasks[taskId].tDigit < digits - 1)
            gTasks[taskId].tDigit += 1;
    }
}

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_Cancel(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    ScriptContext_Enable();
}
<<<<<<< HEAD
static void DebugAction_DestroyExtraWindow(u8 taskId)
{
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);

    ClearStdWindowAndFrame(gTasks[taskId].data[2], TRUE);
    RemoveWindow(gTasks[taskId].data[2]);

=======

static void DebugAction_DestroyExtraWindow(u8 taskId)
{
    ClearStdWindowAndFrame(gTasks[taskId].tWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tWindowId);

    ClearStdWindowAndFrame(gTasks[taskId].tSubWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tSubWindowId);

    DestroyListMenuTask(gTasks[taskId].tMenuTaskId, NULL, NULL);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    DestroyTask(taskId);
    ScriptContext_Enable();
    UnfreezeObjectEvents();
}

<<<<<<< HEAD
=======
static const u16 sLocationFlags[] =
{
    FLAG_VISITED_LITTLEROOT_TOWN,
    FLAG_VISITED_OLDALE_TOWN,
    FLAG_VISITED_DEWFORD_TOWN,
    FLAG_VISITED_LAVARIDGE_TOWN,
    FLAG_VISITED_FALLARBOR_TOWN,
    FLAG_VISITED_VERDANTURF_TOWN,
    FLAG_VISITED_PACIFIDLOG_TOWN,
    FLAG_VISITED_PETALBURG_CITY,
    FLAG_VISITED_SLATEPORT_CITY,
    FLAG_VISITED_MAUVILLE_CITY,
    FLAG_VISITED_RUSTBORO_CITY,
    FLAG_VISITED_FORTREE_CITY,
    FLAG_VISITED_LILYCOVE_CITY,
    FLAG_VISITED_MOSSDEEP_CITY,
    FLAG_VISITED_SOOTOPOLIS_CITY,
    FLAG_VISITED_EVER_GRANDE_CITY,
    FLAG_LANDMARK_POKEMON_LEAGUE,
    FLAG_LANDMARK_BATTLE_FRONTIER,
};

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static u8 Debug_CheckToggleFlags(u8 id)
{
    u8 result = FALSE;

    switch (id)
    {
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_POKEDEX:
            result = FlagGet(FLAG_SYS_POKEDEX_GET);
            break;
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_NATDEX:
            result = IsNationalPokedexEnabled();
            break;
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_POKENAV:
            result = FlagGet(FLAG_SYS_POKENAV_GET);
            break;
<<<<<<< HEAD
=======
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_MATCH_CALL:
            result = FlagGet(FLAG_ADDED_MATCH_CALL_TO_POKENAV) && FlagGet(FLAG_HAS_MATCH_CALL);
            break;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_RUN_SHOES:
            result = FlagGet(FLAG_SYS_B_DASH);
            break;
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_LOCATIONS:
<<<<<<< HEAD
            result = FlagGet(FLAG_VISITED_NEWBARK_TOWN) &&
                FlagGet(FLAG_VISITED_CHERRYGROVE_CITY) &&
                FlagGet(FLAG_VISITED_VIOLET_CITY) &&
                FlagGet(FLAG_VISITED_AZALEA_TOWN) &&
                FlagGet(FLAG_VISITED_GOLDENROD_CITY) &&
                FlagGet(FLAG_VISITED_ECRUTEAK_CITY) &&
                FlagGet(FLAG_VISITED_OLIVINE_CITY) &&
                FlagGet(FLAG_VISITED_CIANWOOD_CITY) &&
                FlagGet(FLAG_VISITED_SAFARI_ZONE_GATE) &&
                FlagGet(FLAG_VISITED_MAHOGANY_TOWN) &&
                FlagGet(FLAG_VISITED_LAKE_OF_RAGE) &&
                FlagGet(FLAG_VISITED_BLACKTHORN_CITY) &&
                FlagGet(FLAG_VISITED_INDIGO_PLATEAU) &&
                FlagGet(FLAG_VISITED_PALLET_TOWN) &&
                FlagGet(FLAG_VISITED_VIRIDIAN_CITY) &&
                FlagGet(FLAG_VISITED_PEWTER_CITY) &&
                FlagGet(FLAG_VISITED_CERULEAN_CITY) &&
                FlagGet(FLAG_VISITED_VERMILION_CITY) &&
                FlagGet(FLAG_VISITED_LAVENDER_TOWN) &&
                FlagGet(FLAG_VISITED_FUCHSIA_CITY) &&
                FlagGet(FLAG_VISITED_CELADON_CITY) &&
                FlagGet(FLAG_VISITED_SAFFRON_CITY) &&
                FlagGet(FLAG_VISITED_CINNABAR_ISLAND) &&
                FlagGet(FLAG_VISITED_MT_SILVER);
                FlagGet(FLAG_VISITED_RECEPTION_GATE);
            break;
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BADGES_ALL:
            result = FlagGet(FLAG_BADGE01_GET) &&
                FlagGet(FLAG_BADGE02_GET) &&
                FlagGet(FLAG_BADGE03_GET) &&
                FlagGet(FLAG_BADGE04_GET) &&
                FlagGet(FLAG_BADGE05_GET) &&
                FlagGet(FLAG_BADGE06_GET) &&
                FlagGet(FLAG_BADGE07_GET) &&
                FlagGet(FLAG_BADGE08_GET);
=======
            result = TRUE;
            for (u32 i = 0; i < ARRAY_COUNT(sLocationFlags); i++)
            {
                if (!FlagGet(sLocationFlags[i]))
                {
                    result = FALSE;
                    break;
                }
            }
            break;
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BADGES_ALL:
            result = TRUE;
            for (u32 i = 0; i < ARRAY_COUNT(gBadgeFlags); i++)
            {
                if (!FlagGet(gBadgeFlags[i]))
                {
                    result = FALSE;
                    break;
                }
            }
            break;
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_GAME_CLEAR:
            result = FlagGet(FLAG_SYS_GAME_CLEAR);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            break;
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_FRONTIER_PASS:
            result = FlagGet(FLAG_SYS_FRONTIER_PASS);
            break;
<<<<<<< HEAD
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BATTLE_DMG:
            result = FlagGet(FLAG_SYS_NO_BATTLE_DMG);
            break;
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_COLISSION:
            result = FlagGet(FLAG_SYS_NO_COLLISION);
            break;
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_ENCOUNTER:
            result = FlagGet(FLAG_SYS_NO_ENCOUNTER);
            break; 
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_TRAINER_SEE:
            result = FlagGet(FLAG_SYS_NO_TRAINER_SEE);
            break;
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BAG_USE:
            result = FlagGet(FLAG_SYS_NO_BAG_USE);
            break;
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_CATCHING:
            result = FlagGet(FLAG_SYS_NO_CATCHING);
            break;
=======
    #if OW_FLAG_NO_COLLISION != 0
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_COLLISION:
            result = FlagGet(OW_FLAG_NO_COLLISION);
            break;
    #endif
    #if OW_FLAG_NO_ENCOUNTER != 0
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_ENCOUNTER:
            result = FlagGet(OW_FLAG_NO_ENCOUNTER);
            break;
    #endif
    #if OW_FLAG_NO_TRAINER_SEE != 0
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_TRAINER_SEE:
            result = FlagGet(OW_FLAG_NO_TRAINER_SEE);
            break;
    #endif
    #if B_FLAG_NO_BAG_USE != 0
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_BAG_USE:
            result = FlagGet(B_FLAG_NO_BAG_USE);
            break;
    #endif
    #if B_FLAG_NO_CATCHING != 0
        case DEBUG_FLAGVAR_MENU_ITEM_TOGGLE_CATCHING:
            result = FlagGet(B_FLAG_NO_CATCHING);
            break;
    #endif
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        default:
            result = 0xFF;
            break;
    }

    return result;
}

<<<<<<< HEAD
static void Debug_InitDebugBattleData(void)
{
    u32 i;
    sDebugBattleData->submenu       = 0;
    sDebugBattleData->battleType    = 0xFF;
    sDebugBattleData->battleTerrain = 0xFF;
    
#ifdef BATTLE_ENGINE
    for (i = 0; i < 17; i++)
        sDebugBattleData->aiFlags[i] = FALSE;
#else
    for (i = 0; i < 10; i++)
        sDebugBattleData->aiFlags[i] = FALSE;
#endif
}

static void Debug_RefreshListMenu(u8 taskId)
{
    u16 i;
    const u8 sColor_Red[] = _("{COLOR RED}");
    const u8 sColor_Green[] = _("{COLOR GREEN}");
    u8 listTaskId = gTasks[taskId].data[0];
    struct ListMenu *list = (void*) gTasks[listTaskId].data;
    u8 totalItems, flagResult;
    u8 const * name;

    if (sDebugMenuListData->listId == 0)
    {
        gMultiuseListMenuTemplate = sDebugMenu_ListTemplate_FlagsVars;
        totalItems = gMultiuseListMenuTemplate.totalItems;
    }
    else if (sDebugMenuListData->listId == 1 && sDebugBattleData->submenu <= 1)
    {
        gMultiuseListMenuTemplate = sDebugMenu_ListTemplate_Battle_1;
        totalItems = gMultiuseListMenuTemplate.totalItems;
    }
    else if (sDebugMenuListData->listId == 1 && sDebugBattleData->submenu > 1)
    {
        gMultiuseListMenuTemplate = sDebugMenu_ListTemplate_Battle_2;
        totalItems = 7;
    }

    // Copy item names for all entries but the last (which is Cancel)
    for(i = 0; i < totalItems; i++)
    {
        
        if (sDebugMenuListData->listId == 1 && sDebugBattleData->submenu > 1)
        {
            u16 species;
            if (i == 6)
            {
                name = sDebugText_Continue;
                StringCopy(&sDebugMenuListData->itemNames[i][0], name);
            }
            else if (GetMonData(&gEnemyParty[i], MON_DATA_SANITY_HAS_SPECIES))
            {
                species = GetMonData(&gEnemyParty[i], MON_DATA_SPECIES);
                GetSpeciesName(gStringVar1, species);
                StringCopy(&sDebugMenuListData->itemNames[i][0], gStringVar1);
            }
            else
            {
                StringCopy(&sDebugMenuListData->itemNames[i][0], sDebugText_Dashes);
            }
        }
        else
        {
            if (sDebugMenuListData->listId == 0)
            {
                flagResult = Debug_CheckToggleFlags(i);
                name = sDebugMenu_Items_FlagsVars[i].name;
            }
            else if (sDebugMenuListData->listId == 1)
            {
                flagResult = sDebugBattleData->aiFlags[i];
                if (i == totalItems - 1)
                    flagResult == 0xFF;
                name = sDebugMenu_Items_Battle_1[i].name;
            }
        
            if (flagResult == 0xFF)
            {
                StringCopy(&sDebugMenuListData->itemNames[i][0], name);
            }
            else if (flagResult)
            {
                StringCopy(gStringVar1, sColor_Green);
                StringExpandPlaceholders(gStringVar4, name);
                StringCopy(&sDebugMenuListData->itemNames[i][0], gStringVar4);
            }
            else
            {
                StringCopy(gStringVar1, sColor_Red);
                StringExpandPlaceholders(gStringVar4, name);
                StringCopy(&sDebugMenuListData->itemNames[i][0], gStringVar4);
            }
=======
static u8 Debug_GenerateListMenuNames(void)
{
    const u8 sColor_Red[] = _("{COLOR RED}");
    const u8 sColor_Green[] = _("{COLOR GREEN}");
    u32 i, flagResult = 0;
    u8 const *name = NULL;

    u8 totalItems = 0;
    if (sDebugMenuListData->listId == 1)
        // Failsafe to prevent memory corruption
        totalItems = min(ARRAY_COUNT(sDebugMenu_Actions_Flags) - 1, DEBUG_MAX_MENU_ITEMS);

    // Copy item names for all entries but the last (which is Cancel)
    for (i = 0; i < totalItems; i++)
    {
        if (sDebugMenuListData->listId == 1)
        {
            flagResult = Debug_CheckToggleFlags(i);
            name = sDebugMenu_Actions_Flags[i].text;
        }

        if (flagResult == 0xFF)
        {
            StringCopy(&sDebugMenuListData->itemNames[i][0], name);
        }
        else if (flagResult)
        {
            StringCopy(gStringVar1, sColor_Green);
            StringExpandPlaceholders(gStringVar4, name);
            StringCopy(&sDebugMenuListData->itemNames[i][0], gStringVar4);
        }
        else
        {
            StringCopy(gStringVar1, sColor_Red);
            StringExpandPlaceholders(gStringVar4, name);
            StringCopy(&sDebugMenuListData->itemNames[i][0], gStringVar4);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        }

        sDebugMenuListData->listItems[i].name = &sDebugMenuListData->itemNames[i][0];
        sDebugMenuListData->listItems[i].id = i;
    }
<<<<<<< HEAD
=======
    return totalItems;
}

static void Debug_RefreshListMenu(u8 taskId)
{
    u8 totalItems = Debug_GenerateListMenuNames();
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    // Set list menu data
    gMultiuseListMenuTemplate.items = sDebugMenuListData->listItems;
    gMultiuseListMenuTemplate.totalItems = totalItems;
    gMultiuseListMenuTemplate.maxShowed = DEBUG_MENU_HEIGHT_MAIN;
<<<<<<< HEAD
    gMultiuseListMenuTemplate.windowId = gTasks[taskId].data[1];
=======
    gMultiuseListMenuTemplate.windowId = gTasks[taskId].tWindowId;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    gMultiuseListMenuTemplate.header_X = 0;
    gMultiuseListMenuTemplate.item_X = 8;
    gMultiuseListMenuTemplate.cursor_X = 0;
    gMultiuseListMenuTemplate.upText_Y = 1;
    gMultiuseListMenuTemplate.cursorPal = 2;
    gMultiuseListMenuTemplate.fillValue = 1;
    gMultiuseListMenuTemplate.cursorShadowPal = 3;
    gMultiuseListMenuTemplate.lettersSpacing = 1;
    gMultiuseListMenuTemplate.itemVerticalPadding = 0;
    gMultiuseListMenuTemplate.scrollMultiple = LIST_NO_MULTIPLE_SCROLL;
    gMultiuseListMenuTemplate.fontId = 1;
    gMultiuseListMenuTemplate.cursorKind = 0;
}
<<<<<<< HEAD
static void Debug_RedrawListMenu(u8 taskId)
{
    u8 listTaskId = gTasks[taskId].data[0];
    u16 scrollOffset, selectedRow;
    ListMenuGetScrollAndRow(listTaskId, &scrollOffset, &selectedRow);

    DestroyListMenuTask(gTasks[taskId].data[0], &scrollOffset, &selectedRow);
    Debug_RefreshListMenu(taskId);
    gTasks[taskId].data[0] = ListMenuInit(&gMultiuseListMenuTemplate, scrollOffset, selectedRow);
}


// *******************************
// Handle Inputs
static void DebugTask_HandleMenuInput_Main(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenu_Actions_Main[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu_Full(taskId);
        ScriptContext_Enable();
    }
}
static void DebugTask_HandleMenuInput_Utilities(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenu_Actions_Utilities[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ReShowMainMenu();
    }
}
static void DebugTask_HandleMenuInput_Scripts(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenu_Actions_Scripts[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ReShowMainMenu();
    }
}
static void DebugTask_HandleMenuInput_FlagsVars(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {        
        PlaySE(SE_SELECT);
        if ((func = sDebugMenu_Actions_Flags[input]) != NULL)
        {
            func(taskId);
            Debug_RedrawListMenu(taskId);
        }
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        
        ClearStdWindowAndFrame(gTasks[taskId].data[2], TRUE);
        RemoveWindow(gTasks[taskId].data[2]);

        Debug_ReShowMainMenu();
    }
}

static void DebugTask_HandleBattleMenuReDraw(u8 taskId)
{
    Debug_RefreshListMenu(taskId);
    switch (sDebugBattleData->submenu)
    {
    case 0:
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Battle, sDebugMenu_ListTemplate_Battle_0);
        break;
    case 1:
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Battle, gMultiuseListMenuTemplate);
        break;
    case 2:
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Battle, sDebugMenu_ListTemplate_Battle_2);
        break;
    case 3:
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_Battle, gMultiuseListMenuTemplate);
        break;
    }
}
static void DebugTask_HandleMenuInput_Battle(u8 taskId)
{
    void (*func)(u8);
    u8 listTaskId = gTasks[taskId].data[0];
    u32 input = ListMenu_ProcessInput(listTaskId);
    u16 idx;

    ListMenuGetCurrentItemArrayId(listTaskId, &idx);

    if (gMain.newKeys & A_BUTTON)
    {        
        PlaySE(SE_SELECT);

        switch (sDebugBattleData->submenu)
        {
        case 0: // Battle type
            sDebugBattleData->battleType = idx;
            sDebugBattleData->submenu++;
            Debug_DestroyMenu(taskId);

            if (sDebugBattleData->battleType == DEBUG_BATTLE_0_MENU_ITEM_WILD // Skip AI Flag selection if wild battle
                #ifdef BATTLE_ENGINE
                || sDebugBattleData->battleType == DEBUG_BATTLE_0_MENU_ITEM_WILD_DOUBLE
                #endif
                )
            {
                sDebugBattleData->submenu++;
                Debug_ShowMenu(DebugTask_HandleMenuInput_Battle, sDebugMenu_ListTemplate_Battle_2);
            }
            else
            {
                Debug_ShowMenu(DebugTask_HandleMenuInput_Battle, gMultiuseListMenuTemplate);
            }
            break;
        case 1: // AI Flags
            if (idx == sDebugMenu_ListTemplate_Battle_1.totalItems - 1)
            {
                sDebugBattleData->submenu++;
                Debug_DestroyMenu(taskId);
                Debug_ShowMenu(DebugTask_HandleMenuInput_Battle, sDebugMenu_ListTemplate_Battle_2);
            }
            else
            {
                sDebugBattleData->aiFlags[idx] = !sDebugBattleData->aiFlags[idx];
                Debug_RedrawListMenu(taskId);
            }
                
            break;
        case 2: // Terrain
            sDebugBattleData->submenu++;
            sDebugBattleData->battleTerrain = idx;
            Debug_DestroyMenu(taskId);
            Debug_ShowMenu(DebugTask_HandleMenuInput_Battle, gMultiuseListMenuTemplate);
            break;
        case 3: // Enemy pokemon
            if (idx == 6)
                Debug_InitializeBattle(taskId);
            else
            {
                if (GetMonData(&gEnemyParty[idx], MON_DATA_SANITY_HAS_SPECIES))
                {
                    Debug_DestroyMenu(taskId);
                    DebugPkmCreator_Init(10, idx);
                }
                else
                {
                    Debug_DestroyMenu(taskId);
                    DebugPkmCreator_Init(9, 0xFF);
                }
            }
            break;
        }
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        switch (sDebugBattleData->submenu)
        {
        case 0: // Return to Main menu
            PlaySE(SE_SELECT);
            Debug_DestroyMenu(taskId);
            Debug_ReShowMainMenu();
            break;
        case 2: // Skip AI Flag selection if wild battle
            if (sDebugBattleData->battleType == DEBUG_BATTLE_0_MENU_ITEM_WILD 
                #ifdef BATTLE_ENGINE
                || sDebugBattleData->battleType == DEBUG_BATTLE_0_MENU_ITEM_WILD_DOUBLE
                #endif
                )
            {
                sDebugBattleData->submenu = 0;
            }
            else
                sDebugBattleData->submenu--;
            DebugTask_HandleBattleMenuReDraw(taskId);
            break;
        default:
            sDebugBattleData->submenu--;
            DebugTask_HandleBattleMenuReDraw(taskId);
            break;
        }
    }
}
static void Debug_InitializeBattle(u8 taskId)
{
    u32 i;
    gBattleTypeFlags = 0;

    // Set main battle flags
    switch (sDebugBattleData->battleType)
    {
    case DEBUG_BATTLE_0_MENU_ITEM_WILD:
        break;
    case DEBUG_BATTLE_0_MENU_ITEM_SINGLE:
        gBattleTypeFlags = (BATTLE_TYPE_TRAINER);
        break;
    case DEBUG_BATTLE_0_MENU_ITEM_DOUBLE:
        gBattleTypeFlags = (BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_TRAINER);
        break;
    case DEBUG_BATTLE_0_MENU_ITEM_MULTI:
        gBattleTypeFlags = (BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_TRAINER | BATTLE_TYPE_INGAME_PARTNER);
        break;
    }
    
    // Set terrain
    gBattleTerrain = sDebugBattleData->battleTerrain;

    // Set AI flags
    for (i = 0; i < ARRAY_COUNT(sDebugBattleData->aiFlags); i++)
    {
        if (sDebugBattleData->aiFlags[i])
            gDebugAIFlags |= (1 << i);
    }

    gIsDebugBattle = TRUE;
    BattleSetup_StartTrainerBattle_Debug();


    Debug_DestroyMenu_Full(taskId);
}

static void DebugTask_HandleMenuInput_Give(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenu_Actions_Give[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ReShowMainMenu();
    }
}
static void DebugTask_HandleMenuInput_PkmCreator(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenu_Actions_PkmCreator[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ReShowMainMenu();
    }
}
static void DebugTask_HandleMenuInput_Fill(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenu_Actions_Fill[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ReShowMainMenu();
    }
}
static void DebugTask_HandleMenuInput_Sound(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenu_Actions_Sound[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMenu(taskId);
        Debug_ReShowMainMenu();
    }
}

// *******************************
// Open sub-menus
static void DebugAction_OpenUtilitiesMenu(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Utilities, sDebugMenu_ListTemplate_Utilities);
}
static void DebugAction_OpenScriptsMenu(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Scripts, sDebugMenu_ListTemplate_Scripts);
}
static void DebugAction_OpenFlagsVarsMenu(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    sDebugMenuListData->listId = 0;
    Debug_ShowMenu(DebugTask_HandleMenuInput_FlagsVars, gMultiuseListMenuTemplate);
}
static void DebugAction_OpenBattleMenu(u8 taskId)
{
    // Clean enemy party
    //u32 i;
    //for (i = 0; i < PARTY_SIZE; i++)
    //    ZeroMonData(&gEnemyParty[i]);
    Debug_DestroyMenu(taskId);
    sDebugMenuListData->listId = 1;
    Debug_ShowMenu(DebugTask_HandleMenuInput_Battle, sDebugMenu_ListTemplate_Battle_0);
}
static void DebugAction_OpenGiveMenu(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Give, sDebugMenu_ListTemplate_Give);
}
static void DebugAction_OpenPokemonCreator(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_PkmCreator, sDebugMenu_ListTemplate_PkmCreator);
}
static void DebugAction_OpenFillMenu(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Fill, sDebugMenu_ListTemplate_Fill);
}
static void DebugAction_OpenSoundMenu(u8 taskId)
{
    Debug_DestroyMenu(taskId);
    Debug_ShowMenu(DebugTask_HandleMenuInput_Sound, sDebugMenu_ListTemplate_Sound);
=======

static void DebugTask_HandleMenuInput_General(u8 taskId)
{
    const struct DebugMenuOption *options = Debug_GetCurrentCallbackMenu();
    u32 input = ListMenu_ProcessInput(gTasks[taskId].tMenuTaskId);
    struct DebugMenuOption option = options[input];

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        if (option.action != NULL)
        {
            if (IsSubMenuAction(option.action))
            {
                ((DebugSubmenuFunc)option.action)(taskId, option.actionParams);
            }
            else if (option.action == DebugAction_ExecuteScript)
            {
                Debug_DestroyMenu_Full_Script(taskId, (const u8 *)option.actionParams);
            }
            else if (option.action == DebugAction_ToggleFlag)
            {
                ((DebugFunc)option.actionParams)(taskId);
                DebugAction_ToggleFlag(taskId);
            }
            else
            {
                ((DebugFunc)option.action)(taskId);
            }
        }
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        if (Debug_GetCurrentCallbackMenu() != NULL && Debug_RemoveCallbackMenu() != 0)
        {
            Debug_DestroyMenu(taskId);
            if (sDebugMenuListData->listId != 0)
                sDebugMenuListData->listId = 0;
            Debug_ShowMenu(DebugTask_HandleMenuInput_General, NULL);
        }
        else
        {
            Debug_DestroyMenu_Full(taskId);
            ScriptContext_Enable();
        }
    }
}

static void DebugAction_OpenSubMenuFlagsVars(u8 taskId, const struct DebugMenuOption *items)
{
    Debug_DestroyMenu(taskId);
    sDebugMenuListData->listId = 1;
    Debug_ShowMenu(DebugTask_HandleMenuInput_General, items);
}

static void DebugAction_OpenSubMenu(u8 taskId, const struct DebugMenuOption *items)
{
    Debug_DestroyMenu(taskId);
    sDebugMenuListData->listId = 0;
    Debug_ShowMenu(DebugTask_HandleMenuInput_General, items);
}

static void DebugAction_OpenSubMenuFakeRTC(u8 taskId, const struct DebugMenuOption *items)
{
    if (!OW_USE_FAKE_RTC)
    {
        Debug_DestroyMenu_Full_Script(taskId, Debug_EventScript_FakeRTCNotEnabled);
    }
    else
    {
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_General, items);
    }
}

static void DebugAction_ExecuteScript(u8 taskId, const u8 *script)
{
    Debug_DestroyMenu_Full_Script(taskId, script);
}

static void DebugAction_ToggleFlag(u8 taskId)
{
    Debug_GenerateListMenuNames();
    RedrawListMenu(gTasks[taskId].tMenuTaskId);
}

static void DebugAction_OpenSubMenuCreateFollowerNPC(u8 taskId, const struct DebugMenuOption *items)
{
    if (FNPC_ENABLE_NPC_FOLLOWERS)
    {
        Debug_DestroyMenu(taskId);
        Debug_ShowMenu(DebugTask_HandleMenuInput_General, items);
    }
    else
    {
        Debug_DestroyMenu_Full_Script(taskId, Debug_Follower_NPC_Not_Enabled);
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

// *******************************
// Actions Utilities
<<<<<<< HEAD
static void DebugAction_Util_HealParty(u8 taskId)
{
    PlaySE(SE_USE_ITEM);
    HealPlayerParty();
    ScriptContext_Enable();
    Debug_DestroyMenu_Full(taskId);
}
static void DebugAction_Util_Fly(u8 taskId)
{

    FlagSet(FLAG_VISITED_NEWBARK_TOWN);
    FlagSet(FLAG_VISITED_CHERRYGROVE_CITY);
    FlagSet(FLAG_VISITED_VIOLET_CITY);
    FlagSet(FLAG_VISITED_AZALEA_TOWN);
    FlagSet(FLAG_VISITED_GOLDENROD_CITY);
    FlagSet(FLAG_VISITED_ECRUTEAK_CITY);
    FlagSet(FLAG_VISITED_OLIVINE_CITY);
    FlagSet(FLAG_VISITED_CIANWOOD_CITY);
    FlagSet(FLAG_VISITED_SAFARI_ZONE_GATE);
    FlagSet(FLAG_VISITED_MAHOGANY_TOWN);
    FlagSet(FLAG_VISITED_LAKE_OF_RAGE);
    FlagSet(FLAG_VISITED_BLACKTHORN_CITY);
    FlagSet(FLAG_VISITED_INDIGO_PLATEAU);
    FlagSet(FLAG_VISITED_PALLET_TOWN);
    FlagSet(FLAG_VISITED_VIRIDIAN_CITY);
    FlagSet(FLAG_VISITED_PEWTER_CITY);
    FlagSet(FLAG_VISITED_CERULEAN_CITY);
    FlagSet(FLAG_VISITED_VERMILION_CITY);
    FlagSet(FLAG_VISITED_LAVENDER_TOWN);
    FlagSet(FLAG_VISITED_FUCHSIA_CITY);
    FlagSet(FLAG_VISITED_CELADON_CITY);
    FlagSet(FLAG_VISITED_SAFFRON_CITY);
    FlagSet(FLAG_VISITED_CINNABAR_ISLAND);
    FlagSet(FLAG_VISITED_MT_SILVER);
    FlagSet(FLAG_VISITED_RECEPTION_GATE);
=======

static void DebugAction_Util_Fly(u8 taskId)
{
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    Debug_DestroyMenu_Full(taskId);
    SetMainCallback2(CB2_OpenFlyMap);
}

<<<<<<< HEAD
=======
#define tMapGroup  data[5]
#define tMapNum    data[6]
#define tWarp      data[7]

#define LAST_MAP_GROUP (MAP_GROUPS_COUNT - 1)

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_Util_Warp_Warp(u8 taskId)
{
    u8 windowId;

<<<<<<< HEAD
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);
=======
    ClearStdWindowAndFrame(gTasks[taskId].tWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tWindowId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugMenuWindowTemplateExtra);
    DrawStdWindowFrame(windowId, FALSE);

<<<<<<< HEAD
    CopyWindowToVram(windowId, 3);


    ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
    ConvertIntToDecimalStringN(gStringVar2, MAP_GROUPS_COUNT-1, STR_CONV_MODE_LEADING_ZEROS, 2);
    StringExpandPlaceholders(gStringVar1, sDebugText_Util_WarpToMap_SelMax);
    StringCopy(gStringVar3, gText_DigitIndicator[0]);
    StringExpandPlaceholders(gStringVar4, sDebugText_Util_WarpToMap_SelectMapGroup);
    AddTextPrinterParameterized(windowId, 1, gStringVar4, 1, 1, 0, NULL);

    gTasks[taskId].func = DebugAction_Util_Warp_SelectMapGroup;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 0;            //Current Flag
    gTasks[taskId].data[4] = 0;            //Digit Selected
    gTasks[taskId].data[5] = 0; //Map Group
    gTasks[taskId].data[6] = 0; //Map
    gTasks[taskId].data[7] = 0; //warp
}
static void DebugAction_Util_Warp_SelectMapGroup(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);
        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > MAP_GROUPS_COUNT-1)
                gTasks[taskId].data[3] = MAP_GROUPS_COUNT-1;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < 2)
                gTasks[taskId].data[4] += 1;
        }

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        ConvertIntToDecimalStringN(gStringVar2, MAP_GROUPS_COUNT-1, STR_CONV_MODE_LEADING_ZEROS, 2);
        StringExpandPlaceholders(gStringVar1, sDebugText_Util_WarpToMap_SelMax);
        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringExpandPlaceholders(gStringVar4, sDebugText_Util_WarpToMap_SelectMapGroup);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        gTasks[taskId].data[5] = gTasks[taskId].data[3];
        gTasks[taskId].data[3] = 0;
        gTasks[taskId].data[4] = 0;

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        ConvertIntToDecimalStringN(gStringVar2, MAP_GROUP_COUNT[gTasks[taskId].data[5]]-1, STR_CONV_MODE_LEADING_ZEROS, 2);
        StringExpandPlaceholders(gStringVar1, sDebugText_Util_WarpToMap_SelMax);
        GetMapName(gStringVar2, Overworld_GetMapHeaderByGroupAndId(gTasks[taskId].data[5], gTasks[taskId].data[3])->regionMapSectionId, 0);
        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringExpandPlaceholders(gStringVar4, sDebugText_Util_WarpToMap_SelectMap);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

        gTasks[taskId].func = DebugAction_Util_Warp_SelectMap;
    }
    else if (gMain.newKeys & B_BUTTON)
=======
    CopyWindowToVram(windowId, COPYWIN_FULL);

    ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].tInput, STR_CONV_MODE_LEADING_ZEROS, 3);
    ConvertIntToDecimalStringN(gStringVar2, LAST_MAP_GROUP, STR_CONV_MODE_LEADING_ZEROS, 3);
    StringExpandPlaceholders(gStringVar1, sDebugText_Util_WarpToMap_SelMax);
    StringCopy(gStringVar3, gText_DigitIndicator[0]);
    StringExpandPlaceholders(gStringVar4, sDebugText_Util_WarpToMap_SelectMapGroup);
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);

    gTasks[taskId].func = DebugAction_Util_Warp_SelectMapGroup;
    gTasks[taskId].tSubWindowId = windowId;
    gTasks[taskId].tInput = 0;
    gTasks[taskId].tDigit = 0;
    gTasks[taskId].tMapGroup = 0;
    gTasks[taskId].tMapNum = 0;
    gTasks[taskId].tWarp = 0;
}

static void DebugAction_Util_Warp_SelectMapGroup(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        Debug_HandleInput_Numeric(taskId, 0, LAST_MAP_GROUP, 3);

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].tInput, STR_CONV_MODE_LEADING_ZEROS, 3);
        ConvertIntToDecimalStringN(gStringVar2, LAST_MAP_GROUP, STR_CONV_MODE_LEADING_ZEROS, 3);
        StringExpandPlaceholders(gStringVar1, sDebugText_Util_WarpToMap_SelMax);
        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].tDigit]);
        StringExpandPlaceholders(gStringVar4, sDebugText_Util_WarpToMap_SelectMapGroup);
        AddTextPrinterParameterized(gTasks[taskId].tSubWindowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
    }

    if (JOY_NEW(A_BUTTON))
    {
        gTasks[taskId].tMapGroup = gTasks[taskId].tInput;
        gTasks[taskId].tInput = 0;
        gTasks[taskId].tDigit = 0;

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].tInput, STR_CONV_MODE_LEADING_ZEROS, (MAP_GROUP_COUNT[gTasks[taskId].tMapGroup] - 1 >= 100) ? 3 : 2);
        ConvertIntToDecimalStringN(gStringVar2, MAP_GROUP_COUNT[gTasks[taskId].tMapGroup] - 1, STR_CONV_MODE_LEADING_ZEROS, (MAP_GROUP_COUNT[gTasks[taskId].tMapGroup] - 1 >= 100) ? 3 : 2);
        StringExpandPlaceholders(gStringVar1, sDebugText_Util_WarpToMap_SelMax);
        GetMapName(gStringVar2, Overworld_GetMapHeaderByGroupAndId(gTasks[taskId].tMapGroup, gTasks[taskId].tInput)->regionMapSectionId, 0);
        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].tDigit]);
        StringExpandPlaceholders(gStringVar4, sDebugText_Util_WarpToMap_SelectMap);
        AddTextPrinterParameterized(gTasks[taskId].tSubWindowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);

        gTasks[taskId].func = DebugAction_Util_Warp_SelectMap;
    }
    else if (JOY_NEW(B_BUTTON))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    {
        PlaySE(SE_SELECT);
        DebugAction_DestroyExtraWindow(taskId);
    }
}
<<<<<<< HEAD
static void DebugAction_Util_Warp_SelectMap(u8 taskId)
{
    u8 max_value = MAP_GROUP_COUNT[gTasks[taskId].data[5]]; //maps in the selected map group

    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);
        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > max_value-1)
                gTasks[taskId].data[3] = max_value-1;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < 2)
                gTasks[taskId].data[4] += 1;
        }

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        ConvertIntToDecimalStringN(gStringVar2, MAP_GROUP_COUNT[gTasks[taskId].data[5]]-1, STR_CONV_MODE_LEADING_ZEROS, 2);
        StringExpandPlaceholders(gStringVar1, sDebugText_Util_WarpToMap_SelMax);
        GetMapName(gStringVar2, Overworld_GetMapHeaderByGroupAndId(gTasks[taskId].data[5], gTasks[taskId].data[3])->regionMapSectionId, 0);
        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringExpandPlaceholders(gStringVar4, sDebugText_Util_WarpToMap_SelectMap);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        gTasks[taskId].data[6] = gTasks[taskId].data[3];
        gTasks[taskId].data[3] = 0;
        gTasks[taskId].data[4] = 0;

        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringExpandPlaceholders(gStringVar4, sDebugText_Util_WarpToMap_SelectWarp);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
        gTasks[taskId].func = DebugAction_Util_Warp_SelectWarp;
    }
    else if (gMain.newKeys & B_BUTTON)
=======

static void DebugAction_Util_Warp_SelectMap(u8 taskId)
{
    u8 max_value = MAP_GROUP_COUNT[gTasks[taskId].tMapGroup]; //maps in the selected map group

    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        Debug_HandleInput_Numeric(taskId, 0, max_value - 1, 3);

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].tInput, STR_CONV_MODE_LEADING_ZEROS, (max_value >= 100) ? 3 : 2);
        ConvertIntToDecimalStringN(gStringVar2, MAP_GROUP_COUNT[gTasks[taskId].tMapGroup] - 1, STR_CONV_MODE_LEADING_ZEROS, (max_value >= 100) ? 3 : 2);
        StringExpandPlaceholders(gStringVar1, sDebugText_Util_WarpToMap_SelMax);
        GetMapName(gStringVar2, Overworld_GetMapHeaderByGroupAndId(gTasks[taskId].tMapGroup, gTasks[taskId].tInput)->regionMapSectionId, 0);
        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].tDigit]);
        StringExpandPlaceholders(gStringVar4, sDebugText_Util_WarpToMap_SelectMap);
        AddTextPrinterParameterized(gTasks[taskId].tSubWindowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
    }

    if (JOY_NEW(A_BUTTON))
    {
        gTasks[taskId].tMapNum = gTasks[taskId].tInput;
        gTasks[taskId].tInput = 0;
        gTasks[taskId].tDigit = 0;

        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].tDigit]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].tInput, STR_CONV_MODE_LEADING_ZEROS, 3);
        StringExpandPlaceholders(gStringVar4, sDebugText_Util_WarpToMap_SelectWarp);
        AddTextPrinterParameterized(gTasks[taskId].tSubWindowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
        gTasks[taskId].func = DebugAction_Util_Warp_SelectWarp;
    }
    else if (JOY_NEW(B_BUTTON))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    {
        PlaySE(SE_SELECT);
        DebugAction_DestroyExtraWindow(taskId);
    }
}
<<<<<<< HEAD
static void DebugAction_Util_Warp_SelectWarp(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);
        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > 10)
                gTasks[taskId].data[3] = 10;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }

        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringExpandPlaceholders(gStringVar4, sDebugText_Util_WarpToMap_SelectWarp);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        gTasks[taskId].data[7] = gTasks[taskId].data[3];
        //WARP
        SetWarpDestinationToMapWarp(gTasks[taskId].data[5], gTasks[taskId].data[6], gTasks[taskId].data[7]); //If not warp with the number available -> center of map
=======

static void DebugAction_Util_Warp_SelectWarp(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        if (JOY_NEW(DPAD_UP))
        {
            gTasks[taskId].tInput += sPowersOfTen[gTasks[taskId].tDigit];
            if (gTasks[taskId].tInput > 10)
                gTasks[taskId].tInput = 10;
        }
        if (JOY_NEW(DPAD_DOWN))
        {
            gTasks[taskId].tInput -= sPowersOfTen[gTasks[taskId].tDigit];
            if (gTasks[taskId].tInput < 0)
                gTasks[taskId].tInput = 0;
        }

        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].tDigit]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].tInput, STR_CONV_MODE_LEADING_ZEROS, 3);
        StringExpandPlaceholders(gStringVar4, sDebugText_Util_WarpToMap_SelectWarp);
        AddTextPrinterParameterized(gTasks[taskId].tSubWindowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
    }

    if (JOY_NEW(A_BUTTON))
    {
        gTasks[taskId].tWarp = gTasks[taskId].tInput;
        //If there's no warp with the number available, warp to the center of the map.
        SetWarpDestinationToMapWarp(gTasks[taskId].tMapGroup, gTasks[taskId].tMapNum, gTasks[taskId].tWarp);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        DoWarp();
        ResetInitialPlayerAvatarState();
        DebugAction_DestroyExtraWindow(taskId);
    }
<<<<<<< HEAD
    else if (gMain.newKeys & B_BUTTON)
=======
    else if (JOY_NEW(B_BUTTON))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    {
        PlaySE(SE_SELECT);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

<<<<<<< HEAD
static void DebugAction_Util_PoisonMons(u8 taskId)
{
    int i;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, 0)
            && GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG) != SPECIES_NONE
            && GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG) != SPECIES_EGG)
        {
            u32 curStatus = STATUS1_POISON;
            SetMonData(&gPlayerParty[i], MON_DATA_STATUS, &curStatus);
        }
    }
    PlaySE(SE_FIELD_POISON);
}
=======
#undef tMapGroup
#undef tMapNum
#undef tWarp
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

void CheckSaveBlock1Size(struct ScriptContext *ctx)
{
    u32 currSb1Size = sizeof(struct SaveBlock1);
    u32 maxSb1Size = SECTOR_DATA_SIZE * (SECTOR_ID_SAVEBLOCK1_END - SECTOR_ID_SAVEBLOCK1_START + 1);
    ConvertIntToDecimalStringN(gStringVar1, currSb1Size, STR_CONV_MODE_LEFT_ALIGN, 6);
    ConvertIntToDecimalStringN(gStringVar2, maxSb1Size, STR_CONV_MODE_LEFT_ALIGN, 6);
    ConvertIntToDecimalStringN(gStringVar3, maxSb1Size - currSb1Size, STR_CONV_MODE_LEFT_ALIGN, 6);
<<<<<<< HEAD
=======
    ConvertIntToDecimalStringN(gStringVar4, 1, STR_CONV_MODE_LEFT_ALIGN, 6);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void CheckSaveBlock2Size(struct ScriptContext *ctx)
{
    u32 currSb2Size = (sizeof(struct SaveBlock2));
    u32 maxSb2Size = SECTOR_DATA_SIZE;
    ConvertIntToDecimalStringN(gStringVar1, currSb2Size, STR_CONV_MODE_LEFT_ALIGN, 6);
    ConvertIntToDecimalStringN(gStringVar2, maxSb2Size, STR_CONV_MODE_LEFT_ALIGN, 6);
    ConvertIntToDecimalStringN(gStringVar3, maxSb2Size - currSb2Size, STR_CONV_MODE_LEFT_ALIGN, 6);
}

<<<<<<< HEAD
=======
void CheckSaveBlock3Size(struct ScriptContext *ctx)
{
    u32 currSb3Size = (sizeof(struct SaveBlock3));
    u32 maxSb3Size = SAVE_BLOCK_3_CHUNK_SIZE * NUM_SECTORS_PER_SLOT;
    ConvertIntToDecimalStringN(gStringVar1, currSb3Size, STR_CONV_MODE_LEFT_ALIGN, 6);
    ConvertIntToDecimalStringN(gStringVar2, maxSb3Size, STR_CONV_MODE_LEFT_ALIGN, 6);
    ConvertIntToDecimalStringN(gStringVar3, maxSb3Size - currSb3Size, STR_CONV_MODE_LEFT_ALIGN, 6);
}

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void CheckPokemonStorageSize(struct ScriptContext *ctx)
{
    u32 currPkmnStorageSize = sizeof(struct PokemonStorage);
    u32 maxPkmnStorageSize = SECTOR_DATA_SIZE * (SECTOR_ID_PKMN_STORAGE_END - SECTOR_ID_PKMN_STORAGE_START + 1);
    ConvertIntToDecimalStringN(gStringVar1, currPkmnStorageSize, STR_CONV_MODE_LEFT_ALIGN, 6);
    ConvertIntToDecimalStringN(gStringVar2, maxPkmnStorageSize, STR_CONV_MODE_LEFT_ALIGN, 6);
    ConvertIntToDecimalStringN(gStringVar3, maxPkmnStorageSize - currPkmnStorageSize, STR_CONV_MODE_LEFT_ALIGN, 6);
}

<<<<<<< HEAD
static void DebugAction_Util_CheckSaveBlock(u8 taskId)
{
    Debug_DestroyMenu_Full_Script(taskId, Debug_CheckSaveBlock);
}

static const u8 sWeatherNames[22][24] = {
    [WEATHER_NONE]               = _("NONE"),
    [WEATHER_SUNNY_CLOUDS]       = _("SUNNY CLOUDS"),
    [WEATHER_SUNNY]              = _("SUNNY"),
    [WEATHER_RAIN]               = _("RAIN"),
    [WEATHER_SNOW]               = _("SNOW"),
    [WEATHER_RAIN_THUNDERSTORM]  = _("RAIN THUNDERSTORM"),
    [WEATHER_FOG_HORIZONTAL]     = _("FOG HORIZONTAL"),
    [WEATHER_VOLCANIC_ASH]       = _("VOLCANIC ASH"),
    [WEATHER_SANDSTORM]          = _("SANDSTORM"),
    [WEATHER_FOG_DIAGONAL]       = _("FOG DIAGONAL"),
    [WEATHER_UNDERWATER]         = _("UNDERWATER"),
    [WEATHER_SHADE]              = _("SHADE"),
    [WEATHER_DROUGHT]            = _("DROUGHT"),
    [WEATHER_DOWNPOUR]           = _("DOWNPOUR"),
    [WEATHER_UNDERWATER_BUBBLES] = _("UNDERWATER BUBBLES"),
    [WEATHER_ABNORMAL]           = _("ABNORMAL(NOT WORKING)"),
    [WEATHER_ROUTE119_CYCLE]     = _("ROUTE119 CYCLE"),
    [WEATHER_ROUTE123_CYCLE]     = _("ROUTE123 CYCLE"),
};
static const u8 sText_WeatherNotDefined[] = _("NOT DEFINED!!!");
=======
enum RoundMode
{
    ROUND_CEILING,
    ROUND_NEAREST,
    ROUND_FLOOR,
};

static u8 *ConvertQ22_10ToDecimalString(u8 *string, u32 q22_10, u32 decimalDigits, enum RoundMode roundMode)
{
    string = ConvertIntToDecimalStringN(string, q22_10 >> 10, STR_CONV_MODE_LEFT_ALIGN, 10);

    if (decimalDigits == 0)
        return string;

    *string++ = CHAR_PERIOD;

    q22_10 &= (1 << 10) - 1;
    while (decimalDigits-- > 1)
    {
        q22_10 *= 10;
        *string++ = CHAR_0 + (q22_10 >> 10);
        q22_10 &= (1 << 10) - 1;
    }

    q22_10 *= 10;
    switch (roundMode)
    {
    case ROUND_CEILING: q22_10 += (1 << 10) - 1; break;
    case ROUND_NEAREST: q22_10 += 1 << (10 - 1); break;
    case ROUND_FLOOR:                            break;
    }
    *string++ = CHAR_0 + (q22_10 >> 10);

    *string++ = EOS;

    return string;
}

void CheckROMSize(struct ScriptContext *ctx)
{
    extern u8 __rom_end[];
    u32 currROMSizeB = __rom_end - (const u8 *)ROM_START;
    u32 currROMSizeKB = (currROMSizeB + 1023) / 1024;
    u32 currROMFreeKB = ((const u8 *)ROM_END - __rom_end) / 1024;
    ConvertQ22_10ToDecimalString(gStringVar1, currROMSizeKB, 2, ROUND_CEILING);
    ConvertQ22_10ToDecimalString(gStringVar2, currROMFreeKB, 2, ROUND_FLOOR);
}

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_Util_Weather(u8 taskId)
{
    u8 windowId;

<<<<<<< HEAD
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);
=======
    ClearStdWindowAndFrame(gTasks[taskId].tWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tWindowId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugMenuWindowTemplateWeather);
    DrawStdWindowFrame(windowId, FALSE);

<<<<<<< HEAD
    CopyWindowToVram(windowId, 3);
=======
    CopyWindowToVram(windowId, COPYWIN_FULL);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    //Display initial ID
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, 1, STR_CONV_MODE_LEADING_ZEROS, 2);
<<<<<<< HEAD
    StringCopyPadded(gStringVar1, sWeatherNames[0], CHAR_SPACE, 30);
    StringExpandPlaceholders(gStringVar4, sDebugText_Util_Weather_ID);
    AddTextPrinterParameterized(windowId, 1, gStringVar4, 1, 1, 0, NULL);

    gTasks[taskId].func = DebugAction_Util_Weather_SelectId;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 0;            //Current ID
    gTasks[taskId].data[4] = 0;            //Digit Selected
}
static void DebugAction_Util_Weather_SelectId(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > WEATHER_ROUTE123_CYCLE)
                gTasks[taskId].data[3] = WEATHER_ROUTE123_CYCLE;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < WEATHER_NONE)
                gTasks[taskId].data[3] = WEATHER_NONE;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < 2)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);

        if (gTasks[taskId].data[3] <= 15 || gTasks[taskId].data[3] >= 20)
            StringCopyPadded(gStringVar1, sWeatherNames[gTasks[taskId].data[3]], CHAR_SPACE, 30);
        else
            StringCopyPadded(gStringVar1, sText_WeatherNotDefined, CHAR_SPACE, 30); 

        StringExpandPlaceholders(gStringVar4, sDebugText_Util_Weather_ID);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        if (gTasks[taskId].data[3] <= 14 || gTasks[taskId].data[3] >= 20)
        {
            gTasks[taskId].data[5] = gTasks[taskId].data[3];
            SetWeather(gTasks[taskId].data[5]);
        }
    }
    else if (gMain.newKeys & B_BUTTON)
=======
    StringCopyPadded(gStringVar1, GetWeatherName(0), CHAR_SPACE, 30);
    StringExpandPlaceholders(gStringVar4, sDebugText_Util_Weather_ID);
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);

    gTasks[taskId].func = DebugAction_Util_Weather_SelectId;
    gTasks[taskId].tSubWindowId = windowId;
    gTasks[taskId].tInput = 0;
    gTasks[taskId].tDigit = 0;
}

static void DebugAction_Util_Weather_SelectId(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        Debug_HandleInput_Numeric(taskId, WEATHER_NONE, WEATHER_COUNT - 1, 3);

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].tDigit]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].tInput, STR_CONV_MODE_LEADING_ZEROS, 2);

        StringCopyPadded(gStringVar1, GetWeatherName(gTasks[taskId].tInput), CHAR_SPACE, 30);

        StringExpandPlaceholders(gStringVar4, sDebugText_Util_Weather_ID);
        AddTextPrinterParameterized(gTasks[taskId].tSubWindowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
    }

    if (JOY_NEW(A_BUTTON))
    {
        if (gTasks[taskId].tInput <= 14 || gTasks[taskId].tInput >= 20)
        {
            gTasks[taskId].data[5] = gTasks[taskId].tInput;
            SetWeather(gTasks[taskId].data[5]);
        }
    }
    else if (JOY_NEW(B_BUTTON))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    {
        PlaySE(SE_SELECT);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

<<<<<<< HEAD
static void DebugAction_Util_CheckWallClock(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(PlayersHouse_2F_EventScript_CheckWallClock);
}
static void DebugAction_Util_SetWallClock(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(PlayersHouse_2F_EventScript_SetWallClock);
}
static void DebugAction_Util_WatchCredits(u8 taskId)
{
    struct Task* task = &gTasks[taskId];
    Debug_DestroyMenu_Full(taskId);
    SetMainCallback2(CB2_StartCreditsSequence);
}
static void DebugAction_Util_Trainer_Name(u8 taskId)
{
    NewGameBirchSpeech_SetDefaultPlayerName(Random() % 20);
    DoNamingScreen(0, gSaveBlock2Ptr->playerName, gSaveBlock2Ptr->playerGender, 0, 0, CB2_ReturnToFieldContinueScript);
}
static void DebugAction_Util_Trainer_Gender(u8 taskId)
{
    if (gSaveBlock2Ptr->playerGender == 0) // 0 Male, 1 Female
        gSaveBlock2Ptr->playerGender = 1;
    else
        gSaveBlock2Ptr->playerGender = 0;
    ScriptContext_Enable();
    Debug_DestroyMenu_Full(taskId);
}
static void DebugAction_Util_Trainer_Id(u8 taskId)
{
    u32 trainerId = ((Random() << 16) | Random());
=======
static void DebugAction_Util_WatchCredits(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    SetMainCallback2(CB2_StartCreditsSequence);
}

static void DebugAction_Player_Name(u8 taskId)
{
    DoNamingScreen(NAMING_SCREEN_PLAYER, gSaveBlock2Ptr->playerName, gSaveBlock2Ptr->playerGender, 0, 0, CB2_ReturnToFieldContinueScript);
}

static void DebugAction_Player_Gender(u8 taskId)
{
    if (gSaveBlock2Ptr->playerGender == MALE)
        gSaveBlock2Ptr->playerGender = FEMALE;
    else
        gSaveBlock2Ptr->playerGender = MALE;
    Debug_DestroyMenu_Full(taskId);
    ScriptContext_Enable();
}

static void DebugAction_Player_Id(u8 taskId)
{
    u32 trainerId = Random32();
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    SetTrainerId(trainerId, gSaveBlock2Ptr->playerTrainerId);
    Debug_DestroyMenu_Full(taskId);
    ScriptContext_Enable();
}
<<<<<<< HEAD
static void DebugAction_Util_CheatStart(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(Debug_CheatStart);
}

// *******************************
// Actions Scripts
static void DebugAction_Util_Script_1(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(Debug_Script_1);
}
static void DebugAction_Util_Script_2(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(Debug_Script_2);
}
static void DebugAction_Util_Script_3(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(Debug_Script_3);
}
static void DebugAction_Util_Script_4(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(Debug_Script_4);
}
static void DebugAction_Util_Script_5(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(Debug_Script_5);
}
static void DebugAction_Util_Script_6(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(Debug_Script_6);
}
static void DebugAction_Util_Script_7(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(Debug_Script_7);
}
static void DebugAction_Util_Script_8(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    ScriptContext_SetupScript(Debug_Script_8);
=======

static void DebugAction_Util_CheatStart(u8 taskId)
{
    if (!FlagGet(FLAG_SYS_CLOCK_SET))
        RtcInitLocalTimeOffset(0, 0);

    InitTimeBasedEvents();
    Debug_DestroyMenu_Full_Script(taskId, Debug_CheatStart);
}

void BufferExpansionVersion(struct ScriptContext *ctx)
{
    static const u8 sText_Released[] = _("\nRelease Build");
    static const u8 sText_Unreleased[] = _("\nDevelopment Build");
    u8 *string = gStringVar1;
    *string++ = CHAR_v;
    string = ConvertIntToDecimalStringN(string, EXPANSION_VERSION_MAJOR, STR_CONV_MODE_LEFT_ALIGN, 3);
    *string++ = CHAR_PERIOD;
    string = ConvertIntToDecimalStringN(string, EXPANSION_VERSION_MINOR, STR_CONV_MODE_LEFT_ALIGN, 3);
    *string++ = CHAR_PERIOD;
    string = ConvertIntToDecimalStringN(string, EXPANSION_VERSION_PATCH, STR_CONV_MODE_LEFT_ALIGN, 3);
    if (EXPANSION_TAGGED_RELEASE)
        string = StringCopy(string, sText_Released);
    else
        string = StringCopy(string, sText_Unreleased);
}

void DebugMenu_CalculateTime(struct ScriptContext *ctx)
{
    if (OW_USE_FAKE_RTC)
    {
        struct SiiRtcInfo *rtc = FakeRtc_GetCurrentTime();
        StringExpandPlaceholders(gStringVar1, gDayNameStringsTable[rtc->dayOfWeek]);
        ConvertIntToDecimalStringN(gStringVar2, rtc->hour, STR_CONV_MODE_LEFT_ALIGN, 3);
        ConvertIntToDecimalStringN(gStringVar3, rtc->minute, STR_CONV_MODE_LEADING_ZEROS, 2);
    }
    else
    {
        u32 day = ((gLocalTime.days - 1) + 6) % 7 ;
        RtcCalcLocalTime();
        StringExpandPlaceholders(gStringVar1, gDayNameStringsTable[day]);
        ConvertIntToDecimalStringN(gStringVar2, gLocalTime.hours, STR_CONV_MODE_LEFT_ALIGN, 3);
        ConvertIntToDecimalStringN(gStringVar3, gLocalTime.minutes, STR_CONV_MODE_LEADING_ZEROS, 2);
    }
}

void DebugMenu_CalculateTimeOfDay(struct ScriptContext *ctx)
{
    enum TimeOfDay timeOfDay = GetTimeOfDay();
    switch (timeOfDay)
    {
        case TIME_MORNING:
        case TIME_DAY:
        case TIME_EVENING:
        case TIME_NIGHT:
            StringExpandPlaceholders(gStringVar1, gTimeOfDayStringsTable[timeOfDay]);
            break;
        case TIMES_OF_DAY_COUNT:
            break;
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

// *******************************
// Actions Flags and Vars
<<<<<<< HEAD
=======
static void Debug_Display_FlagInfo(u32 flag, u32 digit, u8 windowId)
{
    ConvertIntToDecimalStringN(gStringVar1, flag, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_FLAGS);
    ConvertIntToHexStringN(gStringVar2, flag, STR_CONV_MODE_LEFT_ALIGN, 3);
    StringExpandPlaceholders(gStringVar1, COMPOUND_STRING("{STR_VAR_1}{CLEAR_TO 90}\n0x{STR_VAR_2}{CLEAR_TO 90}"));
    if (FlagGet(flag))
        StringCopyPadded(gStringVar2, sDebugText_True, CHAR_SPACE, 15);
    else
        StringCopyPadded(gStringVar2, sDebugText_False, CHAR_SPACE, 15);
    StringCopy(gStringVar3, gText_DigitIndicator[digit]);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Flag: {STR_VAR_1}{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}\n{STR_VAR_3}"));
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
}

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_FlagsVars_Flags(u8 taskId)
{
    u8 windowId;

<<<<<<< HEAD
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);
=======
    ClearStdWindowAndFrame(gTasks[taskId].tWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tWindowId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugMenuWindowTemplateExtra);
    DrawStdWindowFrame(windowId, FALSE);

<<<<<<< HEAD
    CopyWindowToVram(windowId, 3);

    //Display initial Flag
    ConvertIntToDecimalStringN(gStringVar1, 1, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_FLAGS);
    ConvertIntToHexStringN(gStringVar2, 1, STR_CONV_MODE_LEFT_ALIGN, 3);
    StringExpandPlaceholders(gStringVar1, sDebugText_FlagsVars_FlagHex);
    if (FlagGet(FLAG_TEMP_1))
        StringCopyPadded(gStringVar2, sDebugText_True, CHAR_SPACE, 15);
    else
        StringCopyPadded(gStringVar2, sDebugText_False, CHAR_SPACE, 15);
    StringCopy(gStringVar3, gText_DigitIndicator[0]);
    StringExpandPlaceholders(gStringVar4, sDebugText_FlagsVars_Flag);
    AddTextPrinterParameterized(windowId, 1, gStringVar4, 1, 1, 0, NULL);

    gTasks[taskId].func = DebugAction_FlagsVars_FlagsSelect;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = FLAG_TEMP_1; //Current Flag
    gTasks[taskId].data[4] = 0;           //Digit Selected
}
static void DebugAction_FlagsVars_FlagsSelect(u8 taskId)
{
    if (gMain.newKeys & A_BUTTON)
        FlagToggle(gTasks[taskId].data[3]);
    else if (gMain.newKeys & B_BUTTON)
=======
    CopyWindowToVram(windowId, COPYWIN_FULL);

    // Display initial flag
    Debug_Display_FlagInfo(FLAG_TEMP_1, 0, windowId);

    gTasks[taskId].func = DebugAction_FlagsVars_FlagsSelect;
    gTasks[taskId].tSubWindowId = windowId;
    gTasks[taskId].tInput = FLAG_TEMP_1;
    gTasks[taskId].tDigit = 0;
}

static void DebugAction_FlagsVars_FlagsSelect(u8 taskId)
{
    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        FlagToggle(gTasks[taskId].tInput);
    }
    else if (JOY_NEW(B_BUTTON))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    {
        PlaySE(SE_SELECT);
        DebugAction_DestroyExtraWindow(taskId);
        return;
    }

<<<<<<< HEAD
    if (gMain.newKeys & DPAD_UP)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
        if (gTasks[taskId].data[3] >= FLAGS_COUNT){
            gTasks[taskId].data[3] = FLAGS_COUNT - 1;
        }
    }
    if (gMain.newKeys & DPAD_DOWN)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
        if (gTasks[taskId].data[3] < 1){
            gTasks[taskId].data[3] = 1;
        }
    }
    if (gMain.newKeys & DPAD_LEFT)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].data[4] -= 1;
        if (gTasks[taskId].data[4] < 0)
        {
            gTasks[taskId].data[4] = 0;
        }
    }
    if (gMain.newKeys & DPAD_RIGHT)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].data[4] += 1;
        if (gTasks[taskId].data[4] > DEBUG_NUMBER_DIGITS_FLAGS-1)
        {
            gTasks[taskId].data[4] = DEBUG_NUMBER_DIGITS_FLAGS-1;
        }
    }

    if (gMain.newKeys & DPAD_ANY || gMain.newKeys & A_BUTTON)
    {
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_FLAGS);
        ConvertIntToHexStringN(gStringVar2, gTasks[taskId].data[3], STR_CONV_MODE_LEFT_ALIGN, 3);
        StringExpandPlaceholders(gStringVar1, sDebugText_FlagsVars_FlagHex);
        if (FlagGet(gTasks[taskId].data[3]) == TRUE)
            StringCopyPadded(gStringVar2, sDebugText_True, CHAR_SPACE, 15);
        else
            StringCopyPadded(gStringVar2, sDebugText_False, CHAR_SPACE, 15);
        StringCopy(gStringVar3, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringExpandPlaceholders(gStringVar4, sDebugText_FlagsVars_Flag);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }
}

=======
    Debug_HandleInput_Numeric(taskId, 1, FLAGS_COUNT - 1, DEBUG_NUMBER_DIGITS_FLAGS);

    if (JOY_NEW(DPAD_ANY) || JOY_NEW(A_BUTTON))
    {
        Debug_Display_FlagInfo(gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
    }
}

#define tVarValue  data[5]

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_FlagsVars_Vars(u8 taskId)
{
    u8 windowId;

<<<<<<< HEAD
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);
=======
    ClearStdWindowAndFrame(gTasks[taskId].tWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tWindowId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugMenuWindowTemplateExtra);
    DrawStdWindowFrame(windowId, FALSE);

<<<<<<< HEAD
    CopyWindowToVram(windowId, 3);

    //Display initial Variable
=======
    CopyWindowToVram(windowId, COPYWIN_FULL);

    // Display initial var
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    ConvertIntToDecimalStringN(gStringVar1, VARS_START, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
    ConvertIntToHexStringN(gStringVar2, VARS_START, STR_CONV_MODE_LEFT_ALIGN, 4);
    StringExpandPlaceholders(gStringVar1, sDebugText_FlagsVars_VariableHex);
    ConvertIntToDecimalStringN(gStringVar3, 0, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
    StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    StringExpandPlaceholders(gStringVar4, sDebugText_FlagsVars_Variable);
<<<<<<< HEAD
    AddTextPrinterParameterized(windowId, 1, gStringVar4, 1, 1, 0, NULL);

    gTasks[taskId].func = DebugAction_FlagsVars_Select;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = VARS_START;            //Current Variable
    gTasks[taskId].data[4] = 0;            //Digit Selected
    gTasks[taskId].data[5] = 0;            //Current Variable VALUE
=======
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);

    gTasks[taskId].func = DebugAction_FlagsVars_Select;
    gTasks[taskId].tSubWindowId = windowId;
    gTasks[taskId].tInput = VARS_START;
    gTasks[taskId].tDigit = 0;
    gTasks[taskId].tVarValue = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

static void DebugAction_FlagsVars_Select(u8 taskId)
{
<<<<<<< HEAD
    if (gMain.newKeys & DPAD_UP)
    {
        gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
        if (gTasks[taskId].data[3] > VARS_END){
            gTasks[taskId].data[3] = VARS_END;
        }
    }
    if (gMain.newKeys & DPAD_DOWN)
    {
        gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
        if (gTasks[taskId].data[3] < VARS_START){
            gTasks[taskId].data[3] = VARS_START;
        }
    }
    if (gMain.newKeys & DPAD_LEFT)
    {
        gTasks[taskId].data[4] -= 1;
        if (gTasks[taskId].data[4] < 0)
        {
            gTasks[taskId].data[4] = 0;
        }
    }
    if (gMain.newKeys & DPAD_RIGHT)
    {
        gTasks[taskId].data[4] += 1;
        if (gTasks[taskId].data[4] > DEBUG_NUMBER_DIGITS_VARIABLES-1)
        {
            gTasks[taskId].data[4] = DEBUG_NUMBER_DIGITS_VARIABLES-1;
        }
    }

    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        ConvertIntToHexStringN(gStringVar2, gTasks[taskId].data[3], STR_CONV_MODE_LEFT_ALIGN, 4);
        StringExpandPlaceholders(gStringVar1, sDebugText_FlagsVars_VariableHex);
        if (VarGetIfExist(gTasks[taskId].data[3]) == 65535) //Current value, if 65535 the value hasnt been set
            gTasks[taskId].data[5] = 0;
        else
            gTasks[taskId].data[5] = VarGet(gTasks[taskId].data[3]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[5], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]); //Current digit

        //Combine str's to full window string
        StringExpandPlaceholders(gStringVar4, sDebugText_FlagsVars_Variable);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        gTasks[taskId].data[4] = 0;

        PlaySE(SE_SELECT);

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        ConvertIntToHexStringN(gStringVar2, gTasks[taskId].data[3], STR_CONV_MODE_LEFT_ALIGN, 4);
        StringExpandPlaceholders(gStringVar1, sDebugText_FlagsVars_VariableHex);
        if (VarGetIfExist(gTasks[taskId].data[3]) == 65535) //Current value if 65535 the value hasnt been set
            gTasks[taskId].data[5] = 0;
        else
            gTasks[taskId].data[5] = VarGet(gTasks[taskId].data[3]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[5], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]); //Current digit
        StringExpandPlaceholders(gStringVar4, sDebugText_FlagsVars_VariableValueSet);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
=======
    Debug_HandleInput_Numeric(taskId, VARS_START, VARS_END, DEBUG_NUMBER_DIGITS_VARIABLES);

    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].tInput, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        ConvertIntToHexStringN(gStringVar2, gTasks[taskId].tInput, STR_CONV_MODE_LEFT_ALIGN, 4);
        StringExpandPlaceholders(gStringVar1, sDebugText_FlagsVars_VariableHex);
        if (VarGetIfExist(gTasks[taskId].tInput) == 0xFFFF)
            gTasks[taskId].tVarValue = 0;
        else
            gTasks[taskId].tVarValue = VarGet(gTasks[taskId].tInput);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].tVarValue, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].tDigit]);

        //Combine str's to full window string
        StringExpandPlaceholders(gStringVar4, sDebugText_FlagsVars_Variable);
        AddTextPrinterParameterized(gTasks[taskId].tSubWindowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
    }

    if (JOY_NEW(A_BUTTON))
    {
        gTasks[taskId].tDigit = 0;

        PlaySE(SE_SELECT);

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].tInput, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        ConvertIntToHexStringN(gStringVar2, gTasks[taskId].tInput, STR_CONV_MODE_LEFT_ALIGN, 4);
        StringExpandPlaceholders(gStringVar1, sDebugText_FlagsVars_VariableHex);
        if (VarGetIfExist(gTasks[taskId].tInput) == 0xFFFF)
            gTasks[taskId].tVarValue = 0;
        else
            gTasks[taskId].tVarValue = VarGet(gTasks[taskId].tInput);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].tVarValue, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].tDigit]);
        StringExpandPlaceholders(gStringVar4, sDebugText_FlagsVars_VariableValueSet);
        AddTextPrinterParameterized(gTasks[taskId].tSubWindowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

        gTasks[taskId].data[6] = gTasks[taskId].data[5]; //New value selector
        gTasks[taskId].func = DebugAction_FlagsVars_SetValue;
    }
<<<<<<< HEAD
    else if (gMain.newKeys & B_BUTTON)
=======
    else if (JOY_NEW(B_BUTTON))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    {
        PlaySE(SE_SELECT);
        DebugAction_DestroyExtraWindow(taskId);
        return;
    }
}
<<<<<<< HEAD
static void DebugAction_FlagsVars_SetValue(u8 taskId)
{
    if (gMain.newKeys & DPAD_UP)
    {
        if (gTasks[taskId].data[6] + sPowersOfTen[gTasks[taskId].data[4]] <= 32000)
            gTasks[taskId].data[6] += sPowersOfTen[gTasks[taskId].data[4]];
        else
            gTasks[taskId].data[6] = 32000-1;
        if (gTasks[taskId].data[6] >= 32000){
            gTasks[taskId].data[6] = 32000-1;
        }
    }
    if (gMain.newKeys & DPAD_DOWN)
    {
        gTasks[taskId].data[6] -= sPowersOfTen[gTasks[taskId].data[4]];
        if (gTasks[taskId].data[6] < 0){
            gTasks[taskId].data[6] = 0;
        }
    }
    if (gMain.newKeys & DPAD_LEFT)
    {
        gTasks[taskId].data[4] -= 1;
        if (gTasks[taskId].data[4] < 0)
        {
            gTasks[taskId].data[4] = 0;
        }
    }
    if (gMain.newKeys & DPAD_RIGHT)
    {
        gTasks[taskId].data[4] += 1;
        if (gTasks[taskId].data[4] > 4)
        {
            gTasks[taskId].data[4] = 4;
        }
    }

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        VarSet(gTasks[taskId].data[3], gTasks[taskId].data[6]);
    }
    else if (gMain.newKeys & B_BUTTON)
=======

static void DebugAction_FlagsVars_SetValue(u8 taskId)
{
    if (JOY_NEW(DPAD_UP))
    {
        if (gTasks[taskId].data[6] + sPowersOfTen[gTasks[taskId].tDigit] <= 32000)
            gTasks[taskId].data[6] += sPowersOfTen[gTasks[taskId].tDigit];
        else
            gTasks[taskId].data[6] = 32000 - 1;

        if (gTasks[taskId].data[6] >= 32000)
            gTasks[taskId].data[6] = 32000 - 1;
    }
    if (JOY_NEW(DPAD_DOWN))
    {
        gTasks[taskId].data[6] -= sPowersOfTen[gTasks[taskId].tDigit];
        if (gTasks[taskId].data[6] < 0)
            gTasks[taskId].data[6] = 0;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        gTasks[taskId].tDigit -= 1;
        if (gTasks[taskId].tDigit < 0)
            gTasks[taskId].tDigit = 0;
    }
    if (JOY_NEW(DPAD_RIGHT))
    {
        gTasks[taskId].tDigit += 1;
        if (gTasks[taskId].tDigit > 4)
            gTasks[taskId].tDigit = 4;
    }

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        VarSet(gTasks[taskId].tInput, gTasks[taskId].data[6]);
    }
    else if (JOY_NEW(B_BUTTON))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    {
        PlaySE(SE_SELECT);
        DebugAction_DestroyExtraWindow(taskId);
        return;
    }

<<<<<<< HEAD
    if (gMain.newKeys & DPAD_ANY || gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        ConvertIntToHexStringN(gStringVar2, gTasks[taskId].data[3], STR_CONV_MODE_LEFT_ALIGN, 4);
=======
    if (JOY_NEW(DPAD_ANY) || JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);

        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].tInput, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        ConvertIntToHexStringN(gStringVar2, gTasks[taskId].tInput, STR_CONV_MODE_LEFT_ALIGN, 4);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        StringExpandPlaceholders(gStringVar1, sDebugText_FlagsVars_VariableHex);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[6], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_VARIABLES);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
<<<<<<< HEAD
        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]); //Current digit
        StringExpandPlaceholders(gStringVar4, sDebugText_FlagsVars_VariableValueSet);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }
}

=======
        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].tDigit]);
        StringExpandPlaceholders(gStringVar4, sDebugText_FlagsVars_VariableValueSet);
        AddTextPrinterParameterized(gTasks[taskId].tSubWindowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
    }
}

#undef tVarValue

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_FlagsVars_PokedexFlags_All(u8 taskId)
{
    u16 i;
    for (i = 0; i < NATIONAL_DEX_COUNT; i++)
    {
        GetSetPokedexFlag(i + 1, FLAG_SET_CAUGHT);
        GetSetPokedexFlag(i + 1, FLAG_SET_SEEN);
    }
    Debug_DestroyMenu_Full(taskId);
    ScriptContext_Enable();
}
<<<<<<< HEAD
=======

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_FlagsVars_PokedexFlags_Reset(u8 taskId)
{
    int boxId, boxPosition, partyId;
    u16 species;

    // Reset Pokedex to emtpy
<<<<<<< HEAD
    memset(&gSaveBlock2Ptr->pokedex.owned, 0, sizeof(gSaveBlock2Ptr->pokedex.owned));
    memset(&gSaveBlock2Ptr->pokedex.seen, 0, sizeof(gSaveBlock2Ptr->pokedex.seen));
=======
    memset(&gSaveBlock1Ptr->dexCaught, 0, sizeof(gSaveBlock1Ptr->dexCaught));
    memset(&gSaveBlock1Ptr->dexSeen, 0, sizeof(gSaveBlock1Ptr->dexSeen));
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    // Add party Pokemon to Pokedex
    for (partyId = 0; partyId < PARTY_SIZE; partyId++)
    {
        if (GetMonData(&gPlayerParty[partyId], MON_DATA_SANITY_HAS_SPECIES))
        {
            species = GetMonData(&gPlayerParty[partyId], MON_DATA_SPECIES);
            GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_SET_CAUGHT);
            GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_SET_SEEN);
        }
    }

    // Add box Pokemon to Pokedex
    for (boxId = 0; boxId < TOTAL_BOXES_COUNT; boxId++)
    {
        for (boxPosition = 0; boxPosition < IN_BOX_COUNT; boxPosition++)
        {
            if (GetBoxMonData(&gPokemonStoragePtr->boxes[boxId][boxPosition], MON_DATA_SANITY_HAS_SPECIES))
            {
                species = GetBoxMonData(&gPokemonStoragePtr->boxes[boxId][boxPosition], MON_DATA_SPECIES);
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_SET_CAUGHT);
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_SET_SEEN);
            }
        }
    }
    Debug_DestroyMenu_Full(taskId);
    ScriptContext_Enable();
}
<<<<<<< HEAD
static void DebugAction_FlagsVars_PokedexFlags_Seen(u8 taskId)
{
    u16 i;
    for (i = 0; i < NATIONAL_DEX_COUNT; i++)
    {
        GetSetPokedexFlag(i + 1, FLAG_SET_SEEN);
    }
    Debug_DestroyMenu_Full(taskId);
    ScriptContext_Enable();
}
=======

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_FlagsVars_SwitchDex(u8 taskId)
{
    if (FlagGet(FLAG_SYS_POKEDEX_GET))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(FLAG_SYS_POKEDEX_GET);
}
<<<<<<< HEAD
=======

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_FlagsVars_SwitchNatDex(u8 taskId)
{
    if (IsNationalPokedexEnabled())
    {
        DisableNationalPokedex();
        PlaySE(SE_PC_OFF);
<<<<<<< HEAD
    }else{
=======
    }
    else
    {
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        EnableNationalPokedex();
        PlaySE(SE_PC_LOGIN);
    }
}
<<<<<<< HEAD
=======

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_FlagsVars_SwitchPokeNav(u8 taskId)
{
    if (FlagGet(FLAG_SYS_POKENAV_GET))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(FLAG_SYS_POKENAV_GET);
}
<<<<<<< HEAD
=======

static void DebugAction_FlagsVars_SwitchMatchCall(u8 taskId)
{
    if (FlagGet(FLAG_ADDED_MATCH_CALL_TO_POKENAV))
    {
        PlaySE(SE_PC_OFF);
        FlagClear(FLAG_ADDED_MATCH_CALL_TO_POKENAV);
        FlagClear(FLAG_HAS_MATCH_CALL);
    }
    else
    {
        PlaySE(SE_PC_LOGIN);
        FlagSet(FLAG_ADDED_MATCH_CALL_TO_POKENAV);
        FlagSet(FLAG_HAS_MATCH_CALL);
    }
}

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_FlagsVars_RunningShoes(u8 taskId)
{
    if (FlagGet(FLAG_SYS_B_DASH))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(FLAG_SYS_B_DASH);
}
<<<<<<< HEAD
static void DebugAction_FlagsVars_ToggleFlyFlags(u8 taskId)
{
    // Sound effect
    if (FlagGet(FLAG_VISITED_FUCHSIA_CITY))
    {
        PlaySE(SE_PC_OFF);

        FlagClear(FLAG_VISITED_NEWBARK_TOWN);
        FlagClear(FLAG_VISITED_CHERRYGROVE_CITY);
        FlagClear(FLAG_VISITED_VIOLET_CITY);
        FlagClear(FLAG_VISITED_AZALEA_TOWN);
        FlagClear(FLAG_VISITED_GOLDENROD_CITY);
        FlagClear(FLAG_VISITED_ECRUTEAK_CITY);
        FlagClear(FLAG_VISITED_OLIVINE_CITY);
        FlagClear(FLAG_VISITED_CIANWOOD_CITY);
        FlagClear(FLAG_VISITED_SAFARI_ZONE_GATE);
        FlagClear(FLAG_VISITED_MAHOGANY_TOWN);
        FlagClear(FLAG_VISITED_LAKE_OF_RAGE);
        FlagClear(FLAG_VISITED_BLACKTHORN_CITY);
        FlagClear(FLAG_VISITED_INDIGO_PLATEAU);
        FlagClear(FLAG_VISITED_PALLET_TOWN);
        FlagClear(FLAG_VISITED_VIRIDIAN_CITY);
        FlagClear(FLAG_VISITED_PEWTER_CITY);
        FlagClear(FLAG_VISITED_CERULEAN_CITY);
        FlagClear(FLAG_VISITED_VERMILION_CITY);
        FlagClear(FLAG_VISITED_LAVENDER_TOWN);
        FlagClear(FLAG_VISITED_FUCHSIA_CITY);
        FlagClear(FLAG_VISITED_CELADON_CITY);
        FlagClear(FLAG_VISITED_SAFFRON_CITY);
        FlagClear(FLAG_VISITED_CINNABAR_ISLAND);
        FlagClear(FLAG_VISITED_MT_SILVER);
        FlagClear(FLAG_VISITED_RECEPTION_GATE);
=======

static void DebugAction_FlagsVars_ToggleFlyFlags(u8 taskId)
{
    if (FlagGet(sLocationFlags[ARRAY_COUNT(sLocationFlags) - 1]))
    {
        PlaySE(SE_PC_OFF);
        for (u32 i = 0; i < ARRAY_COUNT(sLocationFlags); i++)
            FlagClear(sLocationFlags[i]);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }
    else
    {
        PlaySE(SE_PC_LOGIN);
<<<<<<< HEAD

        FlagSet(FLAG_VISITED_NEWBARK_TOWN);
        FlagSet(FLAG_VISITED_CHERRYGROVE_CITY);
        FlagSet(FLAG_VISITED_VIOLET_CITY);
        FlagSet(FLAG_VISITED_AZALEA_TOWN);
        FlagSet(FLAG_VISITED_GOLDENROD_CITY);
        FlagSet(FLAG_VISITED_ECRUTEAK_CITY);
        FlagSet(FLAG_VISITED_OLIVINE_CITY);
        FlagSet(FLAG_VISITED_CIANWOOD_CITY);
        FlagSet(FLAG_VISITED_SAFARI_ZONE_GATE);
        FlagSet(FLAG_VISITED_MAHOGANY_TOWN);
        FlagSet(FLAG_VISITED_LAKE_OF_RAGE);
        FlagSet(FLAG_VISITED_BLACKTHORN_CITY);
        FlagSet(FLAG_VISITED_INDIGO_PLATEAU);
        FlagSet(FLAG_VISITED_PALLET_TOWN);
        FlagSet(FLAG_VISITED_VIRIDIAN_CITY);
        FlagSet(FLAG_VISITED_PEWTER_CITY);
        FlagSet(FLAG_VISITED_CERULEAN_CITY);
        FlagSet(FLAG_VISITED_VERMILION_CITY);
        FlagSet(FLAG_VISITED_LAVENDER_TOWN);
        FlagSet(FLAG_VISITED_FUCHSIA_CITY);
        FlagSet(FLAG_VISITED_CELADON_CITY);
        FlagSet(FLAG_VISITED_SAFFRON_CITY);
        FlagSet(FLAG_VISITED_CINNABAR_ISLAND);
        FlagSet(FLAG_VISITED_MT_SILVER);
        FlagSet(FLAG_VISITED_RECEPTION_GATE);
    }
}
static void DebugAction_FlagsVars_ToggleBadgeFlags(u8 taskId)
{
    // Sound effect
    if (FlagGet(FLAG_BADGE08_GET))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(FLAG_BADGE01_GET);
    FlagToggle(FLAG_BADGE02_GET);
    FlagToggle(FLAG_BADGE03_GET);
    FlagToggle(FLAG_BADGE04_GET);
    FlagToggle(FLAG_BADGE05_GET);
    FlagToggle(FLAG_BADGE06_GET);
    FlagToggle(FLAG_BADGE07_GET);
    FlagToggle(FLAG_BADGE08_GET);
}
=======
        for (u32 i = 0; i < ARRAY_COUNT(sLocationFlags); i++)
            FlagSet(sLocationFlags[i]);
    }
}

static void DebugAction_FlagsVars_ToggleBadgeFlags(u8 taskId)
{
    if (FlagGet(gBadgeFlags[ARRAY_COUNT(gBadgeFlags) - 1]))
    {
        PlaySE(SE_PC_OFF);
        for (u32 i = 0; i < ARRAY_COUNT(gBadgeFlags); i++)
            FlagClear(gBadgeFlags[i]);
    }
    else
    {
        PlaySE(SE_PC_LOGIN);
        for (u32 i = 0; i < ARRAY_COUNT(gBadgeFlags); i++)
            FlagSet(gBadgeFlags[i]);
    }
}

static void DebugAction_FlagsVars_ToggleGameClear(u8 taskId)
{
    // Sound effect
    if (FlagGet(FLAG_SYS_GAME_CLEAR))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(FLAG_SYS_GAME_CLEAR);
}

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_FlagsVars_ToggleFrontierPass(u8 taskId)
{
    // Sound effect
    if (FlagGet(FLAG_SYS_FRONTIER_PASS))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(FLAG_SYS_FRONTIER_PASS);
}
<<<<<<< HEAD
static void DebugAction_FlagsVars_BattleDmgOnOff(u8 taskId)
{
    if (FlagGet(FLAG_SYS_NO_BATTLE_DMG))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(FLAG_SYS_NO_BATTLE_DMG);
}
static void DebugAction_FlagsVars_CollisionOnOff(u8 taskId)
{
    if (FlagGet(FLAG_SYS_NO_COLLISION))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(FLAG_SYS_NO_COLLISION);
}
static void DebugAction_FlagsVars_EncounterOnOff(u8 taskId)
{
    if (FlagGet(FLAG_SYS_NO_ENCOUNTER))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(FLAG_SYS_NO_ENCOUNTER);
}
static void DebugAction_FlagsVars_TrainerSeeOnOff(u8 taskId)
{
    if (FlagGet(FLAG_SYS_NO_TRAINER_SEE))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(FLAG_SYS_NO_TRAINER_SEE);
}
static void DebugAction_FlagsVars_BagUseOnOff(u8 taskId)
{
    if (FlagGet(FLAG_SYS_NO_BAG_USE))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(FLAG_SYS_NO_BAG_USE);
}
static void DebugAction_FlagsVars_CatchingOnOff(u8 taskId)
{
    if (FlagGet(FLAG_SYS_NO_CATCHING))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(FLAG_SYS_NO_CATCHING);
=======

static void DebugAction_FlagsVars_CollisionOnOff(u8 taskId)
{
#if OW_FLAG_NO_COLLISION == 0
    Debug_DestroyMenu_Full_Script(taskId, Debug_FlagsNotSetOverworldConfigMessage);
#else
    if (FlagGet(OW_FLAG_NO_COLLISION))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(OW_FLAG_NO_COLLISION);
#endif
}

static void DebugAction_FlagsVars_EncounterOnOff(u8 taskId)
{
#if OW_FLAG_NO_ENCOUNTER == 0
    Debug_DestroyMenu_Full_Script(taskId, Debug_FlagsNotSetOverworldConfigMessage);
#else
    if (FlagGet(OW_FLAG_NO_ENCOUNTER))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(OW_FLAG_NO_ENCOUNTER);
#endif
}

static void DebugAction_FlagsVars_TrainerSeeOnOff(u8 taskId)
{
#if OW_FLAG_NO_TRAINER_SEE == 0
    Debug_DestroyMenu_Full_Script(taskId, Debug_FlagsNotSetOverworldConfigMessage);
#else
    if (FlagGet(OW_FLAG_NO_TRAINER_SEE))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(OW_FLAG_NO_TRAINER_SEE);
#endif
}

static void DebugAction_FlagsVars_BagUseOnOff(u8 taskId)
{
#if B_FLAG_NO_BAG_USE == 0
    Debug_DestroyMenu_Full_Script(taskId, Debug_FlagsNotSetBattleConfigMessage);
#else
    if (FlagGet(B_FLAG_NO_BAG_USE))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(B_FLAG_NO_BAG_USE);
#endif
}

static void DebugAction_FlagsVars_CatchingOnOff(u8 taskId)
{
#if B_FLAG_NO_CATCHING == 0
    Debug_DestroyMenu_Full_Script(taskId, Debug_FlagsNotSetBattleConfigMessage);
#else
    if (FlagGet(B_FLAG_NO_CATCHING))
        PlaySE(SE_PC_OFF);
    else
        PlaySE(SE_PC_LOGIN);
    FlagToggle(B_FLAG_NO_CATCHING);
#endif
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

// *******************************
// Actions Give
#define ITEM_TAG 0xFDF3
<<<<<<< HEAD
=======
#define tItemId    data[5]
#define tSpriteId  data[6]

static void Debug_Display_ItemInfo(u32 itemId, u32 digit, u8 windowId)
{
    StringCopy(gStringVar2, gText_DigitIndicator[digit]);
    u8* end = CopyItemName(itemId, gStringVar1);
    WrapFontIdToFit(gStringVar1, end, DEBUG_MENU_FONT, WindowWidthPx(windowId));
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    ConvertIntToDecimalStringN(gStringVar3, itemId, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Item ID: {STR_VAR_3}\n{STR_VAR_1}{CLEAR_TO 90}\n\n{STR_VAR_2}"));
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
}

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_Give_Item(u8 taskId)
{
    u8 windowId;

<<<<<<< HEAD
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);
=======
    ClearStdWindowAndFrame(gTasks[taskId].tWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tWindowId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugMenuWindowTemplateExtra);
    DrawStdWindowFrame(windowId, FALSE);

<<<<<<< HEAD
    CopyWindowToVram(windowId, 3);

    //Display initial ID
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, 1, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
    CopyItemName(1, gStringVar1);
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    StringExpandPlaceholders(gStringVar4, sDebugText_ItemID);
    AddTextPrinterParameterized(windowId, 1, gStringVar4, 1, 1, 0, NULL);

    gTasks[taskId].func = DebugAction_Give_Item_SelectId;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 1;            //Current ID
    gTasks[taskId].data[4] = 0;            //Digit Selected
    gTasks[taskId].data[6] = AddItemIconSprite(ITEM_TAG, ITEM_TAG, gTasks[taskId].data[3]);
    gSprites[gTasks[taskId].data[6]].x2 = DEBUG_NUMBER_ICON_X+10;
    gSprites[gTasks[taskId].data[6]].y2 = DEBUG_NUMBER_ICON_Y+10;
    gSprites[gTasks[taskId].data[6]].oam.priority = 0;
}
static void DebugAction_Give_Item_SelectId(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] >= ITEMS_COUNT)
                gTasks[taskId].data[3] = ITEMS_COUNT - 1;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 1)
                gTasks[taskId].data[3] = 1;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < DEBUG_NUMBER_DIGITS_ITEMS-1)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        CopyItemName(gTasks[taskId].data[3], gStringVar1);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
        StringExpandPlaceholders(gStringVar4, sDebugText_ItemID);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

        FreeSpriteTilesByTag(ITEM_TAG);                         //Destroy item icon
        FreeSpritePaletteByTag(ITEM_TAG);                       //Destroy item icon
        FreeSpriteOamMatrix(&gSprites[gTasks[taskId].data[6]]); //Destroy item icon
        DestroySprite(&gSprites[gTasks[taskId].data[6]]);       //Destroy item icon
        gTasks[taskId].data[6] = AddItemIconSprite(ITEM_TAG, ITEM_TAG, gTasks[taskId].data[3]);
        gSprites[gTasks[taskId].data[6]].x2 = DEBUG_NUMBER_ICON_X+10;
        gSprites[gTasks[taskId].data[6]].y2 = DEBUG_NUMBER_ICON_Y+10;
        gSprites[gTasks[taskId].data[6]].oam.priority = 0;
    }

    if (gMain.newKeys & A_BUTTON)
    {
        gTasks[taskId].data[5] = gTasks[taskId].data[3];
        gTasks[taskId].data[3] = 1;
        gTasks[taskId].data[4] = 0;

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEM_QUANTITY);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        StringExpandPlaceholders(gStringVar4, sDebugText_ItemQuantity);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

        gTasks[taskId].func = DebugAction_Give_Item_SelectQuantity;
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        FreeSpriteTilesByTag(ITEM_TAG);                         //Destroy item icon
        FreeSpritePaletteByTag(ITEM_TAG);                       //Destroy item icon
        FreeSpriteOamMatrix(&gSprites[gTasks[taskId].data[6]]); //Destroy item icon
        DestroySprite(&gSprites[gTasks[taskId].data[6]]);       //Destroy item icon
=======
    CopyWindowToVram(windowId, COPYWIN_FULL);

    // Display initial item
    Debug_Display_ItemInfo(1, 0, windowId);

    gTasks[taskId].func = DebugAction_Give_Item_SelectId;
    gTasks[taskId].tSubWindowId = windowId;
    gTasks[taskId].tInput = 1;
    gTasks[taskId].tDigit = 0;
    gTasks[taskId].tSpriteId = AddItemIconSprite(ITEM_TAG, ITEM_TAG, gTasks[taskId].tInput);
    gSprites[gTasks[taskId].tSpriteId].x2 = DEBUG_NUMBER_ICON_X+10;
    gSprites[gTasks[taskId].tSpriteId].y2 = DEBUG_NUMBER_ICON_Y+10;
    gSprites[gTasks[taskId].tSpriteId].oam.priority = 0;
}

static void DestroyItemIcon(u8 taskId)
{
    FreeSpriteTilesByTag(ITEM_TAG);
    FreeSpritePaletteByTag(ITEM_TAG);
    FreeSpriteOamMatrix(&gSprites[gTasks[taskId].tSpriteId]);
    DestroySprite(&gSprites[gTasks[taskId].tSpriteId]);
}

static void Debug_Display_ItemQuantity(u32 quantity, u32 digit, u8 windowId)
{
    StringCopy(gStringVar2, gText_DigitIndicator[digit]);
    ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEM_QUANTITY);
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Quantity:{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n\n{STR_VAR_2}"));
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
}

static void DebugAction_Give_Item_SelectId(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        Debug_HandleInput_Numeric(taskId, 1, ITEMS_COUNT - 1, DEBUG_NUMBER_DIGITS_ITEMS);
        Debug_Display_ItemInfo(gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
        DestroyItemIcon(taskId);
        gTasks[taskId].tSpriteId = AddItemIconSprite(ITEM_TAG, ITEM_TAG, gTasks[taskId].tInput);
        gSprites[gTasks[taskId].tSpriteId].x2 = DEBUG_NUMBER_ICON_X+10;
        gSprites[gTasks[taskId].tSpriteId].y2 = DEBUG_NUMBER_ICON_Y+10;
        gSprites[gTasks[taskId].tSpriteId].oam.priority = 0;
    }

    if (JOY_NEW(A_BUTTON))
    {
        gTasks[taskId].tItemId = gTasks[taskId].tInput;
        gTasks[taskId].tInput = 1;
        gTasks[taskId].tDigit = 0;
        Debug_Display_ItemQuantity(gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
        gTasks[taskId].func = DebugAction_Give_Item_SelectQuantity;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        DestroyItemIcon(taskId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

        PlaySE(SE_SELECT);
        DebugAction_DestroyExtraWindow(taskId);
    }
}
<<<<<<< HEAD
static void DebugAction_Give_Item_SelectQuantity(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] >= 100)
                gTasks[taskId].data[3] = 99;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 1)
                gTasks[taskId].data[3] = 1;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < 2)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEM_QUANTITY);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        StringExpandPlaceholders(gStringVar4, sDebugText_ItemQuantity);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        FreeSpriteTilesByTag(ITEM_TAG);                         //Destroy item icon
        FreeSpritePaletteByTag(ITEM_TAG);                       //Destroy item icon
        FreeSpriteOamMatrix(&gSprites[gTasks[taskId].data[6]]); //Destroy item icon
        DestroySprite(&gSprites[gTasks[taskId].data[6]]);       //Destroy item icon

        PlaySE(MUS_OBTAIN_ITEM);
        AddBagItem(gTasks[taskId].data[5], gTasks[taskId].data[3]);
        DebugAction_DestroyExtraWindow(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        FreeSpriteTilesByTag(ITEM_TAG);                         //Destroy item icon
        FreeSpritePaletteByTag(ITEM_TAG);                       //Destroy item icon
        FreeSpriteOamMatrix(&gSprites[gTasks[taskId].data[6]]); //Destroy item icon
        DestroySprite(&gSprites[gTasks[taskId].data[6]]);       //Destroy item icon
=======

static void DebugAction_Give_Item_SelectQuantity(u8 taskId)
{
    u32 itemId = gTasks[taskId].tItemId;

    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        Debug_HandleInput_Numeric(taskId, 1, MAX_BAG_ITEM_CAPACITY, MAX_ITEM_DIGITS);
        Debug_Display_ItemQuantity(gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
    }

    if (JOY_NEW(A_BUTTON))
    {
        DestroyItemIcon(taskId);

        PlaySE(MUS_LEVEL_UP);
        AddBagItem(itemId, gTasks[taskId].tInput);
        DebugAction_DestroyExtraWindow(taskId);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        DestroyItemIcon(taskId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

        PlaySE(SE_SELECT);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

<<<<<<< HEAD
//TMs
static void DebugAction_Give_AllTMs(u8 taskId)
{
    u16 i;
    PlayFanfare(MUS_OBTAIN_TMHM);
    for (i = ITEM_TM01; i <= ITEM_TM50; i++)
        if (!CheckBagHasItem(i, 1))
            AddBagItem(i, 1);
    Debug_DestroyMenu_Full(taskId);
    ScriptContext_Enable();
}
=======
#undef tItemId
#undef tSpriteId
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

//Pokemon
static void ResetMonDataStruct(struct DebugMonData *sDebugMonData)
{
<<<<<<< HEAD
    sDebugMonData->mon_speciesId    = 1;
    sDebugMonData->mon_level        = 1;
    sDebugMonData->isShiny          = 0;
    sDebugMonData->mon_natureId     = 0;
    sDebugMonData->mon_abilityNum   = 0;
    sDebugMonData->mon_iv_hp        = 0;
    sDebugMonData->mon_iv_atk       = 0;
    sDebugMonData->mon_iv_def       = 0;
    sDebugMonData->mon_iv_speed     = 0;
    sDebugMonData->mon_iv_satk      = 0;
    sDebugMonData->mon_iv_sdef      = 0;
}
=======
    sDebugMonData->species          = 1;
    sDebugMonData->level            = MIN_LEVEL;
    sDebugMonData->isShiny          = FALSE;
    sDebugMonData->nature           = 0;
    sDebugMonData->abilityNum       = 0;
    sDebugMonData->teraType         = TYPE_NONE;
    sDebugMonData->dynamaxLevel     = 0;
    sDebugMonData->gmaxFactor       = FALSE;
    for (u32 i = 0; i < NUM_STATS; i++)
    {
        sDebugMonData->monIVs[i] = 0;
        sDebugMonData->monEVs[i] = 0;
    }
}

#define tIsComplex  data[5]
#define tSpriteId   data[6]
#define tIterator   data[7]

static void Debug_Display_SpeciesInfo(u32 species, u32 digit, u8 windowId)
{
    StringCopy(gStringVar2, gText_DigitIndicator[digit]);
    u8 *end = StringCopy(gStringVar1, GetSpeciesName(species));
    WrapFontIdToFit(gStringVar1, end, DEBUG_MENU_FONT, WindowWidthPx(windowId));
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    ConvertIntToDecimalStringN(gStringVar3, species, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Species: {STR_VAR_3}\n{STR_VAR_1}{CLEAR_TO 90}\n\n{STR_VAR_2}{CLEAR_TO 90}"));
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
}

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_Give_PokemonSimple(u8 taskId)
{
    u8 windowId;

    //Mon data struct
    sDebugMonData = AllocZeroed(sizeof(struct DebugMonData));
    ResetMonDataStruct(sDebugMonData);

    //Window initialization
<<<<<<< HEAD
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);
=======
    ClearStdWindowAndFrame(gTasks[taskId].tWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tWindowId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugMenuWindowTemplateExtra);
    DrawStdWindowFrame(windowId, FALSE);

<<<<<<< HEAD
    CopyWindowToVram(windowId, 3);

    //Display initial ID
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, 1, STR_CONV_MODE_LEADING_ZEROS, 3);
    StringCopy(gStringVar1, gSpeciesNames[1]);
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    StringExpandPlaceholders(gStringVar4, sDebugText_PokemonID);
    AddTextPrinterParameterized(windowId, 1, gStringVar4, 1, 1, 0, NULL);

    //Set task data
    gTasks[taskId].func = DebugAction_Give_Pokemon_SelectId;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 1;            //Current ID
    gTasks[taskId].data[4] = 0;            //Digit Selected
    gTasks[taskId].data[5] = 0;            //Complex?
    FreeMonIconPalettes();                 //Free space for new pallete
    LoadMonIconPalette(gTasks[taskId].data[3]); //Loads pallete for current mon
    #ifndef POKEMON_EXPANSION
        gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0, TRUE); //Create pokemon sprite
    #endif
    #ifdef POKEMON_EXPANSION
        gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0); //Create pokemon sprite
    #endif
    gSprites[gTasks[taskId].data[6]].oam.priority = 0; //Mon Icon ID
}
=======
    CopyWindowToVram(windowId, COPYWIN_FULL);

    // Display initial Pokémon
    Debug_Display_SpeciesInfo(sDebugMonData->species, 0, windowId);

    //Set task data
    gTasks[taskId].func = DebugAction_Give_Pokemon_SelectId;
    gTasks[taskId].tSubWindowId = windowId;
    gTasks[taskId].tInput = sDebugMonData->species;
    gTasks[taskId].tDigit = 0;
    gTasks[taskId].tIsComplex = FALSE;

    FreeMonIconPalettes();
    LoadMonIconPalette(gTasks[taskId].tInput);
    gTasks[taskId].tSpriteId = CreateMonIcon(gTasks[taskId].tInput, SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0);
    gSprites[gTasks[taskId].tSpriteId].oam.priority = 0;
}

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_Give_PokemonComplex(u8 taskId)
{
    u8 windowId;

    //Mon data struct
    sDebugMonData = AllocZeroed(sizeof(struct DebugMonData));
    ResetMonDataStruct(sDebugMonData);

    //Window initialization
<<<<<<< HEAD
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);
=======
    ClearStdWindowAndFrame(gTasks[taskId].tWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tWindowId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugMenuWindowTemplateExtra);
    DrawStdWindowFrame(windowId, FALSE);

<<<<<<< HEAD
    CopyWindowToVram(windowId, 3);

    //Display initial ID
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, 1, STR_CONV_MODE_LEADING_ZEROS, 4);
    StringCopy(gStringVar1, gSpeciesNames[1]);
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    StringExpandPlaceholders(gStringVar4, sDebugText_PokemonID);
    AddTextPrinterParameterized(windowId, 1, gStringVar4, 1, 1, 0, NULL);


    gTasks[taskId].func = DebugAction_Give_Pokemon_SelectId;
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 1;            //Current ID
    gTasks[taskId].data[4] = 0;            //Digit Selected
    gTasks[taskId].data[5] = 1;            //Complex?
    FreeMonIconPalettes();                 //Free space for new palletes
    LoadMonIconPalette(gTasks[taskId].data[3]); //Loads pallete for current mon
    #ifndef POKEMON_EXPANSION
        gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0, TRUE); //Create pokemon sprite
    #endif
    #ifdef POKEMON_EXPANSION
        gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0); //Create pokemon sprite
    #endif
    gSprites[gTasks[taskId].data[6]].oam.priority = 0; //Mon Icon ID
    gTasks[taskId].data[7] = 0;             //iterator
=======
    CopyWindowToVram(windowId, COPYWIN_FULL);

    // Display initial Pokémon
    Debug_Display_SpeciesInfo(sDebugMonData->species, 0, windowId);

    gTasks[taskId].func = DebugAction_Give_Pokemon_SelectId;
    gTasks[taskId].tSubWindowId = windowId;
    gTasks[taskId].tInput = 1;
    gTasks[taskId].tDigit = 0;
    gTasks[taskId].tIsComplex = TRUE;

    FreeMonIconPalettes();
    LoadMonIconPalette(gTasks[taskId].tInput);
    gTasks[taskId].tSpriteId = CreateMonIcon(gTasks[taskId].tInput, SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0);
    gSprites[gTasks[taskId].tSpriteId].oam.priority = 0;
    gTasks[taskId].tIterator = 0;
}

static void Debug_Display_Level(u32 level, u32 digit, u8 windowId)
{
    StringCopy(gStringVar2, gText_DigitIndicator[digit]);
    ConvertIntToDecimalStringN(gStringVar1, level, STR_CONV_MODE_LEADING_ZEROS, 3);
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Level:{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}"));
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

static void DebugAction_Give_Pokemon_SelectId(u8 taskId)
{
<<<<<<< HEAD
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > SPECIES_CELEBI && gTasks[taskId].data[3] < SPECIES_TREECKO)
                gTasks[taskId].data[3] = SPECIES_TREECKO;
            if (gTasks[taskId].data[3] >= NUM_SPECIES)
                gTasks[taskId].data[3] = NUM_SPECIES - 1;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < SPECIES_TREECKO && gTasks[taskId].data[3] > SPECIES_CELEBI)
                gTasks[taskId].data[3] = SPECIES_CELEBI;
            if (gTasks[taskId].data[3] < 1)
                gTasks[taskId].data[3] = 1;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < DEBUG_NUMBER_DIGITS_ITEMS-1)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringCopy(gStringVar1, gSpeciesNames[gTasks[taskId].data[3]]); //CopyItemName(gTasks[taskId].data[3], gStringVar1);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 4);
        StringExpandPlaceholders(gStringVar4, sDebugText_PokemonID);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].data[6]]);
        FreeMonIconPalettes(); //Free space for new pallete
        LoadMonIconPalette(gTasks[taskId].data[3]); //Loads pallete for current mon
        #ifndef POKEMON_EXPANSION
            gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0, TRUE); //Create pokemon sprite
        #endif
        #ifdef POKEMON_EXPANSION
            gTasks[taskId].data[6] = CreateMonIcon(gTasks[taskId].data[3], SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0); //Create pokemon sprite
        #endif
        gSprites[gTasks[taskId].data[6]].oam.priority = 0;
    }

    if (gMain.newKeys & A_BUTTON)
    {
        sDebugMonData->mon_speciesId = gTasks[taskId].data[3]; //Species ID
        gTasks[taskId].data[3] = 1;
        gTasks[taskId].data[4] = 0;

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 3);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        StringExpandPlaceholders(gStringVar4, sDebugText_PokemonLevel);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

        gTasks[taskId].func = DebugAction_Give_Pokemon_SelectLevel;
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        FreeMonIconPalettes();
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].data[6]]); //Destroy pokemon sprite
        DebugAction_DestroyExtraWindow(taskId);
    }
}
static void DebugAction_Give_Pokemon_SelectLevel(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > 100)
                gTasks[taskId].data[3] = 100;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 1)
                gTasks[taskId].data[3] = 1;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < 2)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar1, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 3);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        StringExpandPlaceholders(gStringVar4, sDebugText_PokemonLevel);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        FreeMonIconPalettes();
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].data[6]]); //Destroy pokemon sprite
        if (gTasks[taskId].data[5] == 0)
        {
            PlaySE(MUS_LEVEL_UP);
            ScriptGiveMon(sDebugMonData->mon_speciesId, gTasks[taskId].data[3], ITEM_NONE, 0,0,0);
            Free(sDebugMonData); //Frees EWRAM of MonData Struct
=======
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        Debug_HandleInput_Numeric(taskId, 1, NUM_SPECIES - 1, DEBUG_NUMBER_DIGITS_ITEMS);
        Debug_Display_SpeciesInfo(gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].tSpriteId]);
        FreeMonIconPalettes();
        LoadMonIconPalette(gTasks[taskId].tInput);
        gTasks[taskId].tSpriteId = CreateMonIcon(gTasks[taskId].tInput, SpriteCB_MonIcon, DEBUG_NUMBER_ICON_X, DEBUG_NUMBER_ICON_Y, 4, 0);
        gSprites[gTasks[taskId].tSpriteId].oam.priority = 0;
    }

    if (JOY_NEW(A_BUTTON))
    {
        sDebugMonData->species = gTasks[taskId].tInput;
        gTasks[taskId].tInput = 1;
        gTasks[taskId].tDigit = 0;

        Debug_Display_Level(gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);

        gTasks[taskId].func = DebugAction_Give_Pokemon_SelectLevel;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData);
        FreeMonIconPalettes();
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].tSpriteId]);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

static void Debug_Display_TrueFalse(bool32 value, u8 windowId, const u8 *titleStr)
{
    static const u8 *txtStr;
    txtStr = value ? sDebugText_True : sDebugText_False;
    StringCopyPadded(gStringVar2, txtStr, CHAR_SPACE, 15);
    ConvertIntToDecimalStringN(gStringVar3, value, STR_CONV_MODE_LEADING_ZEROS, 0);
    StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
    StringExpandPlaceholders(gStringVar4, titleStr);
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
}

static void DebugAction_Give_Pokemon_SelectLevel(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        Debug_HandleInput_Numeric(taskId, 1, MAX_LEVEL, 3);
        Debug_Display_Level(gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
    }

    if (JOY_NEW(A_BUTTON))
    {
        FreeMonIconPalettes();
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].tSpriteId]);
        if (gTasks[taskId].tIsComplex == FALSE)
        {
            PlaySE(MUS_LEVEL_UP);
            ScriptGiveMon(sDebugMonData->species, gTasks[taskId].tInput, ITEM_NONE);
            // Set flag for user convenience
            FlagSet(FLAG_SYS_POKEMON_GET);
            Free(sDebugMonData);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            DebugAction_DestroyExtraWindow(taskId);
        }
        else
        {
<<<<<<< HEAD
            sDebugMonData->mon_level = gTasks[taskId].data[3]; //Level
            gTasks[taskId].data[3] = 0;
            gTasks[taskId].data[4] = 0;

            ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 0);
            StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
            StringCopyPadded(gStringVar2, sDebugText_False, CHAR_SPACE, 15);
            StringExpandPlaceholders(gStringVar4, sDebugText_PokemonShiny);
            AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

            gTasks[taskId].func = DebugAction_Give_Pokemon_SelectShiny;
        }
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        FreeMonIconPalettes();
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].data[6]]); //Destroy pokemon sprite
        DebugAction_DestroyExtraWindow(taskId);
    }
}
//If complex
static void DebugAction_Give_Pokemon_SelectShiny(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > 1)
                gTasks[taskId].data[3] = 1;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }

        if (gTasks[taskId].data[3] == 1)
            StringCopyPadded(gStringVar2, sDebugText_True, CHAR_SPACE, 15);
        else
            StringCopyPadded(gStringVar2, sDebugText_False, CHAR_SPACE, 15);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 0);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        StringExpandPlaceholders(gStringVar4, sDebugText_PokemonShiny);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        sDebugMonData->isShiny = gTasks[taskId].data[3]; //isShiny
        gTasks[taskId].data[3] = 0;
        gTasks[taskId].data[4] = 0;

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        StringCopy(gStringVar1, gNatureNamePointers[0]);
        StringExpandPlaceholders(gStringVar4, sDebugText_PokemonNature);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

        gTasks[taskId].func = DebugAction_Give_Pokemon_SelectNature;
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        DebugAction_DestroyExtraWindow(taskId);
    }
}
static void DebugAction_Give_Pokemon_SelectNature(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > NUM_NATURES-1)
                gTasks[taskId].data[3] = NUM_NATURES-1;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        StringCopy(gStringVar1, gNatureNamePointers[gTasks[taskId].data[3]]);
        StringExpandPlaceholders(gStringVar4, sDebugText_PokemonNature);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        u8 abilityId;
        sDebugMonData->mon_natureId = gTasks[taskId].data[3]; //NatureId
        gTasks[taskId].data[3] = 0;
        gTasks[taskId].data[4] = 0;

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        abilityId = GetAbilityBySpecies(sDebugMonData->mon_speciesId, 0);
        StringCopy(gStringVar1, gAbilityNames[abilityId]);
        StringExpandPlaceholders(gStringVar4, sDebugText_PokemonAbility);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

        gTasks[taskId].func = DebugAction_Give_Pokemon_SelectAbility;
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        DebugAction_DestroyExtraWindow(taskId);
    }
}
static void DebugAction_Give_Pokemon_SelectAbility(u8 taskId)
{
    u8 abilityId;
    u8 abilityCount = 2 - 1; //-1 for proper iteration
    u8 i = 0;
    #ifdef POKEMON_EXPANSION
        abilityCount = NUM_ABILITY_SLOTS - 1;
    #endif

    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > abilityCount)
                gTasks[taskId].data[3] = abilityCount;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }

        while (GetAbilityBySpecies(sDebugMonData->mon_speciesId, gTasks[taskId].data[3] - i) == ABILITY_NONE)
        {
            i++;
        }
        abilityId = GetAbilityBySpecies(sDebugMonData->mon_speciesId, gTasks[taskId].data[3] - i);
        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        StringCopy(gStringVar1, gAbilityNames[abilityId]);
        StringExpandPlaceholders(gStringVar4, sDebugText_PokemonAbility);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        sDebugMonData->mon_abilityNum = gTasks[taskId].data[3] - i; //AbilityNum
        gTasks[taskId].data[3] = 0;
        gTasks[taskId].data[4] = 0;

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        StringExpandPlaceholders(gStringVar4, sDebugText_PokemonIV_0);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

        gTasks[taskId].func = DebugAction_Give_Pokemon_SelectIVs;
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        DebugAction_DestroyExtraWindow(taskId);
    }
}
static void DebugAction_Give_Pokemon_SelectIVs(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > 31)
                gTasks[taskId].data[3] = 31;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < 2)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
        StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
        switch (gTasks[taskId].data[7])
        {
        case 0:
            StringExpandPlaceholders(gStringVar4, sDebugText_PokemonIV_0);
            break;
        case 1:
            StringExpandPlaceholders(gStringVar4, sDebugText_PokemonIV_1);
            break;
        case 2:
            StringExpandPlaceholders(gStringVar4, sDebugText_PokemonIV_2);
            break;
        case 3:
            StringExpandPlaceholders(gStringVar4, sDebugText_PokemonIV_3);
            break;
        case 4:
            StringExpandPlaceholders(gStringVar4, sDebugText_PokemonIV_4);
            break;
        case 5:
            StringExpandPlaceholders(gStringVar4, sDebugText_PokemonIV_5);
            break;
        }
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    //If A or B button
    if (gMain.newKeys & A_BUTTON)
    {
        switch (gTasks[taskId].data[7])
        {
        case 0:
            sDebugMonData->mon_iv_hp = gTasks[taskId].data[3];
            break;
        case 1:
            sDebugMonData->mon_iv_atk = gTasks[taskId].data[3];
            break;
        case 2:
            sDebugMonData->mon_iv_def = gTasks[taskId].data[3];
            break;
        case 3:
            sDebugMonData->mon_iv_speed = gTasks[taskId].data[3];
            break;
        case 4:
            sDebugMonData->mon_iv_satk = gTasks[taskId].data[3];
            break;
        case 5:
            sDebugMonData->mon_iv_sdef = gTasks[taskId].data[3];
            break;
        }

        //Check if all IVs set
        if (gTasks[taskId].data[7] != 5)
        {
            gTasks[taskId].data[7] += 1;
            gTasks[taskId].data[3] = 0;
            gTasks[taskId].data[4] = 0;

            StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
            ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 2);
            StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
            switch (gTasks[taskId].data[7])
            {
            case 0:
                StringExpandPlaceholders(gStringVar4, sDebugText_PokemonIV_0);
                break;
            case 1:
                StringExpandPlaceholders(gStringVar4, sDebugText_PokemonIV_1);
                break;
            case 2:
                StringExpandPlaceholders(gStringVar4, sDebugText_PokemonIV_2);
                break;
            case 3:
                StringExpandPlaceholders(gStringVar4, sDebugText_PokemonIV_3);
                break;
            case 4:
                StringExpandPlaceholders(gStringVar4, sDebugText_PokemonIV_4);
                break;
            case 5:
                StringExpandPlaceholders(gStringVar4, sDebugText_PokemonIV_5);
                break;
            }
            AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

=======
            sDebugMonData->level = gTasks[taskId].tInput;
            gTasks[taskId].tInput = 0;
            gTasks[taskId].tDigit = 0;
            Debug_Display_TrueFalse(gTasks[taskId].tInput, gTasks[taskId].tSubWindowId, sDebugText_PokemonShiny);
            gTasks[taskId].func = DebugAction_Give_Pokemon_SelectShiny;
        }
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData);
        FreeMonIconPalettes();
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].tSpriteId]);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

static void Debug_Display_Nature(u32 natureId, u32 digit, u8 windowId)
{
    StringCopy(gStringVar2, gText_DigitIndicator[digit]);
    ConvertIntToDecimalStringN(gStringVar3, natureId, STR_CONV_MODE_LEADING_ZEROS, 2);
    StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
    StringCopy(gStringVar1, gNaturesInfo[natureId].name);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Nature ID: {STR_VAR_3}{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}"));
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
}

static void DebugAction_Give_Pokemon_SelectShiny(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].tInput ^= JOY_NEW(DPAD_UP | DPAD_DOWN) > 0;
        Debug_Display_TrueFalse(gTasks[taskId].tInput, gTasks[taskId].tSubWindowId, sDebugText_PokemonShiny);
    }

    if (JOY_NEW(A_BUTTON))
    {
        sDebugMonData->isShiny = gTasks[taskId].tInput;
        gTasks[taskId].tInput = 0;
        gTasks[taskId].tDigit = 0;
        Debug_Display_Nature(gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
        gTasks[taskId].func = DebugAction_Give_Pokemon_SelectNature;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

static void Debug_Display_Ability(u32 abilityId, u32 digit, u8 windowId)//(u32 natureId, u32 digit, u8 windowId)
{
    StringCopy(gStringVar2, gText_DigitIndicator[digit]);
    ConvertIntToDecimalStringN(gStringVar3, abilityId, STR_CONV_MODE_LEADING_ZEROS, 2);
    StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
    u8 *end = StringCopy(gStringVar1, gAbilitiesInfo[abilityId].name);
    WrapFontIdToFit(gStringVar1, end, DEBUG_MENU_FONT, WindowWidthPx(windowId));
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Ability Num: {STR_VAR_3}{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}"));
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
}

static void DebugAction_Give_Pokemon_SelectNature(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);

        if (JOY_NEW(DPAD_UP))
        {
            gTasks[taskId].tInput += sPowersOfTen[gTasks[taskId].tDigit];
            if (gTasks[taskId].tInput > NUM_NATURES - 1)
                gTasks[taskId].tInput = NUM_NATURES - 1;
        }
        if (JOY_NEW(DPAD_DOWN))
        {
            gTasks[taskId].tInput -= sPowersOfTen[gTasks[taskId].tDigit];
            if (gTasks[taskId].tInput < 0)
                gTasks[taskId].tInput = 0;
        }

        Debug_Display_Nature(gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
    }

    if (JOY_NEW(A_BUTTON))
    {
        sDebugMonData->nature = gTasks[taskId].tInput;
        gTasks[taskId].tInput = 0;
        gTasks[taskId].tDigit = 0;

        u32 abilityId = GetAbilityBySpecies(sDebugMonData->species, 0);
        Debug_Display_Ability(abilityId, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);

        gTasks[taskId].func = DebugAction_Give_Pokemon_SelectAbility;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

static void Debug_Display_TeraType(u32 typeId, u32 digit, u8 windowId)
{
    StringCopy(gStringVar2, gText_DigitIndicator[digit]);
    ConvertIntToDecimalStringN(gStringVar3, typeId, STR_CONV_MODE_LEADING_ZEROS, 2);
    StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
    StringCopy(gStringVar1, gTypesInfo[typeId].name);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Tera Type: {STR_VAR_3}{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}"));
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
}

static void DebugAction_Give_Pokemon_SelectAbility(u8 taskId)
{
    u8 abilityCount = NUM_ABILITY_SLOTS - 1; //-1 for proper iteration
    u8 i = 0;

    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);

        if (JOY_NEW(DPAD_UP))
        {
            gTasks[taskId].tInput += sPowersOfTen[gTasks[taskId].tDigit];
            if (gTasks[taskId].tInput > abilityCount)
                gTasks[taskId].tInput = abilityCount;
        }
        if (JOY_NEW(DPAD_DOWN))
        {
            gTasks[taskId].tInput -= sPowersOfTen[gTasks[taskId].tDigit];
            if (gTasks[taskId].tInput < 0)
                gTasks[taskId].tInput = 0;
        }

        while (GetAbilityBySpecies(sDebugMonData->species, gTasks[taskId].tInput - i) == ABILITY_NONE && gTasks[taskId].tInput - i < NUM_ABILITY_SLOTS)
        {
            i++;
        }
        u32 abilityId = GetAbilityBySpecies(sDebugMonData->species, gTasks[taskId].tInput - i);
        Debug_Display_Ability(abilityId, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
    }

    if (JOY_NEW(A_BUTTON))
    {
        sDebugMonData->abilityNum = gTasks[taskId].tInput - i;
        gTasks[taskId].tInput = 0;
        gTasks[taskId].tDigit = 0;

        Debug_Display_TeraType(gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);

        gTasks[taskId].func = DebugAction_Give_Pokemon_SelectTeraType;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

static void Debug_Display_DynamaxLevel(u32 level, u32 digit, u8 windowId)
{
    StringCopy(gStringVar2, gText_DigitIndicator[digit]);
    ConvertIntToDecimalStringN(gStringVar1, level, STR_CONV_MODE_LEADING_ZEROS, 2);
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Dmax Lvl:{CLEAR_TO 90}\n{STR_VAR_1}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{STR_VAR_2}{CLEAR_TO 90}"));
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
}

static void DebugAction_Give_Pokemon_SelectTeraType(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);

        if (JOY_NEW(DPAD_UP))
        {
            gTasks[taskId].tInput += sPowersOfTen[gTasks[taskId].tDigit];
            if (gTasks[taskId].tInput > NUMBER_OF_MON_TYPES - 1)
                gTasks[taskId].tInput = NUMBER_OF_MON_TYPES - 1;
        }
        if (JOY_NEW(DPAD_DOWN))
        {
            gTasks[taskId].tInput -= sPowersOfTen[gTasks[taskId].tDigit];
            if (gTasks[taskId].tInput < 0)
                gTasks[taskId].tInput = 0;
        }

        Debug_Display_TeraType(gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
    }

    if (JOY_NEW(A_BUTTON))
    {
        sDebugMonData->teraType = gTasks[taskId].tInput;
        gTasks[taskId].tInput = 0;
        gTasks[taskId].tDigit = 0;

        Debug_Display_DynamaxLevel(gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);

        gTasks[taskId].func = DebugAction_Give_Pokemon_SelectDynamaxLevel;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

static void Debug_Display_GigantamaxFactor(u32 input, u8 windowId)
{
    Debug_Display_TrueFalse(input, windowId, COMPOUND_STRING("Gmax Factor:{CLEAR_TO 90}\n   {STR_VAR_2}{CLEAR_TO 90}\n{CLEAR_TO 90}\n{CLEAR_TO 90}"));
}

static void DebugAction_Give_Pokemon_SelectDynamaxLevel(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        Debug_HandleInput_Numeric(taskId, 0, MAX_DYNAMAX_LEVEL, 2);
        Debug_Display_DynamaxLevel(gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
    }

    if (JOY_NEW(A_BUTTON))
    {
        sDebugMonData->dynamaxLevel = gTasks[taskId].tInput;
        gTasks[taskId].tInput = 0;
        gTasks[taskId].tDigit = 0;
        Debug_Display_GigantamaxFactor(gTasks[taskId].tInput, gTasks[taskId].tSubWindowId);
        gTasks[taskId].func = DebugAction_Give_Pokemon_SelectGigantamaxFactor;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData);
        FreeMonIconPalettes();
        FreeAndDestroyMonIconSprite(&gSprites[gTasks[taskId].tSpriteId]);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

static void Debug_Display_StatInfo(const u8* text, u32 stat, u32 value, u32 digit, u8 windowId, u32 maxValue)
{
    StringCopy(gStringVar1, gStatNamesTable[stat]);
    StringCopy(gStringVar2, gText_DigitIndicator[digit]);
    ConvertIntToDecimalStringN(gStringVar3, value, STR_CONV_MODE_LEADING_ZEROS, CountDigits(maxValue));
    StringCopyPadded(gStringVar3, gStringVar3, CHAR_SPACE, 15);
    StringExpandPlaceholders(gStringVar4, text);
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
}

static void DebugAction_Give_Pokemon_SelectGigantamaxFactor(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].tInput ^= JOY_NEW(DPAD_UP | DPAD_DOWN) > 0;
        Debug_Display_GigantamaxFactor(gTasks[taskId].tInput, gTasks[taskId].tSubWindowId);
    }

    if (JOY_NEW(A_BUTTON))
    {
        sDebugMonData->gmaxFactor = gTasks[taskId].tInput;
        gTasks[taskId].tInput = 0;
        gTasks[taskId].tDigit = 0;
        Debug_Display_StatInfo(sDebugText_IVs, gTasks[taskId].tIterator, gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId, MAX_PER_STAT_IVS);
        gTasks[taskId].func = DebugAction_Give_Pokemon_SelectIVs;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

static void DebugAction_Give_Pokemon_SelectIVs(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        Debug_HandleInput_Numeric(taskId, 0, MAX_PER_STAT_IVS, 3);
        Debug_Display_StatInfo(sDebugText_IVs, gTasks[taskId].tIterator, gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId, MAX_PER_STAT_IVS);
    }

    //If A or B button
    if (JOY_NEW(A_BUTTON))
    {
        // Set IVs for stat
        sDebugMonData->monIVs[gTasks[taskId].tIterator] = gTasks[taskId].tInput;

        //Check if all IVs set
        if (gTasks[taskId].tIterator != NUM_STATS - 1)
        {
            gTasks[taskId].tIterator++;
            gTasks[taskId].tInput = 0;
            gTasks[taskId].tDigit = 0;

            Debug_Display_StatInfo(sDebugText_IVs, gTasks[taskId].tIterator, gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId, MAX_PER_STAT_IVS);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            gTasks[taskId].func = DebugAction_Give_Pokemon_SelectIVs;
        }
        else
        {
<<<<<<< HEAD
            gTasks[taskId].data[3] = 0;
            gTasks[taskId].data[4] = 0;
            gTasks[taskId].data[7] = 0; //Reset iterator

            StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
            StringCopy(gStringVar1, gMoveNames[gTasks[taskId].data[3]]);
            StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
            ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 3);
            StringExpandPlaceholders(gStringVar4, sDebugText_PokemonMove_0);
            AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

            gTasks[taskId].func = DebugAction_Give_Pokemon_Move;
        }
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        DebugAction_DestroyExtraWindow(taskId);
    }
}
static void DebugAction_Give_Pokemon_Move(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        PlaySE(SE_SELECT);

        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] >= MOVES_COUNT)
                gTasks[taskId].data[3] = MOVES_COUNT - 1;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 0)
                gTasks[taskId].data[3] = 0;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < 3)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringCopy(gStringVar1, gMoveNames[gTasks[taskId].data[3]]);
        StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 3);
        switch (gTasks[taskId].data[7])
        {
        case 0:
            StringExpandPlaceholders(gStringVar4, sDebugText_PokemonMove_0);
            break;
        case 1:
            StringExpandPlaceholders(gStringVar4, sDebugText_PokemonMove_1);
            break;
        case 2:
            StringExpandPlaceholders(gStringVar4, sDebugText_PokemonMove_2);
            break;
        case 3:
            StringExpandPlaceholders(gStringVar4, sDebugText_PokemonMove_3);
            break;
        }
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        //If MOVE_NONE selected, stop asking for additional moves
        if (gTasks[taskId].data[3] == 0)
            gTasks[taskId].data[7] = 4;

        //Set current value
        switch (gTasks[taskId].data[7])
        {
        case 0:
            sDebugMonData->mon_move_0 = gTasks[taskId].data[3];
            break;
        case 1:
            sDebugMonData->mon_move_1 = gTasks[taskId].data[3];
            break;
        case 2:
            sDebugMonData->mon_move_2 = gTasks[taskId].data[3];
            break;
        case 3:
            sDebugMonData->mon_move_3 = gTasks[taskId].data[3];
            break;
        }

        //If NOT last move or selected MOVE_NONE ask for next move, else make mon
        if (gTasks[taskId].data[7] < 3)
        {
            gTasks[taskId].data[7] += 1;
            gTasks[taskId].data[3] = 0;
            gTasks[taskId].data[4] = 0;

            StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
            StringCopy(gStringVar1, gMoveNames[gTasks[taskId].data[3]]);
            StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
            ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, 3);
            switch (gTasks[taskId].data[7])
            {
            case 0:
                StringExpandPlaceholders(gStringVar4, sDebugText_PokemonMove_0);
                break;
            case 1:
                StringExpandPlaceholders(gStringVar4, sDebugText_PokemonMove_1);
                break;
            case 2:
                StringExpandPlaceholders(gStringVar4, sDebugText_PokemonMove_2);
                break;
            case 3:
                StringExpandPlaceholders(gStringVar4, sDebugText_PokemonMove_3);
                break;
            }
            AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);

=======
            gTasks[taskId].tInput = 0;
            gTasks[taskId].tDigit = 0;
            gTasks[taskId].tIterator = 0;

            Debug_Display_StatInfo(sDebugText_EVs, gTasks[taskId].tIterator, gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId, MAX_PER_STAT_EVS);
            gTasks[taskId].func = DebugAction_Give_Pokemon_SelectEVs;
        }
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

static u32 GetDebugPokemonTotalEV(void)
{
    u32 totalEVs = 0;
    for (u32 i = 0; i < NUM_STATS; i++)
        totalEVs += sDebugMonData->monEVs[i];
    return totalEVs;
}

static void Debug_Display_MoveInfo(u32 moveId, u32 iteration, u32 digit, u8 windowId)
{
    // Doesn't expand placeholdes so a 4th dynamic value can be shown.
    u8 *end = StringCopy(gStringVar1, GetMoveName(moveId));
    WrapFontIdToFit(gStringVar1, end, DEBUG_MENU_FONT, WindowWidthPx(windowId));
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    StringCopy(gStringVar4, COMPOUND_STRING("Move "));
    ConvertIntToDecimalStringN(gStringVar3, iteration, STR_CONV_MODE_LEADING_ZEROS, 1);
    StringAppend(gStringVar4, gStringVar3);
    StringAppend(gStringVar4, COMPOUND_STRING(": "));
    ConvertIntToDecimalStringN(gStringVar3, moveId, STR_CONV_MODE_LEADING_ZEROS, 3);
    StringAppend(gStringVar4, gStringVar3);
    StringAppend(gStringVar4, COMPOUND_STRING("{CLEAR_TO 90}\n"));
    StringAppend(gStringVar4, gStringVar1);
    StringAppend(gStringVar4, COMPOUND_STRING("{CLEAR_TO 90}\n{CLEAR_TO 90}\n"));
    StringAppend(gStringVar4, gText_DigitIndicator[digit]);
    StringAppend(gStringVar4, COMPOUND_STRING("{CLEAR_TO 90}"));
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
}

static void DebugAction_Give_Pokemon_SelectEVs(u8 taskId)
{
    u16 totalEV = GetDebugPokemonTotalEV();

    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        Debug_HandleInput_Numeric(taskId, 0, MAX_PER_STAT_EVS, 4);
        Debug_Display_StatInfo(sDebugText_EVs, gTasks[taskId].tIterator, gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId, MAX_PER_STAT_EVS);
    }

    //If A or B button
    if (JOY_NEW(A_BUTTON))
    {
        // Set EVs for stat
        sDebugMonData->monEVs[gTasks[taskId].tIterator] = gTasks[taskId].tInput;

        //Check if all EVs set
        if (gTasks[taskId].tIterator != NUM_STATS - 1)
        {
            gTasks[taskId].tIterator++;
            gTasks[taskId].tInput = 0;
            gTasks[taskId].tDigit = 0;
            Debug_Display_StatInfo(sDebugText_EVs, gTasks[taskId].tIterator, gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId, MAX_PER_STAT_EVS);
            gTasks[taskId].func = DebugAction_Give_Pokemon_SelectEVs;
        }
        else
        {
            gTasks[taskId].tInput = 0;
            gTasks[taskId].tDigit = 0;
            gTasks[taskId].tIterator = 0;

            if (totalEV > MAX_TOTAL_EVS)
            {
                for (u32 i = 0; i < NUM_STATS; i++)
                {
                    sDebugMonData->monEVs[i] = 0;
                }

                PlaySE(SE_FAILURE);
                Debug_Display_StatInfo(sDebugText_EVs, gTasks[taskId].tIterator, gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId, MAX_PER_STAT_EVS);
                gTasks[taskId].func = DebugAction_Give_Pokemon_SelectEVs;
            }
            else
            {
                Debug_Display_MoveInfo(gTasks[taskId].tInput, gTasks[taskId].tIterator, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
                gTasks[taskId].func = DebugAction_Give_Pokemon_Move;
            }
        }
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

static void DebugAction_Give_Pokemon_Move(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        Debug_HandleInput_Numeric(taskId, 0, MOVES_COUNT - 1, 4);

        Debug_Display_MoveInfo(gTasks[taskId].tInput, gTasks[taskId].tIterator, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
    }

    if (JOY_NEW(A_BUTTON))
    {
        // Set current value
        sDebugMonData->monMoves[gTasks[taskId].tIterator] = gTasks[taskId].tInput;

        // If MOVE_NONE selected, stop asking for additional moves
        if (gTasks[taskId].tInput == MOVE_NONE)
            gTasks[taskId].tIterator = MAX_MON_MOVES;

        //If NOT last move or selected MOVE_NONE ask for next move, else make mon
        if (gTasks[taskId].tIterator < MAX_MON_MOVES - 1)
        {
            gTasks[taskId].tIterator++;
            gTasks[taskId].tInput = 0;
            gTasks[taskId].tDigit = 0;

            Debug_Display_MoveInfo(gTasks[taskId].tInput, gTasks[taskId].tIterator, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            gTasks[taskId].func = DebugAction_Give_Pokemon_Move;
        }
        else
        {
<<<<<<< HEAD
            gTasks[taskId].data[3] = 0;
            gTasks[taskId].data[4] = 0;
=======
            gTasks[taskId].tInput = 0;
            gTasks[taskId].tDigit = 0;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

            PlaySE(MUS_LEVEL_UP);
            gTasks[taskId].func = DebugAction_Give_Pokemon_ComplexCreateMon;
        }
    }
<<<<<<< HEAD
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData); //Frees EWRAM of MonData Struct
        DebugAction_DestroyExtraWindow(taskId);
    }
}
static void DebugAction_Give_Pokemon_ComplexCreateMon(u8 taskId) //https://github.com/ghoulslash/pokeemerald/tree/custom-givemon
{
    u16 nationalDexNum;
    int sentToPc;
    struct Pokemon mon;
    u8 i;
    u16 moves[4];
    u8 IVs[6];
    u8 iv_val;
    u16 species     = sDebugMonData->mon_speciesId;
    u8 level        = sDebugMonData->mon_level;
    u8 isShiny      = sDebugMonData->isShiny; //Shiny: no 0, yes 1
    u8 nature       = sDebugMonData->mon_natureId;
    u8 abilityNum   = sDebugMonData->mon_abilityNum;
    moves[0]        = sDebugMonData->mon_move_0;
    moves[1]        = sDebugMonData->mon_move_1;
    moves[2]        = sDebugMonData->mon_move_2;
    moves[3]        = sDebugMonData->mon_move_3;
    IVs[0]          = sDebugMonData->mon_iv_hp;
    IVs[1]          = sDebugMonData->mon_iv_atk;
    IVs[2]          = sDebugMonData->mon_iv_def;
    IVs[3]          = sDebugMonData->mon_iv_speed;
    IVs[4]          = sDebugMonData->mon_iv_satk;
    IVs[5]          = sDebugMonData->mon_iv_sdef;

=======
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        Free(sDebugMonData);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

static void DebugAction_Give_Pokemon_ComplexCreateMon(u8 taskId) //https://github.com/ghoulslash/pokeemerald/tree/custom-givemon
{
    enum NationalDexOrder nationalDexNum;
    int sentToPc;
    struct Pokemon mon;
    u8 i;
    u16 moves[MAX_MON_MOVES];
    u8 IVs[NUM_STATS];
    u8 iv_val;
    u8 EVs[NUM_STATS];
    u8 ev_val;
    u16 species     = sDebugMonData->species;
    u8 level        = sDebugMonData->level;
    bool8 isShiny   = sDebugMonData->isShiny;
    u8 nature       = sDebugMonData->nature;
    u8 abilityNum   = sDebugMonData->abilityNum;
    u32 teraType    = sDebugMonData->teraType;
    u32 dmaxLevel   = sDebugMonData->dynamaxLevel;
    u32 gmaxFactor  = sDebugMonData->gmaxFactor;
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        moves[i] = sDebugMonData->monMoves[i];
    }
    for (u32 i = 0; i < NUM_STATS; i++)
    {
        EVs[i] = sDebugMonData->monEVs[i];
        IVs[i] = sDebugMonData->monIVs[i];
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    //Nature
    if (nature == NUM_NATURES || nature == 0xFF)
        nature = Random() % NUM_NATURES;
<<<<<<< HEAD

    //Shinyness
    if (isShiny == 1)
    {
        u32 personality;
        u32 otid = gSaveBlock2Ptr->playerTrainerId[0]
            | (gSaveBlock2Ptr->playerTrainerId[1] << 8)
            | (gSaveBlock2Ptr->playerTrainerId[2] << 16)
            | (gSaveBlock2Ptr->playerTrainerId[3] << 24);

        do
        {
            personality = Random32();
            personality = ((((Random() % 8) ^ (HIHALF(otid) ^ LOHALF(otid))) ^ LOHALF(personality)) << 16) | LOHALF(personality);
        } while (nature != GetNatureFromPersonality(personality));

        CreateMon(&mon, species, level, 32, 1, personality, OT_ID_PRESET, otid);
    }
    else
        CreateMonWithNature(&mon, species, level, 32, nature);

    //EVs/IVs
    for (i = 0; i < NUM_STATS; i++)
    {
        // ev
        // if (evs[i] != 0xFF && evTotal < 510)
        // {
        //     // only up to 510 evs
        //     if ((evTotal + evs[i]) > 510)
        //         evs[i] = (510 - evTotal);

        //     evTotal += evs[i];
        //     SetMonData(&mon, MON_DATA_HP_EV + i, &evs[i]);
        // }

        // iv
        iv_val = IVs[i];
        if (iv_val != 32 && iv_val != 0xFF)
            SetMonData(&mon, MON_DATA_HP_IV + i, &iv_val);
    }
    CalculateMonStats(&mon);
=======
    CreateMonWithNature(&mon, species, level, USE_RANDOM_IVS, nature);

    //Shininess
    SetMonData(&mon, MON_DATA_IS_SHINY, &isShiny);

    // Gigantamax factor
    SetMonData(&mon, MON_DATA_GIGANTAMAX_FACTOR, &gmaxFactor);

    // Dynamax Level
    SetMonData(&mon, MON_DATA_DYNAMAX_LEVEL, &dmaxLevel);

    // tera type
    if (teraType == TYPE_NONE || teraType == TYPE_MYSTERY || teraType >= NUMBER_OF_MON_TYPES)
        teraType = GetTeraTypeFromPersonality(&mon);
    SetMonData(&mon, MON_DATA_TERA_TYPE, &teraType);

    //IVs
    for (i = 0; i < NUM_STATS; i++)
    {
        iv_val = IVs[i];
        if (iv_val != USE_RANDOM_IVS && iv_val != 0xFF)
            SetMonData(&mon, MON_DATA_HP_IV + i, &iv_val);
    }

    //EVs
    for (i = 0; i < NUM_STATS; i++)
    {
        ev_val = EVs[i];
        if (ev_val)
            SetMonData(&mon, MON_DATA_HP_EV + i, &ev_val);
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    //Moves
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
<<<<<<< HEAD
        if (moves[i] == 0 || moves[i] == 0xFF || moves[i] >= MOVES_COUNT)
=======
        // Non-default moveset chosen. Reset moves before setting the chosen moves.
        if (moves[0] != MOVE_NONE)
            SetMonMoveSlot(&mon, MOVE_NONE, i);

        if (moves[i] == MOVE_NONE || moves[i] >= MOVES_COUNT)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            continue;

        SetMonMoveSlot(&mon, moves[i], i);
    }

    //Ability
<<<<<<< HEAD
    if (abilityNum == 0xFF || GetAbilityBySpecies(species, abilityNum) == 0)
    {
        do {
            abilityNum = Random() % 3;  // includes hidden abilities
        } while (GetAbilityBySpecies(species, abilityNum) == 0);
=======
    if (abilityNum == 0xFF || GetAbilityBySpecies(species, abilityNum) == ABILITY_NONE)
    {
        do {
            abilityNum = Random() % NUM_ABILITY_SLOTS;  // includes hidden abilities
        } while (GetAbilityBySpecies(species, abilityNum) == ABILITY_NONE);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }

    SetMonData(&mon, MON_DATA_ABILITY_NUM, &abilityNum);

<<<<<<< HEAD
    //ball
    // if (ball <= POKEBALL_COUNT)
    //     SetMonData(&mon, MON_DATA_POKEBALL, &ball);

    //item
    // heldItem[0] = item;
    // heldItem[1] = item >> 8;
    // SetMonData(&mon, MON_DATA_HELD_ITEM, heldItem);

    // give player the mon
    //sentToPc = GiveMonToPlayer(&mon);
=======
    //Update mon stats before giving it to the player
    CalculateMonStats(&mon);

    // give player the mon
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    SetMonData(&mon, MON_DATA_OT_NAME, gSaveBlock2Ptr->playerName);
    SetMonData(&mon, MON_DATA_OT_GENDER, &gSaveBlock2Ptr->playerGender);
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, NULL) == SPECIES_NONE)
            break;
    }

    if (i >= PARTY_SIZE)
<<<<<<< HEAD
        sentToPc = CopyMonToPC(&mon);
=======
    {
        sentToPc = CopyMonToPC(&mon);
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    else
    {
        sentToPc = MON_GIVEN_TO_PARTY;
        CopyMon(&gPlayerParty[i], &mon, sizeof(mon));
        gPlayerPartyCount = i + 1;
    }

    //Pokedex entry
<<<<<<< HEAD
    nationalDexNum = SpeciesToNationalPokedexNum(species); 
=======
    nationalDexNum = SpeciesToNationalPokedexNum(species);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    switch(sentToPc)
    {
    case MON_GIVEN_TO_PARTY:
    case MON_GIVEN_TO_PC:
        GetSetPokedexFlag(nationalDexNum, FLAG_SET_SEEN);
        GetSetPokedexFlag(nationalDexNum, FLAG_SET_CAUGHT);
        break;
    case MON_CANT_GIVE:
        break;
    }

<<<<<<< HEAD
    Free(sDebugMonData); //Frees EWRAM of MonData Struct
    DebugAction_DestroyExtraWindow(taskId); //return sentToPc;
}

static void DebugAction_Give_MaxMoney(u8 taskId)
{
    SetMoney(&gSaveBlock1Ptr->money, 999999);
=======
    // Set flag for user convenience
    FlagSet(FLAG_SYS_POKEMON_GET);

    Free(sDebugMonData);
    DebugAction_DestroyExtraWindow(taskId); //return sentToPc;
}

#undef tIsComplex
#undef tSpriteId
#undef tIterator

//Decoration
#define tSpriteId  data[6]

static void Debug_Display_DecorationInfo(u32 itemId, u32 digit, u8 windowId)
{
    StringCopy(gStringVar2, gText_DigitIndicator[digit]);
    u8* end = StringCopy(gStringVar1, gDecorations[itemId].name);
    WrapFontIdToFit(gStringVar1, end, DEBUG_MENU_FONT, WindowWidthPx(windowId));
    StringCopyPadded(gStringVar1, gStringVar1, CHAR_SPACE, 15);
    ConvertIntToDecimalStringN(gStringVar3, itemId, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("Decor ID: {STR_VAR_3}\n{STR_VAR_1}{CLEAR_TO 90}\n\n{STR_VAR_2}"));
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
}

static void DebugAction_Give_Decoration(u8 taskId)
{
    u8 windowId;

    ClearStdWindowAndFrame(gTasks[taskId].tWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tWindowId);

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugMenuWindowTemplateExtra);
    DrawStdWindowFrame(windowId, FALSE);

    CopyWindowToVram(windowId, COPYWIN_FULL);

    // Display initial decoration
    Debug_Display_DecorationInfo(1, 0, windowId);

    gTasks[taskId].func = DebugAction_Give_Decoration_SelectId;
    gTasks[taskId].tSubWindowId = windowId;
    gTasks[taskId].tInput = 1;
    gTasks[taskId].tDigit = 0;
    gTasks[taskId].tSpriteId = AddDecorationIconObject(gTasks[taskId].tInput, DEBUG_NUMBER_ICON_X+8, DEBUG_NUMBER_ICON_Y+10, 0, ITEM_TAG, ITEM_TAG);
}

static void DestroyDecorationIcon(u8 taskId)
{
    FreeSpriteTilesByTag(ITEM_TAG);
    FreeSpritePaletteByTag(ITEM_TAG);
    FreeSpriteOamMatrix(&gSprites[gTasks[taskId].tSpriteId]);
    DestroySprite(&gSprites[gTasks[taskId].tSpriteId]);
}

static void DebugAction_Give_Decoration_SelectId(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        PlaySE(SE_SELECT);
        Debug_HandleInput_Numeric(taskId, 1, NUM_DECORATIONS, DEBUG_NUMBER_DIGITS_ITEMS);
        Debug_Display_DecorationInfo(gTasks[taskId].tInput, gTasks[taskId].tDigit, gTasks[taskId].tSubWindowId);
        DestroyDecorationIcon(taskId);
        gTasks[taskId].tSpriteId = AddDecorationIconObject(gTasks[taskId].tInput, DEBUG_NUMBER_ICON_X+8, DEBUG_NUMBER_ICON_Y+10, 0, ITEM_TAG, ITEM_TAG);
    }

    if (JOY_NEW(A_BUTTON))
    {
        DestroyItemIcon(taskId);

        PlaySE(MUS_LEVEL_UP);
        DecorationAdd(gTasks[taskId].tInput);
        DebugAction_DestroyExtraWindow(taskId);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        DestroyDecorationIcon(taskId);

        PlaySE(SE_SELECT);
        DebugAction_DestroyExtraWindow(taskId);
    }
}

#undef tSpriteId

static void DebugAction_Give_MaxMoney(u8 taskId)
{
    SetMoney(&gSaveBlock1Ptr->money, MAX_MONEY);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

static void DebugAction_Give_MaxCoins(u8 taskId)
{
<<<<<<< HEAD
    SetCoins(9999);
=======
    SetCoins(MAX_COINS);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

static void DebugAction_Give_MaxBattlePoints(u8 taskId)
{
    gSaveBlock2Ptr->frontier.battlePoints = MAX_BATTLE_FRONTIER_POINTS;
}

static void DebugAction_Give_DayCareEgg(u8 taskId)
{
<<<<<<< HEAD
    TriggerPendingDaycareEgg();
}

// *******************************
// Actions Pokemon Creator
static void DebugAction_PkmCreator_Party_Add(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    DebugPkmCreator_Init(0, 0xFF);
}
static void DebugAction_PkmCreator_Party_Edit(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    DebugPkmCreator_Init(1, 0xFF);
}
static void DebugAction_PkmCreator_PC_Edit(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    DebugPkmCreator_Init(2, 0xFF);
}
static void DebugAction_PkmCreator_Enemy_Party_Edit(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    DebugPkmCreator_Init(3, 0xFF);
}
static void DebugAction_PkmCreator_Enemy_Party_Edit_Debug(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    DebugPkmCreator_Init(4, 0xFF);
}
static void DebugAction_PkmCreator_Debug_Edit(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    DebugPkmCreator_Init(5, 0xFF);
}
static void DebugAction_PkmCreator_Enemy_Party_Add(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    DebugPkmCreator_Init(6, 0xFF);
}
static void DebugAction_PkmCreator_Testing(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    DebugPkmCreator_Init(7, 0xFF);
}
static void DebugAction_PkmCreator_Testing_Copy(u8 taskId)
{
    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    DebugPkmCreator_Init(8, 0xFF);
}

// *******************************
// Actions Fill
static void DebugAction_Fill_PCBoxes_Fast(u8 taskId) //Credit: Sierraffinity
=======
    s32 emptySlot = Daycare_FindEmptySpot(&gSaveBlock1Ptr->daycare);
    if (emptySlot == 0) // no daycare mons
        Debug_DestroyMenu_Full_Script(taskId, DebugScript_ZeroDaycareMons);
    else if (emptySlot == 1) // 1 daycare mon
        Debug_DestroyMenu_Full_Script(taskId, DebugScript_OneDaycareMons);
    else if (GetDaycareCompatibilityScore(&gSaveBlock1Ptr->daycare) == PARENTS_INCOMPATIBLE) // not compatible parents
        Debug_DestroyMenu_Full_Script(taskId, DebugScript_DaycareMonsNotCompatible);
    else // 2 pokemon which can have a pokemon baby together
        TriggerPendingDaycareEgg();
}

// *******************************
// Actions TimeMenu

static void DebugAction_TimeMenu_ChangeTimeOfDay(u8 taskId)
{
    u32 input = ListMenu_ProcessInput(gTasks[taskId].tMenuTaskId);

    DebugAction_DestroyExtraWindow(taskId);
    switch (input)
    {
        case TIME_MORNING:
            FakeRtc_ForwardTimeTo(MORNING_HOUR_BEGIN, 0, 0);
            break;
        case TIME_DAY:
            FakeRtc_ForwardTimeTo(DAY_HOUR_BEGIN, 0, 0);
            break;
        case TIME_EVENING:
            FakeRtc_ForwardTimeTo(EVENING_HOUR_BEGIN, 0, 0);
            break;
        case TIME_NIGHT:
            FakeRtc_ForwardTimeTo(NIGHT_HOUR_BEGIN, 0, 0);
            break;
    }
    Debug_DestroyMenu_Full(taskId);
    SetMainCallback2(CB2_LoadMap);
}

static void DebugAction_TimeMenu_ChangeWeekdays(u8 taskId)
{
    u32 input = ListMenu_ProcessInput(gTasks[taskId].tMenuTaskId);
    struct SiiRtcInfo *rtc = FakeRtc_GetCurrentTime();
    u32 daysToAdd = 0;

    DebugAction_DestroyExtraWindow(taskId);
    daysToAdd = ((input - rtc->dayOfWeek) + WEEKDAY_COUNT) % WEEKDAY_COUNT;
    FakeRtc_AdvanceTimeBy(daysToAdd, 0, 0, 0);
    Debug_DestroyMenu_Full(taskId);
    SetMainCallback2(CB2_LoadMap);
}

// *******************************
// Actions PCBag

static void DebugAction_PCBag_Fill_PCBoxes_Fast(u8 taskId) //Credit: Sierraffinity
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    int boxId, boxPosition;
    u32 personality;
    struct BoxPokemon boxMon;
<<<<<<< HEAD

    personality = Random32();

    CreateBoxMon(&boxMon,
                 SPECIES_BULBASAUR,
                 100,
                 32,
                 personality,
                 0,
                 OT_ID_PLAYER_ID,
                 0);
=======
    u16 species = SPECIES_BULBASAUR;
    u8 speciesName[POKEMON_NAME_LENGTH + 1];

    personality = Random32();

    CreateBoxMon(&boxMon, species, 100, USE_RANDOM_IVS, FALSE, personality, OT_ID_PLAYER_ID, 0);

    for (boxId = 0; boxId < TOTAL_BOXES_COUNT; boxId++)
    {
        for (boxPosition = 0; boxPosition < IN_BOX_COUNT; boxPosition++, species++)
        {
            if (!GetBoxMonData(&gPokemonStoragePtr->boxes[boxId][boxPosition], MON_DATA_SANITY_HAS_SPECIES))
            {
                StringCopy(speciesName, GetSpeciesName(species));
                SetBoxMonData(&boxMon, MON_DATA_NICKNAME, &speciesName);
                SetBoxMonData(&boxMon, MON_DATA_SPECIES, &species);
                GiveBoxMonInitialMoveset(&boxMon);
                gPokemonStoragePtr->boxes[boxId][boxPosition] = boxMon;
            }
        }
    }

    // Set flag for user convenience
    FlagSet(FLAG_SYS_POKEMON_GET);
    Debug_DestroyMenu_Full(taskId);
    ScriptContext_Enable();
}

static void DebugAction_PCBag_Fill_PCBoxes_Slow(u8 taskId)
{
    int boxId, boxPosition;
    struct BoxPokemon boxMon;
    u32 species = SPECIES_BULBASAUR;
    bool8 spaceAvailable = FALSE;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    for (boxId = 0; boxId < TOTAL_BOXES_COUNT; boxId++)
    {
        for (boxPosition = 0; boxPosition < IN_BOX_COUNT; boxPosition++)
        {
            if (!GetBoxMonData(&gPokemonStoragePtr->boxes[boxId][boxPosition], MON_DATA_SANITY_HAS_SPECIES))
            {
<<<<<<< HEAD
                gPokemonStoragePtr->boxes[boxId][boxPosition] = boxMon;
=======
                if (!spaceAvailable)
                    PlayBGM(MUS_RG_MYSTERY_GIFT);
                CreateBoxMon(&boxMon, species, 100, USE_RANDOM_IVS, FALSE, 0, OT_ID_PLAYER_ID, 0);
                gPokemonStoragePtr->boxes[boxId][boxPosition] = boxMon;
                species = (species < NUM_SPECIES - 1) ? species + 1 : 1;
                spaceAvailable = TRUE;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            }
        }
    }

<<<<<<< HEAD
    Debug_DestroyMenu_Full(taskId);
    ScriptContext_Enable();
}
static void DebugAction_Fill_PCBoxes_Slow(u8 taskId)
{
    int boxId, boxPosition;
    u32 personality;
    struct BoxPokemon boxMon;
    u32 i = 1;

    personality = Random32();

    for (boxId = 0; boxId < TOTAL_BOXES_COUNT; boxId++)
    {
        for (boxPosition = 0; boxPosition < IN_BOX_COUNT; boxPosition++)
        {
            if (!GetBoxMonData(&gPokemonStoragePtr->boxes[boxId][boxPosition], MON_DATA_SANITY_HAS_SPECIES))
            {
                CreateBoxMon(&boxMon,
                    i,
                    100,
                    32,
                    personality,
                    0,
                    OT_ID_PLAYER_ID,
                    0);

            #ifndef POKEMON_EXPANSION
                if (i < SPECIES_CELEBI)
                    i += 1;
                else if (i == SPECIES_CELEBI)
                    i = SPECIES_TREECKO;
                else if (i < SPECIES_CHIMECHO)
                    i += 1;
                else
                    i = 1;
            #else
                if (i < FORMS_START - 1)
                    i += 1;
                else
                    i = 1;
            #endif

                gPokemonStoragePtr->boxes[boxId][boxPosition] = boxMon;
            }
        }
    }

    Debug_DestroyMenu_Full(taskId);
    ScriptContext_Enable();
}
static void DebugAction_Fill_PCItemStorage(u8 taskId)
=======
    // Set flag for user convenience
    FlagSet(FLAG_SYS_POKEMON_GET);
    if (spaceAvailable)
        PlayBGM(GetCurrentMapMusic());

    Debug_DestroyMenu_Full_Script(taskId, Debug_BoxFilledMessage);
}

static void DebugAction_PCBag_Fill_PCItemStorage(u8 taskId)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    u16 itemId;

    for (itemId = 1; itemId < ITEMS_COUNT; itemId++)
    {
        if (!CheckPCHasItem(itemId, MAX_PC_ITEM_CAPACITY))
            AddPCItem(itemId, MAX_PC_ITEM_CAPACITY);
    }
}
<<<<<<< HEAD
static void DebugAction_Fill_PocketItems(u8 taskId)
=======

static void DebugAction_PCBag_Fill_PocketItems(u8 taskId)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    u16 itemId;

    for (itemId = 1; itemId < ITEMS_COUNT; itemId++)
    {
<<<<<<< HEAD
        if (ItemId_GetPocket(itemId) == POCKET_ITEMS && CheckBagHasSpace(itemId, MAX_BAG_ITEM_CAPACITY))
            AddBagItem(itemId, MAX_BAG_ITEM_CAPACITY);
    }
}
static void DebugAction_Fill_PocketPokeBalls(u8 taskId)
{
    u16 itemId;

    for (itemId = FIRST_BALL; itemId < LAST_BALL; itemId++)
    {
        if (CheckBagHasSpace(itemId, MAX_BAG_ITEM_CAPACITY))
            AddBagItem(itemId, MAX_BAG_ITEM_CAPACITY);
    }
}
static void DebugAction_Fill_PocketTMHM(u8 taskId)
{
    u16 itemId;

    for (itemId = ITEM_TM01; itemId <= ITEM_HM08; itemId++)
    {
=======
        if (GetItemPocket(itemId) == POCKET_ITEMS && CheckBagHasSpace(itemId, MAX_BAG_ITEM_CAPACITY))
            AddBagItem(itemId, MAX_BAG_ITEM_CAPACITY);
    }
}

static void DebugAction_PCBag_Fill_PocketPokeBalls(u8 taskId)
{
    for (enum PokeBall ballId = BALL_STRANGE; ballId < POKEBALL_COUNT; ballId++)
    {
        if (CheckBagHasSpace(ballId, MAX_BAG_ITEM_CAPACITY))
            AddBagItem(gBallItemIds[ballId], MAX_BAG_ITEM_CAPACITY);
    }
}

static void DebugAction_PCBag_Fill_PocketTMHM(u8 taskId)
{
    u16 index, itemId;

    for (index = 0; index < NUM_ALL_MACHINES; index++)
    {
        itemId = GetTMHMItemId(index + 1);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        if (CheckBagHasSpace(itemId, 1) && ItemIdToBattleMoveId(itemId) != MOVE_NONE)
            AddBagItem(itemId, 1);
    }
}
<<<<<<< HEAD
static void DebugAction_Fill_PocketBerries(u8 taskId)
=======

static void DebugAction_PCBag_Fill_PocketBerries(u8 taskId)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    u16 itemId;

    for (itemId = FIRST_BERRY_INDEX; itemId < LAST_BERRY_INDEX; itemId++)
    {
<<<<<<< HEAD
        if (CheckBagHasSpace(itemId, MAX_BERRY_CAPACITY))
            AddBagItem(itemId, MAX_BERRY_CAPACITY);
    }
}
static void DebugAction_Fill_PocketKeyItems(u8 taskId)
=======
        if (CheckBagHasSpace(itemId, MAX_BAG_ITEM_CAPACITY))
            AddBagItem(itemId, MAX_BAG_ITEM_CAPACITY);
    }
}

static void DebugAction_PCBag_Fill_PocketKeyItems(u8 taskId)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    u16 itemId;

    for (itemId = 1; itemId < ITEMS_COUNT; itemId++)
    {
<<<<<<< HEAD
        if (ItemId_GetPocket(itemId) == POCKET_KEY_ITEMS && CheckBagHasSpace(itemId, 1))
=======
        if (GetItemPocket(itemId) == POCKET_KEY_ITEMS && CheckBagHasSpace(itemId, 1))
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            AddBagItem(itemId, 1);
    }
}

<<<<<<< HEAD
// *******************************
// Actions Sound
static const u8 *const gBGMNames[];
static const u8 *const gSENames[];
=======
static void DebugAction_PCBag_ClearBag(u8 taskId)
{
    PlaySE(MUS_LEVEL_UP);
    ClearBag();
}

static void DebugAction_PCBag_ClearBoxes(u8 taskId)
{
    ResetPokemonStorageSystem();
    Debug_DestroyMenu_Full(taskId);
    ScriptContext_Enable();
}

// *******************************
// Actions Sound
static const u8 *const sBGMNames[END_MUS - START_MUS + 1];
static const u8 *const sSENames[END_SE + 1];

#define tCurrentSong  data[5]

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
static void DebugAction_Sound_SE(u8 taskId)
{
    u8 windowId;

<<<<<<< HEAD
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);
=======
    ClearStdWindowAndFrame(gTasks[taskId].tWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tWindowId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugMenuWindowTemplateSound);
    DrawStdWindowFrame(windowId, FALSE);

<<<<<<< HEAD
    CopyWindowToVram(windowId, 3);

    //Display initial ID
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, 1, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
    StringCopyPadded(gStringVar1, gSENames[0], CHAR_SPACE, 35);
    StringExpandPlaceholders(gStringVar4, sDebugText_Sound_SE_ID);
    AddTextPrinterParameterized(windowId, 1, gStringVar4, 1, 1, 0, NULL);
=======
    CopyWindowToVram(windowId, COPYWIN_FULL);

    // Display initial sound effect
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, 1, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
    StringCopyPadded(gStringVar1, sSENames[0], CHAR_SPACE, 35);
    StringExpandPlaceholders(gStringVar4, sDebugText_Sound_SFX_ID);
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    StopMapMusic(); //Stop map music to better hear sounds

    gTasks[taskId].func = DebugAction_Sound_SE_SelectId;
<<<<<<< HEAD
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = 1;                         //Current ID
    gTasks[taskId].data[4] = 0;                         //Digit Selected
    gTasks[taskId].data[5] = gTasks[taskId].data[3];    //Last song played (for stopping)
}
static void DebugAction_Sound_SE_SelectId(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > END_SE)
                gTasks[taskId].data[3] = END_SE;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < 1)
                gTasks[taskId].data[3] = 1;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < DEBUG_NUMBER_DIGITS_ITEMS-1)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringCopyPadded(gStringVar1, gSENames[gTasks[taskId].data[3]-1], CHAR_SPACE, 35);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
        StringExpandPlaceholders(gStringVar4, sDebugText_Sound_SE_ID);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        m4aSongNumStop(gTasks[taskId].data[5]);
        gTasks[taskId].data[5] = gTasks[taskId].data[3];
        m4aSongNumStart(gTasks[taskId].data[3]);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        m4aSongNumStop(gTasks[taskId].data[5]);
        DebugAction_DestroyExtraWindow(taskId);
    }
=======
    gTasks[taskId].tSubWindowId = windowId;
    gTasks[taskId].tInput = 1;
    gTasks[taskId].tDigit = 0;
    gTasks[taskId].tCurrentSong = gTasks[taskId].tInput;
}

static void DebugAction_Sound_SE_SelectId(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        const u8 *seName;
        Debug_HandleInput_Numeric(taskId, 1, END_SE, DEBUG_NUMBER_DIGITS_ITEMS);

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].tDigit]);
        seName = sSENames[gTasks[taskId].tInput - 1];
        if (seName == NULL)
            seName = sDebugText_Dashes;
        StringCopyPadded(gStringVar1, seName, CHAR_SPACE, 35);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].tInput, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
        StringExpandPlaceholders(gStringVar4, sDebugText_Sound_SFX_ID);
        AddTextPrinterParameterized(gTasks[taskId].tSubWindowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
    }

    if (JOY_NEW(A_BUTTON))
    {
        m4aSongNumStop(gTasks[taskId].tCurrentSong);
        gTasks[taskId].tCurrentSong = gTasks[taskId].tInput;
        m4aSongNumStart(gTasks[taskId].tInput);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        m4aSongNumStop(gTasks[taskId].tCurrentSong);
        DebugAction_DestroyExtraWindow(taskId);
    }
    else if (JOY_NEW(START_BUTTON))
    {
        m4aSongNumStop(gTasks[taskId].tCurrentSong);
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

static void DebugAction_Sound_MUS(u8 taskId)
{
    u8 windowId;

<<<<<<< HEAD
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);
=======
    ClearStdWindowAndFrame(gTasks[taskId].tWindowId, TRUE);
    RemoveWindow(gTasks[taskId].tWindowId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    HideMapNamePopUpWindow();
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugMenuWindowTemplateSound);
    DrawStdWindowFrame(windowId, FALSE);

<<<<<<< HEAD
    CopyWindowToVram(windowId, 3);

    //Display initial ID
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, MUS_LITTLEROOT_TEST, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
    StringCopyPadded(gStringVar1, gBGMNames[0], CHAR_SPACE, 35);
    StringExpandPlaceholders(gStringVar4, sDebugText_Sound_MUS_ID);
    AddTextPrinterParameterized(windowId, 1, gStringVar4, 1, 1, 0, NULL);
=======
    CopyWindowToVram(windowId, COPYWIN_FULL);

    // Display initial song
    StringCopy(gStringVar2, gText_DigitIndicator[0]);
    ConvertIntToDecimalStringN(gStringVar3, START_MUS, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
    StringCopyPadded(gStringVar1, sBGMNames[0], CHAR_SPACE, 35);
    StringExpandPlaceholders(gStringVar4, sDebugText_Sound_Music_ID);
    AddTextPrinterParameterized(windowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    StopMapMusic(); //Stop map music to better hear new music

    gTasks[taskId].func = DebugAction_Sound_MUS_SelectId;
<<<<<<< HEAD
    gTasks[taskId].data[2] = windowId;
    gTasks[taskId].data[3] = MUS_LITTLEROOT_TEST;                 //Current ID
    gTasks[taskId].data[4] = 0;                         //Digit Selected
    gTasks[taskId].data[5] = gTasks[taskId].data[3];    //Last song played (for stopping)
}
static void DebugAction_Sound_MUS_SelectId(u8 taskId)
{
    if (gMain.newKeys & DPAD_ANY)
    {
        if (gMain.newKeys & DPAD_UP)
        {
            gTasks[taskId].data[3] += sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] > END_MUS)
                gTasks[taskId].data[3] = END_MUS;
        }
        if (gMain.newKeys & DPAD_DOWN)
        {
            gTasks[taskId].data[3] -= sPowersOfTen[gTasks[taskId].data[4]];
            if (gTasks[taskId].data[3] < MUS_LITTLEROOT_TEST)
                gTasks[taskId].data[3] = MUS_LITTLEROOT_TEST;
        }
        if (gMain.newKeys & DPAD_LEFT)
        {
            if (gTasks[taskId].data[4] > 0)
                gTasks[taskId].data[4] -= 1;
        }
        if (gMain.newKeys & DPAD_RIGHT)
        {
            if (gTasks[taskId].data[4] < DEBUG_NUMBER_DIGITS_ITEMS-1)
                gTasks[taskId].data[4] += 1;
        }

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].data[4]]);
        StringCopyPadded(gStringVar1, gBGMNames[gTasks[taskId].data[3]-MUS_LITTLEROOT_TEST], CHAR_SPACE, 35);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].data[3], STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
        StringExpandPlaceholders(gStringVar4, sDebugText_Sound_MUS_ID);
        AddTextPrinterParameterized(gTasks[taskId].data[2], 1, gStringVar4, 1, 1, 0, NULL);
    }

    if (gMain.newKeys & A_BUTTON)
    {
        m4aSongNumStop(gTasks[taskId].data[5]);
        gTasks[taskId].data[5] = gTasks[taskId].data[3];
        m4aSongNumStart(gTasks[taskId].data[3]);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        // m4aSongNumStop(gTasks[taskId].data[5]);   //Uncomment if music should stop after leaving menu
        DebugAction_DestroyExtraWindow(taskId);
    }
}

#define SOUND_LIST_BGM \
    X(MUS_LITTLEROOT_TEST             , "MUS-LITTLEROOT-TEST"             ) \
    X(MUS_GSC_ROUTE38                 , "MUS-GSC-ROUTE38"                 ) \
    X(MUS_CAUGHT                      , "MUS-CAUGHT"                      ) \
    X(MUS_VICTORY_WILD                , "MUS-VICTORY-WILD"                ) \
    X(MUS_VICTORY_GYM_LEADER          , "MUS-VICTORY-GYM-LEADER"          ) \
    X(MUS_VICTORY_LEAGUE              , "MUS-VICTORY-LEAGUE"              ) \
    X(MUS_C_COMM_CENTER               , "MUS-C-COMM-CENTER"               ) \
    X(MUS_GSC_PEWTER                  , "MUS-GSC-PEWTER"                  ) \
    X(MUS_C_VS_LEGEND_BEAST           , "MUS-C-VS-LEGEND-BEAST"           ) \
    X(MUS_ROUTE101                    , "MUS-ROUTE101"                    ) \
    X(MUS_ROUTE110                    , "MUS-ROUTE110"                    ) \
    X(MUS_ROUTE120                    , "MUS-ROUTE120"                    ) \
    X(MUS_PETALBURG                   , "MUS-PETALBURG"                   ) \
    X(MUS_OLDALE                      , "MUS-OLDALE"                      ) \
    X(MUS_GYM                         , "MUS-GYM"                         ) \
    X(MUS_SURF                        , "MUS-SURF"                        ) \
    X(MUS_PETALBURG_WOODS             , "MUS-PETALBURG-WOODS"             ) \
    X(MUS_LEVEL_UP                    , "MUS-LEVEL-UP"                    ) \
    X(MUS_HEAL                        , "MUS-HEAL"                        ) \
    X(MUS_OBTAIN_BADGE                , "MUS-OBTAIN-BADGE"                ) \
    X(MUS_OBTAIN_ITEM                 , "MUS-OBTAIN-ITEM"                 ) \
    X(MUS_EVOLVED                     , "MUS-EVOLVED"                     ) \
    X(MUS_OBTAIN_TMHM                 , "MUS-OBTAIN-TMHM"                 ) \
    X(MUS_LILYCOVE_MUSEUM             , "MUS-LILYCOVE-MUSEUM"             ) \
    X(MUS_ROUTE122                    , "MUS-ROUTE122"                    ) \
    X(MUS_OCEANIC_MUSEUM              , "MUS-OCEANIC-MUSEUM"              ) \
    X(MUS_EVOLUTION_INTRO             , "MUS-EVOLUTION-INTRO"             ) \
    X(MUS_EVOLUTION                   , "MUS-EVOLUTION"                   ) \
    X(MUS_MOVE_DELETED                , "MUS-MOVE-DELETED"                ) \
    X(MUS_ENCOUNTER_GIRL              , "MUS-ENCOUNTER-GIRL"              ) \
    X(MUS_ENCOUNTER_MALE              , "MUS-ENCOUNTER-MALE"              ) \
    X(MUS_ABANDONED_SHIP              , "MUS-ABANDONED-SHIP"              ) \
    X(MUS_FORTREE                     , "MUS-FORTREE"                     ) \
    X(MUS_BIRCH_LAB                   , "MUS-BIRCH-LAB"                   ) \
    X(MUS_B_TOWER_RS                  , "MUS-B-TOWER-RS"                  ) \
    X(MUS_ENCOUNTER_SWIMMER           , "MUS-ENCOUNTER-SWIMMER"           ) \
    X(MUS_CAVE_OF_ORIGIN              , "MUS-CAVE-OF-ORIGIN"              ) \
    X(MUS_OBTAIN_BERRY                , "MUS-OBTAIN-BERRY"                ) \
    X(MUS_AWAKEN_LEGEND               , "MUS-AWAKEN-LEGEND"               ) \
    X(MUS_SLOTS_JACKPOT               , "MUS-SLOTS-JACKPOT"               ) \
    X(MUS_SLOTS_WIN                   , "MUS-SLOTS-WIN"                   ) \
    X(MUS_TOO_BAD                     , "MUS-TOO-BAD"                     ) \
    X(MUS_ROULETTE                    , "MUS-ROULETTE"                    ) \
    X(MUS_LINK_CONTEST_P1             , "MUS-LINK-CONTEST-P1"             ) \
    X(MUS_LINK_CONTEST_P2             , "MUS-LINK-CONTEST-P2"             ) \
    X(MUS_LINK_CONTEST_P3             , "MUS-LINK-CONTEST-P3"             ) \
    X(MUS_LINK_CONTEST_P4             , "MUS-LINK-CONTEST-P4"             ) \
    X(MUS_ENCOUNTER_RICH              , "MUS-ENCOUNTER-RICH"              ) \
    X(MUS_VERDANTURF                  , "MUS-VERDANTURF"                  ) \
    X(MUS_RUSTBORO                    , "MUS-RUSTBORO"                    ) \
    X(MUS_POKE_CENTER                 , "MUS-POKE-CENTER"                 ) \
    X(MUS_ROUTE104                    , "MUS-ROUTE104"                    ) \
    X(MUS_ROUTE119                    , "MUS-ROUTE119"                    ) \
    X(MUS_CYCLING                     , "MUS-CYCLING"                     ) \
    X(MUS_POKE_MART                   , "MUS-POKE-MART"                   ) \
    X(MUS_LITTLEROOT                  , "MUS-LITTLEROOT"                  ) \
    X(MUS_MT_CHIMNEY                  , "MUS-MT-CHIMNEY"                  ) \
    X(MUS_ENCOUNTER_FEMALE            , "MUS-ENCOUNTER-FEMALE"            ) \
    X(MUS_LILYCOVE                    , "MUS-LILYCOVE"                    ) \
    X(MUS_ROUTE111                    , "MUS-ROUTE111"                    ) \
    X(MUS_HELP                        , "MUS-HELP"                        ) \
    X(MUS_UNDERWATER                  , "MUS-UNDERWATER"                  ) \
    X(MUS_VICTORY_TRAINER             , "MUS-VICTORY-TRAINER"             ) \
    X(MUS_TITLE                       , "MUS-TITLE"                       ) \
    X(MUS_INTRO                       , "MUS-INTRO"                       ) \
    X(MUS_ENCOUNTER_MAY               , "MUS-ENCOUNTER-MAY"               ) \
    X(MUS_ENCOUNTER_INTENSE           , "MUS-ENCOUNTER-INTENSE"           ) \
    X(MUS_ENCOUNTER_COOL              , "MUS-ENCOUNTER-COOL"              ) \
    X(MUS_ROUTE113                    , "MUS-ROUTE113"                    ) \
    X(MUS_ENCOUNTER_AQUA              , "MUS-ENCOUNTER-AQUA"              ) \
    X(MUS_FOLLOW_ME                   , "MUS-FOLLOW-ME"                   ) \
    X(MUS_ENCOUNTER_BRENDAN           , "MUS-ENCOUNTER-BRENDAN"           ) \
    X(MUS_EVER_GRANDE                 , "MUS-EVER-GRANDE"                 ) \
    X(MUS_ENCOUNTER_SUSPICIOUS        , "MUS-ENCOUNTER-SUSPICIOUS"        ) \
    X(MUS_VICTORY_AQUA_MAGMA          , "MUS-VICTORY-AQUA-MAGMA"          ) \
    X(MUS_CABLE_CAR                   , "MUS-CABLE-CAR"                   ) \
    X(MUS_GAME_CORNER                 , "MUS-GAME-CORNER"                 ) \
    X(MUS_DEWFORD                     , "MUS-DEWFORD"                     ) \
    X(MUS_SAFARI_ZONE                 , "MUS-SAFARI-ZONE"                 ) \
    X(MUS_VICTORY_ROAD                , "MUS-VICTORY-ROAD"                ) \
    X(MUS_AQUA_MAGMA_HIDEOUT          , "MUS-AQUA-MAGMA-HIDEOUT"          ) \
    X(MUS_SAILING                     , "MUS-SAILING"                     ) \
    X(MUS_MT_PYRE                     , "MUS-MT-PYRE"                     ) \
    X(MUS_SLATEPORT                   , "MUS-SLATEPORT"                   ) \
    X(MUS_MT_PYRE_EXTERIOR            , "MUS-MT-PYRE-EXTERIOR"            ) \
    X(MUS_SCHOOL                      , "MUS-SCHOOL"                      ) \
    X(MUS_HALL_OF_FAME                , "MUS-HALL-OF-FAME"                ) \
    X(MUS_FALLARBOR                   , "MUS-FALLARBOR"                   ) \
    X(MUS_SEALED_CHAMBER              , "MUS-SEALED-CHAMBER"              ) \
    X(MUS_CONTEST_WINNER              , "MUS-CONTEST-WINNER"              ) \
    X(MUS_CONTEST                     , "MUS-CONTEST"                     ) \
    X(MUS_ENCOUNTER_MAGMA             , "MUS-ENCOUNTER-MAGMA"             ) \
    X(MUS_INTRO_BATTLE                , "MUS-INTRO-BATTLE"                ) \
    X(MUS_WEATHER_KYOGRE              , "MUS-WEATHER-KYOGRE"              ) \
    X(MUS_WEATHER_GROUDON             , "MUS-WEATHER-GROUDON"             ) \
    X(MUS_SOOTOPOLIS                  , "MUS-SOOTOPOLIS"                  ) \
    X(MUS_CONTEST_RESULTS             , "MUS-CONTEST-RESULTS"             ) \
    X(MUS_HALL_OF_FAME_ROOM           , "MUS-HALL-OF-FAME-ROOM"           ) \
    X(MUS_TRICK_HOUSE                 , "MUS-TRICK-HOUSE"                 ) \
    X(MUS_ENCOUNTER_TWINS             , "MUS-ENCOUNTER-TWINS"             ) \
    X(MUS_ENCOUNTER_ELITE_FOUR        , "MUS-ENCOUNTER-ELITE-FOUR"        ) \
    X(MUS_ENCOUNTER_HIKER             , "MUS-ENCOUNTER-HIKER"             ) \
    X(MUS_CONTEST_LOBBY               , "MUS-CONTEST-LOBBY"               ) \
    X(MUS_ENCOUNTER_INTERVIEWER       , "MUS-ENCOUNTER-INTERVIEWER"       ) \
    X(MUS_ENCOUNTER_CHAMPION          , "MUS-ENCOUNTER-CHAMPION"          ) \
    X(MUS_CREDITS                     , "MUS-CREDITS"                     ) \
    X(MUS_END                         , "MUS-END"                         ) \
    X(MUS_VS_WILD                     , "MUS-VS-WILD"                     ) \
    X(MUS_VS_AQUA_MAGMA               , "MUS-VS-AQUA-MAGMA"               ) \
    X(MUS_VS_TRAINER                  , "MUS-VS-TRAINER"                  ) \
    X(MUS_VS_GYM_LEADER               , "MUS-VS-GYM-LEADER"               ) \
    X(MUS_VS_CHAMPION                 , "MUS-VS-CHAMPION"                 ) \
    X(MUS_VS_REGI                     , "MUS-VS-REGI"                     ) \
    X(MUS_VS_KYOGRE_GROUDON           , "MUS-VS-KYOGRE-GROUDON"           ) \
    X(MUS_VS_RIVAL                    , "MUS-VS-RIVAL"                    ) \
    X(MUS_VS_ELITE_FOUR               , "MUS-VS-ELITE-FOUR"               ) \
    X(MUS_VS_AQUA_MAGMA_LEADER        , "MUS-VS-AQUA-MAGMA-LEADER"        ) \
    X(MUS_RG_FOLLOW_ME                , "MUS-RG-FOLLOW-ME"                ) \
    X(MUS_RG_GAME_CORNER              , "MUS-RG-GAME-CORNER"              ) \
    X(MUS_RG_ROCKET_HIDEOUT           , "MUS-RG-ROCKET-HIDEOUT"           ) \
    X(MUS_RG_GYM                      , "MUS-RG-GYM"                      ) \
    X(MUS_RG_JIGGLYPUFF               , "MUS-RG-JIGGLYPUFF"               ) \
    X(MUS_RG_INTRO_FIGHT              , "MUS-RG-INTRO-FIGHT"              ) \
    X(MUS_RG_TITLE                    , "MUS-RG-TITLE"                    ) \
    X(MUS_RG_CINNABAR                 , "MUS-RG-CINNABAR"                 ) \
    X(MUS_RG_LAVENDER                 , "MUS-RG-LAVENDER"                 ) \
    X(MUS_RG_HEAL                     , "MUS-RG-HEAL"                     ) \
    X(MUS_RG_CYCLING                  , "MUS-RG-CYCLING"                  ) \
    X(MUS_RG_ENCOUNTER_ROCKET         , "MUS-RG-ENCOUNTER-ROCKET"         ) \
    X(MUS_RG_ENCOUNTER_GIRL           , "MUS-RG-ENCOUNTER-GIRL"           ) \
    X(MUS_RG_ENCOUNTER_BOY            , "MUS-RG-ENCOUNTER-BOY"            ) \
    X(MUS_RG_HALL_OF_FAME             , "MUS-RG-HALL-OF-FAME"             ) \
    X(MUS_RG_VIRIDIAN_FOREST          , "MUS-RG-VIRIDIAN-FOREST"          ) \
    X(MUS_RG_MT_MOON                  , "MUS-RG-MT-MOON"                  ) \
    X(MUS_RG_POKE_MANSION             , "MUS-RG-POKE-MANSION"             ) \
    X(MUS_RG_CREDITS                  , "MUS-RG-CREDITS"                  ) \
    X(MUS_RG_ROUTE1                   , "MUS-RG-ROUTE1"                   ) \
    X(MUS_RG_ROUTE24                  , "MUS-RG-ROUTE24"                  ) \
    X(MUS_RG_ROUTE3                   , "MUS-RG-ROUTE3"                   ) \
    X(MUS_RG_ROUTE11                  , "MUS-RG-ROUTE11"                  ) \
    X(MUS_RG_VICTORY_ROAD             , "MUS-RG-VICTORY-ROAD"             ) \
    X(MUS_RG_VS_GYM_LEADER            , "MUS-RG-VS-GYM-LEADER"            ) \
    X(MUS_RG_VS_TRAINER               , "MUS-RG-VS-TRAINER"               ) \
    X(MUS_RG_VS_WILD                  , "MUS-RG-VS-WILD"                  ) \
    X(MUS_RG_VS_CHAMPION              , "MUS-RG-VS-CHAMPION"              ) \
    X(MUS_RG_PALLET                   , "MUS-RG-PALLET"                   ) \
    X(MUS_RG_OAK_LAB                  , "MUS-RG-OAK-LAB"                  ) \
    X(MUS_RG_OAK                      , "MUS-RG-OAK"                      ) \
    X(MUS_RG_POKE_CENTER              , "MUS-RG-POKE-CENTER"              ) \
    X(MUS_RG_SS_ANNE                  , "MUS-RG-SS-ANNE"                  ) \
    X(MUS_RG_SURF                     , "MUS-RG-SURF"                     ) \
    X(MUS_RG_POKE_TOWER               , "MUS-RG-POKE-TOWER"               ) \
    X(MUS_RG_SILPH                    , "MUS-RG-SILPH"                    ) \
    X(MUS_RG_FUCHSIA                  , "MUS-RG-FUCHSIA"                  ) \
    X(MUS_RG_CELADON                  , "MUS-RG-CELADON"                  ) \
    X(MUS_RG_VICTORY_TRAINER          , "MUS-RG-VICTORY-TRAINER"          ) \
    X(MUS_RG_VICTORY_WILD             , "MUS-RG-VICTORY-WILD"             ) \
    X(MUS_RG_VICTORY_GYM_LEADER       , "MUS-RG-VICTORY-GYM-LEADER"       ) \
    X(MUS_RG_VERMILION               , "MUS-RG-VERMILION"               ) \
    X(MUS_RG_PEWTER                   , "MUS-RG-PEWTER"                   ) \
    X(MUS_RG_ENCOUNTER_RIVAL          , "MUS-RG-ENCOUNTER-RIVAL"          ) \
    X(MUS_RG_RIVAL_EXIT               , "MUS-RG-RIVAL-EXIT"               ) \
    X(MUS_RG_DEX_RATING               , "MUS-RG-DEX-RATING"               ) \
    X(MUS_RG_OBTAIN_KEY_ITEM          , "MUS-RG-OBTAIN-KEY-ITEM"          ) \
    X(MUS_RG_CAUGHT_INTRO             , "MUS-RG-CAUGHT-INTRO"             ) \
    X(MUS_RG_PHOTO                    , "MUS-RG-PHOTO"                    ) \
    X(MUS_RG_GAME_FREAK               , "MUS-RG-GAME-FREAK"               ) \
    X(MUS_RG_CAUGHT                   , "MUS-RG-CAUGHT"                   ) \
    X(MUS_RG_NEW_GAME_INSTRUCT        , "MUS-RG-NEW-GAME-INSTRUCT"        ) \
    X(MUS_RG_NEW_GAME_INTRO           , "MUS-RG-NEW-GAME-INTRO"           ) \
    X(MUS_RG_NEW_GAME_EXIT            , "MUS-RG-NEW-GAME-EXIT"            ) \
    X(MUS_RG_POKE_JUMP                , "MUS-RG-POKE-JUMP"                ) \
    X(MUS_RG_UNION_ROOM               , "MUS-RG-UNION-ROOM"               ) \
    X(MUS_RG_NET_CENTER               , "MUS-RG-NET-CENTER"               ) \
    X(MUS_RG_MYSTERY_GIFT             , "MUS-RG-MYSTERY-GIFT"             ) \
    X(MUS_RG_BERRY_PICK               , "MUS-RG-BERRY-PICK"               ) \
    X(MUS_RG_SEVII_CAVE               , "MUS-RG-SEVII-CAVE"               ) \
    X(MUS_RG_TEACHY_TV_SHOW           , "MUS-RG-TEACHY-TV-SHOW"           ) \
    X(MUS_RG_SEVII_ROUTE              , "MUS-RG-SEVII-ROUTE"              ) \
    X(MUS_RG_SEVII_DUNGEON            , "MUS-RG-SEVII-DUNGEON"            ) \
    X(MUS_RG_SEVII_123                , "MUS-RG-SEVII-123"                ) \
    X(MUS_RG_SEVII_45                 , "MUS-RG-SEVII-45"                 ) \
    X(MUS_RG_SEVII_67                 , "MUS-RG-SEVII-67"                 ) \
    X(MUS_RG_POKE_FLUTE               , "MUS-RG-POKE-FLUTE"               ) \
    X(MUS_RG_VS_DEOXYS                , "MUS-RG-VS-DEOXYS"                ) \
    X(MUS_RG_VS_MEWTWO                , "MUS-RG-VS-MEWTWO"                ) \
    X(MUS_RG_VS_LEGEND                , "MUS-RG-VS-LEGEND"                ) \
    X(MUS_RG_ENCOUNTER_GYM_LEADER     , "MUS-RG-ENCOUNTER-GYM-LEADER"     ) \
    X(MUS_RG_ENCOUNTER_DEOXYS         , "MUS-RG-ENCOUNTER-DEOXYS"         ) \
    X(MUS_RG_TRAINER_TOWER            , "MUS-RG-TRAINER-TOWER"            ) \
    X(MUS_RG_SLOW_PALLET              , "MUS-RG-SLOW-PALLET"              ) \
    X(MUS_RG_TEACHY_TV_MENU           , "MUS-RG-TEACHY-TV-MENU"           ) \
    X(MUS_ABNORMAL_WEATHER            , "MUS-ABNORMAL-WEATHER"            ) \
    X(MUS_B_FRONTIER                  , "MUS-B-FRONTIER"                  ) \
    X(MUS_B_ARENA                     , "MUS-B-ARENA"                     ) \
    X(MUS_OBTAIN_B_POINTS             , "MUS-OBTAIN-B-POINTS"             ) \
    X(MUS_REGISTER_MATCH_CALL         , "MUS-REGISTER-MATCH-CALL"         ) \
    X(MUS_B_PYRAMID                   , "MUS-B-PYRAMID"                   ) \
    X(MUS_B_PYRAMID_TOP               , "MUS-B-PYRAMID-TOP"               ) \
    X(MUS_B_PALACE                    , "MUS-B-PALACE"                    ) \
    X(MUS_RAYQUAZA_APPEARS            , "MUS-RAYQUAZA-APPEARS"            ) \
    X(MUS_B_TOWER                     , "MUS-B-TOWER"                     ) \
    X(MUS_OBTAIN_SYMBOL               , "MUS-OBTAIN-SYMBOL"               ) \
    X(MUS_B_DOME                      , "MUS-B-DOME"                      ) \
    X(MUS_B_PIKE                      , "MUS-B-PIKE"                      ) \
    X(MUS_B_FACTORY                   , "MUS-B-FACTORY"                   ) \
    X(MUS_VS_RAYQUAZA                 , "MUS-VS-RAYQUAZA"                 ) \
    X(MUS_VS_FRONTIER_BRAIN           , "MUS-VS-FRONTIER-BRAIN"           ) \
    X(MUS_VS_MEW                      , "MUS-VS-MEW"                      ) \
    X(MUS_B_DOME_LOBBY                , "MUS-B-DOME-LOBBY"                ) \
    X(MUS_DP_TWINLEAF_DAY             , "MUS-DP-TWINLEAF-DAY"             ) \
    X(MUS_DP_SANDGEM_DAY              , "MUS-DP-SANDGEM-DAY"              ) \
    X(MUS_DP_FLOAROMA_DAY             , "MUS-DP-FLOAROMA-DAY"             ) \
    X(MUS_DP_SOLACEON_DAY             , "MUS-DP-SOLACEON-DAY"             ) \
    X(MUS_DP_ROUTE225_DAY             , "MUS-DP-ROUTE225-DAY"             ) \
    X(MUS_DP_VALOR_LAKEFRONT_DAY      , "MUS-DP-VALOR-LAKEFRONT-DAY"      ) \
    X(MUS_DP_JUBILIFE_DAY             , "MUS-DP-JUBILIFE-DAY"             ) \
    X(MUS_DP_CANALAVE_DAY             , "MUS-DP-CANALAVE-DAY"             ) \
    X(MUS_DP_OREBURGH_DAY             , "MUS-DP-OREBURGH-DAY"             ) \
    X(MUS_DP_ETERNA_DAY               , "MUS-DP-ETERNA-DAY"               ) \
    X(MUS_DP_HEARTHOME_DAY            , "MUS-DP-HEARTHOME-DAY"            ) \
    X(MUS_DP_VEILSTONE_DAY            , "MUS-DP-VEILSTONE-DAY"            ) \
    X(MUS_DP_SUNYSHORE_DAY            , "MUS-DP-SUNYSHORE-DAY"            ) \
    X(MUS_DP_SNOWPOINT_DAY            , "MUS-DP-SNOWPOINT-DAY"            ) \
    X(MUS_DP_POKEMON_LEAGUE_DAY       , "MUS-DP-POKEMON-LEAGUE-DAY"       ) \
    X(MUS_DP_FIGHT_AREA_DAY           , "MUS-DP-FIGHT-AREA-DAY"           ) \
    X(MUS_DP_ROUTE201_DAY             , "MUS-DP-ROUTE201-DAY"             ) \
    X(MUS_DP_ROUTE203_DAY             , "MUS-DP-ROUTE203-DAY"             ) \
    X(MUS_DP_ROUTE205_DAY             , "MUS-DP-ROUTE205-DAY"             ) \
    X(MUS_DP_ROUTE206_DAY             , "MUS-DP-ROUTE206-DAY"             ) \
    X(MUS_DP_ROUTE209_DAY             , "MUS-DP-ROUTE209-DAY"             ) \
    X(MUS_DP_ROUTE210_DAY             , "MUS-DP-ROUTE210-DAY"             ) \
    X(MUS_DP_ROUTE216_DAY             , "MUS-DP-ROUTE216-DAY"             ) \
    X(MUS_DP_ROUTE228_DAY             , "MUS-DP-ROUTE228-DAY"             ) \
    X(MUS_DP_ROWAN                    , "MUS-DP-ROWAN"                    ) \
    X(MUS_DP_TV_BROADCAST             , "MUS-DP-TV-BROADCAST"             ) \
    X(MUS_DP_TWINLEAF_NIGHT           , "MUS-DP-TWINLEAF-NIGHT"           ) \
    X(MUS_DP_SANDGEM_NIGHT            , "MUS-DP-SANDGEM-NIGHT"            ) \
    X(MUS_DP_FLOAROMA_NIGHT           , "MUS-DP-FLOAROMA-NIGHT"           ) \
    X(MUS_DP_SOLACEON_NIGHT           , "MUS-DP-SOLACEON-NIGHT"           ) \
    X(MUS_DP_ROUTE225_NIGHT           , "MUS-DP-ROUTE225-NIGHT"           ) \
    X(MUS_DP_VALOR_LAKEFRONT_NIGHT    , "MUS-DP-VALOR-LAKEFRONT-NIGHT"    ) \
    X(MUS_DP_JUBILIFE_NIGHT           , "MUS-DP-JUBILIFE-NIGHT"           ) \
    X(MUS_DP_CANALAVE_NIGHT           , "MUS-DP-CANALAVE-NIGHT"           ) \
    X(MUS_DP_OREBURGH_NIGHT           , "MUS-DP-OREBURGH-NIGHT"           ) \
    X(MUS_DP_ETERNA_NIGHT             , "MUS-DP-ETERNA-NIGHT"             ) \
    X(MUS_DP_HEARTHOME_NIGHT          , "MUS-DP-HEARTHOME-NIGHT"          ) \
    X(MUS_DP_VEILSTONE_NIGHT          , "MUS-DP-VEILSTONE-NIGHT"          ) \
    X(MUS_DP_SUNYSHORE_NIGHT          , "MUS-DP-SUNYSHORE-NIGHT"          ) \
    X(MUS_DP_SNOWPOINT_NIGHT          , "MUS-DP-SNOWPOINT-NIGHT"          ) \
    X(MUS_DP_POKEMON_LEAGUE_NIGHT     , "MUS-DP-POKEMON-LEAGUE-NIGHT"     ) \
    X(MUS_DP_FIGHT_AREA_NIGHT         , "MUS-DP-FIGHT-AREA-NIGHT"         ) \
    X(MUS_DP_ROUTE201_NIGHT           , "MUS-DP-ROUTE201-NIGHT"           ) \
    X(MUS_DP_ROUTE203_NIGHT           , "MUS-DP-ROUTE203-NIGHT"           ) \
    X(MUS_DP_ROUTE205_NIGHT           , "MUS-DP-ROUTE205-NIGHT"           ) \
    X(MUS_DP_ROUTE206_NIGHT           , "MUS-DP-ROUTE206-NIGHT"           ) \
    X(MUS_DP_ROUTE209_NIGHT           , "MUS-DP-ROUTE209-NIGHT"           ) \
    X(MUS_DP_ROUTE210_NIGHT           , "MUS-DP-ROUTE210-NIGHT"           ) \
    X(MUS_DP_ROUTE216_NIGHT           , "MUS-DP-ROUTE216-NIGHT"           ) \
    X(MUS_DP_ROUTE228_NIGHT           , "MUS-DP-ROUTE228-NIGHT"           ) \
    X(MUS_DP_UNDERGROUND              , "MUS-DP-UNDERGROUND"              ) \
    X(MUS_DP_FLAG_CAPTURED            , "MUS-DP-FLAG-CAPTURED"            ) \
    X(MUS_DP_VICTORY_ROAD             , "MUS-DP-VICTORY-ROAD"             ) \
    X(MUS_DP_ETERNA_FOREST            , "MUS-DP-ETERNA-FOREST"            ) \
    X(MUS_DP_OLD_CHATEAU              , "MUS-DP-OLD-CHATEAU"              ) \
    X(MUS_DP_LAKE_CAVERNS             , "MUS-DP-LAKE-CAVERNS"             ) \
    X(MUS_DP_AMITY_SQUARE             , "MUS-DP-AMITY-SQUARE"             ) \
    X(MUS_DP_GALACTIC_HQ              , "MUS-DP-GALACTIC-HQ"              ) \
    X(MUS_DP_GALACTIC_ETERNA_BUILDING , "MUS-DP-GALACTIC-ETERNA-BUILDING" ) \
    X(MUS_DP_GREAT_MARSH              , "MUS-DP-GREAT-MARSH"              ) \
    X(MUS_DP_LAKE                     , "MUS-DP-LAKE"                     ) \
    X(MUS_DP_MT_CORONET               , "MUS-DP-MT-CORONET"               ) \
    X(MUS_DP_SPEAR_PILLAR             , "MUS-DP-SPEAR-PILLAR"             ) \
    X(MUS_DP_STARK_MOUNTAIN           , "MUS-DP-STARK-MOUNTAIN"           ) \
    X(MUS_DP_OREBURGH_GATE            , "MUS-DP-OREBURGH-GATE"            ) \
    X(MUS_DP_OREBURGH_MINE            , "MUS-DP-OREBURGH-MINE"            ) \
    X(MUS_DP_INSIDE_POKEMON_LEAGUE    , "MUS-DP-INSIDE-POKEMON-LEAGUE"    ) \
    X(MUS_DP_HALL_OF_FAME_ROOM        , "MUS-DP-HALL-OF-FAME-ROOM"        ) \
    X(MUS_DP_POKE_CENTER_DAY          , "MUS-DP-POKE-CENTER-DAY"          ) \
    X(MUS_DP_POKE_CENTER_NIGHT        , "MUS-DP-POKE-CENTER-NIGHT"        ) \
    X(MUS_DP_GYM                      , "MUS-DP-GYM"                      ) \
    X(MUS_DP_ROWAN_LAB                , "MUS-DP-ROWAN-LAB"                ) \
    X(MUS_DP_CONTEST_LOBBY            , "MUS-DP-CONTEST-LOBBY"            ) \
    X(MUS_DP_POKE_MART                , "MUS-DP-POKE-MART"                ) \
    X(MUS_DP_GAME_CORNER              , "MUS-DP-GAME-CORNER"              ) \
    X(MUS_DP_B_TOWER                  , "MUS-DP-B-TOWER"                  ) \
    X(MUS_DP_TV_STATION               , "MUS-DP-TV-STATION"               ) \
    X(MUS_DP_GALACTIC_HQ_BASEMENT     , "MUS-DP-GALACTIC-HQ-BASEMENT"     ) \
    X(MUS_DP_AZURE_FLUTE              , "MUS-DP-AZURE-FLUTE"              ) \
    X(MUS_DP_HALL_OF_ORIGIN           , "MUS-DP-HALL-OF-ORIGIN"           ) \
    X(MUS_DP_GTS                      , "MUS-DP-GTS"                      ) \
    X(MUS_DP_ENCOUNTER_BOY            , "MUS-DP-ENCOUNTER-BOY"            ) \
    X(MUS_DP_ENCOUNTER_TWINS          , "MUS-DP-ENCOUNTER-TWINS"          ) \
    X(MUS_DP_ENCOUNTER_INTENSE        , "MUS-DP-ENCOUNTER-INTENSE"        ) \
    X(MUS_DP_ENCOUNTER_GALACTIC       , "MUS-DP-ENCOUNTER-GALACTIC"       ) \
    X(MUS_DP_ENCOUNTER_LADY           , "MUS-DP-ENCOUNTER-LADY"           ) \
    X(MUS_DP_ENCOUNTER_HIKER          , "MUS-DP-ENCOUNTER-HIKER"          ) \
    X(MUS_DP_ENCOUNTER_RICH           , "MUS-DP-ENCOUNTER-RICH"           ) \
    X(MUS_DP_ENCOUNTER_SAILOR         , "MUS-DP-ENCOUNTER-SAILOR"         ) \
    X(MUS_DP_ENCOUNTER_SUSPICIOUS     , "MUS-DP-ENCOUNTER-SUSPICIOUS"     ) \
    X(MUS_DP_ENCOUNTER_ACE_TRAINER    , "MUS-DP-ENCOUNTER-ACE-TRAINER"    ) \
    X(MUS_DP_ENCOUNTER_GIRL           , "MUS-DP-ENCOUNTER-GIRL"           ) \
    X(MUS_DP_ENCOUNTER_CYCLIST        , "MUS-DP-ENCOUNTER-CYCLIST"        ) \
    X(MUS_DP_ENCOUNTER_ARTIST         , "MUS-DP-ENCOUNTER-ARTIST"         ) \
    X(MUS_DP_ENCOUNTER_ELITE_FOUR     , "MUS-DP-ENCOUNTER-ELITE-FOUR"     ) \
    X(MUS_DP_ENCOUNTER_CHAMPION       , "MUS-DP-ENCOUNTER-CHAMPION"       ) \
    X(MUS_DP_VS_WILD                  , "MUS-DP-VS-WILD"                  ) \
    X(MUS_DP_VS_GYM_LEADER            , "MUS-DP-VS-GYM-LEADER"            ) \
    X(MUS_DP_VS_UXIE_MESPRIT_AZELF    , "MUS-DP-VS-UXIE-MESPRIT-AZELF"    ) \
    X(MUS_DP_VS_TRAINER               , "MUS-DP-VS-TRAINER"               ) \
    X(MUS_DP_VS_GALACTIC_BOSS         , "MUS-DP-VS-GALACTIC-BOSS"         ) \
    X(MUS_DP_VS_DIALGA_PALKIA         , "MUS-DP-VS-DIALGA-PALKIA"         ) \
    X(MUS_DP_VS_CHAMPION              , "MUS-DP-VS-CHAMPION"              ) \
    X(MUS_DP_VS_GALACTIC              , "MUS-DP-VS-GALACTIC"              ) \
    X(MUS_DP_VS_RIVAL                 , "MUS-DP-VS-RIVAL"                 ) \
    X(MUS_DP_VS_ARCEUS                , "MUS-DP-VS-ARCEUS"                ) \
    X(MUS_DP_VS_LEGEND                , "MUS-DP-VS-LEGEND"                ) \
    X(MUS_DP_VICTORY_WILD             , "MUS-DP-VICTORY-WILD"             ) \
    X(MUS_DP_VICTORY_TRAINER          , "MUS-DP-VICTORY-TRAINER"          ) \
    X(MUS_DP_VICTORY_GYM_LEADER       , "MUS-DP-VICTORY-GYM-LEADER"       ) \
    X(MUS_DP_VICTORY_CHAMPION         , "MUS-DP-VICTORY-CHAMPION"         ) \
    X(MUS_DP_VICTORY_GALACTIC         , "MUS-DP-VICTORY-GALACTIC"         ) \
    X(MUS_DP_VICTORY_ELITE_FOUR       , "MUS-DP-VICTORY-ELITE-FOUR"       ) \
    X(MUS_DP_VS_GALACTIC_COMMANDER    , "MUS-DP-VS-GALACTIC-COMMANDER"    ) \
    X(MUS_DP_CONTEST                  , "MUS-DP-CONTEST"                  ) \
    X(MUS_DP_VS_ELITE_FOUR            , "MUS-DP-VS-ELITE-FOUR"            ) \
    X(MUS_DP_FOLLOW_ME                , "MUS-DP-FOLLOW-ME"                ) \
    X(MUS_DP_RIVAL                    , "MUS-DP-RIVAL"                    ) \
    X(MUS_DP_LAKE_EVENT               , "MUS-DP-LAKE-EVENT"               ) \
    X(MUS_DP_EVOLUTION                , "MUS-DP-EVOLUTION"                ) \
    X(MUS_DP_LUCAS                    , "MUS-DP-LUCAS"                    ) \
    X(MUS_DP_DAWN                     , "MUS-DP-DAWN"                     ) \
    X(MUS_DP_LEGEND_APPEARS           , "MUS-DP-LEGEND-APPEARS"           ) \
    X(MUS_DP_CATASTROPHE              , "MUS-DP-CATASTROPHE"              ) \
    X(MUS_DP_POKE_RADAR               , "MUS-DP-POKE-RADAR"               ) \
    X(MUS_DP_SURF                     , "MUS-DP-SURF"                     ) \
    X(MUS_DP_CYCLING                  , "MUS-DP-CYCLING"                  ) \
    X(MUS_DP_LETS_GO_TOGETHER         , "MUS-DP-LETS-GO-TOGETHER"         ) \
    X(MUS_DP_TV_END                   , "MUS-DP-TV-END"                   ) \
    X(MUS_DP_LEVEL_UP                 , "MUS-DP-LEVEL-UP"                 ) \
    X(MUS_DP_EVOLVED                  , "MUS-DP-EVOLVED"                  ) \
    X(MUS_DP_OBTAIN_KEY_ITEM          , "MUS-DP-OBTAIN-KEY-ITEM"          ) \
    X(MUS_DP_OBTAIN_ITEM              , "MUS-DP-OBTAIN-ITEM"              ) \
    X(MUS_DP_CAUGHT_INTRO             , "MUS-DP-CAUGHT-INTRO"             ) \
    X(MUS_DP_DEX_RATING               , "MUS-DP-DEX-RATING"               ) \
    X(MUS_DP_OBTAIN_BADGE             , "MUS-DP-OBTAIN-BADGE"             ) \
    X(MUS_DP_POKETCH                  , "MUS-DP-POKETCH"                  ) \
    X(MUS_DP_OBTAIN_TMHM              , "MUS-DP-OBTAIN-TMHM"              ) \
    X(MUS_DP_OBTAIN_ACCESSORY         , "MUS-DP-OBTAIN-ACCESSORY"         ) \
    X(MUS_DP_MOVE_DELETED             , "MUS-DP-MOVE-DELETED"             ) \
    X(MUS_DP_HEAL                     , "MUS-DP-HEAL"                     ) \
    X(MUS_DP_OBTAIN_BERRY             , "MUS-DP-OBTAIN-BERRY"             ) \
    X(MUS_DP_CONTEST_DRESS_UP         , "MUS-DP-CONTEST-DRESS-UP"         ) \
    X(MUS_DP_HALL_OF_FAME             , "MUS-DP-HALL-OF-FAME"             ) \
    X(MUS_DP_INTRO                    , "MUS-DP-INTRO"                    ) \
    X(MUS_DP_TITLE                    , "MUS-DP-TITLE"                    ) \
    X(MUS_DP_MYSTERY_GIFT             , "MUS-DP-MYSTERY-GIFT"             ) \
    X(MUS_DP_WFC                      , "MUS-DP-WFC"                      ) \
    X(MUS_DP_DANCE_EASY               , "MUS-DP-DANCE-EASY"               ) \
    X(MUS_DP_DANCE_DIFFICULT          , "MUS-DP-DANCE-DIFFICULT"          ) \
    X(MUS_DP_CONTEST_RESULTS          , "MUS-DP-CONTEST-RESULTS"          ) \
    X(MUS_DP_CONTEST_WINNER           , "MUS-DP-CONTEST-WINNER"           ) \
    X(MUS_DP_POFFINS                  , "MUS-DP-POFFINS"                  ) \
    X(MUS_DP_SLOTS_WIN                , "MUS-DP-SLOTS-WIN"                ) \
    X(MUS_DP_SLOTS_JACKPOT            , "MUS-DP-SLOTS-JACKPOT"            ) \
    X(MUS_DP_CREDITS                  , "MUS-DP-CREDITS"                  ) \
    X(MUS_DP_SLOTS_UNUSED             , "MUS-DP-SLOTS-UNUSED"             ) \
    X(MUS_PL_FIGHT_AREA_DAY           , "MUS-PL-FIGHT-AREA-DAY"           ) \
    X(MUS_PL_TV_BROADCAST             , "MUS-PL-TV-BROADCAST"             ) \
    X(MUS_PL_TV_END                   , "MUS-PL-TV-END"                   ) \
    X(MUS_PL_INTRO                    , "MUS-PL-INTRO"                    ) \
    X(MUS_PL_TITLE                    , "MUS-PL-TITLE"                    ) \
    X(MUS_PL_DISTORTION_WORLD         , "MUS-PL-DISTORTION-WORLD"         ) \
    X(MUS_PL_B_ARCADE                 , "MUS-PL-B-ARCADE"                 ) \
    X(MUS_PL_B_HALL                   , "MUS-PL-B-HALL"                   ) \
    X(MUS_PL_B_CASTLE                 , "MUS-PL-B-CASTLE"                 ) \
    X(MUS_PL_B_FACTORY                , "MUS-PL-B-FACTORY"                ) \
    X(MUS_PL_GLOBAL_TERMINAL          , "MUS-PL-GLOBAL-TERMINAL"          ) \
    X(MUS_PL_LILYCOVE_BOSSA_NOVA      , "MUS-PL-LILYCOVE-BOSSA-NOVA"      ) \
    X(MUS_PL_LOOKER                   , "MUS-PL-LOOKER"                   ) \
    X(MUS_PL_VS_GIRATINA              , "MUS-PL-VS-GIRATINA"              ) \
    X(MUS_PL_VS_FRONTIER_BRAIN        , "MUS-PL-VS-FRONTIER-BRAIN"        ) \
    X(MUS_PL_VICTORY_FRONTIER_BRAIN   , "MUS-PL-VICTORY-FRONTIER-BRAIN"   ) \
    X(MUS_PL_VS_REGI                  , "MUS-PL-VS-REGI"                  ) \
    X(MUS_PL_CONTEST_COOL             , "MUS-PL-CONTEST-COOL"             ) \
    X(MUS_PL_CONTEST_SMART            , "MUS-PL-CONTEST-SMART"            ) \
    X(MUS_PL_CONTEST_CUTE             , "MUS-PL-CONTEST-CUTE"             ) \
    X(MUS_PL_CONTEST_TOUGH            , "MUS-PL-CONTEST-TOUGH"            ) \
    X(MUS_PL_CONTEST_BEAUTY           , "MUS-PL-CONTEST-BEAUTY"           ) \
    X(MUS_PL_SPIN_TRADE               , "MUS-PL-SPIN-TRADE"               ) \
    X(MUS_PL_WIFI_MINIGAMES           , "MUS-PL-WIFI-MINIGAMES"           ) \
    X(MUS_PL_WIFI_PLAZA               , "MUS-PL-WIFI-PLAZA"               ) \
    X(MUS_PL_WIFI_PARADE              , "MUS-PL-WIFI-PARADE"              ) \
    X(MUS_PL_GIRATINA_APPEARS_1       , "MUS-PL-GIRATINA-APPEARS-1"       ) \
    X(MUS_PL_GIRATINA_APPEARS_2       , "MUS-PL-GIRATINA-APPEARS-2"       ) \
    X(MUS_PL_MYSTERY_GIFT             , "MUS-PL-MYSTERY-GIFT"             ) \
    X(MUS_PL_TWINLEAF_MUSIC_BOX       , "MUS-PL-TWINLEAF-MUSIC-BOX"       ) \
    X(MUS_PL_OBTAIN_ARCADE_POINTS     , "MUS-PL-OBTAIN-ARCADE-POINTS"     ) \
    X(MUS_PL_OBTAIN_CASTLE_POINTS     , "MUS-PL-OBTAIN-CASTLE-POINTS"     ) \
    X(MUS_PL_OBTAIN_B_POINTS          , "MUS-PL-OBTAIN-B-POINTS"          ) \
    X(MUS_PL_WIN_MINIGAME             , "MUS-PL-WIN-MINIGAME"             ) \
    X(MUS_HG_INTRO                    , "MUS-HG-INTRO"                    ) \
    X(MUS_HG_TITLE                    , "MUS-HG-TITLE"                    ) \
    X(MUS_HG_NEW_GAME                 , "MUS-HG-NEW-GAME"                 ) \
    X(MUS_HG_EVOLUTION                , "MUS-HG-EVOLUTION"                ) \
    X(MUS_HG_EVOLUTION_NO_INTRO       , "MUS-HG-EVOLUTION-NO-INTRO"       ) \
    X(MUS_HG_CYCLING                  , "MUS-HG-CYCLING"                  ) \
    X(MUS_HG_SURF                     , "MUS-HG-SURF"                     ) \
    X(MUS_HG_HALL_OF_FAME             , "MUS-HG-HALL-OF-FAME"             ) \
    X(MUS_HG_CREDITS                  , "MUS-HG-CREDITS"                  ) \
    X(MUS_HG_END                      , "MUS-HG-END"                      ) \
    X(MUS_HG_NEW_BARK                 , "MUS-HG-NEW-BARK"                 ) \
    X(MUS_HG_CHERRYGROVE              , "MUS-HG-CHERRYGROVE"              ) \
    X(MUS_HG_VIOLET                   , "MUS-HG-VIOLET"                   ) \
    X(MUS_HG_AZALEA                   , "MUS-HG-AZALEA"                   ) \
    X(MUS_HG_GOLDENROD                , "MUS-HG-GOLDENROD"                ) \
    X(MUS_HG_ECRUTEAK                 , "MUS-HG-ECRUTEAK"                 ) \
    X(MUS_HG_CIANWOOD                 , "MUS-HG-CIANWOOD"                 ) \
    X(MUS_HG_ROUTE29                  , "MUS-HG-ROUTE29"                  ) \
    X(MUS_HG_ROUTE30                  , "MUS-HG-ROUTE30"                  ) \
    X(MUS_HG_ROUTE34                  , "MUS-HG-ROUTE34"                  ) \
    X(MUS_HG_ROUTE38                  , "MUS-HG-ROUTE38"                  ) \
    X(MUS_HG_ROUTE42                  , "MUS-HG-ROUTE42"                  ) \
    X(MUS_HG_VERMILION                , "MUS-HG-VERMILION"                ) \
    X(MUS_HG_PEWTER                   , "MUS-HG-PEWTER"                   ) \
    X(MUS_HG_CERULEAN                 , "MUS-HG-CERULEAN"                 ) \
    X(MUS_HG_LAVENDER                 , "MUS-HG-LAVENDER"                 ) \
    X(MUS_HG_CELADON                  , "MUS-HG-CELADON"                  ) \
    X(MUS_HG_PALLET                   , "MUS-HG-PALLET"                   ) \
    X(MUS_HG_CINNABAR                 , "MUS-HG-CINNABAR"                 ) \
    X(MUS_HG_ROUTE1                   , "MUS-HG-ROUTE1"                   ) \
    X(MUS_HG_ROUTE3                   , "MUS-HG-ROUTE3"                   ) \
    X(MUS_HG_ROUTE11                  , "MUS-HG-ROUTE11"                  ) \
    X(MUS_HG_ROUTE24                  , "MUS-HG-ROUTE24"                  ) \
    X(MUS_HG_ROUTE26                  , "MUS-HG-ROUTE26"                  ) \
    X(MUS_HG_POKE_CENTER              , "MUS-HG-POKE-CENTER"              ) \
    X(MUS_HG_POKE_MART                , "MUS-HG-POKE-MART"                ) \
    X(MUS_HG_GYM                      , "MUS-HG-GYM"                      ) \
    X(MUS_HG_ELM_LAB                  , "MUS-HG-ELM-LAB"                  ) \
    X(MUS_HG_OAK                      , "MUS-HG-OAK"                      ) \
    X(MUS_HG_DANCE_THEATER            , "MUS-HG-DANCE-THEATER"            ) \
    X(MUS_HG_GAME_CORNER              , "MUS-HG-GAME-CORNER"              ) \
    X(MUS_HG_B_TOWER                  , "MUS-HG-B-TOWER"                  ) \
    X(MUS_HG_B_TOWER_RECEPTION        , "MUS-HG-B-TOWER-RECEPTION"        ) \
    X(MUS_HG_SPROUT_TOWER             , "MUS-HG-SPROUT-TOWER"             ) \
    X(MUS_HG_UNION_CAVE               , "MUS-HG-UNION-CAVE"               ) \
    X(MUS_HG_RUINS_OF_ALPH            , "MUS-HG-RUINS-OF-ALPH"            ) \
    X(MUS_HG_NATIONAL_PARK            , "MUS-HG-NATIONAL-PARK"            ) \
    X(MUS_HG_BURNED_TOWER             , "MUS-HG-BURNED-TOWER"             ) \
    X(MUS_HG_BELL_TOWER               , "MUS-HG-BELL-TOWER"               ) \
    X(MUS_HG_LIGHTHOUSE               , "MUS-HG-LIGHTHOUSE"               ) \
    X(MUS_HG_TEAM_ROCKET_HQ           , "MUS-HG-TEAM-ROCKET-HQ"           ) \
    X(MUS_HG_ICE_PATH                 , "MUS-HG-ICE-PATH"                 ) \
    X(MUS_HG_DRAGONS_DEN              , "MUS-HG-DRAGONS-DEN"              ) \
    X(MUS_HG_ROCK_TUNNEL              , "MUS-HG-ROCK-TUNNEL"              ) \
    X(MUS_HG_VIRIDIAN_FOREST          , "MUS-HG-VIRIDIAN-FOREST"          ) \
    X(MUS_HG_VICTORY_ROAD             , "MUS-HG-VICTORY-ROAD"             ) \
    X(MUS_HG_POKEMON_LEAGUE           , "MUS-HG-POKEMON-LEAGUE"           ) \
    X(MUS_HG_FOLLOW_ME_1              , "MUS-HG-FOLLOW-ME-1"              ) \
    X(MUS_HG_FOLLOW_ME_2              , "MUS-HG-FOLLOW-ME-2"              ) \
    X(MUS_HG_ENCOUNTER_RIVAL          , "MUS-HG-ENCOUNTER-RIVAL"          ) \
    X(MUS_HG_RIVAL_EXIT               , "MUS-HG-RIVAL-EXIT"               ) \
    X(MUS_HG_BUG_CONTEST_PREP         , "MUS-HG-BUG-CONTEST-PREP"         ) \
    X(MUS_HG_BUG_CATCHING_CONTEST     , "MUS-HG-BUG-CATCHING-CONTEST"     ) \
    X(MUS_HG_RADIO_ROCKET             , "MUS-HG-RADIO-ROCKET"             ) \
    X(MUS_HG_ROCKET_TAKEOVER          , "MUS-HG-ROCKET-TAKEOVER"          ) \
    X(MUS_HG_MAGNET_TRAIN             , "MUS-HG-MAGNET-TRAIN"             ) \
    X(MUS_HG_SS_AQUA                  , "MUS-HG-SS-AQUA"                  ) \
    X(MUS_HG_MT_MOON_SQUARE           , "MUS-HG-MT-MOON-SQUARE"           ) \
    X(MUS_HG_RADIO_JINGLE             , "MUS-HG-RADIO-JINGLE"             ) \
    X(MUS_HG_RADIO_LULLABY            , "MUS-HG-RADIO-LULLABY"            ) \
    X(MUS_HG_RADIO_MARCH              , "MUS-HG-RADIO-MARCH"              ) \
    X(MUS_HG_RADIO_UNOWN              , "MUS-HG-RADIO-UNOWN"              ) \
    X(MUS_HG_RADIO_POKE_FLUTE         , "MUS-HG-RADIO-POKE-FLUTE"         ) \
    X(MUS_HG_RADIO_OAK                , "MUS-HG-RADIO-OAK"                ) \
    X(MUS_HG_RADIO_BUENA              , "MUS-HG-RADIO-BUENA"              ) \
    X(MUS_HG_EUSINE                   , "MUS-HG-EUSINE"                   ) \
    X(MUS_HG_CLAIR                    , "MUS-HG-CLAIR"                    ) \
    X(MUS_HG_ENCOUNTER_GIRL_1         , "MUS-HG-ENCOUNTER-GIRL-1"         ) \
    X(MUS_HG_ENCOUNTER_BOY_1          , "MUS-HG-ENCOUNTER-BOY-1"          ) \
    X(MUS_HG_ENCOUNTER_SUSPICIOUS_1   , "MUS-HG-ENCOUNTER-SUSPICIOUS-1"   ) \
    X(MUS_HG_ENCOUNTER_SAGE           , "MUS-HG-ENCOUNTER-SAGE"           ) \
    X(MUS_HG_ENCOUNTER_KIMONO_GIRL    , "MUS-HG-ENCOUNTER-KIMONO-GIRL"    ) \
    X(MUS_HG_ENCOUNTER_ROCKET         , "MUS-HG-ENCOUNTER-ROCKET"         ) \
    X(MUS_HG_ENCOUNTER_GIRL_2         , "MUS-HG-ENCOUNTER-GIRL-2"         ) \
    X(MUS_HG_ENCOUNTER_BOY_2          , "MUS-HG-ENCOUNTER-BOY-2"          ) \
    X(MUS_HG_ENCOUNTER_SUSPICIOUS_2   , "MUS-HG-ENCOUNTER-SUSPICIOUS-2"   ) \
    X(MUS_HG_VS_WILD                  , "MUS-HG-VS-WILD"                  ) \
    X(MUS_HG_VS_TRAINER               , "MUS-HG-VS-TRAINER"               ) \
    X(MUS_HG_VS_GYM_LEADER            , "MUS-HG-VS-GYM-LEADER"            ) \
    X(MUS_HG_VS_RIVAL                 , "MUS-HG-VS-RIVAL"                 ) \
    X(MUS_HG_VS_ROCKET                , "MUS-HG-VS-ROCKET"                ) \
    X(MUS_HG_VS_SUICUNE               , "MUS-HG-VS-SUICUNE"               ) \
    X(MUS_HG_VS_ENTEI                 , "MUS-HG-VS-ENTEI"                 ) \
    X(MUS_HG_VS_RAIKOU                , "MUS-HG-VS-RAIKOU"                ) \
    X(MUS_HG_VS_CHAMPION              , "MUS-HG-VS-CHAMPION"              ) \
    X(MUS_HG_VS_WILD_KANTO            , "MUS-HG-VS-WILD-KANTO"            ) \
    X(MUS_HG_VS_TRAINER_KANTO         , "MUS-HG-VS-TRAINER-KANTO"         ) \
    X(MUS_HG_VS_GYM_LEADER_KANTO      , "MUS-HG-VS-GYM-LEADER-KANTO"      ) \
    X(MUS_HG_VICTORY_TRAINER          , "MUS-HG-VICTORY-TRAINER"          ) \
    X(MUS_HG_VICTORY_WILD             , "MUS-HG-VICTORY-WILD"             ) \
    X(MUS_HG_CAUGHT                   , "MUS-HG-CAUGHT"                   ) \
    X(MUS_HG_VICTORY_GYM_LEADER       , "MUS-HG-VICTORY-GYM-LEADER"       ) \
    X(MUS_HG_VS_HO_OH                 , "MUS-HG-VS-HO-OH"                 ) \
    X(MUS_HG_VS_LUGIA                 , "MUS-HG-VS-LUGIA"                 ) \
    X(MUS_HG_POKEATHLON_LOBBY         , "MUS-HG-POKEATHLON-LOBBY"         ) \
    X(MUS_HG_POKEATHLON_START         , "MUS-HG-POKEATHLON-START"         ) \
    X(MUS_HG_POKEATHLON_BEFORE        , "MUS-HG-POKEATHLON-BEFORE"        ) \
    X(MUS_HG_POKEATHLON_EVENT         , "MUS-HG-POKEATHLON-EVENT"         ) \
    X(MUS_HG_POKEATHLON_FINALS        , "MUS-HG-POKEATHLON-FINALS"        ) \
    X(MUS_HG_POKEATHLON_RESULTS       , "MUS-HG-POKEATHLON-RESULTS"       ) \
    X(MUS_HG_POKEATHLON_END           , "MUS-HG-POKEATHLON-END"           ) \
    X(MUS_HG_POKEATHLON_WINNER        , "MUS-HG-POKEATHLON-WINNER"        ) \
    X(MUS_HG_B_FACTORY                , "MUS-HG-B-FACTORY"                ) \
    X(MUS_HG_B_HALL                   , "MUS-HG-B-HALL"                   ) \
    X(MUS_HG_B_ARCADE                 , "MUS-HG-B-ARCADE"                 ) \
    X(MUS_HG_B_CASTLE                 , "MUS-HG-B-CASTLE"                 ) \
    X(MUS_HG_VS_FRONTIER_BRAIN        , "MUS-HG-VS-FRONTIER-BRAIN"        ) \
    X(MUS_HG_VICTORY_FRONTIER_BRAIN   , "MUS-HG-VICTORY-FRONTIER-BRAIN"   ) \
    X(MUS_HG_WFC                      , "MUS-HG-WFC"                      ) \
    X(MUS_HG_MYSTERY_GIFT             , "MUS-HG-MYSTERY-GIFT"             ) \
    X(MUS_HG_WIFI_PLAZA               , "MUS-HG-WIFI-PLAZA"               ) \
    X(MUS_HG_WIFI_MINIGAMES           , "MUS-HG-WIFI-MINIGAMES"           ) \
    X(MUS_HG_WIFI_PARADE              , "MUS-HG-WIFI-PARADE"              ) \
    X(MUS_HG_GLOBAL_TERMINAL          , "MUS-HG-GLOBAL-TERMINAL"          ) \
    X(MUS_HG_SPIN_TRADE               , "MUS-HG-SPIN-TRADE"               ) \
    X(MUS_HG_GTS                      , "MUS-HG-GTS"                      ) \
    X(MUS_HG_ROUTE47                  , "MUS-HG-ROUTE47"                  ) \
    X(MUS_HG_SAFARI_ZONE_GATE         , "MUS-HG-SAFARI-ZONE-GATE"         ) \
    X(MUS_HG_SAFARI_ZONE              , "MUS-HG-SAFARI-ZONE"              ) \
    X(MUS_HG_ETHAN                    , "MUS-HG-ETHAN"                    ) \
    X(MUS_HG_LYRA                     , "MUS-HG-LYRA"                     ) \
    X(MUS_HG_GAME_CORNER_WIN          , "MUS-HG-GAME-CORNER-WIN"          ) \
    X(MUS_HG_KIMONO_GIRL_DANCE        , "MUS-HG-KIMONO-GIRL-DANCE"        ) \
    X(MUS_HG_KIMONO_GIRL              , "MUS-HG-KIMONO-GIRL"              ) \
    X(MUS_HG_HO_OH_APPEARS            , "MUS-HG-HO-OH-APPEARS"            ) \
    X(MUS_HG_LUGIA_APPEARS            , "MUS-HG-LUGIA-APPEARS"            ) \
    X(MUS_HG_SPIKY_EARED_PICHU        , "MUS-HG-SPIKY-EARED-PICHU"        ) \
    X(MUS_HG_SINJOU_RUINS             , "MUS-HG-SINJOU-RUINS"             ) \
    X(MUS_HG_RADIO_ROUTE101           , "MUS-HG-RADIO-ROUTE101"           ) \
    X(MUS_HG_RADIO_ROUTE201           , "MUS-HG-RADIO-ROUTE201"           ) \
    X(MUS_HG_RADIO_TRAINER            , "MUS-HG-RADIO-TRAINER"            ) \
    X(MUS_HG_RADIO_VARIETY            , "MUS-HG-RADIO-VARIETY"            ) \
    X(MUS_HG_VS_KYOGRE_GROUDON        , "MUS-HG-VS-KYOGRE-GROUDON"        ) \
    X(MUS_HG_POKEWALKER               , "MUS-HG-POKEWALKER"               ) \
    X(MUS_HG_VS_ARCEUS                , "MUS-HG-VS-ARCEUS"                ) \
    X(MUS_HG_HEAL                     , "MUS-HG-HEAL"                     ) \
    X(MUS_HG_LEVEL_UP                 , "MUS-HG-LEVEL-UP"                 ) \
    X(MUS_HG_OBTAIN_ITEM              , "MUS-HG-OBTAIN-ITEM"              ) \
    X(MUS_HG_OBTAIN_KEY_ITEM          , "MUS-HG-OBTAIN-KEY-ITEM"          ) \
    X(MUS_HG_EVOLVED                  , "MUS-HG-EVOLVED"                  ) \
    X(MUS_HG_OBTAIN_BADGE             , "MUS-HG-OBTAIN-BADGE"             ) \
    X(MUS_HG_OBTAIN_TMHM              , "MUS-HG-OBTAIN-TMHM"              ) \
    X(MUS_HG_OBTAIN_ACCESSORY         , "MUS-HG-OBTAIN-ACCESSORY"         ) \
    X(MUS_HG_MOVE_DELETED             , "MUS-HG-MOVE-DELETED"             ) \
    X(MUS_HG_OBTAIN_BERRY             , "MUS-HG-OBTAIN-BERRY"             ) \
    X(MUS_HG_DEX_RATING_1             , "MUS-HG-DEX-RATING-1"             ) \
    X(MUS_HG_DEX_RATING_2             , "MUS-HG-DEX-RATING-2"             ) \
    X(MUS_HG_DEX_RATING_3             , "MUS-HG-DEX-RATING-3"             ) \
    X(MUS_HG_DEX_RATING_4             , "MUS-HG-DEX-RATING-4"             ) \
    X(MUS_HG_DEX_RATING_5             , "MUS-HG-DEX-RATING-5"             ) \
    X(MUS_HG_DEX_RATING_6             , "MUS-HG-DEX-RATING-6"             ) \
    X(MUS_HG_OBTAIN_EGG               , "MUS-HG-OBTAIN-EGG"               ) \
    X(MUS_HG_BUG_CONTEST_1ST_PLACE    , "MUS-HG-BUG-CONTEST-1ST-PLACE"    ) \
    X(MUS_HG_BUG_CONTEST_2ND_PLACE    , "MUS-HG-BUG-CONTEST-2ND-PLACE"    ) \
    X(MUS_HG_BUG_CONTEST_3RD_PLACE    , "MUS-HG-BUG-CONTEST-3RD-PLACE"    ) \
    X(MUS_HG_CARD_FLIP                , "MUS-HG-CARD-FLIP"                ) \
    X(MUS_HG_CARD_FLIP_GAME_OVER      , "MUS-HG-CARD-FLIP-GAME-OVER"      ) \
    X(MUS_HG_POKEGEAR_REGISTERED      , "MUS-HG-POKEGEAR-REGISTERED"      ) \
    X(MUS_HG_LETS_GO_TOGETHER         , "MUS-HG-LETS-GO-TOGETHER"         ) \
    X(MUS_HG_POKEATHLON_READY         , "MUS-HG-POKEATHLON-READY"         ) \
    X(MUS_HG_POKEATHLON_1ST_PLACE     , "MUS-HG-POKEATHLON-1ST-PLACE"     ) \
    X(MUS_HG_RECEIVE_POKEMON          , "MUS-HG-RECEIVE-POKEMON"          ) \
    X(MUS_HG_OBTAIN_ARCADE_POINTS     , "MUS-HG-OBTAIN-ARCADE-POINTS"     ) \
    X(MUS_HG_OBTAIN_CASTLE_POINTS     , "MUS-HG-OBTAIN-CASTLE-POINTS"     ) \
    X(MUS_HG_OBTAIN_B_POINTS          , "MUS-HG-OBTAIN-B-POINTS"          ) \
    X(MUS_HG_WIN_MINIGAME             , "MUS-HG-WIN-MINIGAME"             ) \

#define SOUND_LIST_SE \
    X(SE_USE_ITEM              , "SE-USE-ITEM"              ) \
    X(SE_PC_LOGIN              , "SE-PC-LOGIN"              ) \
    X(SE_PC_OFF                , "SE-PC-OFF"                ) \
    X(SE_PC_ON                 , "SE-PC-ON"                 ) \
    X(SE_SELECT                , "SE-SELECT"                ) \
    X(SE_WIN_OPEN              , "SE-WIN-OPEN"              ) \
    X(SE_WALL_HIT              , "SE-WALL-HIT"              ) \
    X(SE_DOOR                  , "SE-DOOR"                  ) \
    X(SE_EXIT                  , "SE-EXIT"                  ) \
    X(SE_LEDGE                 , "SE-LEDGE"                 ) \
    X(SE_BIKE_BELL             , "SE-BIKE-BELL"             ) \
    X(SE_NOT_EFFECTIVE         , "SE-NOT-EFFECTIVE"         ) \
    X(SE_EFFECTIVE             , "SE-EFFECTIVE"             ) \
    X(SE_SUPER_EFFECTIVE       , "SE-SUPER-EFFECTIVE"       ) \
    X(SE_BALL_OPEN             , "SE-BALL-OPEN"             ) \
    X(SE_FAINT                 , "SE-FAINT"                 ) \
    X(SE_FLEE                  , "SE-FLEE"                  ) \
    X(SE_SLIDING_DOOR          , "SE-SLIDING-DOOR"          ) \
    X(SE_SHIP                  , "SE-SHIP"                  ) \
    X(SE_BANG                  , "SE-BANG"                  ) \
    X(SE_PIN                   , "SE-PIN"                   ) \
    X(SE_BOO                   , "SE-BOO"                   ) \
    X(SE_BALL                  , "SE-BALL"                  ) \
    X(SE_CONTEST_PLACE         , "SE-CONTEST-PLACE"         ) \
    X(SE_A                     , "SE-A"                     ) \
    X(SE_I                     , "SE-I"                     ) \
    X(SE_U                     , "SE-U"                     ) \
    X(SE_E                     , "SE-E"                     ) \
    X(SE_O                     , "SE-O"                     ) \
    X(SE_N                     , "SE-N"                     ) \
    X(SE_SUCCESS               , "SE-SUCCESS"               ) \
    X(SE_FAILURE               , "SE-FAILURE"               ) \
    X(SE_EXP                   , "SE-EXP"                   ) \
    X(SE_BIKE_HOP              , "SE-BIKE-HOP"              ) \
    X(SE_SWITCH                , "SE-SWITCH"                ) \
    X(SE_CLICK                 , "SE-CLICK"                 ) \
    X(SE_FU_ZAKU               , "SE-FU-ZAKU"               ) \
    X(SE_CONTEST_CONDITION_LOSE, "SE-CONTEST-CONDITION-LOSE") \
    X(SE_LAVARIDGE_FALL_WARP   , "SE-LAVARIDGE-FALL-WARP"   ) \
    X(SE_ICE_STAIRS            , "SE-ICE-STAIRS"            ) \
    X(SE_ICE_BREAK             , "SE-ICE-BREAK"             ) \
    X(SE_ICE_CRACK             , "SE-ICE-CRACK"             ) \
    X(SE_FALL                  , "SE-FALL"                  ) \
    X(SE_UNLOCK                , "SE-UNLOCK"                ) \
    X(SE_WARP_IN               , "SE-WARP-IN"               ) \
    X(SE_WARP_OUT              , "SE-WARP-OUT"              ) \
    X(SE_REPEL                 , "SE-REPEL"                 ) \
    X(SE_ROTATING_GATE         , "SE-ROTATING-GATE"         ) \
    X(SE_TRUCK_MOVE            , "SE-TRUCK-MOVE"            ) \
    X(SE_TRUCK_STOP            , "SE-TRUCK-STOP"            ) \
    X(SE_TRUCK_UNLOAD          , "SE-TRUCK-UNLOAD"          ) \
    X(SE_TRUCK_DOOR            , "SE-TRUCK-DOOR"            ) \
    X(SE_BERRY_BLENDER         , "SE-BERRY-BLENDER"         ) \
    X(SE_CARD                  , "SE-CARD"                  ) \
    X(SE_SAVE                  , "SE-SAVE"                  ) \
    X(SE_BALL_BOUNCE_1         , "SE-BALL-BOUNCE-1"         ) \
    X(SE_BALL_BOUNCE_2         , "SE-BALL-BOUNCE-2"         ) \
    X(SE_BALL_BOUNCE_3         , "SE-BALL-BOUNCE-3"         ) \
    X(SE_BALL_BOUNCE_4         , "SE-BALL-BOUNCE-4"         ) \
    X(SE_BALL_TRADE            , "SE-BALL-TRADE"            ) \
    X(SE_BALL_THROW            , "SE-BALL-THROW"            ) \
    X(SE_NOTE_C                , "SE-NOTE-C"                ) \
    X(SE_NOTE_D                , "SE-NOTE-D"                ) \
    X(SE_NOTE_E                , "SE-NOTE-E"                ) \
    X(SE_NOTE_F                , "SE-NOTE-F"                ) \
    X(SE_NOTE_G                , "SE-NOTE-G"                ) \
    X(SE_NOTE_A                , "SE-NOTE-A"                ) \
    X(SE_NOTE_B                , "SE-NOTE-B"                ) \
    X(SE_NOTE_C_HIGH           , "SE-NOTE-C-HIGH"           ) \
    X(SE_PUDDLE                , "SE-PUDDLE"                ) \
    X(SE_BRIDGE_WALK           , "SE-BRIDGE-WALK"           ) \
    X(SE_ITEMFINDER            , "SE-ITEMFINDER"            ) \
    X(SE_DING_DONG             , "SE-DING-DONG"             ) \
    X(SE_BALLOON_RED           , "SE-BALLOON-RED"           ) \
    X(SE_BALLOON_BLUE          , "SE-BALLOON-BLUE"          ) \
    X(SE_BALLOON_YELLOW        , "SE-BALLOON-YELLOW"        ) \
    X(SE_BREAKABLE_DOOR        , "SE-BREAKABLE-DOOR"        ) \
    X(SE_MUD_BALL              , "SE-MUD-BALL"              ) \
    X(SE_FIELD_POISON          , "SE-FIELD-POISON"          ) \
    X(SE_ESCALATOR             , "SE-ESCALATOR"             ) \
    X(SE_THUNDERSTORM          , "SE-THUNDERSTORM"          ) \
    X(SE_THUNDERSTORM_STOP     , "SE-THUNDERSTORM-STOP"     ) \
    X(SE_DOWNPOUR              , "SE-DOWNPOUR"              ) \
    X(SE_DOWNPOUR_STOP         , "SE-DOWNPOUR-STOP"         ) \
    X(SE_RAIN                  , "SE-RAIN"                  ) \
    X(SE_RAIN_STOP             , "SE-RAIN-STOP"             ) \
    X(SE_THUNDER               , "SE-THUNDER"               ) \
    X(SE_THUNDER2              , "SE-THUNDER2"              ) \
    X(SE_ELEVATOR              , "SE-ELEVATOR"              ) \
    X(SE_LOW_HEALTH            , "SE-LOW-HEALTH"            ) \
    X(SE_EXP_MAX               , "SE-EXP-MAX"               ) \
    X(SE_ROULETTE_BALL         , "SE-ROULETTE-BALL"         ) \
    X(SE_ROULETTE_BALL2        , "SE-ROULETTE-BALL2"        ) \
    X(SE_TAILLOW_WING_FLAP     , "SE-TAILLOW-WING-FLAP"     ) \
    X(SE_SHOP                  , "SE-SHOP"                  ) \
    X(SE_CONTEST_HEART         , "SE-CONTEST-HEART"         ) \
    X(SE_CONTEST_CURTAIN_RISE  , "SE-CONTEST-CURTAIN-RISE"  ) \
    X(SE_CONTEST_CURTAIN_FALL  , "SE-CONTEST-CURTAIN-FALL"  ) \
    X(SE_CONTEST_ICON_CHANGE   , "SE-CONTEST-ICON-CHANGE"   ) \
    X(SE_CONTEST_ICON_CLEAR    , "SE-CONTEST-ICON-CLEAR"    ) \
    X(SE_CONTEST_MONS_TURN     , "SE-CONTEST-MONS-TURN"     ) \
    X(SE_SHINY                 , "SE-SHINY"                 ) \
    X(SE_INTRO_BLAST           , "SE-INTRO-BLAST"           ) \
    X(SE_MUGSHOT               , "SE-MUGSHOT"               ) \
    X(SE_APPLAUSE              , "SE-APPLAUSE"              ) \
    X(SE_VEND                  , "SE-VEND"                  ) \
    X(SE_ORB                   , "SE-ORB"                   ) \
    X(SE_DEX_SCROLL            , "SE-DEX-SCROLL"            ) \
    X(SE_DEX_PAGE              , "SE-DEX-PAGE"              ) \
    X(SE_POKENAV_ON            , "SE-POKENAV-ON"            ) \
    X(SE_POKENAV_OFF           , "SE-POKENAV-OFF"           ) \
    X(SE_DEX_SEARCH            , "SE-DEX-SEARCH"            ) \
    X(SE_EGG_HATCH             , "SE-EGG-HATCH"             ) \
    X(SE_BALL_TRAY_ENTER       , "SE-BALL-TRAY-ENTER"       ) \
    X(SE_BALL_TRAY_BALL        , "SE-BALL-TRAY-BALL"        ) \
    X(SE_BALL_TRAY_EXIT        , "SE-BALL-TRAY-EXIT"        ) \
    X(SE_GLASS_FLUTE           , "SE-GLASS-FLUTE"           ) \
    X(SE_M_THUNDERBOLT         , "SE-M-THUNDERBOLT"         ) \
    X(SE_M_THUNDERBOLT2        , "SE-M-THUNDERBOLT2"        ) \
    X(SE_M_HARDEN              , "SE-M-HARDEN"              ) \
    X(SE_M_NIGHTMARE           , "SE-M-NIGHTMARE"           ) \
    X(SE_M_VITAL_THROW         , "SE-M-VITAL-THROW"         ) \
    X(SE_M_VITAL_THROW2        , "SE-M-VITAL-THROW2"        ) \
    X(SE_M_BUBBLE              , "SE-M-BUBBLE"              ) \
    X(SE_M_BUBBLE2             , "SE-M-BUBBLE2"             ) \
    X(SE_M_BUBBLE3             , "SE-M-BUBBLE3"             ) \
    X(SE_M_RAIN_DANCE          , "SE-M-RAIN-DANCE"          ) \
    X(SE_M_CUT                 , "SE-M-CUT"                 ) \
    X(SE_M_STRING_SHOT         , "SE-M-STRING-SHOT"         ) \
    X(SE_M_STRING_SHOT2        , "SE-M-STRING-SHOT2"        ) \
    X(SE_M_ROCK_THROW          , "SE-M-ROCK-THROW"          ) \
    X(SE_M_GUST                , "SE-M-GUST"                ) \
    X(SE_M_GUST2               , "SE-M-GUST2"               ) \
    X(SE_M_DOUBLE_SLAP         , "SE-M-DOUBLE-SLAP"         ) \
    X(SE_M_DOUBLE_TEAM         , "SE-M-DOUBLE-TEAM"         ) \
    X(SE_M_RAZOR_WIND          , "SE-M-RAZOR-WIND"          ) \
    X(SE_M_ICY_WIND            , "SE-M-ICY-WIND"            ) \
    X(SE_M_THUNDER_WAVE        , "SE-M-THUNDER-WAVE"        ) \
    X(SE_M_COMET_PUNCH         , "SE-M-COMET-PUNCH"         ) \
    X(SE_M_MEGA_KICK           , "SE-M-MEGA-KICK"           ) \
    X(SE_M_MEGA_KICK2          , "SE-M-MEGA-KICK2"          ) \
    X(SE_M_CRABHAMMER          , "SE-M-CRABHAMMER"          ) \
    X(SE_M_JUMP_KICK           , "SE-M-JUMP-KICK"           ) \
    X(SE_M_FLAME_WHEEL         , "SE-M-FLAME-WHEEL"         ) \
    X(SE_M_FLAME_WHEEL2        , "SE-M-FLAME-WHEEL2"        ) \
    X(SE_M_FLAMETHROWER        , "SE-M-FLAMETHROWER"        ) \
    X(SE_M_FIRE_PUNCH          , "SE-M-FIRE-PUNCH"          ) \
    X(SE_M_TOXIC               , "SE-M-TOXIC"               ) \
    X(SE_M_SACRED_FIRE         , "SE-M-SACRED-FIRE"         ) \
    X(SE_M_SACRED_FIRE2        , "SE-M-SACRED-FIRE2"        ) \
    X(SE_M_EMBER               , "SE-M-EMBER"               ) \
    X(SE_M_TAKE_DOWN           , "SE-M-TAKE-DOWN"           ) \
    X(SE_M_BLIZZARD            , "SE-M-BLIZZARD"            ) \
    X(SE_M_BLIZZARD2           , "SE-M-BLIZZARD2"           ) \
    X(SE_M_SCRATCH             , "SE-M-SCRATCH"             ) \
    X(SE_M_VICEGRIP            , "SE-M-VICEGRIP"            ) \
    X(SE_M_WING_ATTACK         , "SE-M-WING-ATTACK"         ) \
    X(SE_M_FLY                 , "SE-M-FLY"                 ) \
    X(SE_M_SAND_ATTACK         , "SE-M-SAND-ATTACK"         ) \
    X(SE_M_RAZOR_WIND2         , "SE-M-RAZOR-WIND2"         ) \
    X(SE_M_BITE                , "SE-M-BITE"                ) \
    X(SE_M_HEADBUTT            , "SE-M-HEADBUTT"            ) \
    X(SE_M_SURF                , "SE-M-SURF"                ) \
    X(SE_M_HYDRO_PUMP          , "SE-M-HYDRO-PUMP"          ) \
    X(SE_M_WHIRLPOOL           , "SE-M-WHIRLPOOL"           ) \
    X(SE_M_HORN_ATTACK         , "SE-M-HORN-ATTACK"         ) \
    X(SE_M_TAIL_WHIP           , "SE-M-TAIL-WHIP"           ) \
    X(SE_M_MIST                , "SE-M-MIST"                ) \
    X(SE_M_POISON_POWDER       , "SE-M-POISON-POWDER"       ) \
    X(SE_M_BIND                , "SE-M-BIND"                ) \
    X(SE_M_DRAGON_RAGE         , "SE-M-DRAGON-RAGE"         ) \
    X(SE_M_SING                , "SE-M-SING"                ) \
    X(SE_M_PERISH_SONG         , "SE-M-PERISH-SONG"         ) \
    X(SE_M_PAY_DAY             , "SE-M-PAY-DAY"             ) \
    X(SE_M_DIG                 , "SE-M-DIG"                 ) \
    X(SE_M_DIZZY_PUNCH         , "SE-M-DIZZY-PUNCH"         ) \
    X(SE_M_SELF_DESTRUCT       , "SE-M-SELF-DESTRUCT"       ) \
    X(SE_M_EXPLOSION           , "SE-M-EXPLOSION"           ) \
    X(SE_M_ABSORB_2            , "SE-M-ABSORB-2"            ) \
    X(SE_M_ABSORB              , "SE-M-ABSORB"              ) \
    X(SE_M_SCREECH             , "SE-M-SCREECH"             ) \
    X(SE_M_BUBBLE_BEAM         , "SE-M-BUBBLE-BEAM"         ) \
    X(SE_M_BUBBLE_BEAM2        , "SE-M-BUBBLE-BEAM2"        ) \
    X(SE_M_SUPERSONIC          , "SE-M-SUPERSONIC"          ) \
    X(SE_M_BELLY_DRUM          , "SE-M-BELLY-DRUM"          ) \
    X(SE_M_METRONOME           , "SE-M-METRONOME"           ) \
    X(SE_M_BONEMERANG          , "SE-M-BONEMERANG"          ) \
    X(SE_M_LICK                , "SE-M-LICK"                ) \
    X(SE_M_PSYBEAM             , "SE-M-PSYBEAM"             ) \
    X(SE_M_FAINT_ATTACK        , "SE-M-FAINT-ATTACK"        ) \
    X(SE_M_SWORDS_DANCE        , "SE-M-SWORDS-DANCE"        ) \
    X(SE_M_LEER                , "SE-M-LEER"                ) \
    X(SE_M_SWAGGER             , "SE-M-SWAGGER"             ) \
    X(SE_M_SWAGGER2            , "SE-M-SWAGGER2"            ) \
    X(SE_M_HEAL_BELL           , "SE-M-HEAL-BELL"           ) \
    X(SE_M_CONFUSE_RAY         , "SE-M-CONFUSE-RAY"         ) \
    X(SE_M_SNORE               , "SE-M-SNORE"               ) \
    X(SE_M_BRICK_BREAK         , "SE-M-BRICK-BREAK"         ) \
    X(SE_M_GIGA_DRAIN          , "SE-M-GIGA-DRAIN"          ) \
    X(SE_M_PSYBEAM2            , "SE-M-PSYBEAM2"            ) \
    X(SE_M_SOLAR_BEAM          , "SE-M-SOLAR-BEAM"          ) \
    X(SE_M_PETAL_DANCE         , "SE-M-PETAL-DANCE"         ) \
    X(SE_M_TELEPORT            , "SE-M-TELEPORT"            ) \
    X(SE_M_MINIMIZE            , "SE-M-MINIMIZE"            ) \
    X(SE_M_SKETCH              , "SE-M-SKETCH"              ) \
    X(SE_M_SWIFT               , "SE-M-SWIFT"               ) \
    X(SE_M_REFLECT             , "SE-M-REFLECT"             ) \
    X(SE_M_BARRIER             , "SE-M-BARRIER"             ) \
    X(SE_M_DETECT              , "SE-M-DETECT"              ) \
    X(SE_M_LOCK_ON             , "SE-M-LOCK-ON"             ) \
    X(SE_M_MOONLIGHT           , "SE-M-MOONLIGHT"           ) \
    X(SE_M_CHARM               , "SE-M-CHARM"               ) \
    X(SE_M_CHARGE              , "SE-M-CHARGE"              ) \
    X(SE_M_STRENGTH            , "SE-M-STRENGTH"            ) \
    X(SE_M_HYPER_BEAM          , "SE-M-HYPER-BEAM"          ) \
    X(SE_M_WATERFALL           , "SE-M-WATERFALL"           ) \
    X(SE_M_REVERSAL            , "SE-M-REVERSAL"            ) \
    X(SE_M_ACID_ARMOR          , "SE-M-ACID-ARMOR"          ) \
    X(SE_M_SANDSTORM           , "SE-M-SANDSTORM"           ) \
    X(SE_M_TRI_ATTACK          , "SE-M-TRI-ATTACK"          ) \
    X(SE_M_TRI_ATTACK2         , "SE-M-TRI-ATTACK2"         ) \
    X(SE_M_ENCORE              , "SE-M-ENCORE"              ) \
    X(SE_M_ENCORE2             , "SE-M-ENCORE2"             ) \
    X(SE_M_BATON_PASS          , "SE-M-BATON-PASS"          ) \
    X(SE_M_MILK_DRINK          , "SE-M-MILK-DRINK"          ) \
    X(SE_M_ATTRACT             , "SE-M-ATTRACT"             ) \
    X(SE_M_ATTRACT2            , "SE-M-ATTRACT2"            ) \
    X(SE_M_MORNING_SUN         , "SE-M-MORNING-SUN"         ) \
    X(SE_M_FLATTER             , "SE-M-FLATTER"             ) \
    X(SE_M_SAND_TOMB           , "SE-M-SAND-TOMB"           ) \
    X(SE_M_GRASSWHISTLE        , "SE-M-GRASSWHISTLE"        ) \
    X(SE_M_SPIT_UP             , "SE-M-SPIT-UP"             ) \
    X(SE_M_DIVE                , "SE-M-DIVE"                ) \
    X(SE_M_EARTHQUAKE          , "SE-M-EARTHQUAKE"          ) \
    X(SE_M_TWISTER             , "SE-M-TWISTER"             ) \
    X(SE_M_SWEET_SCENT         , "SE-M-SWEET-SCENT"         ) \
    X(SE_M_YAWN                , "SE-M-YAWN"                ) \
    X(SE_M_SKY_UPPERCUT        , "SE-M-SKY-UPPERCUT"        ) \
    X(SE_M_STAT_INCREASE       , "SE-M-STAT-INCREASE"       ) \
    X(SE_M_HEAT_WAVE           , "SE-M-HEAT-WAVE"           ) \
    X(SE_M_UPROAR              , "SE-M-UPROAR"              ) \
    X(SE_M_HAIL                , "SE-M-HAIL"                ) \
    X(SE_M_COSMIC_POWER        , "SE-M-COSMIC-POWER"        ) \
    X(SE_M_TEETER_DANCE        , "SE-M-TEETER-DANCE"        ) \
    X(SE_M_STAT_DECREASE       , "SE-M-STAT-DECREASE"       ) \
    X(SE_M_HAZE                , "SE-M-HAZE"                ) \
    X(SE_M_HYPER_BEAM2         , "SE-M-HYPER-BEAM2"         ) \
    X(SE_RG_DOOR               , "SE-RG-DOOR"               ) \
    X(SE_RG_CARD_FLIP          , "SE-RG-CARD-FLIP"          ) \
    X(SE_RG_CARD_FLIPPING      , "SE-RG-CARD-FLIPPING"      ) \
    X(SE_RG_CARD_OPEN          , "SE-RG-CARD-OPEN"          ) \
    X(SE_RG_BAG_CURSOR         , "SE-RG-BAG-CURSOR"         ) \
    X(SE_RG_BAG_POCKET         , "SE-RG-BAG-POCKET"         ) \
    X(SE_RG_BALL_CLICK         , "SE-RG-BALL-CLICK"         ) \
    X(SE_RG_SHOP               , "SE-RG-SHOP"               ) \
    X(SE_RG_SS_ANNE_HORN       , "SE-RG-SS-ANNE-HORN"       ) \
    X(SE_RG_HELP_OPEN          , "SE-RG-HELP-OPEN"          ) \
    X(SE_RG_HELP_CLOSE         , "SE-RG-HELP-CLOSE"         ) \
    X(SE_RG_HELP_ERROR         , "SE-RG-HELP-ERROR"         ) \
    X(SE_RG_DEOXYS_MOVE        , "SE-RG-DEOXYS-MOVE"        ) \
    X(SE_RG_POKE_JUMP_SUCCESS  , "SE-RG-POKE-JUMP-SUCCESS"  ) \
    X(SE_RG_POKE_JUMP_FAILURE  , "SE-RG-POKE-JUMP-FAILURE"  ) \
    X(SE_PHONE_CALL            , "SE-PHONE-CALL"            ) \
    X(SE_PHONE_CLICK           , "SE-PHONE-CLICK"           ) \
    X(SE_ARENA_TIMEUP1         , "SE-ARENA-TIMEUP1"         ) \
    X(SE_ARENA_TIMEUP2         , "SE-ARENA-TIMEUP2"         ) \
    X(SE_PIKE_CURTAIN_CLOSE    , "SE-PIKE-CURTAIN-CLOSE"    ) \
    X(SE_PIKE_CURTAIN_OPEN     , "SE-PIKE-CURTAIN-OPEN"     ) \
    X(SE_SUDOWOODO_SHAKE       , "SE-SUDOWOODO-SHAKE"       ) \
    X(MUS_DUMMY                , "MUS-DUMMY"                ) \
    X(PH_TRAP_BLEND            , "PH-TRAP-BLEND"            ) \
    X(PH_TRAP_HELD             , "PH-TRAP-HELD"             ) \
    X(PH_TRAP_SOLO             , "PH-TRAP-SOLO"             ) \
    X(PH_FACE_BLEND            , "PH-FACE-BLEND"            ) \
    X(PH_FACE_HELD             , "PH-FACE-HELD"             ) \
    X(PH_FACE_SOLO             , "PH-FACE-SOLO"             ) \
    X(PH_CLOTH_BLEND           , "PH-CLOTH-BLEND"           ) \
    X(PH_CLOTH_HELD            , "PH-CLOTH-HELD"            ) \
    X(PH_CLOTH_SOLO            , "PH-CLOTH-SOLO"            ) \
    X(PH_DRESS_BLEND           , "PH-DRESS-BLEND"           ) \
    X(PH_DRESS_HELD            , "PH-DRESS-HELD"            ) \
    X(PH_DRESS_SOLO            , "PH-DRESS-SOLO"            ) \
    X(PH_FLEECE_BLEND          , "PH-FLEECE-BLEND"          ) \
    X(PH_FLEECE_HELD           , "PH-FLEECE-HELD"           ) \
    X(PH_FLEECE_SOLO           , "PH-FLEECE-SOLO"           ) \
    X(PH_KIT_BLEND             , "PH-KIT-BLEND"             ) \
    X(PH_KIT_HELD              , "PH-KIT-HELD"              ) \
    X(PH_KIT_SOLO              , "PH-KIT-SOLO"              ) \
    X(PH_PRICE_BLEND           , "PH-PRICE-BLEND"           ) \
    X(PH_PRICE_HELD            , "PH-PRICE-HELD"            ) \
    X(PH_PRICE_SOLO            , "PH-PRICE-SOLO"            ) \
    X(PH_LOT_BLEND             , "PH-LOT-BLEND"             ) \
    X(PH_LOT_HELD              , "PH-LOT-HELD"              ) \
    X(PH_LOT_SOLO              , "PH-LOT-SOLO"              ) \
    X(PH_GOAT_BLEND            , "PH-GOAT-BLEND"            ) \
    X(PH_GOAT_HELD             , "PH-GOAT-HELD"             ) \
    X(PH_GOAT_SOLO             , "PH-GOAT-SOLO"             ) \
    X(PH_THOUGHT_BLEND         , "PH-THOUGHT-BLEND"         ) \
    X(PH_THOUGHT_HELD          , "PH-THOUGHT-HELD"          ) \
    X(PH_THOUGHT_SOLO          , "PH-THOUGHT-SOLO"          ) \
    X(PH_CHOICE_BLEND          , "PH-CHOICE-BLEND"          ) \
    X(PH_CHOICE_HELD           , "PH-CHOICE-HELD"           ) \
    X(PH_CHOICE_SOLO           , "PH-CHOICE-SOLO"           ) \
    X(PH_MOUTH_BLEND           , "PH-MOUTH-BLEND"           ) \
    X(PH_MOUTH_HELD            , "PH-MOUTH-HELD"            ) \
    X(PH_MOUTH_SOLO            , "PH-MOUTH-SOLO"            ) \
    X(PH_FOOT_BLEND            , "PH-FOOT-BLEND"            ) \
    X(PH_FOOT_HELD             , "PH-FOOT-HELD"             ) \
    X(PH_FOOT_SOLO             , "PH-FOOT-SOLO"             ) \
    X(PH_GOOSE_BLEND           , "PH-GOOSE-BLEND"           ) \
    X(PH_GOOSE_HELD            , "PH-GOOSE-HELD"            ) \
    X(PH_GOOSE_SOLO            , "PH-GOOSE-SOLO"            ) \
    X(PH_STRUT_BLEND           , "PH-STRUT-BLEND"           ) \
    X(PH_STRUT_HELD            , "PH-STRUT-HELD"            ) \
    X(PH_STRUT_SOLO            , "PH-STRUT-SOLO"            ) \
    X(PH_CURE_BLEND            , "PH-CURE-BLEND"            ) \
    X(PH_CURE_HELD             , "PH-CURE-HELD"             ) \
    X(PH_CURE_SOLO             , "PH-CURE-SOLO"             ) \
    X(PH_NURSE_BLEND           , "PH-NURSE-BLEND"           ) \
    X(PH_NURSE_HELD            , "PH-NURSE-HELD"            ) \
    X(PH_NURSE_SOLO            , "PH-NURSE-SOLO"            ) \

// Create BGM list
#define X(songId, name) static const u8 sBGMName_##songId[] = _(name);
SOUND_LIST_BGM
#undef X

#define X(songId, name) sBGMName_##songId,
static const u8 *const gBGMNames[] =
=======
    gTasks[taskId].tSubWindowId = windowId;
    gTasks[taskId].tInput = START_MUS;
    gTasks[taskId].tDigit = 0;
    gTasks[taskId].tCurrentSong = gTasks[taskId].tInput;
}

static void DebugAction_Sound_MUS_SelectId(u8 taskId)
{
    if (JOY_NEW(DPAD_ANY))
    {
        const u8 *bgmName;
        Debug_HandleInput_Numeric(taskId, START_MUS, END_MUS, DEBUG_NUMBER_DIGITS_ITEMS);

        StringCopy(gStringVar2, gText_DigitIndicator[gTasks[taskId].tDigit]);
        bgmName = sBGMNames[gTasks[taskId].tInput - START_MUS];
        if (bgmName == NULL)
            bgmName = sDebugText_Dashes;
        StringCopyPadded(gStringVar1, bgmName, CHAR_SPACE, 35);
        ConvertIntToDecimalStringN(gStringVar3, gTasks[taskId].tInput, STR_CONV_MODE_LEADING_ZEROS, DEBUG_NUMBER_DIGITS_ITEMS);
        StringExpandPlaceholders(gStringVar4, sDebugText_Sound_Music_ID);
        AddTextPrinterParameterized(gTasks[taskId].tSubWindowId, DEBUG_MENU_FONT, gStringVar4, 0, 0, 0, NULL);
    }

    if (JOY_NEW(A_BUTTON))
    {
        m4aSongNumStop(gTasks[taskId].tCurrentSong);
        gTasks[taskId].tCurrentSong = gTasks[taskId].tInput;
        m4aSongNumStart(gTasks[taskId].tInput);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        // m4aSongNumStop(gTasks[taskId].tCurrentSong);   //Uncomment if music should stop after leaving menu
        DebugAction_DestroyExtraWindow(taskId);
    }
    else if (JOY_NEW(START_BUTTON))
    {
        m4aSongNumStop(gTasks[taskId].tCurrentSong);
    }
}

static const u32 gDebugFollowerNPCGraphics[] =
{
    OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL,
    OBJ_EVENT_GFX_RIVAL_MAY_NORMAL,
    OBJ_EVENT_GFX_STEVEN,
    OBJ_EVENT_GFX_WALLY,
    OBJ_EVENT_GFX_RED,
    OBJ_EVENT_GFX_LEAF,
};

static void DebugAction_CreateFollowerNPC(u8 taskId)
{
    u32 input = ListMenu_ProcessInput(gTasks[taskId].tMenuTaskId);
    u32 gfx = gDebugFollowerNPCGraphics[input];

    Debug_DestroyMenu_Full(taskId);
    LockPlayerFieldControls();
    DestroyFollowerNPC();
    SetFollowerNPCData(FNPC_DATA_BATTLE_PARTNER, PARTNER_STEVEN);
    CreateFollowerNPC(gfx, FNPC_ALL, Debug_Follower_NPC_Event_Script);
    UnlockPlayerFieldControls();
}

static void DebugAction_DestroyFollowerNPC(u8 taskId)
{
    if (FNPC_ENABLE_NPC_FOLLOWERS)
    {
        Debug_DestroyMenu_Full(taskId);
        LockPlayerFieldControls();
        DestroyFollowerNPC();
        UnlockPlayerFieldControls();
    }
    else
    {
        Debug_DestroyMenu_Full_Script(taskId, Debug_Follower_NPC_Not_Enabled);
    }
}

#undef tCurrentSong

#undef tMenuTaskId
#undef tWindowId
#undef tSubWindowId
#undef tInput
#undef tDigit

#define SOUND_LIST_BGM              \
    X(MUS_LITTLEROOT_TEST)          \
    X(MUS_GSC_ROUTE38)              \
    X(MUS_CAUGHT)                   \
    X(MUS_VICTORY_WILD)             \
    X(MUS_VICTORY_GYM_LEADER)       \
    X(MUS_VICTORY_LEAGUE)           \
    X(MUS_C_COMM_CENTER)            \
    X(MUS_GSC_PEWTER)               \
    X(MUS_C_VS_LEGEND_BEAST)        \
    X(MUS_ROUTE101)                 \
    X(MUS_ROUTE110)                 \
    X(MUS_ROUTE120)                 \
    X(MUS_PETALBURG)                \
    X(MUS_OLDALE)                   \
    X(MUS_GYM)                      \
    X(MUS_SURF)                     \
    X(MUS_PETALBURG_WOODS)          \
    X(MUS_LEVEL_UP)                 \
    X(MUS_HEAL)                     \
    X(MUS_OBTAIN_BADGE)             \
    X(MUS_OBTAIN_ITEM)              \
    X(MUS_EVOLVED)                  \
    X(MUS_OBTAIN_TMHM)              \
    X(MUS_LILYCOVE_MUSEUM)          \
    X(MUS_ROUTE122)                 \
    X(MUS_OCEANIC_MUSEUM)           \
    X(MUS_EVOLUTION_INTRO)          \
    X(MUS_EVOLUTION)                \
    X(MUS_MOVE_DELETED)             \
    X(MUS_ENCOUNTER_GIRL)           \
    X(MUS_ENCOUNTER_MALE)           \
    X(MUS_ABANDONED_SHIP)           \
    X(MUS_FORTREE)                  \
    X(MUS_BIRCH_LAB)                \
    X(MUS_B_TOWER_RS)               \
    X(MUS_ENCOUNTER_SWIMMER)        \
    X(MUS_CAVE_OF_ORIGIN)           \
    X(MUS_OBTAIN_BERRY)             \
    X(MUS_AWAKEN_LEGEND)            \
    X(MUS_SLOTS_JACKPOT)            \
    X(MUS_SLOTS_WIN)                \
    X(MUS_TOO_BAD)                  \
    X(MUS_ROULETTE)                 \
    X(MUS_LINK_CONTEST_P1)          \
    X(MUS_LINK_CONTEST_P2)          \
    X(MUS_LINK_CONTEST_P3)          \
    X(MUS_LINK_CONTEST_P4)          \
    X(MUS_ENCOUNTER_RICH)           \
    X(MUS_VERDANTURF)               \
    X(MUS_RUSTBORO)                 \
    X(MUS_POKE_CENTER)              \
    X(MUS_ROUTE104)                 \
    X(MUS_ROUTE119)                 \
    X(MUS_CYCLING)                  \
    X(MUS_POKE_MART)                \
    X(MUS_LITTLEROOT)               \
    X(MUS_MT_CHIMNEY)               \
    X(MUS_ENCOUNTER_FEMALE)         \
    X(MUS_LILYCOVE)                 \
    X(MUS_DESERT)                   \
    X(MUS_HELP)                     \
    X(MUS_UNDERWATER)               \
    X(MUS_VICTORY_TRAINER)          \
    X(MUS_TITLE)                    \
    X(MUS_INTRO)                    \
    X(MUS_ENCOUNTER_MAY)            \
    X(MUS_ENCOUNTER_INTENSE)        \
    X(MUS_ENCOUNTER_COOL)           \
    X(MUS_ROUTE113)                 \
    X(MUS_ENCOUNTER_AQUA)           \
    X(MUS_FOLLOW_ME)                \
    X(MUS_ENCOUNTER_BRENDAN)        \
    X(MUS_EVER_GRANDE)              \
    X(MUS_ENCOUNTER_SUSPICIOUS)     \
    X(MUS_VICTORY_AQUA_MAGMA)       \
    X(MUS_CABLE_CAR)                \
    X(MUS_GAME_CORNER)              \
    X(MUS_DEWFORD)                  \
    X(MUS_SAFARI_ZONE)              \
    X(MUS_VICTORY_ROAD)             \
    X(MUS_AQUA_MAGMA_HIDEOUT)       \
    X(MUS_SAILING)                  \
    X(MUS_MT_PYRE)                  \
    X(MUS_SLATEPORT)                \
    X(MUS_MT_PYRE_EXTERIOR)         \
    X(MUS_SCHOOL)                   \
    X(MUS_HALL_OF_FAME)             \
    X(MUS_FALLARBOR)                \
    X(MUS_SEALED_CHAMBER)           \
    X(MUS_CONTEST_WINNER)           \
    X(MUS_CONTEST)                  \
    X(MUS_ENCOUNTER_MAGMA)          \
    X(MUS_INTRO_BATTLE)             \
    X(MUS_ABNORMAL_WEATHER)         \
    X(MUS_WEATHER_GROUDON)          \
    X(MUS_SOOTOPOLIS)               \
    X(MUS_CONTEST_RESULTS)          \
    X(MUS_HALL_OF_FAME_ROOM)        \
    X(MUS_TRICK_HOUSE)              \
    X(MUS_ENCOUNTER_TWINS)          \
    X(MUS_ENCOUNTER_ELITE_FOUR)     \
    X(MUS_ENCOUNTER_HIKER)          \
    X(MUS_CONTEST_LOBBY)            \
    X(MUS_ENCOUNTER_INTERVIEWER)    \
    X(MUS_ENCOUNTER_CHAMPION)       \
    X(MUS_CREDITS)                  \
    X(MUS_END)                      \
    X(MUS_B_FRONTIER)               \
    X(MUS_B_ARENA)                  \
    X(MUS_OBTAIN_B_POINTS)          \
    X(MUS_REGISTER_MATCH_CALL)      \
    X(MUS_B_PYRAMID)                \
    X(MUS_B_PYRAMID_TOP)            \
    X(MUS_B_PALACE)                 \
    X(MUS_RAYQUAZA_APPEARS)         \
    X(MUS_B_TOWER)                  \
    X(MUS_OBTAIN_SYMBOL)            \
    X(MUS_B_DOME)                   \
    X(MUS_B_PIKE)                   \
    X(MUS_B_FACTORY)                \
    X(MUS_VS_RAYQUAZA)              \
    X(MUS_VS_FRONTIER_BRAIN)        \
    X(MUS_VS_MEW)                   \
    X(MUS_B_DOME_LOBBY)             \
    X(MUS_VS_WILD)                  \
    X(MUS_VS_AQUA_MAGMA)            \
    X(MUS_VS_TRAINER)               \
    X(MUS_VS_GYM_LEADER)            \
    X(MUS_VS_CHAMPION)              \
    X(MUS_VS_REGI)                  \
    X(MUS_VS_KYOGRE_GROUDON)        \
    X(MUS_VS_RIVAL)                 \
    X(MUS_VS_ELITE_FOUR)            \
    X(MUS_VS_AQUA_MAGMA_LEADER)     \
    X(MUS_RG_FOLLOW_ME)             \
    X(MUS_RG_GAME_CORNER)           \
    X(MUS_RG_ROCKET_HIDEOUT)        \
    X(MUS_RG_GYM)                   \
    X(MUS_RG_JIGGLYPUFF)            \
    X(MUS_RG_INTRO_FIGHT)           \
    X(MUS_RG_TITLE)                 \
    X(MUS_RG_CINNABAR)              \
    X(MUS_RG_LAVENDER)              \
    X(MUS_RG_HEAL)                  \
    X(MUS_RG_CYCLING)               \
    X(MUS_RG_ENCOUNTER_ROCKET)      \
    X(MUS_RG_ENCOUNTER_GIRL)        \
    X(MUS_RG_ENCOUNTER_BOY)         \
    X(MUS_RG_HALL_OF_FAME)          \
    X(MUS_RG_VIRIDIAN_FOREST)       \
    X(MUS_RG_MT_MOON)               \
    X(MUS_RG_POKE_MANSION)          \
    X(MUS_RG_CREDITS)               \
    X(MUS_RG_ROUTE1)                \
    X(MUS_RG_ROUTE24)               \
    X(MUS_RG_ROUTE3)                \
    X(MUS_RG_ROUTE11)               \
    X(MUS_RG_VICTORY_ROAD)          \
    X(MUS_RG_VS_GYM_LEADER)         \
    X(MUS_RG_VS_TRAINER)            \
    X(MUS_RG_VS_WILD)               \
    X(MUS_RG_VS_CHAMPION)           \
    X(MUS_RG_PALLET)                \
    X(MUS_RG_OAK_LAB)               \
    X(MUS_RG_OAK)                   \
    X(MUS_RG_POKE_CENTER)           \
    X(MUS_RG_SS_ANNE)               \
    X(MUS_RG_SURF)                  \
    X(MUS_RG_POKE_TOWER)            \
    X(MUS_RG_SILPH)                 \
    X(MUS_RG_FUCHSIA)               \
    X(MUS_RG_CELADON)               \
    X(MUS_RG_VICTORY_TRAINER)       \
    X(MUS_RG_VICTORY_WILD)          \
    X(MUS_RG_VICTORY_GYM_LEADER)    \
    X(MUS_RG_VERMILLION)            \
    X(MUS_RG_PEWTER)                \
    X(MUS_RG_ENCOUNTER_RIVAL)       \
    X(MUS_RG_RIVAL_EXIT)            \
    X(MUS_RG_DEX_RATING)            \
    X(MUS_RG_OBTAIN_KEY_ITEM)       \
    X(MUS_RG_CAUGHT_INTRO)          \
    X(MUS_RG_PHOTO)                 \
    X(MUS_RG_GAME_FREAK)            \
    X(MUS_RG_CAUGHT)                \
    X(MUS_RG_NEW_GAME_INSTRUCT)     \
    X(MUS_RG_NEW_GAME_INTRO)        \
    X(MUS_RG_NEW_GAME_EXIT)         \
    X(MUS_RG_POKE_JUMP)             \
    X(MUS_RG_UNION_ROOM)            \
    X(MUS_RG_NET_CENTER)            \
    X(MUS_RG_MYSTERY_GIFT)          \
    X(MUS_RG_BERRY_PICK)            \
    X(MUS_RG_SEVII_CAVE)            \
    X(MUS_RG_TEACHY_TV_SHOW)        \
    X(MUS_RG_SEVII_ROUTE)           \
    X(MUS_RG_SEVII_DUNGEON)         \
    X(MUS_RG_SEVII_123)             \
    X(MUS_RG_SEVII_45)              \
    X(MUS_RG_SEVII_67)              \
    X(MUS_RG_POKE_FLUTE)            \
    X(MUS_RG_VS_DEOXYS)             \
    X(MUS_RG_VS_MEWTWO)             \
    X(MUS_RG_VS_LEGEND)             \
    X(MUS_RG_ENCOUNTER_GYM_LEADER)  \
    X(MUS_RG_ENCOUNTER_DEOXYS)      \
    X(MUS_RG_TRAINER_TOWER)         \
    X(MUS_RG_SLOW_PALLET)           \
    X(MUS_RG_TEACHY_TV_MENU)

#define SOUND_LIST_SE               \
    X(SE_USE_ITEM)                  \
    X(SE_PC_LOGIN)                  \
    X(SE_PC_OFF)                    \
    X(SE_PC_ON)                     \
    X(SE_SELECT)                    \
    X(SE_WIN_OPEN)                  \
    X(SE_WALL_HIT)                  \
    X(SE_DOOR)                      \
    X(SE_EXIT)                      \
    X(SE_LEDGE)                     \
    X(SE_BIKE_BELL)                 \
    X(SE_NOT_EFFECTIVE)             \
    X(SE_EFFECTIVE)                 \
    X(SE_SUPER_EFFECTIVE)           \
    X(SE_BALL_OPEN)                 \
    X(SE_FAINT)                     \
    X(SE_FLEE)                      \
    X(SE_SLIDING_DOOR)              \
    X(SE_SHIP)                      \
    X(SE_BANG)                      \
    X(SE_PIN)                       \
    X(SE_BOO)                       \
    X(SE_BALL)                      \
    X(SE_CONTEST_PLACE)             \
    X(SE_A)                         \
    X(SE_I)                         \
    X(SE_U)                         \
    X(SE_E)                         \
    X(SE_O)                         \
    X(SE_N)                         \
    X(SE_SUCCESS)                   \
    X(SE_FAILURE)                   \
    X(SE_EXP)                       \
    X(SE_BIKE_HOP)                  \
    X(SE_SWITCH)                    \
    X(SE_CLICK)                     \
    X(SE_FU_ZAKU)                   \
    X(SE_CONTEST_CONDITION_LOSE)    \
    X(SE_LAVARIDGE_FALL_WARP)       \
    X(SE_ICE_STAIRS)                \
    X(SE_ICE_BREAK)                 \
    X(SE_ICE_CRACK)                 \
    X(SE_FALL)                      \
    X(SE_UNLOCK)                    \
    X(SE_WARP_IN)                   \
    X(SE_WARP_OUT)                  \
    X(SE_REPEL)                     \
    X(SE_ROTATING_GATE)             \
    X(SE_TRUCK_MOVE)                \
    X(SE_TRUCK_STOP)                \
    X(SE_TRUCK_UNLOAD)              \
    X(SE_TRUCK_DOOR)                \
    X(SE_BERRY_BLENDER)             \
    X(SE_CARD)                      \
    X(SE_SAVE)                      \
    X(SE_BALL_BOUNCE_1)             \
    X(SE_BALL_BOUNCE_2)             \
    X(SE_BALL_BOUNCE_3)             \
    X(SE_BALL_BOUNCE_4)             \
    X(SE_BALL_TRADE)                \
    X(SE_BALL_THROW)                \
    X(SE_NOTE_C)                    \
    X(SE_NOTE_D)                    \
    X(SE_NOTE_E)                    \
    X(SE_NOTE_F)                    \
    X(SE_NOTE_G)                    \
    X(SE_NOTE_A)                    \
    X(SE_NOTE_B)                    \
    X(SE_NOTE_C_HIGH)               \
    X(SE_PUDDLE)                    \
    X(SE_BRIDGE_WALK)               \
    X(SE_ITEMFINDER)                \
    X(SE_DING_DONG)                 \
    X(SE_BALLOON_RED)               \
    X(SE_BALLOON_BLUE)              \
    X(SE_BALLOON_YELLOW)            \
    X(SE_BREAKABLE_DOOR)            \
    X(SE_MUD_BALL)                  \
    X(SE_FIELD_POISON)              \
    X(SE_ESCALATOR)                 \
    X(SE_THUNDERSTORM)              \
    X(SE_THUNDERSTORM_STOP)         \
    X(SE_DOWNPOUR)                  \
    X(SE_DOWNPOUR_STOP)             \
    X(SE_RAIN)                      \
    X(SE_RAIN_STOP)                 \
    X(SE_THUNDER)                   \
    X(SE_THUNDER2)                  \
    X(SE_ELEVATOR)                  \
    X(SE_LOW_HEALTH)                \
    X(SE_EXP_MAX)                   \
    X(SE_ROULETTE_BALL)             \
    X(SE_ROULETTE_BALL2)            \
    X(SE_TAILLOW_WING_FLAP)         \
    X(SE_SHOP)                      \
    X(SE_CONTEST_HEART)             \
    X(SE_CONTEST_CURTAIN_RISE)      \
    X(SE_CONTEST_CURTAIN_FALL)      \
    X(SE_CONTEST_ICON_CHANGE)       \
    X(SE_CONTEST_ICON_CLEAR)        \
    X(SE_CONTEST_MONS_TURN)         \
    X(SE_SHINY)                     \
    X(SE_INTRO_BLAST)               \
    X(SE_MUGSHOT)                   \
    X(SE_APPLAUSE)                  \
    X(SE_VEND)                      \
    X(SE_ORB)                       \
    X(SE_DEX_SCROLL)                \
    X(SE_DEX_PAGE)                  \
    X(SE_POKENAV_ON)                \
    X(SE_POKENAV_OFF)               \
    X(SE_DEX_SEARCH)                \
    X(SE_EGG_HATCH)                 \
    X(SE_BALL_TRAY_ENTER)           \
    X(SE_BALL_TRAY_BALL)            \
    X(SE_BALL_TRAY_EXIT)            \
    X(SE_GLASS_FLUTE)               \
    X(SE_M_THUNDERBOLT)             \
    X(SE_M_THUNDERBOLT2)            \
    X(SE_M_HARDEN)                  \
    X(SE_M_NIGHTMARE)               \
    X(SE_M_VITAL_THROW)             \
    X(SE_M_VITAL_THROW2)            \
    X(SE_M_BUBBLE)                  \
    X(SE_M_BUBBLE2)                 \
    X(SE_M_BUBBLE3)                 \
    X(SE_M_RAIN_DANCE)              \
    X(SE_M_CUT)                     \
    X(SE_M_STRING_SHOT)             \
    X(SE_M_STRING_SHOT2)            \
    X(SE_M_ROCK_THROW)              \
    X(SE_M_GUST)                    \
    X(SE_M_GUST2)                   \
    X(SE_M_DOUBLE_SLAP)             \
    X(SE_M_DOUBLE_TEAM)             \
    X(SE_M_RAZOR_WIND)              \
    X(SE_M_ICY_WIND)                \
    X(SE_M_THUNDER_WAVE)            \
    X(SE_M_COMET_PUNCH)             \
    X(SE_M_MEGA_KICK)               \
    X(SE_M_MEGA_KICK2)              \
    X(SE_M_CRABHAMMER)              \
    X(SE_M_JUMP_KICK)               \
    X(SE_M_FLAME_WHEEL)             \
    X(SE_M_FLAME_WHEEL2)            \
    X(SE_M_FLAMETHROWER)            \
    X(SE_M_FIRE_PUNCH)              \
    X(SE_M_TOXIC)                   \
    X(SE_M_SACRED_FIRE)             \
    X(SE_M_SACRED_FIRE2)            \
    X(SE_M_EMBER)                   \
    X(SE_M_TAKE_DOWN)               \
    X(SE_M_BLIZZARD)                \
    X(SE_M_BLIZZARD2)               \
    X(SE_M_SCRATCH)                 \
    X(SE_M_VICEGRIP)                \
    X(SE_M_WING_ATTACK)             \
    X(SE_M_FLY)                     \
    X(SE_M_SAND_ATTACK)             \
    X(SE_M_RAZOR_WIND2)             \
    X(SE_M_BITE)                    \
    X(SE_M_HEADBUTT)                \
    X(SE_M_SURF)                    \
    X(SE_M_HYDRO_PUMP)              \
    X(SE_M_WHIRLPOOL)               \
    X(SE_M_HORN_ATTACK)             \
    X(SE_M_TAIL_WHIP)               \
    X(SE_M_MIST)                    \
    X(SE_M_POISON_POWDER)           \
    X(SE_M_BIND)                    \
    X(SE_M_DRAGON_RAGE)             \
    X(SE_M_SING)                    \
    X(SE_M_PERISH_SONG)             \
    X(SE_M_PAY_DAY)                 \
    X(SE_M_DIG)                     \
    X(SE_M_DIZZY_PUNCH)             \
    X(SE_M_SELF_DESTRUCT)           \
    X(SE_M_EXPLOSION)               \
    X(SE_M_ABSORB_2)                \
    X(SE_M_ABSORB)                  \
    X(SE_M_SCREECH)                 \
    X(SE_M_BUBBLE_BEAM)             \
    X(SE_M_BUBBLE_BEAM2)            \
    X(SE_M_SUPERSONIC)              \
    X(SE_M_BELLY_DRUM)              \
    X(SE_M_METRONOME)               \
    X(SE_M_BONEMERANG)              \
    X(SE_M_LICK)                    \
    X(SE_M_PSYBEAM)                 \
    X(SE_M_FAINT_ATTACK)            \
    X(SE_M_SWORDS_DANCE)            \
    X(SE_M_LEER)                    \
    X(SE_M_SWAGGER)                 \
    X(SE_M_SWAGGER2)                \
    X(SE_M_HEAL_BELL)               \
    X(SE_M_CONFUSE_RAY)             \
    X(SE_M_SNORE)                   \
    X(SE_M_BRICK_BREAK)             \
    X(SE_M_GIGA_DRAIN)              \
    X(SE_M_PSYBEAM2)                \
    X(SE_M_SOLAR_BEAM)              \
    X(SE_M_PETAL_DANCE)             \
    X(SE_M_TELEPORT)                \
    X(SE_M_MINIMIZE)                \
    X(SE_M_SKETCH)                  \
    X(SE_M_SWIFT)                   \
    X(SE_M_REFLECT)                 \
    X(SE_M_BARRIER)                 \
    X(SE_M_DETECT)                  \
    X(SE_M_LOCK_ON)                 \
    X(SE_M_MOONLIGHT)               \
    X(SE_M_CHARM)                   \
    X(SE_M_CHARGE)                  \
    X(SE_M_STRENGTH)                \
    X(SE_M_HYPER_BEAM)              \
    X(SE_M_WATERFALL)               \
    X(SE_M_REVERSAL)                \
    X(SE_M_ACID_ARMOR)              \
    X(SE_M_SANDSTORM)               \
    X(SE_M_TRI_ATTACK)              \
    X(SE_M_TRI_ATTACK2)             \
    X(SE_M_ENCORE)                  \
    X(SE_M_ENCORE2)                 \
    X(SE_M_BATON_PASS)              \
    X(SE_M_MILK_DRINK)              \
    X(SE_M_ATTRACT)                 \
    X(SE_M_ATTRACT2)                \
    X(SE_M_MORNING_SUN)             \
    X(SE_M_FLATTER)                 \
    X(SE_M_SAND_TOMB)               \
    X(SE_M_GRASSWHISTLE)            \
    X(SE_M_SPIT_UP)                 \
    X(SE_M_DIVE)                    \
    X(SE_M_EARTHQUAKE)              \
    X(SE_M_TWISTER)                 \
    X(SE_M_SWEET_SCENT)             \
    X(SE_M_YAWN)                    \
    X(SE_M_SKY_UPPERCUT)            \
    X(SE_M_STAT_INCREASE)           \
    X(SE_M_HEAT_WAVE)               \
    X(SE_M_UPROAR)                  \
    X(SE_M_HAIL)                    \
    X(SE_M_COSMIC_POWER)            \
    X(SE_M_TEETER_DANCE)            \
    X(SE_M_STAT_DECREASE)           \
    X(SE_M_HAZE)                    \
    X(SE_M_HYPER_BEAM2)             \
    X(SE_RG_DOOR)                   \
    X(SE_RG_CARD_FLIP)              \
    X(SE_RG_CARD_FLIPPING)          \
    X(SE_RG_CARD_OPEN)              \
    X(SE_RG_BAG_CURSOR)             \
    X(SE_RG_BAG_POCKET)             \
    X(SE_RG_BALL_CLICK)             \
    X(SE_RG_SHOP)                   \
    X(SE_RG_SS_ANNE_HORN)           \
    X(SE_RG_HELP_OPEN)              \
    X(SE_RG_HELP_CLOSE)             \
    X(SE_RG_HELP_ERROR)             \
    X(SE_RG_DEOXYS_MOVE)            \
    X(SE_RG_POKE_JUMP_SUCCESS)      \
    X(SE_RG_POKE_JUMP_FAILURE)      \
    X(SE_POKENAV_CALL)              \
    X(SE_POKENAV_HANG_UP)           \
    X(SE_ARENA_TIMEUP1)             \
    X(SE_ARENA_TIMEUP2)             \
    X(SE_PIKE_CURTAIN_CLOSE)        \
    X(SE_PIKE_CURTAIN_OPEN)         \
    X(SE_SUDOWOODO_SHAKE)

// Create BGM list
#define X(songId) static const u8 sBGMName_##songId[] = _(#songId);
SOUND_LIST_BGM
#undef X

#define X(songId) [songId - START_MUS] = sBGMName_##songId,
static const u8 *const sBGMNames[END_MUS - START_MUS + 1] =
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
SOUND_LIST_BGM
};
#undef X

// Create SE list
<<<<<<< HEAD
#define X(songId, name) static const u8 sSEName_##songId[] = _(name);
SOUND_LIST_SE
#undef X

#define X(songId, name) sSEName_##songId,
static const u8 *const gSENames[] =
=======
#define X(songId) static const u8 sSEName_##songId[] = _(#songId);
SOUND_LIST_SE
#undef X

#define X(songId) [songId - 1] = sSEName_##songId,
static const u8 *const sSENames[END_SE + 1] =
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
SOUND_LIST_SE
};
#undef X

// *******************************
<<<<<<< HEAD
// Actions Other
static void Task_WaitFadeAccessPC(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        DestroyTask(taskId);
        FlagSet(FLAG_SYS_PC_FROM_DEBUG_MENU);
        EnterPokeStorage(2);
    }
}
static void DebugAction_AccessPC(u8 taskId)
{
    Debug_DestroyMenu_Full_Script(taskId, EventScript_PC);
}

static void DebugAction_HatchAnEgg(u8 taskId)
{
    Debug_DestroyMenu_Full_Script(taskId, Debug_HatchAnEgg);
}

#endif
=======
// Actions BerryFunctions

static void DebugAction_BerryFunctions_ClearAll(u8 taskId)
{
    u8 i;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (gObjectEvents[i].movementType == MOVEMENT_TYPE_BERRY_TREE_GROWTH)
        {
            RemoveBerryTree(GetObjectEventBerryTreeId(i));
            SetBerryTreeJustPicked(gObjectEvents[i].localId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
        }
    }

    ScriptContext_Enable();
    Debug_DestroyMenu_Full(taskId);
}

static void DebugAction_BerryFunctions_Ready(u8 taskId)
{
    u8 i;
    struct BerryTree *tree;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (gObjectEvents[i].movementType == MOVEMENT_TYPE_BERRY_TREE_GROWTH)
        {
            tree = &gSaveBlock1Ptr->berryTrees[GetObjectEventBerryTreeId(i)];
            if (tree->stage != BERRY_STAGE_NO_BERRY)
            {
                tree->stage = BERRY_STAGE_BERRIES - 1;
                BerryTreeGrow(tree);
            }
        }
    }

    ScriptContext_Enable();
    Debug_DestroyMenu_Full(taskId);
}

static void DebugAction_BerryFunctions_NextStage(u8 taskId)
{
    u8 i;
    struct BerryTree *tree;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (gObjectEvents[i].movementType == MOVEMENT_TYPE_BERRY_TREE_GROWTH)
        {
            tree = &gSaveBlock1Ptr->berryTrees[GetObjectEventBerryTreeId(i)];
            BerryTreeGrow(tree);
        }
    }

    ScriptContext_Enable();
    Debug_DestroyMenu_Full(taskId);
}

static void DebugAction_BerryFunctions_Pests(u8 taskId)
{
    u8 i;

    if (!OW_BERRY_PESTS)
    {
        Debug_DestroyMenu_Full_Script(taskId, Debug_BerryPestsDisabled);
        return;
    }

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (gObjectEvents[i].movementType == MOVEMENT_TYPE_BERRY_TREE_GROWTH)
        {
            if (gSaveBlock1Ptr->berryTrees[GetObjectEventBerryTreeId(i)].stage != BERRY_STAGE_PLANTED)
                gSaveBlock1Ptr->berryTrees[GetObjectEventBerryTreeId(i)].pests = TRUE;
        }
    }

    ScriptContext_Enable();
    Debug_DestroyMenu_Full(taskId);
}

static void DebugAction_BerryFunctions_Weeds(u8 taskId)
{
    u8 i;

    if (!OW_BERRY_WEEDS)
    {
        Debug_DestroyMenu_Full_Script(taskId, Debug_BerryWeedsDisabled);
        return;
    }

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (gObjectEvents[i].movementType == MOVEMENT_TYPE_BERRY_TREE_GROWTH)
        {
            gSaveBlock1Ptr->berryTrees[GetObjectEventBerryTreeId(i)].weeds = TRUE;
        }
    }

    ScriptContext_Enable();
    Debug_DestroyMenu_Full(taskId);
}

// *******************************
// Actions Party/Boxes

static void DebugAction_Party_HealParty(u8 taskId)
{
    PlaySE(SE_USE_ITEM);
    HealPlayerParty();
    ScriptContext_Enable();
    Debug_DestroyMenu_Full(taskId);
}

static void DebugAction_Party_ClearParty(u8 taskId)
{
    ZeroPlayerPartyMons();
    ScriptContext_Enable();
    Debug_DestroyMenu_Full(taskId);
}

enum DebugTrainerIds
{
    DEBUG_TRAINER_PLAYER,
    DEBUG_TRAINER_AI,
    DEBUG_TRAINERS_COUNT
};

const struct Trainer sDebugTrainers[DIFFICULTY_COUNT][DEBUG_TRAINERS_COUNT] =
{
#include "data/debug_trainers.h"
};

const struct Trainer* GetDebugAiTrainer(void)
{
    return &sDebugTrainers[DIFFICULTY_NORMAL][DEBUG_TRAINER_AI];
}

static void DebugAction_Party_SetParty(u8 taskId)
{
    ZeroPlayerPartyMons();
    CreateNPCTrainerPartyFromTrainer(gPlayerParty, &sDebugTrainers[DIFFICULTY_NORMAL][DEBUG_TRAINER_PLAYER], TRUE, BATTLE_TYPE_TRAINER);
    ScriptContext_Enable();
    Debug_DestroyMenu_Full(taskId);
}

static void DebugAction_Party_BattleSingle(u8 taskId)
{
    ZeroPlayerPartyMons();
    ZeroEnemyPartyMons();
    CreateNPCTrainerPartyFromTrainer(gPlayerParty, &sDebugTrainers[DIFFICULTY_NORMAL][DEBUG_TRAINER_PLAYER], TRUE, BATTLE_TYPE_TRAINER);
    CreateNPCTrainerPartyFromTrainer(gEnemyParty, GetDebugAiTrainer(), FALSE, BATTLE_TYPE_TRAINER);

    gBattleTypeFlags = BATTLE_TYPE_TRAINER;
    gDebugAIFlags = sDebugTrainers[DIFFICULTY_NORMAL][DEBUG_TRAINER_AI].aiFlags;
    gIsDebugBattle = TRUE;
    gBattleEnvironment = BattleSetup_GetEnvironmentId();
    CalculateEnemyPartyCount();
    BattleSetup_StartTrainerBattle_Debug();
    Debug_DestroyMenu_Full(taskId);
}

void CheckEWRAMCounters(struct ScriptContext *ctx)
{
    ConvertIntToDecimalStringN(gStringVar1, gFollowerSteps, STR_CONV_MODE_LEFT_ALIGN, 5);
    ConvertIntToDecimalStringN(gStringVar2, gChainFishingDexNavStreak, STR_CONV_MODE_LEFT_ALIGN, 5);
}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
