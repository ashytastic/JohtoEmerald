#include "global.h"
#include "malloc.h"
#include "berry_powder.h"
<<<<<<< HEAD
=======
#include "fake_rtc.h"
#include "follower_npc.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "item.h"
#include "load_save.h"
#include "main.h"
#include "overworld.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"
#include "random.h"
#include "save_location.h"
<<<<<<< HEAD
=======
#include "script_pokemon_util.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "trainer_hill.h"
#include "gba/flash_internal.h"
#include "decoration_inventory.h"
#include "agb_flash.h"
<<<<<<< HEAD
#include "tx_randomizer_and_challenges.h"
=======
#include "event_data.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "constants/event_objects.h"

static void ApplyNewEncryptionKeyToAllEncryptedData(u32 encryptionKey);

#define SAVEBLOCK_MOVE_RANGE    128

struct LoadedSaveData
{
<<<<<<< HEAD
 /*0x0000*/ struct ItemSlot items[BAG_ITEMS_COUNT];
 /*0x0078*/ struct ItemSlot keyItems[BAG_KEYITEMS_COUNT];
 /*0x00F0*/ struct ItemSlot pokeBalls[BAG_POKEBALLS_COUNT];
 /*0x0130*/ struct ItemSlot TMsHMs[BAG_TMHM_COUNT];
 /*0x0230*/ struct ItemSlot berries[BAG_BERRIES_COUNT];
=======
 /*0x0000*/ struct Bag bag;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
 /*0x02E8*/ struct Mail mail[MAIL_COUNT];
};

// EWRAM DATA
<<<<<<< HEAD
=======
EWRAM_DATA struct SaveBlock3 gSaveblock3 = {};
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
EWRAM_DATA struct SaveBlock2ASLR gSaveblock2 = {0};
EWRAM_DATA struct SaveBlock1ASLR gSaveblock1 = {0};
EWRAM_DATA struct PokemonStorageASLR gPokemonStorage = {0};

EWRAM_DATA struct LoadedSaveData gLoadedSaveData = {0};
EWRAM_DATA u32 gLastEncryptionKey = 0;

// IWRAM common
<<<<<<< HEAD
bool32 gFlashMemoryPresent;
struct SaveBlock1 *gSaveBlock1Ptr;
struct SaveBlock2 *gSaveBlock2Ptr;
struct PokemonStorage *gPokemonStoragePtr;
=======
COMMON_DATA bool32 gFlashMemoryPresent = 0;
COMMON_DATA struct SaveBlock1 *gSaveBlock1Ptr = NULL;
COMMON_DATA struct SaveBlock2 *gSaveBlock2Ptr = NULL;
IWRAM_INIT struct SaveBlock3 *gSaveBlock3Ptr = &gSaveblock3;
COMMON_DATA struct PokemonStorage *gPokemonStoragePtr = NULL;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

// code
void CheckForFlashMemory(void)
{
    if (!IdentifyFlash())
    {
        gFlashMemoryPresent = TRUE;
        InitFlashTimer();
    }
    else
    {
        gFlashMemoryPresent = FALSE;
    }
}

<<<<<<< HEAD
=======
void ClearSav3(void)
{
    CpuFill16(0, &gSaveblock3, sizeof(struct SaveBlock3));
    FakeRtc_Reset();
}

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void ClearSav2(void)
{
    CpuFill16(0, &gSaveblock2, sizeof(struct SaveBlock2ASLR));
}

void ClearSav1(void)
{
    CpuFill16(0, &gSaveblock1, sizeof(struct SaveBlock1ASLR));
}

// Offset is the sum of the trainer id bytes
void SetSaveBlocksPointers(u16 offset)
{
<<<<<<< HEAD
    struct SaveBlock1** sav1_LocalVar = &gSaveBlock1Ptr;
=======
    struct SaveBlock1 **sav1_LocalVar = &gSaveBlock1Ptr;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    offset = (offset + Random()) & (SAVEBLOCK_MOVE_RANGE - 4);

    gSaveBlock2Ptr = (void *)(&gSaveblock2) + offset;
    *sav1_LocalVar = (void *)(&gSaveblock1) + offset;
    gPokemonStoragePtr = (void *)(&gPokemonStorage) + offset;

    SetBagItemsPointers();
    SetDecorationInventoriesPointers();
}

