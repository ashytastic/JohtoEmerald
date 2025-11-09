#ifndef GUARD_SHOP_H
#define GUARD_SHOP_H

extern struct ItemSlot gMartPurchaseHistory[3];

<<<<<<< HEAD
void CreatePokemartMenu(const u16 *);
void CreateDecorationShop1Menu(const u16 *);
void CreateDecorationShop2Menu(const u16 *);
=======
void CreatePokemartMenu(const u16 *itemsForSale);
void CreateDecorationShop1Menu(const u16 *itemsForSale);
void CreateDecorationShop2Menu(const u16 *itemsForSale);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void CB2_ExitSellMenu(void);

#endif // GUARD_SHOP_H
