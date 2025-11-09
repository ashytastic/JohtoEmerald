#ifndef GUARD_DATA_BARD_MUSIC_EVENTS_H
#define GUARD_DATA_BARD_MUSIC_EVENTS_H
<<<<<<< HEAD
const struct BardSound gBardSounds_Events[][6] = {
    {
        { .songLengthId = 44 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
static const struct BardSoundTemplate sBardSoundTemplates_Events[][MAX_BARD_SOUNDS_PER_WORD] = {
    [EC_INDEX(EC_WORD_APPEAL)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
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
    [EC_INDEX(EC_WORD_EVENTS)] = {
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
        { .songLengthId =  3 },
        { .songLengthId =  0 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_STAY_AT_HOME)] = {
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_BERRY)] = {
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 29 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_CONTEST)] = {
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 9 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_MC)] = {
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 43 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_JUDGE)] = {
        { .songId = PHONEME_ID(PH_STRUT_HELD) },
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
        { .songLengthId = 50 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SUPER)] = {
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
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
    [EC_INDEX(EC_WORD_STAGE)] = {
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
        { .songLengthId = 21 },
        { .songLengthId = 44 },
        { .songLengthId = 4 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 26 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_HALL_OF_FAME)] = {
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FACE_HELD) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_EVOLUTION)] = {
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 18 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_HYPER)] = {
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
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
        { .songLengthId = 44 },
        { .songLengthId = 33 },
        { .songLengthId = 48 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 12 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_BATTLE_TOWER)] = {
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_LEADERS)] = {
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
        { .songLengthId =  0 },
        { .songLengthId = 44 },
        { .songLengthId = 39 },
=======
    [EC_INDEX(EC_WORD_BATTLE_ROOM)] = {
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 17 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_HIDDEN)] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
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
        { .songLengthId = 4 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 10 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SECRET_BASE)] = {
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_HELD) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_BLEND)] = {
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
        { .songLengthId = 24 },
        { .songLengthId = 12 },
        { .songLengthId = 29 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId =  0 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_POKEBLOCK)] = {
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_MASTER)] = {
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
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
    [EC_INDEX(EC_WORD_RANK)] = {
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
        { .songLengthId = 17 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_RIBBON)] = {
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
        { .songLengthId = 42 },
=======
    [EC_INDEX(EC_WORD_CRUSH)] = {
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 48 },
        { .songLengthId = 9 },
=======
    [EC_INDEX(EC_WORD_DIRECT)] = {
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  0 },
        { .songLengthId = 48 },
=======
    [EC_INDEX(EC_WORD_TOWER)] = {
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 39 },
        { .songLengthId = 42 },
=======
    [EC_INDEX(EC_WORD_UNION)] = {
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_ROOM)] = {
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 18 },
        { .songLengthId = 48 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 42 },
        { .songLengthId = 12 },
        { .songLengthId = 48 },
=======
    [EC_INDEX(EC_WORD_WIRELESS)] = {
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_FRONTIER)] = {
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    }
};

#endif // GUARD_DATA_BARD_MUSIC_EVENTS_H
