#ifndef GUARD_GLOBAL_BERRY_H
#define GUARD_GLOBAL_BERRY_H

#define BERRY_NAME_LENGTH 6
#define BERRY_ITEM_EFFECT_COUNT 18

struct Berry
{
    const u8 name[BERRY_NAME_LENGTH + 1];
<<<<<<< HEAD
    u8 firmness;
    u16 size;
    u8 maxYield;
    u8 minYield;
    const u8 *description1;
    const u8 *description2;
    u8 stageDuration;
=======
    u8 firmness:4;
    u8 color:4;
    u16 size:10;
    u16 weedsBonus:3;
    u16 pestsBonus:3;
    u8 maxYield;
    u8 minYield:4;
    u8 waterBonus:4;
    const u8 *description1;
    const u8 *description2;
    u8 growthDuration;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    u8 spicy;
    u8 dry;
    u8 sweet;
    u8 bitter;
    u8 sour;
    u8 smoothness;
<<<<<<< HEAD
=======
    u8 drainRate;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
};

// with no const fields

struct Berry2
{
    u8 name[BERRY_NAME_LENGTH + 1];
<<<<<<< HEAD
    u8 firmness;
    u16 size;
    u8 maxYield;
    u8 minYield;
    u8 *description1;
    u8 *description2;
    u8 stageDuration;
=======
    u8 firmness:4;
    u8 color:4;
    u16 size:10;
    u16 weedsBonus:3;
    u16 pestsBonus:3;
    u8 maxYield;
    u8 minYield:4;
    u8 waterBonus:4;
    u8 *description1;
    u8 *description2;
    u8 growthDuration;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    u8 spicy;
    u8 dry;
    u8 sweet;
    u8 bitter;
    u8 sour;
    u8 smoothness;
<<<<<<< HEAD
    //u8 padding;
=======
    u8 drainRate;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
};

struct EnigmaBerry
{
    struct Berry2 berry;
    u8 itemEffect[BERRY_ITEM_EFFECT_COUNT];
    u8 holdEffect;
    u8 holdEffectParam;
    u32 checksum;
};

struct BattleEnigmaBerry
{
    /*0x00*/ u8 name[BERRY_NAME_LENGTH + 1];
    /*0x07*/ u8 holdEffect;
    /*0x08*/ u8 itemEffect[BERRY_ITEM_EFFECT_COUNT];
    /*0x1A*/ u8 holdEffectParam;
};

struct BerryTree
{
<<<<<<< HEAD
    u8 berry;
    u8 stage:7;
    u8 stopGrowth:1;
    u16 minutesUntilNextStage;
    u8 berryYield;
    u8 regrowthCount:4;
    u8 watered1:1;
    u8 watered2:1;
    u8 watered3:1;
    u8 watered4:1;
=======
    u8 berry:7;
    u8 weeds:1;
    u8 stage:3;
    u8 mulch:4;
    u8 stopGrowth:1;
    u16 minutesUntilNextStage:14;
    u16 mutationA:2;
    u8 berryYield:5;
    u8 pests:1;
    u8 mutationB:2;
    u8 regrowthCount:4;
    u8 watered:4; // Used to keep track of bonuses in case of gradient watering
    u16 moistureLevel:7;
    u16 moistureClock:7;
    u16 padding:2;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
};

#endif // GUARD_GLOBAL_BERRY_H
