#ifndef GUARD_TRAINER_SEE_H
#define GUARD_TRAINER_SEE_H

struct ApproachingTrainer
{
    u8 objectEventId;
    u8 radius; // plus 1
    const u8 *trainerScriptPtr;
    u8 taskId;
};

extern u16 gWhichTrainerToFaceAfterBattle;
extern u8 gPostBattleMovementScript[4];
extern struct ApproachingTrainer gApproachingTrainers[2];
extern u8 gNoOfApproachingTrainers;
extern bool8 gTrainerApproachedPlayer;
extern u8 gApproachingTrainerId;

bool8 CheckForTrainersWantingBattle(void);
<<<<<<< HEAD
void SetBuriedTrainerMovement(struct ObjectEvent *var);
=======
void SetBuriedTrainerMovement(struct ObjectEvent *objEvent);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void DoTrainerApproach(void);
void TryPrepareSecondApproachingTrainer(void);
u8 FldEff_ExclamationMarkIcon(void);
u8 FldEff_QuestionMarkIcon(void);
u8 FldEff_HeartIcon(void);
u8 GetCurrentApproachingTrainerObjectEventId(void);
u8 GetChosenApproachingTrainerObjectEventId(u8 arrayId);
void PlayerFaceTrainerAfterBattle(void);
<<<<<<< HEAD
=======
u8 FldEff_DoubleExclMarkIcon(void);
u8 FldEff_XIcon(void);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#endif // GUARD_TRAINER_SEE_H
