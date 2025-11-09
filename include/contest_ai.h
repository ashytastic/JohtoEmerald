#ifndef GUARD_CONTESTAI_H
#define GUARD_CONTESTAI_H

// AI states
enum
{
    CONTESTAI_SETTING_UP,
    CONTESTAI_PROCESSING,
    CONTESTAI_FINISHED,
    CONTESTAI_DO_NOT_PROCESS
};

<<<<<<< HEAD
void ContestAI_ResetAI(u8);
=======
void ContestAI_ResetAI(u8 contestantAI);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
u8 ContestAI_GetActionToUse(void);

#endif // GUARD_CONTESTAI_H
