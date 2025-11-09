#ifndef GUARD_DATA_BARD_MUSIC_ACTIONS_H
#define GUARD_DATA_BARD_MUSIC_ACTIONS_H
<<<<<<< HEAD
const struct BardSound gBardSounds_Actions[][6] = {
    {
        { .songLengthId = 14 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
static const struct BardSoundTemplate sBardSoundTemplates_Actions[][MAX_BARD_SOUNDS_PER_WORD] = {
    [EC_INDEX(EC_WORD_MEETS)] = {
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
        { .songLengthId = 44 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_CONCEDE)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 16 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_GIVE)] = {
        { .songId = PHONEME_ID(PH_KIT_HELD) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 16 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_GIVES)] = {
        { .songId = PHONEME_ID(PH_KIT_HELD) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 4 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_PLAYED)] = {
        { .songId = PHONEME_ID(PH_FACE_HELD) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  5 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_PLAYS)] = {
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
        { .songLengthId = 44 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_COLLECT)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
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
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_WALKING)] = {
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  8 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_WALKS)] = {
        { .songId = PHONEME_ID(PH_CLOTH_SOLO) },
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
    [EC_INDEX(EC_WORD_SAYS)] = {
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
        { .songLengthId =  9 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_WENT)] = {
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  9 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SAID)] = {
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  5 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_WAKE_UP)] = {
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  5 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_WAKES_UP)] = {
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  3 },
        { .songLengthId = 50 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_ANGERS)] = {
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 13 },
=======
    [EC_INDEX(EC_WORD_TEACH)] = {
        { .songId = PHONEME_ID(PH_FLEECE_HELD) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 12 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_TEACHES)] = {
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
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
    [EC_INDEX(EC_WORD_PLEASE)] = {
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
        { .songLengthId = 48 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_LEARN)] = {
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  3 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_CHANGE)] = {
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
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
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_STORY)] = {
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 11 },
        { .songLengthId = 50 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_TRUST)] = {
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  1 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_LAVISH)] = {
        { .songId = PHONEME_ID(PH_TRAP_HELD) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
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
    [EC_INDEX(EC_WORD_LISTENS)] = {
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
        { .songLengthId = 17 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_HEARING)] = {
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
        { .songLengthId =  3 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_TRAINS)] = {
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 39 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_CHOOSE)] = {
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
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
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_COME)] = {
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
        { .songLengthId =  3 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_CAME)] = {
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 50 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SEARCH)] = {
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  5 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_MAKE)] = {
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
        { .songLengthId = 29 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_CAUSE)] = {
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
        { .songLengthId = 26 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_KNOW)] = {
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
        { .songLengthId = 24 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_KNOWS)] = {
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
        { .songLengthId = 12 },
        { .songLengthId = 47 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_REFUSE)] = {
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_CURE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 26 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_STORES)] = {
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
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
    [EC_INDEX(EC_WORD_BRAG)] = {
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
        { .songLengthId = 17 },
        { .songLengthId = 26 },
        { .songLengthId =  2 },
=======
    [EC_INDEX(EC_WORD_IGNORANT)] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
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
    [EC_INDEX(EC_WORD_THINKS)] = {
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
        { .songLengthId = 12 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_BELIEVE)] = {
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 20 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SLIDE)] = {
        { .songId = PHONEME_ID(PH_PRICE_SOLO) },
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
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_EATS)] = {
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
        { .songLengthId = 47 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_USE)] = {
        { .songId = PHONEME_ID(PH_CURE_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 47 },
        { .songLengthId = 10 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_USES)] = {
        { .songId = PHONEME_ID(PH_CURE_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_HELD) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 47 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_USING)] = {
        { .songId = PHONEME_ID(PH_CURE_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 38 },
        { .songLengthId =  9 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_COULDN_T)] = {
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  5 },
        { .songLengthId = 44 },
        { .songLengthId = 26 },
=======
    [EC_INDEX(EC_WORD_CAPABLE)] = {
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 17 },
        { .songLengthId = 44 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 44 },
        { .songLengthId = 50 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_DISAPPEAR)] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_APPEAR)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
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
    [EC_INDEX(EC_WORD_THROW)] = {
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
        { .songLengthId = 50 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_WORRY)] = {
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
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
    [EC_INDEX(EC_WORD_SLEPT)] = {
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
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SLEEP)] = {
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
        { .songLengthId = 12 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_RELEASE)] = {
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
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
    [EC_INDEX(EC_WORD_DRINKS)] = {
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
        { .songLengthId = 44 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_RUNS)] = {
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
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_RUN)] = {
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
        { .songLengthId = 50 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_WORKS)] = {
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 50 },
        { .songLengthId = 13 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_WORKING)] = {
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_HELD) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 27 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_TALKING)] = {
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 27 },
=======
    [EC_INDEX(EC_WORD_TALK)] = {
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
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
    [EC_INDEX(EC_WORD_SINK)] = {
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
        { .songLengthId =  1 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SMACK)] = {
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
        { .songLengthId = 14 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_PRETEND)] = {
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
        { .songLengthId =  5 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_PRAISE)] = {
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
        { .songLengthId = 24 },
        { .songLengthId = 48 },
        { .songLengthId = 41 },
=======
    [EC_INDEX(EC_WORD_OVERDO)] = {
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_SOLO) },
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
    [EC_INDEX(EC_WORD_SHOW)] = {
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
        { .songLengthId = 38 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_LOOKS)] = {
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
        { .songLengthId = 14 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SEES)] = {
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
        { .songLengthId = 14 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SEEK)] = {
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
        { .songLengthId = 26 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_OWN)] = {
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
        { .songLengthId =  5 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_TAKE)] = {
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
        { .songLengthId = 44 },
        { .songLengthId = 35 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_ALLOW)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_MOUTH_SOLO) },
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
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_FORGET)] = {
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
        { .songLengthId = 26 },
        { .songLengthId = 10 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_FORGETS)] = {
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_HELD) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 44 },
        { .songLengthId = 13 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId =  3 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_APPEARS)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_HELD) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_FAINT)] = {
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  3 },
        { .songLengthId = 10 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_FAINTED)] = {
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_HELD) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    }
};

#endif // GUARD_DATA_BARD_MUSIC_ACTIONS_H
