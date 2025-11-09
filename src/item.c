#include "global.h"
#include "item.h"
#include "berry.h"
<<<<<<< HEAD
=======
#include "pokeball.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "string_util.h"
#include "text.h"
#include "event_data.h"
#include "malloc.h"
#include "secret_base.h"
#include "item_menu.h"
<<<<<<< HEAD
#include "strings.h"
#include "load_save.h"
#include "item_use.h"
#include "random.h"
#include "overworld.h"
#include "battle_pyramid.h"
#include "battle_pyramid_bag.h"
#include "constants/items.h"
#include "constants/hold_effects.h"

void ItemId_GetHoldEffectParam_Script();

void ItemId_GetHoldEffectParam_Script()
{
    VarSet(VAR_RESULT, ItemId_GetHoldEffectParam(VarGet(VAR_0x8004)));
}

// this file's functions
static bool8 CheckPyramidBagHasItem(u16 itemId, u16 count);
static bool8 CheckPyramidBagHasSpace(u16 itemId, u16 count);

// EWRAM variables
EWRAM_DATA struct BagPocket gBagPockets[POCKETS_COUNT] = {0};

// rodata
#include "data/text/item_descriptions.h"
#include "data/items.h"

// code
u16 GetBagItemQuantity(u16 *quantity)
{
    return gSaveBlock2Ptr->encryptionKey ^ *quantity;
}

static void SetBagItemQuantity(u16 *quantity, u16 newValue)
{
    *quantity =  newValue ^ gSaveBlock2Ptr->encryptionKey;
}

static u16 GetPCItemQuantity(u16 *quantity)
{
    return *quantity;
}

