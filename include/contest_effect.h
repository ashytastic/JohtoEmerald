#ifndef GUARD_CONTEST_EFFECT_H
#define GUARD_CONTEST_EFFECT_H
<<<<<<< HEAD

struct ContestMove
{
    u8 effect;
    u8 contestCategory:3;
    u8 comboStarterId;
    u8 comboMoves[4];
};
=======
#define MAX_COMBO_MOVES 5
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

struct ContestEffect
{
    u8 effectType;
    u8 appeal;
    u8 jam;
};

<<<<<<< HEAD
extern const struct ContestMove gContestMoves[];
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
extern const struct ContestEffect gContestEffects[];
extern const u8 *const gContestEffectDescriptionPointers[];
extern const u8 *const gContestMoveTypeTextPointers[];

bool8 AreMovesContestCombo(u16 lastMove, u16 nextMove);

#endif //GUARD_CONTEST_EFFECT_H