void MoveSaveBlocks_ResetHeap(void)
{
    void *vblankCB, *hblankCB;
    u32 encryptionKey;
    struct SaveBlock2 *saveBlock2Copy;
    struct SaveBlock1 *saveBlock1Copy;
    struct PokemonStorage *pokemonStorageCopy;

    // save interrupt functions and turn them off
    vblankCB = gMain.vblankCallback;
    hblankCB = gMain.hblankCallback;
    gMain.vblankCallback = NULL;
    gMain.hblankCallback = NULL;
    gTrainerHillVBlankCounter = NULL;

    saveBlock2Copy = (struct SaveBlock2 *)(gHeap);
    saveBlock1Copy = (struct SaveBlock1 *)(gHeap + sizeof(struct SaveBlock2));
    pokemonStorageCopy = (struct PokemonStorage *)(gHeap + sizeof(struct SaveBlock2) + sizeof(struct SaveBlock1));

    // backup the saves.
    *saveBlock2Copy = *gSaveBlock2Ptr;
    *saveBlock1Copy = *gSaveBlock1Ptr;
    *pokemonStorageCopy = *gPokemonStoragePtr;

    // change saveblocks' pointers
    // argument is a sum of the individual trainerId bytes
    SetSaveBlocksPointers(
      saveBlock2Copy->playerTrainerId[0] +
      saveBlock2Copy->playerTrainerId[1] +
      saveBlock2Copy->playerTrainerId[2] +
      saveBlock2Copy->playerTrainerId[3]);

    // restore saveblock data since the pointers changed
    *gSaveBlock2Ptr = *saveBlock2Copy;
    *gSaveBlock1Ptr = *saveBlock1Copy;
    *gPokemonStoragePtr = *pokemonStorageCopy;

    // heap was destroyed in the copying process, so reset it
    InitHeap(gHeap, HEAP_SIZE);

    // restore interrupt functions
    gMain.hblankCallback = hblankCB;
    gMain.vblankCallback = vblankCB;

    // create a new encryption key
<<<<<<< HEAD
    encryptionKey = (Random() << 16) + (Random());
=======
    encryptionKey = Random32();
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    ApplyNewEncryptionKeyToAllEncryptedData(encryptionKey);
    gSaveBlock2Ptr->encryptionKey = encryptionKey;
}

u32 UseContinueGameWarp(void)
{
    return gSaveBlock2Ptr->specialSaveWarpFlags & CONTINUE_GAME_WARP;
}

void ClearContinueGameWarpStatus(void)
{
    gSaveBlock2Ptr->specialSaveWarpFlags &= ~CONTINUE_GAME_WARP;
}

void SetContinueGameWarpStatus(void)
{
    gSaveBlock2Ptr->specialSaveWarpFlags |= CONTINUE_GAME_WARP;
}

void SetContinueGameWarpStatusToDynamicWarp(void)
{
    SetContinueGameWarpToDynamicWarp(0);
    gSaveBlock2Ptr->specialSaveWarpFlags |= CONTINUE_GAME_WARP;
}

void ClearContinueGameWarpStatus2(void)
{
    gSaveBlock2Ptr->specialSaveWarpFlags &= ~CONTINUE_GAME_WARP;
}