static void SetPCItemQuantity(u16 *quantity, u16 newValue)
{
    *quantity = newValue;
=======
#include "party_menu.h"
#include "strings.h"
#include "load_save.h"
#include "item_use.h"
#include "battle_pyramid.h"
#include "battle_pyramid_bag.h"
#include "graphics.h"
#include "constants/battle.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/item_effects.h"
#include "constants/hold_effects.h"

#define DUMMY_PC_BAG_POCKET                 \
{                                           \
    .id = POCKET_DUMMY,                     \
    .capacity = PC_ITEMS_COUNT,             \
    .itemSlots = gSaveBlock1Ptr->pcItems,   \
}

static bool32 CheckPyramidBagHasItem(u16 itemId, u16 count);
static bool32 CheckPyramidBagHasSpace(u16 itemId, u16 count);
static const u8 *GetItemPluralName(u16);
static bool32 DoesItemHavePluralName(u16);
static void NONNULL BagPocket_CompactItems(struct BagPocket *pocket);

EWRAM_DATA struct BagPocket gBagPockets[POCKETS_COUNT] = {0};

#include "data/pokemon/item_effects.h"
#include "data/items.h"

#define UNPACK_TM_ITEM_ID(_tm) [CAT(ENUM_TM_HM_, _tm) + 1] = { CAT(ITEM_TM_, _tm), CAT(MOVE_, _tm) },
#define UNPACK_HM_ITEM_ID(_hm) [CAT(ENUM_TM_HM_, _hm) + 1] = { CAT(ITEM_HM_, _hm), CAT(MOVE_, _hm) },

const struct TmHmIndexKey gTMHMItemMoveIds[NUM_ALL_MACHINES + 1] =
{
    [0] = { ITEM_NONE, MOVE_NONE }, // Failsafe
    FOREACH_TM(UNPACK_TM_ITEM_ID)
    FOREACH_HM(UNPACK_HM_ITEM_ID)
    /*
     * Expands to the following:
     *
     * [1] = { ITEM_TM_FOCUS_PUNCH, MOVE_FOCUS_PUNCH },
     * [2] = { ITEM_TM_DRAGON_CLAW, MOVE_DRAGON_CLAW },
     * [3] = { ITEM_TM_WATER_PULSE, MOVE_WATER_PULSE },
     * etc etc
    */
};

#undef UNPACK_TM_ITEM_ID
#undef UNPACK_HM_ITEM_ID

static inline struct ItemSlot NONNULL BagPocket_GetSlotDataGeneric(struct BagPocket *pocket, u32 pocketPos)
{
    return (struct ItemSlot) {
        .itemId = pocket->itemSlots[pocketPos].itemId,
        .quantity = pocket->itemSlots[pocketPos].quantity ^ gSaveBlock2Ptr->encryptionKey,
    };
}

static inline struct ItemSlot NONNULL BagPocket_GetSlotDataPC(struct BagPocket *pocket, u32 pocketPos)
{
    return (struct ItemSlot) {
        .itemId = pocket->itemSlots[pocketPos].itemId,
        .quantity = pocket->itemSlots[pocketPos].quantity,
    };
}

static inline void NONNULL BagPocket_SetSlotDataGeneric(struct BagPocket *pocket, u32 pocketPos, struct ItemSlot newSlot)
{
    pocket->itemSlots[pocketPos].itemId = newSlot.itemId;
    pocket->itemSlots[pocketPos].quantity = newSlot.quantity ^ gSaveBlock2Ptr->encryptionKey;
}

static inline void NONNULL BagPocket_SetSlotDataPC(struct BagPocket *pocket, u32 pocketPos, struct ItemSlot newSlot)
{
    pocket->itemSlots[pocketPos].itemId = newSlot.itemId;
    pocket->itemSlots[pocketPos].quantity = newSlot.quantity;
}

struct ItemSlot NONNULL BagPocket_GetSlotData(struct BagPocket *pocket, u32 pocketPos)
{
    switch (pocket->id)
    {
    case POCKET_ITEMS:
    case POCKET_KEY_ITEMS:
    case POCKET_POKE_BALLS:
    case POCKET_TM_HM:
    case POCKET_BERRIES:
        return BagPocket_GetSlotDataGeneric(pocket, pocketPos);
    case POCKET_DUMMY:
        return BagPocket_GetSlotDataPC(pocket, pocketPos);
    }

    return (struct ItemSlot) {0}; // Because compiler complains
}

void NONNULL BagPocket_SetSlotData(struct BagPocket *pocket, u32 pocketPos, struct ItemSlot newSlot)
{
    if (newSlot.itemId == ITEM_NONE || newSlot.quantity == 0) // Sets to zero if quantity or itemId is zero
    {
        newSlot.itemId = ITEM_NONE;
        newSlot.quantity = 0;
    }

    switch (pocket->id)
    {
    case POCKET_ITEMS:
    case POCKET_KEY_ITEMS:
    case POCKET_POKE_BALLS:
    case POCKET_TM_HM:
    case POCKET_BERRIES:
        BagPocket_SetSlotDataGeneric(pocket, pocketPos, newSlot);
        break;
    case POCKET_DUMMY:
        BagPocket_SetSlotDataPC(pocket, pocketPos, newSlot);
        break;
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void ApplyNewEncryptionKeyToBagItems(u32 newKey)
{
<<<<<<< HEAD
    u32 pocket, item;
    for (pocket = 0; pocket < POCKETS_COUNT; pocket++)
    {
        for (item = 0; item < gBagPockets[pocket].capacity; item++)
            ApplyNewEncryptionKeyToHword(&(gBagPockets[pocket].itemSlots[item].quantity), newKey);
    }
}

void ApplyNewEncryptionKeyToBagItems_(u32 newKey) // really GF?
{
    ApplyNewEncryptionKeyToBagItems(newKey);
}

void SetBagItemsPointers(void)
{
    gBagPockets[ITEMS_POCKET].itemSlots = gSaveBlock1Ptr->bagPocket_Items;
    gBagPockets[ITEMS_POCKET].capacity = BAG_ITEMS_COUNT;

    gBagPockets[KEYITEMS_POCKET].itemSlots = gSaveBlock1Ptr->bagPocket_KeyItems;
    gBagPockets[KEYITEMS_POCKET].capacity = BAG_KEYITEMS_COUNT;

    gBagPockets[BALLS_POCKET].itemSlots = gSaveBlock1Ptr->bagPocket_PokeBalls;
    gBagPockets[BALLS_POCKET].capacity = BAG_POKEBALLS_COUNT;

    gBagPockets[TMHM_POCKET].itemSlots = gSaveBlock1Ptr->bagPocket_TMHM;
    gBagPockets[TMHM_POCKET].capacity = BAG_TMHM_COUNT;

    gBagPockets[BERRIES_POCKET].itemSlots = gSaveBlock1Ptr->bagPocket_Berries;
    gBagPockets[BERRIES_POCKET].capacity = BAG_BERRIES_COUNT;
}

void CopyItemName(u16 itemId, u8 *dst)
{
    StringCopy(dst, ItemId_GetName(itemId));
}

void CopyItemNameHandlePlural(u16 itemId, u8 *dst, u32 quantity)
{
    if (itemId == ITEM_POKE_BALL)
    {
        if (quantity < 2)
            StringCopy(dst, ItemId_GetName(ITEM_POKE_BALL));
        else
            StringCopy(dst, gText_PokeBalls);
    }
    else
    {
        if (itemId >= FIRST_BERRY_INDEX && itemId <= LAST_BERRY_INDEX)
            GetBerryCountString(dst, gBerries[itemId - FIRST_BERRY_INDEX].name, quantity);
        else
            StringCopy(dst, ItemId_GetName(itemId));
    }
}

void GetBerryCountString(u8 *dst, const u8 *berryName, u32 quantity)
{
    const u8 *berryString;
    u8 *txtPtr;

    if (quantity < 2)
        berryString = gText_Berry;
    else
        berryString = gText_Berries;

    txtPtr = StringCopy(dst, berryName);
    *txtPtr = CHAR_SPACE;
    StringCopy(txtPtr + 1, berryString);
}

bool8 IsBagPocketNonEmpty(u8 pocket)
{
    u8 i;

    for (i = 0; i < gBagPockets[pocket - 1].capacity; i++)
    {
        if (gBagPockets[pocket - 1].itemSlots[i].itemId != 0)
=======
    enum Pocket pocketId;
    u32 item;
    for (pocketId = 0; pocketId < POCKETS_COUNT; pocketId++)
    {
        for (item = 0; item < gBagPockets[pocketId].capacity; item++)
            ApplyNewEncryptionKeyToHword(&(gBagPockets[pocketId].itemSlots[item].quantity), newKey);
    }
}

void SetBagItemsPointers(void)
{
    gBagPockets[POCKET_ITEMS].itemSlots = gSaveBlock1Ptr->bag.items;
    gBagPockets[POCKET_ITEMS].capacity = BAG_ITEMS_COUNT;
    gBagPockets[POCKET_ITEMS].id = POCKET_ITEMS;

    gBagPockets[POCKET_KEY_ITEMS].itemSlots = gSaveBlock1Ptr->bag.keyItems;
    gBagPockets[POCKET_KEY_ITEMS].capacity = BAG_KEYITEMS_COUNT;
    gBagPockets[POCKET_KEY_ITEMS].id = POCKET_KEY_ITEMS;

    gBagPockets[POCKET_POKE_BALLS].itemSlots = gSaveBlock1Ptr->bag.pokeBalls;
    gBagPockets[POCKET_POKE_BALLS].capacity = BAG_POKEBALLS_COUNT;
    gBagPockets[POCKET_POKE_BALLS].id = POCKET_POKE_BALLS;

    gBagPockets[POCKET_TM_HM].itemSlots = gSaveBlock1Ptr->bag.TMsHMs;
    gBagPockets[POCKET_TM_HM].capacity = BAG_TMHM_COUNT;
    gBagPockets[POCKET_TM_HM].id = POCKET_TM_HM;

    gBagPockets[POCKET_BERRIES].itemSlots = gSaveBlock1Ptr->bag.berries;
    gBagPockets[POCKET_BERRIES].capacity = BAG_BERRIES_COUNT;
    gBagPockets[POCKET_BERRIES].id = POCKET_BERRIES;
}

u8 *CopyItemName(u16 itemId, u8 *dst)
{
    return StringCopy(dst, GetItemName(itemId));
}

const u8 sText_s[] =_("s");

u8 *CopyItemNameHandlePlural(u16 itemId, u8 *dst, u32 quantity)
{
    if (quantity == 1)
    {
        return StringCopy(dst, GetItemName(itemId));
    }
    else if (DoesItemHavePluralName(itemId))
    {
        return StringCopy(dst, GetItemPluralName(itemId));
    }
    else
    {
        u8 *end = StringCopy(dst, GetItemName(itemId));
        return StringCopy(end, sText_s);
    }
}

bool32 IsBagPocketNonEmpty(enum Pocket pocketId)
{
    u8 i;

    for (i = 0; i < gBagPockets[pocketId].capacity; i++)
    {
        if (GetBagItemId(pocketId, i) != ITEM_NONE)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            return TRUE;
    }
    return FALSE;
}

<<<<<<< HEAD
bool8 CheckBagHasItem(u16 itemId, u16 count)
{
    u8 i;
    u8 pocket;

    if (ItemId_GetPocket(itemId) == 0)
        return FALSE;
    if (InBattlePyramid() || FlagGet(FLAG_STORING_ITEMS_IN_PYRAMID_BAG) == TRUE)
        return CheckPyramidBagHasItem(itemId, count);
    pocket = ItemId_GetPocket(itemId) - 1;
    // Check for item slots that contain the item
    for (i = 0; i < gBagPockets[pocket].capacity; i++)
    {
        if (gBagPockets[pocket].itemSlots[i].itemId == itemId)
        {
            u16 quantity;
            // Does this item slot contain enough of the item?
            quantity = GetBagItemQuantity(&gBagPockets[pocket].itemSlots[i].quantity);
            if (quantity >= count)
                return TRUE;
            count -= quantity;
            // Does this item slot and all previous slots contain enough of the item?
            if (count == 0)
                return TRUE;
        }
    }
    return FALSE;
}

bool8 HasAtLeastOneBerry(void)
{
    u16 i;

    for (i = FIRST_BERRY_INDEX; i < ITEM_BRIGHT_POWDER; i++)
    {
        if (CheckBagHasItem(i, 1) == TRUE)
        {
            gSpecialVar_Result = TRUE;
            return TRUE;
        }
    }
    gSpecialVar_Result = FALSE;
    return FALSE;
}

bool8 CheckBagHasSpace(u16 itemId, u16 count)
{
    u8 i;
    u8 pocket;
    u16 slotCapacity;
    u16 ownedCount;

    if (ItemId_GetPocket(itemId) == POCKET_NONE)
        return FALSE;

    if (InBattlePyramid() || FlagGet(FLAG_STORING_ITEMS_IN_PYRAMID_BAG) == TRUE)
    {
        return CheckPyramidBagHasSpace(itemId, count);
    }

    pocket = ItemId_GetPocket(itemId) - 1;
    if (pocket != BERRIES_POCKET)
        slotCapacity = MAX_BAG_ITEM_CAPACITY;
    else
        slotCapacity = MAX_BERRY_CAPACITY;

    // Check space in any existing item slots that already contain this item
    for (i = 0; i < gBagPockets[pocket].capacity; i++)
    {
        if (gBagPockets[pocket].itemSlots[i].itemId == itemId)
        {
            ownedCount = GetBagItemQuantity(&gBagPockets[pocket].itemSlots[i].quantity);
            if (ownedCount + count <= slotCapacity)
                return TRUE;
            if (pocket == TMHM_POCKET || pocket == BERRIES_POCKET)
                return FALSE;
            count -= (slotCapacity - ownedCount);
            if (count == 0)
                break; //should be return TRUE, but that doesn't match
        }
    }

    // Check space in empty item slots
    if (count > 0)
    {
        for (i = 0; i < gBagPockets[pocket].capacity; i++)
        {
            if (gBagPockets[pocket].itemSlots[i].itemId == 0)
            {
                if (count > slotCapacity)
                {
                    if (pocket == TMHM_POCKET || pocket == BERRIES_POCKET)
                        return FALSE;
                    count -= slotCapacity;
                }
                else
                {
                    count = 0; //should be return TRUE, but that doesn't match
                    break;
                }
            }
        }
        if (count > 0)
            return FALSE; // No more item slots. The bag is full
    }

    return TRUE;
}

bool8 AddBagItem(u16 itemId, u16 count)
{
    u8 i;

    if (ItemId_GetPocket(itemId) == POCKET_NONE)
        return FALSE;

    // check Battle Pyramid Bag
    if (InBattlePyramid() || FlagGet(FLAG_STORING_ITEMS_IN_PYRAMID_BAG) == TRUE)
    {
        return AddPyramidBagItem(itemId, count);
    }
    else
    {
        struct BagPocket *itemPocket;
        struct ItemSlot *newItems;
        u16 slotCapacity;
        u16 ownedCount;
        u8 pocket = ItemId_GetPocket(itemId) - 1;

        itemPocket = &gBagPockets[pocket];
        newItems = AllocZeroed(itemPocket->capacity * sizeof(struct ItemSlot));
        memcpy(newItems, itemPocket->itemSlots, itemPocket->capacity * sizeof(struct ItemSlot));

        if (pocket != BERRIES_POCKET)
            slotCapacity = MAX_BAG_ITEM_CAPACITY;
        else
            slotCapacity = MAX_BERRY_CAPACITY;

        for (i = 0; i < itemPocket->capacity; i++)
        {
            if (newItems[i].itemId == itemId)
            {
                ownedCount = GetBagItemQuantity(&newItems[i].quantity);
                // check if won't exceed max slot capacity
                if (ownedCount + count <= slotCapacity)
                {
                    // successfully added to already existing item's count
                    SetBagItemQuantity(&newItems[i].quantity, ownedCount + count);
                    memcpy(itemPocket->itemSlots, newItems, itemPocket->capacity * sizeof(struct ItemSlot));
                    Free(newItems);
                    return TRUE;
                }
                else
                {
                    // try creating another instance of the item if possible
                    if (pocket == TMHM_POCKET || pocket == BERRIES_POCKET)
                    {
                        Free(newItems);
                        return FALSE;
                    }
                    else
                    {
                        count -= slotCapacity - ownedCount;
                        SetBagItemQuantity(&newItems[i].quantity, slotCapacity);
                        // don't create another instance of the item if it's at max slot capacity and count is equal to 0
                        if (count == 0)
                        {
                            break;
                        }
                    }
                }
            }
        }

        // we're done if quantity is equal to 0
        if (count > 0)
        {
            // either no existing item was found or we have to create another instance, because the capacity was exceeded
            for (i = 0; i < itemPocket->capacity; i++)
            {
                if (newItems[i].itemId == ITEM_NONE)
                {
                    newItems[i].itemId = itemId;
                    if (count > slotCapacity)
                    {
                        // try creating a new slot with max capacity if duplicates are possible
                        if (pocket == TMHM_POCKET || pocket == BERRIES_POCKET)
                        {
                            Free(newItems);
                            return FALSE;
                        }
                        count -= slotCapacity;
                        SetBagItemQuantity(&newItems[i].quantity, slotCapacity);
                    }
                    else
                    {
                        // created a new slot and added quantity
                        SetBagItemQuantity(&newItems[i].quantity, count);
                        count = 0;
                        break;
                    }
                }
            }

            if (count > 0)
            {
                Free(newItems);
                return FALSE;
            }
        }
        memcpy(itemPocket->itemSlots, newItems, itemPocket->capacity * sizeof(struct ItemSlot));
        Free(newItems);
        return TRUE;
    }
}

bool8 RemoveBagItem(u16 itemId, u16 count)
{
    u8 i;
    u16 totalQuantity = 0;

    if (ItemId_GetPocket(itemId) == POCKET_NONE || itemId == ITEM_NONE)
        return FALSE;

    // check Battle Pyramid Bag
    if (InBattlePyramid() || FlagGet(FLAG_STORING_ITEMS_IN_PYRAMID_BAG) == TRUE)
    {
        return RemovePyramidBagItem(itemId, count);
    }
    else
    {
        u8 pocket;
        u8 var;
        u16 ownedCount;
        struct BagPocket *itemPocket;

        pocket = ItemId_GetPocket(itemId) - 1;
        itemPocket = &gBagPockets[pocket];

        for (i = 0; i < itemPocket->capacity; i++)
        {
            if (itemPocket->itemSlots[i].itemId == itemId)
                totalQuantity += GetBagItemQuantity(&itemPocket->itemSlots[i].quantity);
        }

        if (totalQuantity < count)
            return FALSE;   // We don't have enough of the item

=======
static bool32 NONNULL BagPocket_CheckHasItem(struct BagPocket *pocket, u16 itemId, u16 count)
{
    struct ItemSlot tempItem;

    // Check for item slots that contain the item
    for (u32 i = 0; i < pocket->capacity && count > 0; i++)
    {
        tempItem = BagPocket_GetSlotData(pocket, i);
        if (tempItem.itemId == itemId)
            count -= min(count, tempItem.quantity);
    }

    return count == 0;
}

bool32 CheckBagHasItem(u16 itemId, u16 count)
{
    if (GetItemPocket(itemId) >= POCKETS_COUNT)
        return FALSE;
    if (CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE || FlagGet(FLAG_STORING_ITEMS_IN_PYRAMID_BAG) == TRUE)
        return CheckPyramidBagHasItem(itemId, count);

    return BagPocket_CheckHasItem(&gBagPockets[GetItemPocket(itemId)], itemId, count);
}

bool32 HasAtLeastOneBerry(void)
{
    gSpecialVar_Result = FALSE;

    for (u32 i = FIRST_BERRY_INDEX; i <= LAST_BERRY_INDEX && gSpecialVar_Result == FALSE; i++)
        gSpecialVar_Result = CheckBagHasItem(i, 1);

    return gSpecialVar_Result;
}

bool32 HasAtLeastOnePokeBall(void)
{
    for (enum PokeBall ballId = BALL_STRANGE; ballId < POKEBALL_COUNT; ballId++)
    {
        if (CheckBagHasItem(gBallItemIds[ballId], 1) == TRUE)
            return TRUE;
    }
    return FALSE;
}

bool32 CheckBagHasSpace(u16 itemId, u16 count)
{
    if (GetItemPocket(itemId) >= POCKETS_COUNT)
        return FALSE;

    if (CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE || FlagGet(FLAG_STORING_ITEMS_IN_PYRAMID_BAG) == TRUE)
        return CheckPyramidBagHasSpace(itemId, count);

    return GetFreeSpaceForItemInBag(itemId) >= count;
}

static u32 NONNULL BagPocket_GetFreeSpaceForItem(struct BagPocket *pocket, u16 itemId)
{
    u32 spaceForItem = 0;
    struct ItemSlot tempItem;

    // Check space in any existing item slots that already contain this item
    for (u32 i = 0; i < pocket->capacity; i++)
    {
        tempItem = BagPocket_GetSlotData(pocket, i);
        if (tempItem.itemId == ITEM_NONE || tempItem.itemId == itemId)
            spaceForItem += (tempItem.itemId ? (MAX_BAG_ITEM_CAPACITY - tempItem.quantity) : MAX_BAG_ITEM_CAPACITY);
    }

    return spaceForItem;
}

u32 GetFreeSpaceForItemInBag(u16 itemId)
{
    if (GetItemPocket(itemId) >= POCKETS_COUNT)
        return 0;

    return BagPocket_GetFreeSpaceForItem(&gBagPockets[GetItemPocket(itemId)], itemId);
}

static inline bool32 NONNULL CheckSlotAndUpdateCount(struct BagPocket *pocket, u16 itemId, u32 pocketPos, u32 *nextPocketPos, u16 *count, u16 *tempPocketSlotQuantities)
{
    struct ItemSlot tempItem = BagPocket_GetSlotData(pocket, pocketPos);
    if (tempItem.itemId == ITEM_NONE || tempItem.itemId == itemId)
    {
        // The quantity already at the slot - zero if an empty slot
        if (tempItem.itemId == ITEM_NONE)
            tempItem.quantity = 0;

        // Record slot quantity in tempPocketSlotQuantities, adjust count
        tempPocketSlotQuantities[pocketPos] = min(MAX_BAG_ITEM_CAPACITY, *count + tempItem.quantity);
        *count -= min(*count, MAX_BAG_ITEM_CAPACITY - tempItem.quantity);

        // Set the starting index for the next loop to set items (shifted by one)
        if (!*nextPocketPos)
            *nextPocketPos = pocketPos + 1;

        return TRUE;
    }

    return FALSE;
}

static bool32 NONNULL BagPocket_AddItem(struct BagPocket *pocket, u16 itemId, u16 count)
{
    u32 itemLookupIndex, itemAddIndex = 0;

    // First, check that there is a free slot for this item
    u16 *tempPocketSlotQuantities = AllocZeroed(sizeof(u16) * pocket->capacity);

    switch (pocket->id)
    {
        case POCKET_TM_HM:
        case POCKET_BERRIES:
            for (itemLookupIndex = 0; itemLookupIndex < pocket->capacity && count > 0; itemLookupIndex++)
            {
                // Check if we found a slot to store the item but weren't able to reduce count to 0
                // This means that we have more than one stack's worth, which isn't allowed in these pockets
                if (CheckSlotAndUpdateCount(pocket, itemId, itemLookupIndex, &itemAddIndex, &count, tempPocketSlotQuantities) && count > 0)
                {
                    Free(tempPocketSlotQuantities);
                    return FALSE;
                }
            }
            break;
        default:
            for (itemLookupIndex = 0; itemLookupIndex < pocket->capacity && count > 0; itemLookupIndex++)
                CheckSlotAndUpdateCount(pocket, itemId, itemLookupIndex, &itemAddIndex, &count, tempPocketSlotQuantities);
    }

    // If the count is still greater than zero, clearly we have not found enough slots for this...
    // Otherwise, we have found slots - update the actual pockets with the updated quantities
    if (count == 0)
    {
        for (--itemAddIndex; itemAddIndex < itemLookupIndex; itemAddIndex++)
        {
            if (tempPocketSlotQuantities[itemAddIndex] > 0)
                BagPocket_SetSlotItemIdAndCount(pocket, itemAddIndex, itemId, tempPocketSlotQuantities[itemAddIndex]);
        }
    }

    Free(tempPocketSlotQuantities);
    return count == 0;
}

bool32 AddBagItem(u16 itemId, u16 count)
{
    if (GetItemPocket(itemId) >= POCKETS_COUNT)
        return FALSE;

    // check Battle Pyramid Bag
    if (CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE || FlagGet(FLAG_STORING_ITEMS_IN_PYRAMID_BAG) == TRUE)
        return AddPyramidBagItem(itemId, count);

    return BagPocket_AddItem(&gBagPockets[GetItemPocket(itemId)], itemId, count);
}

static bool32 NONNULL BagPocket_RemoveItem(struct BagPocket *pocket, u16 itemId, u16 count)
{
    u32 itemLookupIndex, itemRemoveIndex = 0, totalQuantity = 0;
    struct ItemSlot tempItem;
    u16 *tempPocketSlotQuantities = AllocZeroed(sizeof(u16) * pocket->capacity);

    for (itemLookupIndex = 0; itemLookupIndex < pocket->capacity && totalQuantity < count; itemLookupIndex++)
    {
        tempItem = BagPocket_GetSlotData(pocket, itemLookupIndex);
        if (tempItem.itemId == itemId)
        {
            // Index for the next loop - where we should start removing items
            if (!itemRemoveIndex)
                itemRemoveIndex = itemLookupIndex + 1;

            // Gather quantities (+ 1 to tempPocketSlotQuantities so that even if setting to 0 we know which indices to target)
            totalQuantity += tempItem.quantity;
            tempPocketSlotQuantities[itemLookupIndex] = (tempItem.quantity <= count ? 0 : tempItem.quantity - count) + 1;
        }
    }

    if (totalQuantity >= count) // We have enough of the item
    {
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        if (CurMapIsSecretBase() == TRUE)
        {
            VarSet(VAR_SECRET_BASE_LOW_TV_FLAGS, VarGet(VAR_SECRET_BASE_LOW_TV_FLAGS) | SECRET_BASE_USED_BAG);
            VarSet(VAR_SECRET_BASE_LAST_ITEM_USED, itemId);
        }

<<<<<<< HEAD
        var = GetItemListPosition(pocket);
        if (itemPocket->capacity > var
         && itemPocket->itemSlots[var].itemId == itemId)
        {
            ownedCount = GetBagItemQuantity(&itemPocket->itemSlots[var].quantity);
            if (ownedCount >= count)
            {
                SetBagItemQuantity(&itemPocket->itemSlots[var].quantity, ownedCount - count);
                count = 0;
            }
            else
            {
                count -= ownedCount;
                SetBagItemQuantity(&itemPocket->itemSlots[var].quantity, 0);
            }

            if (GetBagItemQuantity(&itemPocket->itemSlots[var].quantity) == 0)
                itemPocket->itemSlots[var].itemId = ITEM_NONE;

            if (count == 0)
                return TRUE;
        }

        for (i = 0; i < itemPocket->capacity; i++)
        {
            if (itemPocket->itemSlots[i].itemId == itemId)
            {
                ownedCount = GetBagItemQuantity(&itemPocket->itemSlots[i].quantity);
                if (ownedCount >= count)
                {
                    SetBagItemQuantity(&itemPocket->itemSlots[i].quantity, ownedCount - count);
                    count = 0;
                }
                else
                {
                    count -= ownedCount;
                    SetBagItemQuantity(&itemPocket->itemSlots[i].quantity, 0);
                }

                if (GetBagItemQuantity(&itemPocket->itemSlots[i].quantity) == 0)
                    itemPocket->itemSlots[i].itemId = ITEM_NONE;

                if (count == 0)
                    return TRUE;
            }
        }
        return TRUE;
    }
}

u8 GetPocketByItemId(u16 itemId)
{
    return ItemId_GetPocket(itemId);
}

void ClearItemSlots(struct ItemSlot *itemSlots, u8 itemCount)
{
    u16 i;

    for (i = 0; i < itemCount; i++)
    {
        itemSlots[i].itemId = ITEM_NONE;
        SetBagItemQuantity(&itemSlots[i].quantity, 0);
    }
}

static s32 FindFreePCItemSlot(void)
{
    s8 i;

    for (i = 0; i < PC_ITEMS_COUNT; i++)
    {
        if (gSaveBlock1Ptr->pcItems[i].itemId == ITEM_NONE)
            return i;
    }
    return -1;
}

u8 CountUsedPCItemSlots(void)
{
    u8 usedSlots = 0;
    u8 i;

    for (i = 0; i < PC_ITEMS_COUNT; i++)
    {
        if (gSaveBlock1Ptr->pcItems[i].itemId != ITEM_NONE)
=======
        // Update the quantities correctly with the items removed
        for (--itemRemoveIndex; itemRemoveIndex < itemLookupIndex; itemRemoveIndex++)
        {
            if (tempPocketSlotQuantities[itemRemoveIndex] > 0)
                BagPocket_SetSlotItemIdAndCount(pocket, itemRemoveIndex, itemId, tempPocketSlotQuantities[itemRemoveIndex] - 1);
        }
    }

    if (totalQuantity == count)
        BagPocket_CompactItems(pocket);

    Free(tempPocketSlotQuantities);
    return totalQuantity >= count;
}

bool32 RemoveBagItem(u16 itemId, u16 count)
{
    if (GetItemPocket(itemId) >= POCKETS_COUNT || itemId == ITEM_NONE)
        return FALSE;

    // check Battle Pyramid Bag
    if (CurrentBattlePyramidLocation() != PYRAMID_LOCATION_NONE || FlagGet(FLAG_STORING_ITEMS_IN_PYRAMID_BAG) == TRUE)
        return RemovePyramidBagItem(itemId, count);

    return BagPocket_RemoveItem(&gBagPockets[GetItemPocket(itemId)], itemId, count);
}

static u8 NONNULL BagPocket_CountUsedItemSlots(struct BagPocket *pocket)
{
    u8 usedSlots = 0;

    for (u32 i = 0; i < pocket->capacity; i++)
    {
        if (BagPocket_GetSlotData(pocket, i).itemId != ITEM_NONE)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            usedSlots++;
    }
    return usedSlots;
}

<<<<<<< HEAD
bool8 CheckPCHasItem(u16 itemId, u16 count)
{
    u8 i;

    for (i = 0; i < PC_ITEMS_COUNT; i++)
    {
        if (gSaveBlock1Ptr->pcItems[i].itemId == itemId && GetPCItemQuantity(&gSaveBlock1Ptr->pcItems[i].quantity) >= count)
=======
u8 CountUsedPCItemSlots(void)
{
    struct BagPocket dummyPocket = DUMMY_PC_BAG_POCKET;
    return BagPocket_CountUsedItemSlots(&dummyPocket);
}

static bool32 NONNULL BagPocket_CheckPocketForItemCount(struct BagPocket *pocket, u16 itemId, u16 count)
{
    struct ItemSlot tempItem;

    for (u32 i = 0; i < pocket->capacity; i++)
    {
        tempItem = BagPocket_GetSlotData(pocket, i);
        if (tempItem.itemId == itemId && tempItem.quantity >= count)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            return TRUE;
    }
    return FALSE;
}

<<<<<<< HEAD
bool8 CheckPCHasSpace(u16 itemId, u16 count)
{
    u8 i;
    u16 ownedCount = 0;

    if (InBattlePyramid() || FlagGet(FLAG_STORING_ITEMS_IN_PYRAMID_BAG) == TRUE)
    {
        return FALSE;
    }

    for (i = 0; i < PC_ITEMS_COUNT; i++)  // Get owned count
    {
        if (gSaveBlock1Ptr->pcItems[i].itemId == itemId)
            ownedCount = GetPCItemQuantity(&gSaveBlock1Ptr->pcItems[i].quantity);
    }

    if (ownedCount + count <= MAX_PC_ITEM_CAPACITY)  // If there's room in already existing slot
    {
        return TRUE;
    }

    // Check space in empty item slots
    if (count > 0)
    {
        for (i = 0; i < PC_ITEMS_COUNT; i++)
        {
            if (gSaveBlock1Ptr->pcItems[i].itemId == ITEM_NONE)
            {
                if (count > PC_ITEMS_COUNT)
                {
                    count -= PC_ITEMS_COUNT;
                }
                else
                {
                    count = 0; //should be return TRUE, but that doesn't match
                    break;
                }
            }
        }
        if (count > 0)
            return FALSE; // No more item slots. The bag is full
    }

    return TRUE;
}

bool8 AddPCItem(u16 itemId, u16 count)
{
    u8 i;
    s8 freeSlot;
    u16 ownedCount;
    struct ItemSlot *newItems;

    // Copy PC items
    newItems = AllocZeroed(sizeof(gSaveBlock1Ptr->pcItems));
    memcpy(newItems, gSaveBlock1Ptr->pcItems, sizeof(gSaveBlock1Ptr->pcItems));

    // Use any item slots that already contain this item
    for (i = 0; i < PC_ITEMS_COUNT; i++)
    {
        if (newItems[i].itemId == itemId)
        {
            ownedCount = GetPCItemQuantity(&newItems[i].quantity);
            if (ownedCount + count <= MAX_PC_ITEM_CAPACITY)
            {
                SetPCItemQuantity(&newItems[i].quantity, ownedCount + count);
                memcpy(gSaveBlock1Ptr->pcItems, newItems, sizeof(gSaveBlock1Ptr->pcItems));
                Free(newItems);
                return TRUE;
            }
            count += ownedCount - MAX_PC_ITEM_CAPACITY;
            SetPCItemQuantity(&newItems[i].quantity, MAX_PC_ITEM_CAPACITY);
            if (count == 0)
            {
                memcpy(gSaveBlock1Ptr->pcItems, newItems, sizeof(gSaveBlock1Ptr->pcItems));
                Free(newItems);
                return TRUE;
            }
        }
    }

    // Put any remaining items into a new item slot.
    if (count > 0)
    {
        freeSlot = FindFreePCItemSlot();
        if (freeSlot == -1)
        {
            Free(newItems);
            return FALSE;
        }
        else
        {
            newItems[freeSlot].itemId = itemId;
            SetPCItemQuantity(&newItems[freeSlot].quantity, count);
        }
    }

    // Copy items back to the PC
    memcpy(gSaveBlock1Ptr->pcItems, newItems, sizeof(gSaveBlock1Ptr->pcItems));
    Free(newItems);
    return TRUE;
=======
bool32 CheckPCHasItem(u16 itemId, u16 count)
{
    struct BagPocket dummyPocket = DUMMY_PC_BAG_POCKET;
    return BagPocket_CheckPocketForItemCount(&dummyPocket, itemId, count);
}

bool32 AddPCItem(u16 itemId, u16 count)
{
    struct BagPocket dummyPocket = DUMMY_PC_BAG_POCKET;
    return BagPocket_AddItem(&dummyPocket, itemId, count);
}

static void NONNULL BagPocket_CompactItems(struct BagPocket *pocket)
{
    struct ItemSlot tempItem;
    u32 slotCursor = 0;
    for (u32 i = 0; i < pocket->capacity; i++)
    {
        tempItem = BagPocket_GetSlotData(pocket, i);
        if (tempItem.itemId == ITEM_NONE)
        {
            if (!slotCursor)
                slotCursor = i + 1;
        }
        else if (slotCursor > 0)
        {
            BagPocket_SetSlotData(pocket, slotCursor++ - 1, tempItem);
            BagPocket_SetSlotItemIdAndCount(pocket, i, ITEM_NONE, 0);
        }
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void RemovePCItem(u8 index, u16 count)
{
<<<<<<< HEAD
    gSaveBlock1Ptr->pcItems[index].quantity -= count;
    if (gSaveBlock1Ptr->pcItems[index].quantity == 0)
    {
        gSaveBlock1Ptr->pcItems[index].itemId = ITEM_NONE;
        CompactPCItems();
    }
=======
    struct BagPocket dummyPocket = DUMMY_PC_BAG_POCKET;

    // Get id, quantity at slot
    struct ItemSlot tempItem = BagPocket_GetSlotData(&dummyPocket, index);

    // Remove quantity
    BagPocket_SetSlotItemIdAndCount(&dummyPocket, index, tempItem.itemId, tempItem.quantity - count);

    // Compact if necessary
    if (tempItem.quantity == 0)
        BagPocket_CompactItems(&dummyPocket);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void CompactPCItems(void)
{
<<<<<<< HEAD
    u16 i;
    u16 j;

    for (i = 0; i < PC_ITEMS_COUNT - 1; i++)
    {
        for (j = i + 1; j < PC_ITEMS_COUNT; j++)
        {
            if (gSaveBlock1Ptr->pcItems[i].itemId == 0)
            {
                struct ItemSlot temp = gSaveBlock1Ptr->pcItems[i];
                gSaveBlock1Ptr->pcItems[i] = gSaveBlock1Ptr->pcItems[j];
                gSaveBlock1Ptr->pcItems[j] = temp;
            }
        }
    }
=======
    struct BagPocket dummyPocket = DUMMY_PC_BAG_POCKET;
    BagPocket_CompactItems(&dummyPocket);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void SwapRegisteredBike(void)
{
    switch (gSaveBlock1Ptr->registeredItem)
    {
    case ITEM_MACH_BIKE:
        gSaveBlock1Ptr->registeredItem = ITEM_ACRO_BIKE;
        break;
    case ITEM_ACRO_BIKE:
        gSaveBlock1Ptr->registeredItem = ITEM_MACH_BIKE;
        break;
    }
}

<<<<<<< HEAD
u16 BagGetItemIdByPocketPosition(u8 pocketId, u16 pocketPos)
{
    return gBagPockets[pocketId - 1].itemSlots[pocketPos].itemId;
}

u16 BagGetQuantityByPocketPosition(u8 pocketId, u16 pocketPos)
{
    return GetBagItemQuantity(&gBagPockets[pocketId - 1].itemSlots[pocketPos].quantity);
}

static void SwapItemSlots(struct ItemSlot *a, struct ItemSlot *b)
{
    struct ItemSlot temp;
    SWAP(*a, *b, temp);
}

void CompactItemsInBagPocket(struct BagPocket *bagPocket)
{
    u16 i, j;

    for (i = 0; i < bagPocket->capacity - 1; i++)
    {
        for (j = i + 1; j < bagPocket->capacity; j++)
        {
            if (GetBagItemQuantity(&bagPocket->itemSlots[i].quantity) == 0)
                SwapItemSlots(&bagPocket->itemSlots[i], &bagPocket->itemSlots[j]);
        }
    }
}

void SortBerriesOrTMHMs(struct BagPocket *bagPocket)
{
    u16 i, j;

    for (i = 0; i < bagPocket->capacity - 1; i++)
    {
        for (j = i + 1; j < bagPocket->capacity; j++)
        {
            if (GetBagItemQuantity(&bagPocket->itemSlots[i].quantity) != 0)
            {
                if (GetBagItemQuantity(&bagPocket->itemSlots[j].quantity) == 0)
                    continue;
                if (bagPocket->itemSlots[i].itemId <= bagPocket->itemSlots[j].itemId)
                    continue;
            }
            SwapItemSlots(&bagPocket->itemSlots[i], &bagPocket->itemSlots[j]);
        }
    }
}

void MoveItemSlotInList(struct ItemSlot* itemSlots_, u32 from, u32 to_)
{
    // dumb assignments needed to match
    struct ItemSlot *itemSlots = itemSlots_;
    u32 to = to_;

    if (from != to)
    {
        s16 i, count;
        struct ItemSlot firstSlot = itemSlots[from];

        if (to > from)
        {
            to--;
            for (i = from, count = to; i < count; i++)
                itemSlots[i] = itemSlots[i + 1];
        }
        else
        {
            for (i = from, count = to; i > count; i--)
                itemSlots[i] = itemSlots[i - 1];
        }
        itemSlots[to] = firstSlot;
    }
}

void ClearBag(void)
{
    u16 i;

    for (i = 0; i < POCKETS_COUNT; i++)
    {
        ClearItemSlots(gBagPockets[i].itemSlots, gBagPockets[i].capacity);
    }
}

u16 CountTotalItemQuantityInBag(u16 itemId)
{
    u16 i;
    u16 ownedCount = 0;
    struct BagPocket *bagPocket = &gBagPockets[ItemId_GetPocket(itemId) - 1];

    for (i = 0; i < bagPocket->capacity; i++)
    {
        if (bagPocket->itemSlots[i].itemId == itemId)
            ownedCount += GetBagItemQuantity(&bagPocket->itemSlots[i].quantity);
=======
void CompactItemsInBagPocket(enum Pocket pocketId)
{
    BagPocket_CompactItems(&gBagPockets[pocketId]);
}

static inline void NONNULL BagPocket_MoveItemSlot(struct BagPocket *pocket, u32 from, u32 to)
{
    if (from != to)
    {
        s8 shift = (to > from) ? 1 : -1;
        if (to > from)
            to--;

        // Record the values at "from"
        struct ItemSlot fromSlot = BagPocket_GetSlotData(pocket, from);

        // Shuffle items between "to" and "from"
        for (u32 i = from; i != to; i += shift)
            BagPocket_SetSlotData(pocket, i, BagPocket_GetSlotData(pocket, i + shift));

        // Move the saved "from" to "to"
        BagPocket_SetSlotData(pocket, to, fromSlot);
    }
}

void MoveItemSlotInPocket(enum Pocket pocketId, u32 from, u32 to)
{
    BagPocket_MoveItemSlot(&gBagPockets[pocketId], from, to);
}

void MoveItemSlotInPC(struct ItemSlot *itemSlots, u32 from, u32 to)
{
    struct BagPocket dummyPocket = DUMMY_PC_BAG_POCKET;
    return BagPocket_MoveItemSlot(&dummyPocket, from, to);
}

void ClearBag(void)
{
    CpuFastFill(0, &gSaveBlock1Ptr->bag, sizeof(struct Bag));
}

static inline u16 NONNULL BagPocket_CountTotalItemQuantity(struct BagPocket *pocket, u16 itemId)
{
    u32 ownedCount = 0;
    struct ItemSlot tempItem;

    for (u32 i = 0; i < pocket->capacity; i++)
    {
        tempItem = BagPocket_GetSlotData(pocket, i);
        if (tempItem.itemId == itemId)
            ownedCount += tempItem.quantity;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }

    return ownedCount;
}

<<<<<<< HEAD
static bool8 CheckPyramidBagHasItem(u16 itemId, u16 count)
{
    u8 i;
    u16 *items = gSaveBlock2Ptr->frontier.pyramidBag.itemId[gSaveBlock2Ptr->frontier.lvlMode];
    u8 *quantities = gSaveBlock2Ptr->frontier.pyramidBag.quantity[gSaveBlock2Ptr->frontier.lvlMode];
=======
u16 CountTotalItemQuantityInBag(u16 itemId)
{
    return BagPocket_CountTotalItemQuantity(&gBagPockets[GetItemPocket(itemId)], itemId);
}

static bool32 CheckPyramidBagHasItem(u16 itemId, u16 count)
{
    u8 i;
    u16 *items = gSaveBlock2Ptr->frontier.pyramidBag.itemId[gSaveBlock2Ptr->frontier.lvlMode];
#if MAX_PYRAMID_BAG_ITEM_CAPACITY > 255
    u16 *quantities = gSaveBlock2Ptr->frontier.pyramidBag.quantity[gSaveBlock2Ptr->frontier.lvlMode];
#else
    u8 *quantities = gSaveBlock2Ptr->frontier.pyramidBag.quantity[gSaveBlock2Ptr->frontier.lvlMode];
#endif
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    for (i = 0; i < PYRAMID_BAG_ITEMS_COUNT; i++)
    {
        if (items[i] == itemId)
        {
            if (quantities[i] >= count)
                return TRUE;

            count -= quantities[i];
            if (count == 0)
                return TRUE;
        }
    }

    return FALSE;
}

<<<<<<< HEAD
static bool8 CheckPyramidBagHasSpace(u16 itemId, u16 count)
{
    u8 i;
    u16 *items = gSaveBlock2Ptr->frontier.pyramidBag.itemId[gSaveBlock2Ptr->frontier.lvlMode];
    u8 *quantities = gSaveBlock2Ptr->frontier.pyramidBag.quantity[gSaveBlock2Ptr->frontier.lvlMode];
=======
static bool32 CheckPyramidBagHasSpace(u16 itemId, u16 count)
{
    u8 i;
    u16 *items = gSaveBlock2Ptr->frontier.pyramidBag.itemId[gSaveBlock2Ptr->frontier.lvlMode];
#if MAX_PYRAMID_BAG_ITEM_CAPACITY > 255
    u16 *quantities = gSaveBlock2Ptr->frontier.pyramidBag.quantity[gSaveBlock2Ptr->frontier.lvlMode];
#else
    u8 *quantities = gSaveBlock2Ptr->frontier.pyramidBag.quantity[gSaveBlock2Ptr->frontier.lvlMode];
#endif
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    for (i = 0; i < PYRAMID_BAG_ITEMS_COUNT; i++)
    {
        if (items[i] == itemId || items[i] == ITEM_NONE)
        {
<<<<<<< HEAD
            if (quantities[i] + count <= MAX_BAG_ITEM_CAPACITY)
                return TRUE;

            count = (quantities[i] + count) - MAX_BAG_ITEM_CAPACITY;
=======
            if (quantities[i] + count <= MAX_PYRAMID_BAG_ITEM_CAPACITY)
                return TRUE;

            count = (quantities[i] + count) - MAX_PYRAMID_BAG_ITEM_CAPACITY;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            if (count == 0)
                return TRUE;
        }
    }

    return FALSE;
}

<<<<<<< HEAD
bool8 AddPyramidBagItem(u16 itemId, u16 count)
=======
bool32 AddPyramidBagItem(u16 itemId, u16 count)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    u16 i;

    u16 *items = gSaveBlock2Ptr->frontier.pyramidBag.itemId[gSaveBlock2Ptr->frontier.lvlMode];
<<<<<<< HEAD
    u8 *quantities = gSaveBlock2Ptr->frontier.pyramidBag.quantity[gSaveBlock2Ptr->frontier.lvlMode];

    u16 *newItems = Alloc(PYRAMID_BAG_ITEMS_COUNT * sizeof(*newItems));
    u8 *newQuantities = Alloc(PYRAMID_BAG_ITEMS_COUNT * sizeof(*newQuantities));
=======
    u16 *newItems = Alloc(PYRAMID_BAG_ITEMS_COUNT * sizeof(*newItems));

#if MAX_PYRAMID_BAG_ITEM_CAPACITY > 255
    u16 *quantities = gSaveBlock2Ptr->frontier.pyramidBag.quantity[gSaveBlock2Ptr->frontier.lvlMode];
    u16 *newQuantities = Alloc(PYRAMID_BAG_ITEMS_COUNT * sizeof(*newQuantities));
#else
    u8 *quantities = gSaveBlock2Ptr->frontier.pyramidBag.quantity[gSaveBlock2Ptr->frontier.lvlMode];
    u8 *newQuantities = Alloc(PYRAMID_BAG_ITEMS_COUNT * sizeof(*newQuantities));
#endif
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    memcpy(newItems, items, PYRAMID_BAG_ITEMS_COUNT * sizeof(*newItems));
    memcpy(newQuantities, quantities, PYRAMID_BAG_ITEMS_COUNT * sizeof(*newQuantities));

    for (i = 0; i < PYRAMID_BAG_ITEMS_COUNT; i++)
    {
<<<<<<< HEAD
        if (newItems[i] == itemId && newQuantities[i] < MAX_BAG_ITEM_CAPACITY)
        {
            newQuantities[i] += count;
            if (newQuantities[i] > MAX_BAG_ITEM_CAPACITY)
            {
                count = newQuantities[i] - MAX_BAG_ITEM_CAPACITY;
                newQuantities[i] = MAX_BAG_ITEM_CAPACITY;
=======
        if (newItems[i] == itemId && newQuantities[i] < MAX_PYRAMID_BAG_ITEM_CAPACITY)
        {
            newQuantities[i] += count;
            if (newQuantities[i] > MAX_PYRAMID_BAG_ITEM_CAPACITY)
            {
                count = newQuantities[i] - MAX_PYRAMID_BAG_ITEM_CAPACITY;
                newQuantities[i] = MAX_PYRAMID_BAG_ITEM_CAPACITY;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            }
            else
            {
                count = 0;
            }

            if (count == 0)
                break;
        }
    }

    if (count > 0)
    {
        for (i = 0; i < PYRAMID_BAG_ITEMS_COUNT; i++)
        {
            if (newItems[i] == ITEM_NONE)
            {
                newItems[i] = itemId;
                newQuantities[i] = count;
<<<<<<< HEAD
                if (newQuantities[i] > MAX_BAG_ITEM_CAPACITY)
                {
                    count = newQuantities[i] - MAX_BAG_ITEM_CAPACITY;
                    newQuantities[i] = MAX_BAG_ITEM_CAPACITY;
=======
                if (newQuantities[i] > MAX_PYRAMID_BAG_ITEM_CAPACITY)
                {
                    count = newQuantities[i] - MAX_PYRAMID_BAG_ITEM_CAPACITY;
                    newQuantities[i] = MAX_PYRAMID_BAG_ITEM_CAPACITY;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                }
                else
                {
                    count = 0;
                }

                if (count == 0)
                    break;
            }
        }
    }

    if (count == 0)
    {
        memcpy(items, newItems, PYRAMID_BAG_ITEMS_COUNT * sizeof(*items));
        memcpy(quantities, newQuantities, PYRAMID_BAG_ITEMS_COUNT * sizeof(*quantities));
        Free(newItems);
        Free(newQuantities);
        return TRUE;
    }
    else
    {
        Free(newItems);
        Free(newQuantities);
        return FALSE;
    }
}

<<<<<<< HEAD
bool8 RemovePyramidBagItem(u16 itemId, u16 count)
=======
bool32 RemovePyramidBagItem(u16 itemId, u16 count)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    u16 i;

    u16 *items = gSaveBlock2Ptr->frontier.pyramidBag.itemId[gSaveBlock2Ptr->frontier.lvlMode];
<<<<<<< HEAD
    u8 *quantities = gSaveBlock2Ptr->frontier.pyramidBag.quantity[gSaveBlock2Ptr->frontier.lvlMode];
=======
#if MAX_PYRAMID_BAG_ITEM_CAPACITY > 255
    u16 *quantities = gSaveBlock2Ptr->frontier.pyramidBag.quantity[gSaveBlock2Ptr->frontier.lvlMode];
#else
    u8 *quantities = gSaveBlock2Ptr->frontier.pyramidBag.quantity[gSaveBlock2Ptr->frontier.lvlMode];
#endif
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    i = gPyramidBagMenuState.cursorPosition + gPyramidBagMenuState.scrollPosition;
    if (items[i] == itemId && quantities[i] >= count)
    {
        quantities[i] -= count;
        if (quantities[i] == 0)
            items[i] = ITEM_NONE;
        return TRUE;
    }
    else
    {
        u16 *newItems = Alloc(PYRAMID_BAG_ITEMS_COUNT * sizeof(*newItems));
<<<<<<< HEAD
        u8 *newQuantities = Alloc(PYRAMID_BAG_ITEMS_COUNT * sizeof(*newQuantities));
=======
    #if MAX_PYRAMID_BAG_ITEM_CAPACITY > 255
        u16 *newQuantities = Alloc(PYRAMID_BAG_ITEMS_COUNT * sizeof(*newQuantities));
    #else
        u8 *newQuantities = Alloc(PYRAMID_BAG_ITEMS_COUNT * sizeof(*newQuantities));
    #endif
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

        memcpy(newItems, items, PYRAMID_BAG_ITEMS_COUNT * sizeof(*newItems));
        memcpy(newQuantities, quantities, PYRAMID_BAG_ITEMS_COUNT * sizeof(*newQuantities));

        for (i = 0; i < PYRAMID_BAG_ITEMS_COUNT; i++)
        {
            if (newItems[i] == itemId)
            {
                if (newQuantities[i] >= count)
                {
                    newQuantities[i] -= count;
                    count = 0;
                    if (newQuantities[i] == 0)
                        newItems[i] = ITEM_NONE;
                }
                else
                {
                    count -= newQuantities[i];
                    newQuantities[i] = 0;
                    newItems[i] = ITEM_NONE;
                }

                if (count == 0)
                    break;
            }
        }

        if (count == 0)
        {
            memcpy(items, newItems, PYRAMID_BAG_ITEMS_COUNT * sizeof(*items));
            memcpy(quantities, newQuantities, PYRAMID_BAG_ITEMS_COUNT * sizeof(*quantities));
            Free(newItems);
            Free(newQuantities);
            return TRUE;
        }
        else
        {
            Free(newItems);
            Free(newQuantities);
            return FALSE;
        }
    }
}

static u16 SanitizeItemId(u16 itemId)
{
    if (itemId >= ITEMS_COUNT)
        return ITEM_NONE;
<<<<<<< HEAD
    if (itemId == ITEM_SITRUS_BERRY && (gSaveBlock1Ptr->tx_Mode_New_Citrus == 0))
        return ITEM_UNUSED_BERRY_1;
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    else
        return itemId;
}

<<<<<<< HEAD
const u8 *ItemId_GetName(u16 itemId)
{
    return gItems[SanitizeItemId(itemId)].name;
}

// Unused
u16 ItemId_GetId(u16 itemId)
{
    return gItems[SanitizeItemId(itemId)].itemId;
}

u16 ItemId_GetPrice(u16 itemId)
{
    return gItems[SanitizeItemId(itemId)].price;
}

u8 ItemId_GetHoldEffect(u16 itemId)
{
    return gItems[SanitizeItemId(itemId)].holdEffect;
}

u8 ItemId_GetHoldEffectParam(u16 itemId)
{
    return gItems[SanitizeItemId(itemId)].holdEffectParam;
}

const u8 *ItemId_GetDescription(u16 itemId)
{
    return gItems[SanitizeItemId(itemId)].description;
}

u8 ItemId_GetImportance(u16 itemId)
{
    if ((FlagGet(FLAG_FINITE_TMS) == TRUE))
        return gItems2[SanitizeItemId(itemId)].importance;
    else
        return gItems[SanitizeItemId(itemId)].importance;
}

// Unused
u8 ItemId_GetRegistrability(u16 itemId)
{
    return gItems[SanitizeItemId(itemId)].registrability;
}

u8 ItemId_GetPocket(u16 itemId)
{
    return gItems[SanitizeItemId(itemId)].pocket;
}

u8 ItemId_GetType(u16 itemId)
{
    return gItems[SanitizeItemId(itemId)].type;
}

ItemUseFunc ItemId_GetFieldFunc(u16 itemId)
{
    return gItems[SanitizeItemId(itemId)].fieldUseFunc;
}

u8 ItemId_GetBattleUsage(u16 itemId)
{
    return gItems[SanitizeItemId(itemId)].battleUsage;
}

ItemUseFunc ItemId_GetBattleFunc(u16 itemId)
{
    return gItems[SanitizeItemId(itemId)].battleUseFunc;
}

u8 ItemId_GetSecondaryId(u16 itemId)
{
    return gItems[SanitizeItemId(itemId)].secondaryId;
}

//tx_randomizer_and_challenges
#define RANDOM_ITEM_COUNT ARRAY_COUNT(sRandomValidItems)
static const u16 sRandomValidItems[] =
{
    // Balls,
    ITEM_MASTER_BALL,
    ITEM_ULTRA_BALL,
    ITEM_GREAT_BALL,
    ITEM_POKE_BALL,
    ITEM_SAFARI_BALL,
    ITEM_NET_BALL,
    ITEM_DIVE_BALL,
    ITEM_NEST_BALL,
    ITEM_REPEAT_BALL,
    ITEM_TIMER_BALL,
    ITEM_LUXURY_BALL,
    ITEM_PREMIER_BALL,
    // Pokemon Items,
    ITEM_POTION,
    ITEM_ANTIDOTE,
    ITEM_BURN_HEAL,
    ITEM_ICE_HEAL,
    ITEM_AWAKENING,
    ITEM_PARALYZE_HEAL,
    ITEM_FULL_RESTORE,
    ITEM_MAX_POTION,
    ITEM_HYPER_POTION,
    ITEM_SUPER_POTION,
    ITEM_FULL_HEAL,
    ITEM_REVIVE,
    ITEM_MAX_REVIVE,
    ITEM_FRESH_WATER,
    ITEM_SODA_POP,
    ITEM_LEMONADE,
    ITEM_MOOMOO_MILK,
    ITEM_ENERGY_POWDER,
    ITEM_ENERGY_ROOT,
    ITEM_HEAL_POWDER,
    ITEM_REVIVAL_HERB,
    ITEM_ETHER,
    ITEM_MAX_ETHER,
    ITEM_ELIXIR,
    ITEM_MAX_ELIXIR,
    ITEM_LAVA_COOKIE,
    ITEM_BLUE_FLUTE,
    ITEM_YELLOW_FLUTE,
    ITEM_RED_FLUTE,
    ITEM_BLACK_FLUTE,
    ITEM_WHITE_FLUTE,
    ITEM_BERRY_JUICE,
    ITEM_SACRED_ASH,
    ITEM_SHOAL_SALT,
    ITEM_SHOAL_SHELL,
    ITEM_RED_SHARD,
    ITEM_BLUE_SHARD,
    ITEM_YELLOW_SHARD,
    ITEM_GREEN_SHARD,
    ITEM_FERTILIZER,
    ITEM_HP_UP,
    ITEM_PROTEIN,
    ITEM_IRON,
    ITEM_CARBOS,
    ITEM_CALCIUM,
    ITEM_RARE_CANDY,
    ITEM_PP_UP,
    ITEM_ZINC,
    ITEM_PP_MAX,
    ITEM_GUARD_SPEC,
    ITEM_DIRE_HIT,
    ITEM_X_ATTACK,
    ITEM_X_DEFEND,
    ITEM_X_SPEED,
    ITEM_X_ACCURACY,
    ITEM_X_SPECIAL,
    ITEM_POKE_DOLL,
    ITEM_FLUFFY_TAIL,
    ITEM_SUPER_REPEL,
    ITEM_MAX_REPEL,
    ITEM_ESCAPE_ROPE,
    ITEM_REPEL,
    ITEM_SUN_STONE,
    ITEM_MOON_STONE,
    ITEM_FIRE_STONE,
    ITEM_THUNDER_STONE,
    ITEM_WATER_STONE,
    ITEM_LEAF_STONE,
    // Mails,
    ITEM_ORANGE_MAIL,
    ITEM_HARBOR_MAIL,
    ITEM_GLITTER_MAIL,
    ITEM_MECH_MAIL,
    ITEM_WOOD_MAIL,
    ITEM_WAVE_MAIL,
    ITEM_BEAD_MAIL,
    ITEM_SHADOW_MAIL,
    ITEM_TROPIC_MAIL,
    ITEM_DREAM_MAIL,
    ITEM_FAB_MAIL,
    ITEM_RETRO_MAIL,
    // Berries,
    ITEM_CHERI_BERRY,
    ITEM_CHESTO_BERRY,
    ITEM_PECHA_BERRY,
    ITEM_RAWST_BERRY,
    ITEM_ASPEAR_BERRY,
    ITEM_LEPPA_BERRY,
    ITEM_ORAN_BERRY,
    ITEM_PERSIM_BERRY,
    ITEM_LUM_BERRY,
    ITEM_SITRUS_BERRY,
    ITEM_FIGY_BERRY,
    ITEM_WIKI_BERRY,
    ITEM_MAGO_BERRY,
    ITEM_AGUAV_BERRY,
    ITEM_IAPAPA_BERRY,
    ITEM_RAZZ_BERRY,
    ITEM_BLUK_BERRY,
    ITEM_NANAB_BERRY,
    ITEM_WEPEAR_BERRY,
    ITEM_PINAP_BERRY,
    ITEM_POMEG_BERRY,
    ITEM_KELPSY_BERRY,
    ITEM_QUALOT_BERRY,
    ITEM_HONDEW_BERRY,
    ITEM_GREPA_BERRY,
    ITEM_TAMATO_BERRY,
    ITEM_CORNN_BERRY,
    ITEM_MAGOST_BERRY,
    ITEM_RABUTA_BERRY,
    ITEM_NOMEL_BERRY,
    ITEM_SPELON_BERRY,
    ITEM_PAMTRE_BERRY,
    ITEM_WATMEL_BERRY,
    ITEM_DURIN_BERRY,
    ITEM_BELUE_BERRY,
    ITEM_LIECHI_BERRY,
    ITEM_GANLON_BERRY,
    ITEM_SALAC_BERRY,
    ITEM_PETAYA_BERRY,
    ITEM_APICOT_BERRY,
    ITEM_LANSAT_BERRY,
    ITEM_STARF_BERRY,
    ITEM_ENIGMA_BERRY,
    // Battle Held items,
    ITEM_BRIGHT_POWDER,
    ITEM_WHITE_HERB,
    ITEM_MACHO_BRACE,
    ITEM_EXP_SHARE_SMALL,
    ITEM_QUICK_CLAW,
    ITEM_SOOTHE_BELL,
    ITEM_MENTAL_HERB,
    ITEM_CHOICE_BAND,
    ITEM_KINGS_ROCK,
    ITEM_SILVER_POWDER,
    ITEM_AMULET_COIN,
    ITEM_CLEANSE_TAG,
    ITEM_SOUL_DEW,
    ITEM_DEEP_SEA_TOOTH,
    ITEM_DEEP_SEA_SCALE,
    ITEM_SMOKE_BALL,
    ITEM_EVERSTONE,
    ITEM_FOCUS_BAND,
    ITEM_LUCKY_EGG,
    ITEM_SCOPE_LENS,
    ITEM_METAL_COAT,
    ITEM_LEFTOVERS,
    ITEM_DRAGON_SCALE,
    ITEM_LIGHT_BALL,
    ITEM_SOFT_SAND,
    ITEM_HARD_STONE,
    ITEM_MIRACLE_SEED,
    ITEM_BLACK_GLASSES,
    ITEM_BLACK_BELT,
    ITEM_MAGNET,
    ITEM_MYSTIC_WATER,
    ITEM_SHARP_BEAK,
    ITEM_POISON_BARB,
    ITEM_NEVER_MELT_ICE,
    ITEM_SPELL_TAG,
    ITEM_TWISTED_SPOON,
    ITEM_CHARCOAL,
    ITEM_DRAGON_FANG,
    ITEM_SILK_SCARF,
    ITEM_UP_GRADE,
    ITEM_SHELL_BELL,
    ITEM_SEA_INCENSE,
    ITEM_LAX_INCENSE,
    ITEM_LUCKY_PUNCH,
    ITEM_METAL_POWDER,
    ITEM_THICK_CLUB,
    ITEM_STICK,
    ITEM_FAIRY_GEM,
    // Contest held items,
    ITEM_RED_SCARF,
    ITEM_BLUE_SCARF,
    ITEM_PINK_SCARF,
    ITEM_GREEN_SCARF,
    ITEM_YELLOW_SCARF,
};

u16 RandomItemId(u16 itemId)
{
    u8 mapId = NuzlockeGetCurrentRegionMapSectionId();
    if (ItemId_GetPocket(itemId) == POCKET_TM_HM)
    {
        if (itemId != ITEM_HM01
            && itemId != ITEM_HM02
            && itemId != ITEM_HM03
            && itemId != ITEM_HM04
            && itemId != ITEM_HM05
            && itemId != ITEM_HM06
            && itemId != ITEM_HM07
            && itemId != ITEM_HM08)
        {
            u8 i;
            itemId = ITEM_TM01 + RandomSeededModulo(itemId, 50);
            for (i = 0; i < 255; i++)
            {
                if (!CheckBagHasItem(itemId, 1))
                    break;
                itemId = ITEM_TM01 + RandomSeededModulo(itemId, 50);
            }
        }
    }
    else if (ItemId_GetPocket(itemId) != POCKET_KEY_ITEMS)
        itemId = sRandomValidItems[RandomSeededModulo(itemId + mapId, RANDOM_ITEM_COUNT)];

    return itemId;
}

u16 RandomItem(void)
{
    u16 itemId = RandomItemId(gSpecialVar_0x8000);

    gSpecialVar_0x8000 = itemId;
    return itemId;
}

u16 RandomItemHidden(void) //same as normal hidden item, but differen special var
{
    u16 itemId = RandomItemId(gSpecialVar_0x8005);

    gSpecialVar_0x8005 = itemId;
    return itemId;
}
=======
const u8 *GetItemName(u16 itemId)
{
    const u8 *name = gItemsInfo[SanitizeItemId(itemId)].name;

    return name == NULL ? gQuestionMarksItemName : name;
}

u32 GetItemPrice(u16 itemId)
{
    return gItemsInfo[SanitizeItemId(itemId)].price;
}

static bool32 DoesItemHavePluralName(u16 itemId)
{
    return gItemsInfo[SanitizeItemId(itemId)].pluralName != NULL;
}

static const u8 *GetItemPluralName(u16 itemId)
{
    return gItemsInfo[SanitizeItemId(itemId)].pluralName;
}

const u8 *GetItemEffect(u32 itemId)
{
    if (itemId == ITEM_ENIGMA_BERRY_E_READER)
    #if FREE_ENIGMA_BERRY == FALSE
        return gSaveBlock1Ptr->enigmaBerry.itemEffect;
    #else
        return 0;
    #endif //FREE_ENIGMA_BERRY
    else
        return gItemsInfo[SanitizeItemId(itemId)].effect;
}

u32 GetItemHoldEffect(u32 itemId)
{
    return gItemsInfo[SanitizeItemId(itemId)].holdEffect;
}

u32 GetItemHoldEffectParam(u32 itemId)
{
    return gItemsInfo[SanitizeItemId(itemId)].holdEffectParam;
}

const u8 *GetItemDescription(u16 itemId)
{
    return gItemsInfo[SanitizeItemId(itemId)].description;
}

u8 GetItemImportance(u16 itemId)
{
    return gItemsInfo[SanitizeItemId(itemId)].importance;
}

u8 GetItemConsumability(u16 itemId)
{
    return !gItemsInfo[SanitizeItemId(itemId)].notConsumed;
}

enum Pocket GetItemPocket(u16 itemId)
{
    return gItemsInfo[SanitizeItemId(itemId)].pocket;
}

u8 GetItemType(u16 itemId)
{
    return gItemsInfo[SanitizeItemId(itemId)].type;
}

ItemUseFunc GetItemFieldFunc(u16 itemId)
{
    return gItemsInfo[SanitizeItemId(itemId)].fieldUseFunc;
}

// Returns an item's battle effect script ID.
u8 GetItemBattleUsage(u16 itemId)
{
    u16 item = SanitizeItemId(itemId);
    // Handle E-Reader berries.
    if (item == ITEM_ENIGMA_BERRY_E_READER)
    {
        switch (GetItemEffectType(gSpecialVar_ItemId))
        {
            case ITEM_EFFECT_X_ITEM:
                return EFFECT_ITEM_INCREASE_STAT;
            case ITEM_EFFECT_HEAL_HP:
                return EFFECT_ITEM_RESTORE_HP;
            case ITEM_EFFECT_CURE_POISON:
            case ITEM_EFFECT_CURE_SLEEP:
            case ITEM_EFFECT_CURE_BURN:
            case ITEM_EFFECT_CURE_FREEZE_FROSTBITE:
            case ITEM_EFFECT_CURE_PARALYSIS:
            case ITEM_EFFECT_CURE_ALL_STATUS:
            case ITEM_EFFECT_CURE_CONFUSION:
            case ITEM_EFFECT_CURE_INFATUATION:
                return EFFECT_ITEM_CURE_STATUS;
            case ITEM_EFFECT_HEAL_PP:
                return EFFECT_ITEM_RESTORE_PP;
            default:
                return 0;
        }
    }
    else
        return gItemsInfo[item].battleUsage;
}

u32 GetItemSecondaryId(u32 itemId)
{
    return gItemsInfo[SanitizeItemId(itemId)].secondaryId;
}

u32 GetItemFlingPower(u32 itemId)
{
    return gItemsInfo[SanitizeItemId(itemId)].flingPower;
}


u32 GetItemStatus1Mask(u16 itemId)
{
    const u8 *effect = GetItemEffect(itemId);
    switch (effect[3])
    {
        case ITEM3_PARALYSIS:
            return STATUS1_PARALYSIS;
        case ITEM3_FREEZE:
            return STATUS1_FREEZE | STATUS1_FROSTBITE;
        case ITEM3_BURN:
            return STATUS1_BURN;
        case ITEM3_POISON:
            return STATUS1_PSN_ANY | STATUS1_TOXIC_COUNTER;
        case ITEM3_SLEEP:
            return STATUS1_SLEEP;
        case ITEM3_STATUS_ALL:
            return STATUS1_ANY | STATUS1_TOXIC_COUNTER;
    }
    return 0;
}

bool32 ItemHasVolatileFlag(u16 itemId, enum Volatile _volatile)
{
    const u8 *effect = GetItemEffect(itemId);
    switch (_volatile)
    {
    case VOLATILE_CONFUSION:
        return (effect[3] & ITEM3_STATUS_ALL) || (effect[3] & ITEM3_CONFUSION);
    case VOLATILE_INFATUATION:
        return (effect[3] & ITEM3_STATUS_ALL) || (effect[0] & ITEM0_INFATUATION);
    default:
        return FALSE;
    }
}

u32 GetItemSellPrice(u32 itemId)
{
    return GetItemPrice(itemId) / ITEM_SELL_FACTOR;
}

bool32 IsHoldEffectChoice(enum ItemHoldEffect holdEffect)
{
    return holdEffect == HOLD_EFFECT_CHOICE_BAND
        || holdEffect == HOLD_EFFECT_CHOICE_SCARF
        || holdEffect == HOLD_EFFECT_CHOICE_SPECS;
}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
