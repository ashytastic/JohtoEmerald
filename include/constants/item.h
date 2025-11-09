#ifndef GUARD_ITEM_CONSTANTS_H
#define GUARD_ITEM_CONSTANTS_H

<<<<<<< HEAD
// These constants are used in gItems
#define POCKET_NONE        0
#define POCKET_ITEMS       1
#define POCKET_POKE_BALLS  2
#define POCKET_TM_HM       3
#define POCKET_BERRIES     4
#define POCKET_KEY_ITEMS   5

#define ITEMS_POCKET       0
#define BALLS_POCKET       1
#define TMHM_POCKET        2
#define BERRIES_POCKET     3
#define KEYITEMS_POCKET    4
#define POCKETS_COUNT      5
=======
enum Pocket
{
    POCKET_ITEMS,
    POCKET_POKE_BALLS,
    POCKET_TM_HM,
    POCKET_BERRIES,
    POCKET_KEY_ITEMS,
    POCKETS_COUNT,
    POCKET_DUMMY = POCKETS_COUNT,
};

#define REPEL_LURE_MASK         (1 << 15)
#define IS_LAST_USED_LURE(var)  (var & REPEL_LURE_MASK)
#define REPEL_LURE_STEPS(var)   (var & (REPEL_LURE_MASK - 1))
#define LURE_STEP_COUNT         (IS_LAST_USED_LURE(VarGet(VAR_REPEL_STEP_COUNT)) ? REPEL_LURE_STEPS(VarGet(VAR_REPEL_STEP_COUNT)) : 0)
#define REPEL_STEP_COUNT        (!IS_LAST_USED_LURE(VarGet(VAR_REPEL_STEP_COUNT)) ? REPEL_LURE_STEPS(VarGet(VAR_REPEL_STEP_COUNT)) : 0)

#define ITEM_SELL_FACTOR ((I_SELL_VALUE_FRACTION >= GEN_9) ? 4 : 2)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#endif // GUARD_ITEM_CONSTANTS_H
