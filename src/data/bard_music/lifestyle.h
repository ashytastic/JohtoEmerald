#ifndef GUARD_DATA_BARD_MUSIC_LIFESTYLE_H
#define GUARD_DATA_BARD_MUSIC_LIFESTYLE_H
<<<<<<< HEAD
const struct BardSound gBardSounds_Lifestyle[][6] = {
    {
        { .songLengthId = 49 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
static const struct BardSoundTemplate sBardSoundTemplates_Lifestyle[][MAX_BARD_SOUNDS_PER_WORD] = {
    [EC_INDEX(EC_WORD_CHORES)] = {
        { .songId = PHONEME_ID(PH_NURSE_HELD) },
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
    [EC_INDEX(EC_WORD_HOME)] = {
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
        { .songLengthId = 44 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_MONEY)] = {
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
        { .songLengthId = 42 },
        { .songLengthId = 35 },
        { .songLengthId =  2 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId =  2 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_ALLOWANCE)] = {
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_BATH)] = {
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
        { .songLengthId = 42 },
        { .songLengthId = 50 },
        { .songLengthId =  3 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 41 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_CONVERSATION)] = {
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_SCHOOL)] = {
        { .songId = PHONEME_ID(PH_GOOSE_SOLO) },
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
        { .songLengthId = 50 },
        { .songLengthId = 5 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId =  0 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_COMMEMORATE)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_HABIT)] = {
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
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
    [EC_INDEX(EC_WORD_GROUP)] = {
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
        { .songLengthId = 48 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_WORD)] = {
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
        { .songLengthId = 24 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_STORE)] = {
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
        { .songLengthId = 50 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SERVICE)] = {
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
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
    [EC_INDEX(EC_WORD_WORK)] = {
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
        { .songLengthId = 17 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SYSTEM)] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 48 },
        { .songLengthId =  3 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_TRAIN)] = {
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
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
    [EC_INDEX(EC_WORD_CLASS)] = {
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
        { .songLengthId = 9 },
        { .songLengthId = 29 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_LESSONS)] = {
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 15 },
        { .songLengthId = 48 },
        { .songLengthId = 5 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 17 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_INFORMATION)] = {
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_LIVING)] = {
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
        { .songLengthId = 12 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_TEACHER)] = {
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 50 },
        { .songLengthId = 42 },
        { .songLengthId = 11 },
=======
    [EC_INDEX(EC_WORD_TOURNAMENT)] = {
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
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
    [EC_INDEX(EC_WORD_LETTER)] = {
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
        { .songLengthId = 12 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_EVENT)] = {
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 17 },
        { .songLengthId = 17 },
        { .songLengthId = 44 },
=======
    [EC_INDEX(EC_WORD_DIGITAL)] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
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
    [EC_INDEX(EC_WORD_TEST)] = {
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
        { .songLengthId = 12 },
        { .songLengthId = 27 },
        { .songLengthId = 11 },
        { .songLengthId = 26 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 9 },
        { .songLengthId = 44 },
        { .songLengthId = 17 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 24 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_DEPT_STORE)] = {
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_TELEVISION)] = {
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_PHONE)] = {
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
        { .songLengthId = 18 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_ITEM)] = {
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
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
    [EC_INDEX(EC_WORD_NAME)] = {
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
    [EC_INDEX(EC_WORD_NEWS)] = {
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
        { .songLengthId = 29 },
        { .songLengthId = 39 },
        { .songLengthId = 50 },
=======
    [EC_INDEX(EC_WORD_POPULAR)] = {
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 28 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_PARTY)] = {
        { .songId = PHONEME_ID(PH_THOUGHT_HELD) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
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
    [EC_INDEX(EC_WORD_STUDY)] = {
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
        { .songLengthId = 44 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_MACHINE)] = {
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
        { .songLengthId =  3 },
        { .songLengthId = 36 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_MAIL)] = {
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 11 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_MESSAGE)] = {
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 29 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_PROMISE)] = {
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
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
=======
    [EC_INDEX(EC_WORD_DREAM)] = {
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 15 },
        { .songLengthId = 50 },
        { .songLengthId = 23 },
        { .songLengthId = 15 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 18 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_KINDERGARTEN)] = {
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_LOT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_LIFE)] = {
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
        { .songLengthId =  3 },
        { .songLengthId = 12 },
        { .songLengthId = 24 },
=======
    [EC_INDEX(EC_WORD_RADIO)] = {
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 11 },
        { .songLengthId = 38 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_RENTAL)] = {
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 50 },
        { .songLengthId = 36 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_WORLD)] = {
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    }
};

#endif // GUARD_DATA_BARD_MUSIC_LIFESTYLE_H
