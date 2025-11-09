#ifndef GUARD_DATA_BARD_MUSIC_SPEECH_H
#define GUARD_DATA_BARD_MUSIC_SPEECH_H
<<<<<<< HEAD
const struct BardSound gBardSounds_Speech[][6] = {
    {
        { .songLengthId = 9 },
        { .songLengthId = 16 },
        { .songLengthId = 51 },
=======
static const struct BardSoundTemplate sBardSoundTemplates_Speech[][MAX_BARD_SOUNDS_PER_WORD] = {
    [EC_INDEX(EC_WORD_LISTEN)] = {
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_HELD) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 21 },
        { .songLengthId = 9 },
        { .songLengthId = 12 },
=======
    [EC_INDEX(EC_WORD_NOT_VERY)] = {
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
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
    [EC_INDEX(EC_WORD_MEAN)] = {
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
        { .songLengthId = 18 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_LIE)] = {
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
        { .songLengthId = 5 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_LAY)] = {
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
        { .songLengthId = 9 },
        { .songLengthId = 44 },
        { .songLengthId = 10 },
=======
    [EC_INDEX(EC_WORD_RECOMMEND)] = {
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_HELD) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 15 },
        { .songLengthId = 15 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_NITWIT)] = {
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 20 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_QUITE)] = {
        { .songId = PHONEME_ID(PH_PRICE_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
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
    [EC_INDEX(EC_WORD_FROM)] = {
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
        { .songLengthId = 12 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_FEELING)] = {
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
        { .songLengthId = 44 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_BUT)] = {
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
        { .songLengthId = 33 },
        { .songLengthId = 9 },
        { .songLengthId = 48 },
=======
    [EC_INDEX(EC_WORD_HOWEVER)] = {
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
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
    [EC_INDEX(EC_WORD_CASE)] = {
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
        { .songLengthId = 43 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_THE)] = {
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
        { .songLengthId = 17 },
=======
    [EC_INDEX(EC_WORD_MISS)] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 33 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_HOW)] = {
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
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
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_HIT)] = {
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
        { .songLengthId = 14 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_ENOUGH)] = {
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
        { .songLengthId =  3 },
        { .songLengthId = 23 },
=======
    [EC_INDEX(EC_WORD_A_LOT)] = {
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  3 },
        { .songLengthId = 17 },
        { .songLengthId = 38 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId =  0 },
        { .songLengthId = 44 },
        { .songLengthId = 45 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId =  0 },
=======
    [EC_INDEX(EC_WORD_A_LITTLE)] = {
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_ABSOLUTELY)] = {
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_CURE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_AND)] = {
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
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
    [EC_INDEX(EC_WORD_ONLY)] = {
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
        { .songLengthId = 10 },
=======
    [EC_INDEX(EC_WORD_AROUND)] = {
        { .songId = PHONEME_ID(PH_DRESS_HELD) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 21 },
        { .songLengthId = 44 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 17 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_PROBABLY)] = {
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_IF)] = {
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
        { .songLengthId = 10 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_VERY)] = {
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
        { .songLengthId = 44 },
        { .songLengthId = 20 },
        { .songLengthId = 12 },
        { .songLengthId = 17 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 18 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_A_TINY_BIT)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_PRICE_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_WILD)] = {
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  0 },
        { .songLengthId = 11 },
=======
    [EC_INDEX(EC_WORD_THAT_S)] = {
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 44 },
=======
    [EC_INDEX(EC_WORD_JUST)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
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
        { .songLengthId = 26 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 44 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_EVEN_SO)] = {
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_MUST_BE)] = {
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
        { .songLengthId =  1 },
        { .songLengthId = 48 },
        { .songLengthId = 6 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 26 },
        { .songLengthId = 35 },
=======
    [EC_INDEX(EC_WORD_NATURALLY)] = {
        { .songId = PHONEME_ID(PH_TRAP_HELD) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_FOR_NOW)] = {
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_MOUTH_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 44 },
        { .songLengthId = 50 },
        { .songLengthId = 39 },
=======
    [EC_INDEX(EC_WORD_UNDERSTOOD)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 24 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_JOKING)] = {
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
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
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_READY)] = {
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
        { .songLengthId = 27 },
        { .songLengthId = 14 },
=======
    [EC_INDEX(EC_WORD_SOMETHING)] = {
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 27 },
        { .songLengthId = 35 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SOMEHOW)] = {
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 6 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_ALTHOUGH)] = {
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 6 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_ALSO)] = {
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 50 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_PERFECT)] = {
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId =  1 },
        { .songLengthId = 44 },
        { .songLengthId =  1 },
=======
    [EC_INDEX(EC_WORD_AS_MUCH_AS)] = {
        { .songId = PHONEME_ID(PH_TRAP_HELD) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_HELD) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 12 },
        { .songLengthId = 10 },
        { .songLengthId = 14 },
=======
    [EC_INDEX(EC_WORD_REALLY)] = {
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_HELD) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 39 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_TRULY)] = {
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
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
        { .songLengthId = 38 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 24 },
        { .songLengthId =  7 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 44 },
        { .songLengthId = 16 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_SERIOUSLY)] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_TOTALLY)] = {
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_CLOTH_HELD) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_UNTIL)] = {
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_HELD) },
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
    [EC_INDEX(EC_WORD_AS_IF)] = {
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
        { .songLengthId = 40 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_MOOD)] = {
        { .songId = PHONEME_ID(PH_GOOSE_HELD) },
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
        { .songLengthId = 50 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_RATHER)] = {
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    {
        { .songLengthId = 6 },
        { .songLengthId = 38 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 26 },
=======
    [EC_INDEX(EC_WORD_AWFULLY)] = {
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_MODE)] = {
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
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
    [EC_INDEX(EC_WORD_MORE)] = {
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
        { .songLengthId = 39 },
        { .songLengthId = 5 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_TOO_LATE)] = {
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
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
        { .songLengthId = 6 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    {
        { .songLengthId = 8 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_FINALLY)] = {
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [EC_INDEX(EC_WORD_ANY)] = {
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
        { .songLengthId = 15 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
    [EC_INDEX(EC_WORD_INSTEAD)] = {
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
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
    [EC_INDEX(EC_WORD_FANTASTIC)] = {
        { .songId = PHONEME_ID(PH_STRUT_HELD) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    }
};

#endif // GUARD_DATA_BARD_MUSIC_SPEECH_H
