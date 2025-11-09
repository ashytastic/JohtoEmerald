#ifndef GUARD_PLAYER_PC_H
#define GUARD_PLAYER_PC_H

#include "menu.h"

struct PlayerPCItemPageStruct
{
    u16 cursorPos;
    u16 itemsAbove;
    u8 pageItems;
    u8 count;
<<<<<<< HEAD
    u8 filler[3];
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    u8 scrollIndicatorTaskId;
};

extern struct PlayerPCItemPageStruct gPlayerPCItemPageInfo;

extern const struct MenuAction gMailboxMailOptions[];

<<<<<<< HEAD
void ReshowPlayerPC(u8 taskId);
=======
void ReshowPlayerPC(u8 var);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void CB2_PlayerPCExitBagMenu(void);
void Mailbox_ReturnToMailListAfterDeposit(void);
void NewGameInitPCItems(void);


#endif //GUARD_PLAYER_PC_H
