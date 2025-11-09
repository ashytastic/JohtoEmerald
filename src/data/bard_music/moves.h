#ifndef GUARD_DATA_BARD_MUSIC_MOVES_H
#define GUARD_DATA_BARD_MUSIC_MOVES_H

#include "constants/moves.h"

const u16 gNumBardWords_Moves = MOVES_COUNT;

<<<<<<< HEAD
const struct BardSound gBardSounds_Moves[MOVES_COUNT][6] = {
=======
static const struct BardSoundTemplate sBardSoundTemplates_Moves[MOVES_COUNT][MAX_BARD_SOUNDS_PER_WORD] = {
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    [MOVE_NONE] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_POUND] = {
<<<<<<< HEAD
        { .songLengthId = 33 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_KARATE_CHOP] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 29 },
        { .songLengthId = 14 },
        { .songLengthId = 29 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DOUBLE_SLAP] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 10 },
        { .songLengthId =  2 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_HELD) },
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_COMET_PUNCH] = {
<<<<<<< HEAD
        { .songLengthId = 29 },
        { .songLengthId = 11 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MEGA_PUNCH] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 42 },
        { .songLengthId = 44 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_PAY_DAY] = {
<<<<<<< HEAD
        { .songLengthId = 5 },
        { .songLengthId = 5 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FIRE_PUNCH] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 48 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ICE_PUNCH] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 29 },
        { .songLengthId = 14 },
        { .songLengthId = 29 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_THUNDER_PUNCH] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 48 },
        { .songLengthId = 44 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SCRATCH] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    [MOVE_VICE_GRIP] = {
        { .songLengthId = 20 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
    [MOVE_VISE_GRIP] = {
        { .songId = PHONEME_ID(PH_PRICE_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_GUILLOTINE] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 44 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_RAZOR_WIND] = {
<<<<<<< HEAD
        { .songLengthId = 5 },
        { .songLengthId = 48 },
        { .songLengthId = 15 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SWORDS_DANCE] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 48 },
        { .songLengthId =  1 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_HELD) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CUT] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_GUST] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_WING_ATTACK] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 42 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_WHIRLWIND] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 29 },
        { .songLengthId = 14 },
        { .songLengthId = 29 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FLY] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BIND] = {
<<<<<<< HEAD
        { .songLengthId = 20 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SLAM] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_VINE_WHIP] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_STOMP] = {
<<<<<<< HEAD
        { .songLengthId = 29 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DOUBLE_KICK] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 44 },
        { .songLengthId = 17 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MEGA_KICK] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 42 },
        { .songLengthId = 17 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_JUMP_KICK] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ROLLING_KICK] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 12 },
        { .songLengthId = 17 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SAND_ATTACK] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 42 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HEADBUTT] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HORN_ATTACK] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 42 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FURY_ATTACK] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
        { .songLengthId =  2 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HORN_DRILL] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TACKLE] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 36 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BODY_SLAM] = {
<<<<<<< HEAD
        { .songLengthId = 29 },
        { .songLengthId = 12 },
        { .songLengthId =  2 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_WRAP] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TAKE_DOWN] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 35 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_THRASH] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId =  2 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DOUBLE_EDGE] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 36 },
        { .songLengthId = 10 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_HELD) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TAIL_WHIP] = {
<<<<<<< HEAD
        { .songLengthId = 5 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_POISON_STING] = {
<<<<<<< HEAD
        { .songLengthId = 30 },
        { .songLengthId = 44 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_CHOICE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TWINEEDLE] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId = 12 },
        { .songLengthId = 36 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_PIN_MISSILE] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId = 17 },
        { .songLengthId = 36 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_LEER] = {
<<<<<<< HEAD
        { .songLengthId = 14 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BITE] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_GROWL] = {
<<<<<<< HEAD
        { .songLengthId = 33 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ROAR] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SING] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SUPERSONIC] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 48 },
        { .songLengthId = 27 },
        { .songLengthId = 17 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SONIC_BOOM] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 17 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DISABLE] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId =  3 },
        { .songLengthId = 36 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ACID] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_EMBER] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FLAMETHROWER] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 26 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MIST] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_WATER_GUN] = {
<<<<<<< HEAD
        { .songLengthId = 29 },
        { .songLengthId = 50 },
        { .songLengthId = 44 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HYDRO_PUMP] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 24 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SURF] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ICE_BEAM] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BLIZZARD] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId = 50 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_PSYBEAM] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BUBBLE_BEAM] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 36 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_AURORA_BEAM] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 26 },
        { .songLengthId = 44 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [MOVE_HYPER_BEAM] = {
        { .songLengthId = 18 },
        { .songLengthId = 48 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HYPER_BEAM] = {
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_PECK] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DRILL_PECK] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SUBMISSION] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 17 },
        { .songLengthId = 11 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_LOW_KICK] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_COUNTER] = {
<<<<<<< HEAD
        { .songLengthId = 33 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SEISMIC_TOSS] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 17 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_STRENGTH] = {
<<<<<<< HEAD
        { .songLengthId = 50 },
        { .songLengthId =  3 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ABSORB] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MEGA_DRAIN] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 44 },
        { .songLengthId =  3 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_LEECH_SEED] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_GROWTH] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_RAZOR_LEAF] = {
<<<<<<< HEAD
        { .songLengthId = 5 },
        { .songLengthId = 48 },
        { .songLengthId = 12 },
=======
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SOLAR_BEAM] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 48 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_POISON_POWDER] = {
<<<<<<< HEAD
        { .songLengthId = 30 },
        { .songLengthId = 44 },
        { .songLengthId = 33 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_CHOICE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_STUN_SPORE] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SLEEP_POWDER] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 33 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_PETAL_DANCE] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 44 },
        { .songLengthId =  2 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_STRING_SHOT] = {
<<<<<<< HEAD
        { .songLengthId = 50 },
        { .songLengthId = 12 },
        { .songLengthId = 27 },
=======
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DRAGON_RAGE] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 27 },
        { .songLengthId = 5 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [MOVE_FIRE_SPIN] = {
        { .songLengthId = 18 },
        { .songLengthId = 48 },
        { .songLengthId = 15 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FIRE_SPIN] = {
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_THUNDER_SHOCK] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 48 },
        { .songLengthId = 27 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_THUNDERBOLT] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 48 },
        { .songLengthId = 26 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_THUNDER_WAVE] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 48 },
        { .songLengthId = 5 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_THUNDER] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ROCK_THROW] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_EARTHQUAKE] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 5 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FISSURE] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 50 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DIG] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TOXIC] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CONFUSION] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 41 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_PSYCHIC] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 15 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HYPNOSIS] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 24 },
        { .songLengthId = 17 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MEDITATE] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 17 },
        { .songLengthId =  3 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_AGILITY] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 17 },
        { .songLengthId = 17 },
        { .songLengthId = 14 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_QUICK_ATTACK] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 17 },
        { .songLengthId = 42 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_RAGE] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TELEPORT] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_NIGHT_SHADE] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 5 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MIMIC] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SCREECH] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 13 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_HELD) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DOUBLE_TEAM] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 44 },
        { .songLengthId = 12 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_RECOVER] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 44 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HARDEN] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MINIMIZE] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId = 15 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SMOKESCREEN] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CONFUSE_RAY] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 45 },
        { .songLengthId =  3 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_CURE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_WITHDRAW] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DEFENSE_CURL] = {
<<<<<<< HEAD
        { .songLengthId = 14 },
        { .songLengthId = 11 },
        { .songLengthId = 50 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BARRIER] = {
<<<<<<< HEAD
        { .songLengthId = 5 },
        { .songLengthId = 14 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_LIGHT_SCREEN] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HAZE] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_REFLECT] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FOCUS_ENERGY] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 44 },
        { .songLengthId = 11 },
        { .songLengthId = 48 },
        { .songLengthId = 12 },
        NULL_BARD_SOUND,
    },
    [MOVE_BIDE] = {
        { .songLengthId = 11 },
        { .songLengthId = 50 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        NULL_BARD_SOUND,
    },
    [MOVE_BIDE] = {
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_METRONOME] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 24 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MIRROR_MOVE] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 50 },
        { .songLengthId = 41 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SELF_DESTRUCT] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_EGG_BOMB] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_LICK] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SMOG] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SLUDGE] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BONE_CLUB] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FIRE_BLAST] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 48 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_WATERFALL] = {
<<<<<<< HEAD
        { .songLengthId = 29 },
        { .songLengthId = 48 },
        { .songLengthId = 29 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CLAMP] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SWIFT] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SKULL_BASH] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 51 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SPIKE_CANNON] = {
<<<<<<< HEAD
        { .songLengthId = 20 },
        { .songLengthId =  0 },
        { .songLengthId = 29 },
=======
        { .songId = PHONEME_ID(PH_PRICE_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CONSTRICT] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_AMNESIA] = {
<<<<<<< HEAD
        { .songLengthId =  2 },
        { .songLengthId = 14 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_KINESIS] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId = 12 },
        { .songLengthId = 17 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SOFT_BOILED] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 30 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HI_JUMP_KICK] = {
        { .songLengthId = 18 },
        { .songLengthId = 44 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_CHOICE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HIGH_JUMP_KICK] = {
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_GLARE] = {
<<<<<<< HEAD
        { .songLengthId = 5 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DREAM_EATER] = {
<<<<<<< HEAD
        { .songLengthId = 14 },
        { .songLengthId = 12 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_POISON_GAS] = {
<<<<<<< HEAD
        { .songLengthId = 30 },
        { .songLengthId = 27 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_CHOICE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BARRAGE] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_LEECH_LIFE] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_LOVELY_KISS] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 44 },
        { .songLengthId = 12 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [MOVE_SKY_ATTACK] = {
        { .songLengthId = 18 },
        { .songLengthId = 42 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SKY_ATTACK] = {
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TRANSFORM] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BUBBLE] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 36 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DIZZY_PUNCH] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 14 },
        { .songLengthId = 44 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SPORE] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FLASH] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_PSYWAVE] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId =  3 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SPLASH] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ACID_ARMOR] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 17 },
        { .songLengthId = 27 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CRABHAMMER] = {
<<<<<<< HEAD
        { .songLengthId =  2 },
        { .songLengthId =  0 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_EXPLOSION] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 24 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [MOVE_FURY_SWIPES] = {
        { .songLengthId = 48 },
        { .songLengthId = 12 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FURY_SWIPES] = {
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BONEMERANG] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 48 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_REST] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ROCK_SLIDE] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HYPER_FANG] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 48 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SHARPEN] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CONVERSION] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 48 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TRI_ATTACK] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 42 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SUPER_FANG] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 48 },
        { .songLengthId =  1 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_HELD) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SLASH] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SUBSTITUTE] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 17 },
        { .songLengthId = 39 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_STRUGGLE] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 36 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SKETCH] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TRIPLE_KICK] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 36 },
        { .songLengthId = 17 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_THIEF] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SPIDER_WEB] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 48 },
        { .songLengthId = 9 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MIND_READER] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 12 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_NIGHTMARE] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 5 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FLAME_WHEEL] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SNORE] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CURSE] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FLAIL] = {
<<<<<<< HEAD
        { .songLengthId = 5 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CONVERSION_2] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 48 },
        { .songLengthId = 44 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [MOVE_AEROBLAST] = {
        { .songLengthId = 5 },
        { .songLengthId = 24 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_AEROBLAST] = {
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_COTTON_SPORE] = {
<<<<<<< HEAD
        { .songLengthId = 29 },
        { .songLengthId = 29 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_REVERSAL] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 48 },
        { .songLengthId = 36 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SPITE] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_POWDER_SNOW] = {
<<<<<<< HEAD
        { .songLengthId = 33 },
        { .songLengthId = 48 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_PROTECT] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MACH_PUNCH] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SCARY_FACE] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 12 },
        { .songLengthId =  3 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    [MOVE_FAINT_ATTACK] = {
        { .songLengthId =  3 },
        { .songLengthId = 42 },
        { .songLengthId =  0 },
=======
    [MOVE_FEINT_ATTACK] = {
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SWEET_KISS] = {
<<<<<<< HEAD
        { .songLengthId = 14 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BELLY_DRUM] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SLUDGE_BOMB] = {
<<<<<<< HEAD
        { .songLengthId = 43 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_HELD) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MUD_SLAP] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_OCTAZOOKA] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 44 },
        { .songLengthId = 40 },
        { .songLengthId = 44 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_HELD) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SPIKES] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ZAP_CANNON] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId =  1 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_HELD) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FORESIGHT] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 20 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_PRICE_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DESTINY_BOND] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 15 },
        { .songLengthId = 12 },
        { .songLengthId = 27 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_PERISH_SONG] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 17 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ICY_WIND] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 12 },
        { .songLengthId = 15 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DETECT] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BONE_RUSH] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_LOCK_ON] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 29 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_OUTRAGE] = {
<<<<<<< HEAD
        { .songLengthId = 33 },
        { .songLengthId =  3 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SANDSTORM] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_GIGA_DRAIN] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 42 },
        { .songLengthId =  3 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ENDURE] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CHARM] = {
<<<<<<< HEAD
        { .songLengthId = 21 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ROLLOUT] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 33 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FALSE_SWIPE] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SWAGGER] = {
<<<<<<< HEAD
        { .songLengthId =  2 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MILK_DRINK] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SPARK] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FURY_CUTTER] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_STEEL_WING] = {
<<<<<<< HEAD
        { .songLengthId = 14 },
        { .songLengthId = 13 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_HELD) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MEAN_LOOK] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 36 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ATTRACT] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SLEEP_TALK] = {
<<<<<<< HEAD
        { .songLengthId = 14 },
        { .songLengthId = 29 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HEAL_BELL] = {
<<<<<<< HEAD
        { .songLengthId = 14 },
        { .songLengthId = 10 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_HELD) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_RETURN] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_PRESENT] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FRUSTRATION] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId =  3 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SAFEGUARD] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_PAIN_SPLIT] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 15 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SACRED_FIRE] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 17 },
        { .songLengthId = 18 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [MOVE_MAGNITUDE] = {
        { .songLengthId =  0 },
        { .songLengthId = 15 },
        { .songLengthId = 39 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MAGNITUDE] = {
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DYNAMIC_PUNCH] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId =  0 },
        { .songLengthId = 17 },
        { .songLengthId = 44 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MEGAHORN] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 42 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DRAGON_BREATH] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 27 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [MOVE_BATON_PASS] = {
        { .songLengthId = 42 },
        { .songLengthId = 27 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BATON_PASS] = {
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ENCORE] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_PURSUIT] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_RAPID_SPIN] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 15 },
        { .songLengthId = 15 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SWEET_SCENT] = {
<<<<<<< HEAD
        { .songLengthId = 14 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_IRON_TAIL] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 27 },
        { .songLengthId = 5 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_METAL_CLAW] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 36 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_VITAL_THROW] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 36 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MORNING_SUN] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 14 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SYNTHESIS] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId = 42 },
        { .songLengthId = 15 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MOONLIGHT] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HIDDEN_POWER] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId = 9 },
        { .songLengthId = 33 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CROSS_CHOP] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 29 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TWISTER] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_RAIN_DANCE] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SUNNY_DAY] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 14 },
        { .songLengthId = 5 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CRUNCH] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MIRROR_COAT] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 48 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_PSYCH_UP] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_EXTREME_SPEED] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ANCIENT_POWER] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 12 },
        { .songLengthId = 33 },
        { .songLengthId = 50 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [MOVE_SHADOW_BALL] = {
        { .songLengthId =  0 },
        { .songLengthId = 24 },
        { .songLengthId = 27 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SHADOW_BALL] = {
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FUTURE_SIGHT] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 48 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ROCK_SMASH] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_WHIRLPOOL] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BEAT_UP] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FAKE_OUT] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 33 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_UPROAR] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_STOCKPILE] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 20 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SPIT_UP] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SWALLOW] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HEAT_WAVE] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId =  3 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HAIL] = {
<<<<<<< HEAD
        { .songLengthId = 5 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TORMENT] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FLATTER] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_WILL_O_WISP] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 24 },
        { .songLengthId = 17 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MEMENTO] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 9 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FACADE] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FOCUS_PUNCH] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 44 },
        { .songLengthId = 44 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
<<<<<<< HEAD
    [MOVE_SMELLING_SALT] = {
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 27 },
=======
    [MOVE_SMELLING_SALTS] = {
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FOLLOW_ME] = {
<<<<<<< HEAD
        { .songLengthId = 21 },
        { .songLengthId = 24 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_NATURE_POWER] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 48 },
        { .songLengthId = 33 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CHARGE] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TAUNT] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HELPING_HAND] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TRICK] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ROLE_PLAY] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId =  3 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_WISH] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ASSIST] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_INGRAIN] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId =  3 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SUPERPOWER] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 48 },
        { .songLengthId = 33 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MAGIC_COAT] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 17 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_RECYCLE] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 18 },
        { .songLengthId = 36 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_REVENGE] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BRICK_BREAK] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 5 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_YAWN] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_KNOCK_OFF] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 29 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ENDEAVOR] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 9 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ERUPTION] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 44 },
        { .songLengthId = 29 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SKILL_SWAP] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_IMPRISON] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId = 15 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_REFRESH] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_GRUDGE] = {
<<<<<<< HEAD
        { .songLengthId = 43 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_HELD) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SNATCH] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SECRET_POWER] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 9 },
        { .songLengthId = 33 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DIVE] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ARM_THRUST] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CAMOUFLAGE] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 24 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TAIL_GLOW] = {
<<<<<<< HEAD
        { .songLengthId = 4 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_HELD) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_LUSTER_PURGE] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 48 },
        { .songLengthId = 50 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MIST_BALL] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FEATHER_DANCE] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 48 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TEETER_DANCE] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 48 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BLAZE_KICK] = {
<<<<<<< HEAD
        { .songLengthId = 5 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MUD_SPORT] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 24 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ICE_BALL] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_NEEDLE_ARM] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 42 },
        { .songLengthId = 29 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SLACK_OFF] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HYPER_VOICE] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 48 },
        { .songLengthId = 30 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_CHOICE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_POISON_FANG] = {
<<<<<<< HEAD
        { .songLengthId = 30 },
        { .songLengthId = 42 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_CHOICE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CRUSH_CLAW] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BLAST_BURN] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 51 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HYDRO_CANNON] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 24 },
        { .songLengthId =  0 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [MOVE_METEOR_MASH] = {
        { .songLengthId = 12 },
        { .songLengthId = 12 },
        { .songLengthId = 24 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
    },
    [MOVE_ASTONISH] = {
        { .songLengthId = 42 },
        { .songLengthId = 27 },
        { .songLengthId = 17 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_METEOR_MASH] = {
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
    },
    [MOVE_ASTONISH] = {
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_WEATHER_BALL] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 48 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_AROMATHERAPY] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 24 },
        { .songLengthId = 44 },
        { .songLengthId =  0 },
        { .songLengthId = 27 },
        { .songLengthId = 14 },
    },
    [MOVE_FAKE_TEARS] = {
        { .songLengthId =  3 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
    },
    [MOVE_FAKE_TEARS] = {
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_AIR_CUTTER] = {
<<<<<<< HEAD
        { .songLengthId = 5 },
        { .songLengthId = 42 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_OVERHEAT] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 48 },
        { .songLengthId = 12 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ODOR_SLEUTH] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 48 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ROCK_TOMB] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SILVER_WIND] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 48 },
        { .songLengthId = 15 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_METAL_SOUND] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 27 },
        { .songLengthId = 33 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_GRASS_WHISTLE] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 17 },
        { .songLengthId = 36 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_TICKLE] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 36 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_COSMIC_POWER] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 17 },
        { .songLengthId = 33 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_WATER_SPOUT] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 48 },
        { .songLengthId = 33 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SIGNAL_BEAM] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 27 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SHADOW_PUNCH] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 24 },
        { .songLengthId = 44 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_EXTRASENSORY] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 42 },
        { .songLengthId = 9 },
        { .songLengthId = 24 },
        { .songLengthId = 12 },
        NULL_BARD_SOUND,
    },
    [MOVE_SKY_UPPERCUT] = {
        { .songLengthId = 18 },
        { .songLengthId = 44 },
        { .songLengthId = 48 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        NULL_BARD_SOUND,
    },
    [MOVE_SKY_UPPERCUT] = {
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SAND_TOMB] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SHEER_COLD] = {
<<<<<<< HEAD
        { .songLengthId = 14 },
        { .songLengthId = 48 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MUDDY_WATER] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 12 },
        { .songLengthId = 27 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BULLET_SEED] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_AERIAL_ACE] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
        { .songLengthId =  3 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ICICLE_SPEAR] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 15 },
        { .songLengthId = 42 },
        { .songLengthId = 12 },
        { .songLengthId = 48 },
        NULL_BARD_SOUND,
    },
    [MOVE_IRON_DEFENSE] = {
        { .songLengthId = 18 },
        { .songLengthId = 27 },
        { .songLengthId = 12 },
        { .songLengthId = 9 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        NULL_BARD_SOUND,
    },
    [MOVE_IRON_DEFENSE] = {
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BLOCK] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_HOWL] = {
<<<<<<< HEAD
        { .songLengthId = 33 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DRAGON_CLAW] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 27 },
        { .songLengthId = 29 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FRENZY_PLANT] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BULK_UP] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BOUNCE] = {
<<<<<<< HEAD
        { .songLengthId = 33 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MUD_SHOT] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 29 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_POISON_TAIL] = {
<<<<<<< HEAD
        { .songLengthId = 30 },
        { .songLengthId = 44 },
        { .songLengthId = 5 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_CHOICE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_COVET] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_VOLT_TACKLE] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 51 },
        { .songLengthId =  0 },
        { .songLengthId = 36 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MAGICAL_LEAF] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 17 },
        { .songLengthId = 36 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [MOVE_WATER_SPORT] = {
        { .songLengthId = 27 },
        { .songLengthId = 48 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_WATER_SPORT] = {
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_CALM_MIND] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_LEAF_BLADE] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 5 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DRAGON_DANCE] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 27 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_ROCK_BLAST] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SHOCK_WAVE] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId =  3 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_WATER_PULSE] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 48 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DOOM_DESIRE] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 51 },
        { .songLengthId = 12 },
        { .songLengthId = 18 },
        { .songLengthId = 48 },
        NULL_BARD_SOUND,
    },
    [MOVE_PSYCHO_BOOST] = {
        { .songLengthId = 18 },
        { .songLengthId = 15 },
        { .songLengthId = 51 },
        { .songLengthId = 39 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DARK_PULSE] = {
        { .songLengthId = 42 },
        { .songLengthId = 12 },
        { .songLengthId = 45 },
        { .songLengthId = 48 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_PSYCHO_CUT] = {
        { .songLengthId = 42 },
        { .songLengthId = 12 },
        { .songLengthId = 27 },
        { .songLengthId = 48 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FOCUS_BLAST] = {
        { .songLengthId = 27 },
        { .songLengthId =  0 },
        { .songLengthId = 1 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_POWER_GEM] = {
        { .songLengthId = 29 },
        { .songLengthId =  0 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_SHADOW_CLAW] = {
        { .songLengthId = 27 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
        { .songLengthId = 12 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_FLASH_CANNON] = {
        { .songLengthId = 27 },
        { .songLengthId = 27 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_AIR_SLASH] = {
        { .songLengthId = 32 },
        { .songLengthId =  7 },
        { .songLengthId =  2 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_BUG_BUZZ] = {
        { .songLengthId =  2 },
        { .songLengthId =  7 },
        { .songLengthId = 12 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_DRAGON_PULSE] = {
        { .songLengthId = 33 },
        { .songLengthId =  5 },
        { .songLengthId =  4 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_EARTH_POWER] = {
        { .songLengthId = 42 },
        { .songLengthId = 22 },
        { .songLengthId = 2 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_PLAY_ROUGH] = {
        { .songLengthId = 42 },
        { .songLengthId = 22 },
        { .songLengthId = 2 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_MOONBLAST] = {
        { .songLengthId = 33 },
        { .songLengthId =  5 },
        { .songLengthId =  4 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [MOVE_POISON_JAB] = {
        { .songLengthId = 12 },
        { .songLengthId =  3 },
        { .songLengthId = 22 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        NULL_BARD_SOUND,
    },
    [MOVE_PSYCHO_BOOST] = {
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        PREV_BARD_SOUND,
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
};

#endif //GUARD_DATA_BARD_MUSIC_MOVES_H