void SavePlayerParty(void)
{
    int i;
<<<<<<< HEAD

    gSaveBlock1Ptr->playerPartyCount = gPlayerPartyCount;

    for (i = 0; i < PARTY_SIZE; i++)
        gSaveBlock1Ptr->playerParty[i] = gPlayerParty[i];
=======
    *GetSavedPlayerPartyCount() = gPlayerPartyCount;

    for (i = 0; i < PARTY_SIZE; i++)
        SavePlayerPartyMon(i, &gPlayerParty[i]);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void LoadPlayerParty(void)
{
    int i;

<<<<<<< HEAD
    gPlayerPartyCount = gSaveBlock1Ptr->playerPartyCount;

    for (i = 0; i < PARTY_SIZE; i++)
        gPlayerParty[i] = gSaveBlock1Ptr->playerParty[i];
=======
    gPlayerPartyCount = *GetSavedPlayerPartyCount();

    for (i = 0; i < PARTY_SIZE; i++)
    {
        u32 data;
        gPlayerParty[i] = *GetSavedPlayerPartyMon(i);

        // TODO: Turn this into a save migration once those are available.
        // At which point we can remove hp and status from Pokemon entirely.
        data = gPlayerParty[i].maxHP - gPlayerParty[i].hp;
        SetBoxMonData(&gPlayerParty[i].box, MON_DATA_HP_LOST, &data);
        data = gPlayerParty[i].status;
        SetBoxMonData(&gPlayerParty[i].box, MON_DATA_STATUS, &data);
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void SaveObjectEvents(void)
{
    int i;
    u16 graphicsId;

<<<<<<< HEAD
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++) {
=======
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        gSaveBlock1Ptr->objectEvents[i] = gObjectEvents[i];
        // Swap graphicsId bytes when saving and loading
        // This keeps compatibility with vanilla,
        // since the lower graphicsIds will be in the same place as vanilla
        graphicsId = gObjectEvents[i].graphicsId;
        gSaveBlock1Ptr->objectEvents[i].graphicsId = (graphicsId >> 8) | (graphicsId << 8);
        gSaveBlock1Ptr->objectEvents[i].spriteId = 127; // magic number
        // To avoid crash on vanilla, save follower as inactive
<<<<<<< HEAD
        if (gObjectEvents[i].localId == OBJ_EVENT_ID_FOLLOWER) 
=======
        if (gObjectEvents[i].localId == OBJ_EVENT_ID_FOLLOWER)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            gSaveBlock1Ptr->objectEvents[i].active = FALSE;
    }
}

void LoadObjectEvents(void)
{
    int i;
    u16 graphicsId;

<<<<<<< HEAD
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++) {
=======
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        gObjectEvents[i] = gSaveBlock1Ptr->objectEvents[i];
        // Swap graphicsId bytes when saving and loading
        // This keeps compatibility with vanilla,
        // since the lower graphicsIds will be in the same place as vanilla
        graphicsId = gObjectEvents[i].graphicsId;
        gObjectEvents[i].graphicsId = (graphicsId >> 8) | (graphicsId << 8);
        if (gObjectEvents[i].spriteId != 127)
            gObjectEvents[i].graphicsId &= 0xFF;
        gObjectEvents[i].spriteId = 0;
        // Try to restore saved inactive follower
        if (gObjectEvents[i].localId == OBJ_EVENT_ID_FOLLOWER &&
            !gObjectEvents[i].active &&
<<<<<<< HEAD
            gObjectEvents[i].graphicsId >= OBJ_EVENT_GFX_MON_BASE)
=======
            gObjectEvents[i].graphicsId & OBJ_EVENT_MON)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            gObjectEvents[i].active = TRUE;
    }
}

void CopyPartyAndObjectsToSave(void)
{
    SavePlayerParty();
    SaveObjectEvents();
}

void CopyPartyAndObjectsFromSave(void)
{
<<<<<<< HEAD
    PrintTXSaveData(); //tx_randomizer_and_challenges
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    LoadPlayerParty();
    LoadObjectEvents();
}

