#ifndef GUARD_DATA_BARD_MUSIC_CONDITIONS_H
#define GUARD_DATA_BARD_MUSIC_CONDITIONS_H
<<<<<<< HEAD
const struct BardSound gBardSounds_Conditions[][6] = {
    {
        { .songLengthId = 21 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
const struct BardSoundTemplate sBardSoundTemplates_Conditions[][MAX_BARD_SOUNDS_PER_WORD] = {
    [EC_INDEX(EC_WORD_HOT)] = {
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 11 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_EXISTS)] = {
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 11 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_EXCESS)] = {
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 6 },
        { .songLengthId = 41 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_APPROVED)] = {
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  1 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_HAS)] = {
        { .songId = PHONEME_ID(PH_TRAP_HELD) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 38 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_GOOD)] = {
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 11 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_LESS)] = {
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 26 },
        { .songLengthId = 11 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 26 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_MOMENTUM)] = {
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_GOING)] = {
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 24 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_WEIRD)] = {
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 17 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_BUSY)] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 41 },
        { .songLengthId = 10 },
        { .songLengthId = 50 },
=======
    [EC_INDEX(EC_WORD_TOGETHER)] = {
        { .songId = PHONEME_ID(PH_GOOSE_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_HELD) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 38 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_FULL)] = {
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  2 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_ABSENT)] = {
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 15 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_BEING)] = {
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 14 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_NEED)] = {
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 5 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_TASTY)] = {
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 17 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SKILLED)] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 32 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_NOISY)] = {
        { .songId = PHONEME_ID(PH_CHOICE_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 17 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_BIG)] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 5 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_LATE)] = {
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 25 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_CLOSE)] = {
        { .songId = PHONEME_ID(PH_GOAT_HELD) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 23 },
        { .songLengthId = 20 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_DOCILE)] = {
        { .songId = PHONEME_ID(PH_LOT_SOLO) },
        { .songId = PHONEME_ID(PH_PRICE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 44 },
        { .songLengthId = 39 },
        { .songLengthId = 17 },
=======
    [EC_INDEX(EC_WORD_AMUSING)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 9 },
        { .songLengthId = 48 },
        { .songLengthId =  3 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 50 },
        { .songLengthId = 11 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 17 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_ENTERTAINING)] = {
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_PERFECTION)] = {
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_PRETTY)] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 10 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_HEALTHY)] = {
        { .songId = PHONEME_ID(PH_DRESS_HELD) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 9 },
        { .songLengthId = 44 },
        { .songLengthId = 11 },
=======
    [EC_INDEX(EC_WORD_EXCELLENT)] = {
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 44 },
        { .songLengthId = 20 },
        { .songLengthId = 35 },
=======
    [EC_INDEX(EC_WORD_UPSIDE_DOWN)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_PRICE_SOLO) },
        { .songId = PHONEME_ID(PH_MOUTH_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 24 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_COLD)] = {
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 14 },
        { .songLengthId = 10 },
        { .songLengthId = 17 },
=======
    [EC_INDEX(EC_WORD_REFRESHING)] = {
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_HELD) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 44 },
        { .songLengthId = 42 },
        { .songLengthId = 30 },
        { .songLengthId = 44 },
        { .songLengthId = 38 },
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 44 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_UNAVOIDABLE)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_CHOICE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_MUCH)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 26 },
        { .songLengthId = 50 },
        { .songLengthId = 11 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId =  0 },
        { .songLengthId = 39 },
        { .songLengthId = 44 },
=======
    [EC_INDEX(EC_WORD_OVERWHELMING)] = {
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_FABULOUS)] = {
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 10 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_ELSE)] = {
        { .songId = PHONEME_ID(PH_DRESS_HELD) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 9 },
        { .songLengthId = 10 },
        { .songLengthId = 17 },
=======
    [EC_INDEX(EC_WORD_EXPENSIVE)] = {
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_HELD) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 26 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_CORRECT)] = {
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 15 },
        { .songLengthId = 29 },
        { .songLengthId = 42 },
        { .songLengthId = 38 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 29 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_IMPOSSIBLE)] = {
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_SMALL)] = {
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 17 },
        { .songLengthId = 48 },
        { .songLengthId = 11 },
=======
    [EC_INDEX(EC_WORD_DIFFERENT)] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 20 },
        { .songLengthId = 50 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_TIRED)] = {
        { .songId = PHONEME_ID(PH_PRICE_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 17 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SKILL)] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 23 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_TOP)] = {
        { .songId = PHONEME_ID(PH_LOT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 23 },
        { .songLengthId = 22 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_NON_STOP)] = {
        { .songId = PHONEME_ID(PH_LOT_SOLO) },
        { .songId = PHONEME_ID(PH_LOT_HELD) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 42 },
        { .songLengthId = 22 },
        { .songLengthId = 50 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 44 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_PREPOSTEROUS)] = {
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_HELD) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_NONE)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 44 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_NOTHING)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  2 },
        { .songLengthId = 50 },
        { .songLengthId = 38 },
=======
    [EC_INDEX(EC_WORD_NATURAL)] = {
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 14 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_BECOMES)] = {
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 41 },
        { .songLengthId = 28 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_LUKEWARM)] = {
        { .songId = PHONEME_ID(PH_GOOSE_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_HELD) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  2 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_FAST)] = {
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 26 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_LOW)] = {
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 8 },
        { .songLengthId = 38 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_AWFUL)] = {
        { .songId = PHONEME_ID(PH_CLOTH_SOLO) },
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 44 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_ALONE)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 26 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_BORED)] = {
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 14 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SECRET)] = {
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 17 },
        { .songLengthId = 48 },
        { .songLengthId = 14 },
=======
    [EC_INDEX(EC_WORD_MYSTERY)] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  2 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_LACKS)] = {
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 11 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_BEST)] = {
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 33 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_LOUSY)] = {
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 17 },
        { .songLengthId = 5 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_MISTAKE)] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 18 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_KIND)] = {
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 11 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_WELL)] = {
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 14 },
        { .songLengthId = 11 },
=======
    [EC_INDEX(EC_WORD_WEAKENED)] = {
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 15 },
        { .songLengthId = 38 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SIMPLE)] = {
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 13 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SEEMS)] = {
        { .songId = PHONEME_ID(PH_FLEECE_HELD) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  0 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_BADLY)] = {
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    }
};

#endif // GUARD_DATA_BARD_MUSIC_CONDITIONS_H
