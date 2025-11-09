#ifndef GUARD_FIELD_MESSAGE_BOX_H
#define GUARD_FIELD_MESSAGE_BOX_H

enum
{
    FIELD_MESSAGE_BOX_HIDDEN,
    FIELD_MESSAGE_BOX_UNUSED,
    FIELD_MESSAGE_BOX_NORMAL,
    FIELD_MESSAGE_BOX_AUTO_SCROLL,
};

<<<<<<< HEAD
bool8 ShowFieldMessage(const u8 *message);
bool8 ShowPokenavFieldMessage(const u8 *message);
bool8 ShowFieldMessageFromBuffer(void);
bool8 ShowFieldAutoScrollMessage(const u8 *message);
=======
bool8 ShowFieldMessage(const u8 *str);
bool8 ShowPokenavFieldMessage(const u8 *str);
bool8 ShowFieldMessageFromBuffer(void);
bool8 ShowFieldAutoScrollMessage(const u8 *str);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void HideFieldMessageBox(void);
bool8 IsFieldMessageBoxHidden(void);
u8 GetFieldMessageBoxMode(void);
void StopFieldMessage(void);
void InitFieldMessageBox(void);

<<<<<<< HEAD
=======
extern u8 gWalkAwayFromSignpostTimer;

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#endif // GUARD_FIELD_MESSAGE_BOX_H