void LoadPlayerBag(void)
{
    int i;

<<<<<<< HEAD
    // load player items.
    for (i = 0; i < BAG_ITEMS_COUNT; i++)
        gLoadedSaveData.items[i] = gSaveBlock1Ptr->bagPocket_Items[i];

    // load player key items.
    for (i = 0; i < BAG_KEYITEMS_COUNT; i++)
        gLoadedSaveData.keyItems[i] = gSaveBlock1Ptr->bagPocket_KeyItems[i];

    // load player pokeballs.
    for (i = 0; i < BAG_POKEBALLS_COUNT; i++)
        gLoadedSaveData.pokeBalls[i] = gSaveBlock1Ptr->bagPocket_PokeBalls[i];

    // load player TMs and HMs.
    for (i = 0; i < BAG_TMHM_COUNT; i++)
        gLoadedSaveData.TMsHMs[i] = gSaveBlock1Ptr->bagPocket_TMHM[i];

    // load player berries.
    for (i = 0; i < BAG_BERRIES_COUNT; i++)
        gLoadedSaveData.berries[i] = gSaveBlock1Ptr->bagPocket_Berries[i];
=======
    // load player bag.
    memcpy(&gLoadedSaveData.bag, &gSaveBlock1Ptr->bag, sizeof(struct Bag));
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    // load mail.
    for (i = 0; i < MAIL_COUNT; i++)
        gLoadedSaveData.mail[i] = gSaveBlock1Ptr->mail[i];

    gLastEncryptionKey = gSaveBlock2Ptr->encryptionKey;
}

void SavePlayerBag(void)
{
    int i;
    u32 encryptionKeyBackup;

<<<<<<< HEAD
    // save player items.
    for (i = 0; i < BAG_ITEMS_COUNT; i++)
        gSaveBlock1Ptr->bagPocket_Items[i] = gLoadedSaveData.items[i];

    // save player key items.
    for (i = 0; i < BAG_KEYITEMS_COUNT; i++)
        gSaveBlock1Ptr->bagPocket_KeyItems[i] = gLoadedSaveData.keyItems[i];

    // save player pokeballs.
    for (i = 0; i < BAG_POKEBALLS_COUNT; i++)
        gSaveBlock1Ptr->bagPocket_PokeBalls[i] = gLoadedSaveData.pokeBalls[i];

    // save player TMs and HMs.
    for (i = 0; i < BAG_TMHM_COUNT; i++)
        gSaveBlock1Ptr->bagPocket_TMHM[i] = gLoadedSaveData.TMsHMs[i];

    // save player berries.
    for (i = 0; i < BAG_BERRIES_COUNT; i++)
        gSaveBlock1Ptr->bagPocket_Berries[i] = gLoadedSaveData.berries[i];
=======
    // save player bag.
    memcpy(&gSaveBlock1Ptr->bag, &gLoadedSaveData.bag, sizeof(struct Bag));
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    // save mail.
    for (i = 0; i < MAIL_COUNT; i++)
        gSaveBlock1Ptr->mail[i] = gLoadedSaveData.mail[i];

    encryptionKeyBackup = gSaveBlock2Ptr->encryptionKey;
    gSaveBlock2Ptr->encryptionKey = gLastEncryptionKey;
    ApplyNewEncryptionKeyToBagItems(encryptionKeyBackup);
    gSaveBlock2Ptr->encryptionKey = encryptionKeyBackup; // updated twice?
}

void ApplyNewEncryptionKeyToHword(u16 *hWord, u32 newKey)
{
    *hWord ^= gSaveBlock2Ptr->encryptionKey;
    *hWord ^= newKey;
}

void ApplyNewEncryptionKeyToWord(u32 *word, u32 newKey)
{
    *word ^= gSaveBlock2Ptr->encryptionKey;
    *word ^= newKey;
}

static void ApplyNewEncryptionKeyToAllEncryptedData(u32 encryptionKey)
{
    ApplyNewEncryptionKeyToGameStats(encryptionKey);
<<<<<<< HEAD
    ApplyNewEncryptionKeyToBagItems_(encryptionKey);
=======
    ApplyNewEncryptionKeyToBagItems(encryptionKey);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    ApplyNewEncryptionKeyToBerryPowder(encryptionKey);
    ApplyNewEncryptionKeyToWord(&gSaveBlock1Ptr->money, encryptionKey);
    ApplyNewEncryptionKeyToHword(&gSaveBlock1Ptr->coins, encryptionKey);
}
