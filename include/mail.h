#ifndef GUARD_MAIL_H
#define GUARD_MAIL_H

<<<<<<< HEAD
#define IS_ITEM_MAIL(itemId)((itemId == ITEM_ORANGE_MAIL            \
=======
#include "main.h"

#define IS_ITEM_MAIL(itemId) ((itemId == ITEM_ORANGE_MAIL           \
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                              || itemId == ITEM_HARBOR_MAIL         \
                              || itemId == ITEM_GLITTER_MAIL        \
                              || itemId == ITEM_MECH_MAIL           \
                              || itemId == ITEM_WOOD_MAIL           \
                              || itemId == ITEM_WAVE_MAIL           \
                              || itemId == ITEM_BEAD_MAIL           \
                              || itemId == ITEM_SHADOW_MAIL         \
                              || itemId == ITEM_TROPIC_MAIL         \
                              || itemId == ITEM_DREAM_MAIL          \
                              || itemId == ITEM_FAB_MAIL            \
                              || itemId == ITEM_RETRO_MAIL))

// mail.h
<<<<<<< HEAD
void ReadMail(struct Mail *mail, void (*exitCallback)(void), bool8 hasText);
=======
void ReadMail(struct Mail *mail, MainCallback exitCallback, bool8 hasText);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

// mail_data.h
void ClearAllMail(void);
void ClearMail(struct Mail *mail);
bool8 MonHasMail(struct Pokemon *mon);
u8 GiveMailToMonByItemId(struct Pokemon *mon, u16 itemId);
u16 SpeciesToMailSpecies(u16 species, u32 personality);
u16 MailSpeciesToSpecies(u16 mailSpecies, u16 *buffer);
u8 GiveMailToMon(struct Pokemon *mon, struct Mail *mail);
void TakeMailFromMon(struct Pokemon *mon);
void ClearMailItemId(u8 mailId);
u8 TakeMailFromMonAndSave(struct Pokemon *mon);
bool8 ItemIsMail(u16 itemId);

#endif // GUARD_MAIL_H
