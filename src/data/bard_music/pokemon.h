#ifndef GUARD_DATA_BARD_MUSIC_POKEMON_H
#define GUARD_DATA_BARD_MUSIC_POKEMON_H

const u16 gNumBardWords_Species = NUM_SPECIES;

<<<<<<< HEAD
const struct BardSound gBardSounds_Pokemon[NUM_SPECIES][6] = {
=======
static const struct BardSoundTemplate sBardSoundTemplates_Pokemon[NUM_SPECIES][MAX_BARD_SOUNDS_PER_WORD] = {
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    [SPECIES_NONE] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_BULBASAUR] = {
<<<<<<< HEAD
        { .songLengthId = 36 },
        { .songLengthId = 42 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_IVYSAUR] = {
<<<<<<< HEAD
        { .songLengthId = 20 },
        { .songLengthId = 12 },
        { .songLengthId = 50 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_VENUSAUR] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 44 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CHARMANDER] = {
<<<<<<< HEAD
        { .songLengthId = 6 },
        { .songLengthId =  2 },
        { .songLengthId = 50 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CHARMELEON] = {
<<<<<<< HEAD
        { .songLengthId = 6 },
        { .songLengthId = 12 },
        { .songLengthId = 12 },
        { .songLengthId = 21 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [SPECIES_CHARIZARD] = {
        { .songLengthId = 6 },
        { .songLengthId = 17 },
        { .songLengthId = 50 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [SPECIES_SQUIRTLE] = {
        { .songLengthId = 48 },
        { .songLengthId = 36 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CHARIZARD] = {
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SQUIRTLE] = {
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_WARTORTLE] = {
<<<<<<< HEAD
        { .songLengthId = 8 },
        { .songLengthId = 48 },
        { .songLengthId = 36 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_CLOTH_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_BLASTOISE] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 30 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_CHOICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CATERPIE] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 48 },
        { .songLengthId = 12 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_METAPOD] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 42 },
        { .songLengthId = 21 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_BUTTERFREE] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 48 },
        { .songLengthId = 12 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_WEEDLE] = {
<<<<<<< HEAD
        { .songLengthId = 14 },
        { .songLengthId = 38 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_KAKUNA] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 39 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_BEEDRILL] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PIDGEY] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PIDGEOTTO] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 12 },
        { .songLengthId = 24 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PIDGEOT] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 12 },
        { .songLengthId = 21 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_RATTATA] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId =  0 },
        { .songLengthId = 44 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_RATICATE] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 12 },
        { .songLengthId =  3 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SPEAROW] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_FEAROW] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_EKANS] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ARBOK] = {
<<<<<<< HEAD
        { .songLengthId = 6 },
        { .songLengthId = 23 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PIKACHU] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 42 },
        { .songLengthId = 39 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_RAICHU] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SANDSHREW] = {
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
    [SPECIES_SANDSLASH] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_NIDORAN_F] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 24 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_NIDORINA] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 24 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_NIDOQUEEN] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 24 },
        { .songLengthId = 12 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_NIDORAN_M] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 24 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_NIDORINO] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 24 },
        { .songLengthId = 12 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_NIDOKING] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 24 },
        { .songLengthId = 12 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CLEFAIRY] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 11 },
        { .songLengthId = 12 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CLEFABLE] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 42 },
        { .songLengthId = 36 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_VULPIX] = {
<<<<<<< HEAD
        { .songLengthId = 36 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_NINETALES] = {
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
    [SPECIES_JIGGLYPUFF] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 39 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [SPECIES_WIGGLYTUFF] = {
        { .songLengthId = 17 },
        { .songLengthId = 39 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [SPECIES_ZUBAT] = {
        { .songLengthId = 39 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_WIGGLYTUFF] = {
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ZUBAT] = {
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GOLBAT] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ODDISH] = {
<<<<<<< HEAD
        { .songLengthId = 21 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GLOOM] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_VILEPLUME] = {
<<<<<<< HEAD
        { .songLengthId = 20 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PARAS] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PARASECT] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId =  0 },
        { .songLengthId = 9 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_VENONAT] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 26 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_VENOMOTH] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 26 },
        { .songLengthId = 21 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DIGLETT] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DUGTRIO] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 12 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MEOWTH] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 33 },
        { .songLengthId = 17 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PERSIAN] = {
<<<<<<< HEAD
        { .songLengthId = 50 },
        { .songLengthId = 17 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PSYDUCK] = {
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
    [SPECIES_GOLDUCK] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MANKEY] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PRIMEAPE] = {
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
    [SPECIES_GROWLITHE] = {
<<<<<<< HEAD
        { .songLengthId = 33 },
        { .songLengthId = 15 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ARCANINE] = {
<<<<<<< HEAD
        { .songLengthId = 6 },
        { .songLengthId =  3 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_POLIWAG] = {
<<<<<<< HEAD
        { .songLengthId = 21 },
        { .songLengthId = 12 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_POLIWHIRL] = {
<<<<<<< HEAD
        { .songLengthId = 21 },
        { .songLengthId = 12 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_POLIWRATH] = {
<<<<<<< HEAD
        { .songLengthId = 21 },
        { .songLengthId = 12 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ABRA] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_KADABRA] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId =  0 },
        { .songLengthId = 44 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ALAKAZAM] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 44 },
        { .songLengthId = 44 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MACHOP] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 21 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MACHOKE] = {
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
    [SPECIES_MACHAMP] = {
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
    [SPECIES_BELLSPROUT] = {
<<<<<<< HEAD
        { .songLengthId = 11 },
        { .songLengthId = 33 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_WEEPINBELL] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 15 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_VICTREEBEL] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 12 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TENTACOOL] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 42 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TENTACRUEL] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 42 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GEODUDE] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 24 },
        { .songLengthId = 39 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GRAVELER] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 9 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GOLEM] = {
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
    [SPECIES_PONYTA] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_RAPIDASH] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 17 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SLOWPOKE] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SLOWBRO] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MAGNEMITE] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 9 },
        { .songLengthId = 18 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MAGNETON] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 9 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_FARFETCHD] = {
<<<<<<< HEAD
        { .songLengthId = 6 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DODUO] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 39 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DODRIO] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 12 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SEEL] = {
<<<<<<< HEAD
        { .songLengthId = 14 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DEWGONG] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 21 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GRIMER] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MUK] = {
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
    [SPECIES_SHELLDER] = {
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
    [SPECIES_CLOYSTER] = {
<<<<<<< HEAD
        { .songLengthId = 30 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_CHOICE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GASTLY] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_HAUNTER] = {
<<<<<<< HEAD
        { .songLengthId = 21 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GENGAR] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 8 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_CLOTH_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ONIX] = {
<<<<<<< HEAD
        { .songLengthId = 21 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DROWZEE] = {
<<<<<<< HEAD
        { .songLengthId = 33 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_HYPNO] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_KRABBY] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_KINGLER] = {
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
    [SPECIES_VOLTORB] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ELECTRODE] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 9 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_EXEGGCUTE] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 44 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_EXEGGUTOR] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 44 },
        { .songLengthId = 9 },
        { .songLengthId = 50 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [SPECIES_CUBONE] = {
        { .songLengthId = 45 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CUBONE] = {
        { .songId = PHONEME_ID(PH_CURE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MAROWAK] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 26 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_HITMONLEE] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 21 },
        { .songLengthId = 12 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_HITMONCHAN] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 21 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_LICKITUNG] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_KOFFING] = {
<<<<<<< HEAD
        { .songLengthId = 21 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_WEEZING] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_RHYHORN] = {
<<<<<<< HEAD
        { .songLengthId = 20 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_RHYDON] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 21 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CHANSEY] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TANGELA] = {
<<<<<<< HEAD
        { .songLengthId =  2 },
        { .songLengthId = 9 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_KANGASKHAN] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId =  0 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_HORSEA] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SEADRA] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GOLDEEN] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SEAKING] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_STARYU] = {
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
    [SPECIES_STARMIE] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MR_MIME] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 48 },
        { .songLengthId = 18 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SCYTHER] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_JYNX] = {
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
    [SPECIES_ELECTABUZZ] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 9 },
        { .songLengthId = 44 },
        { .songLengthId = 44 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MAGMAR] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 29 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PINSIR] = {
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
    [SPECIES_TAUROS] = {
<<<<<<< HEAD
        { .songLengthId = 29 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MAGIKARP] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 17 },
        { .songLengthId = 27 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GYARADOS] = {
<<<<<<< HEAD
        { .songLengthId = 29 },
        { .songLengthId = 9 },
        { .songLengthId = 17 },
        { .songLengthId = 29 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_LAPRAS] = {
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
    [SPECIES_DITTO] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_EEVEE] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_VAPOREON] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 24 },
        { .songLengthId = 12 },
        { .songLengthId = 21 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_JOLTEON] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 12 },
        { .songLengthId = 21 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_FLAREON] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 12 },
        { .songLengthId = 21 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PORYGON] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 12 },
        { .songLengthId = 21 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OMANYTE] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId =  0 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OMASTAR] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId =  0 },
        { .songLengthId = 21 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_KABUTO] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 39 },
        { .songLengthId = 26 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_KABUTOPS] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 39 },
        { .songLengthId = 21 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_AERODACTYL] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 24 },
        { .songLengthId =  0 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SNORLAX] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ARTICUNO] = {
<<<<<<< HEAD
        { .songLengthId = 6 },
        { .songLengthId = 17 },
        { .songLengthId = 39 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ZAPDOS] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MOLTRES] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DRATINI] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 12 },
        { .songLengthId = 12 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DRAGONAIR] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 21 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DRAGONITE] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 21 },
        { .songLengthId = 18 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MEWTWO] = {
<<<<<<< HEAD
        { .songLengthId = 45 },
        { .songLengthId = 39 },
=======
        { .songId = PHONEME_ID(PH_CURE_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MEW] = {
<<<<<<< HEAD
        { .songLengthId = 45 },
=======
        { .songId = PHONEME_ID(PH_CURE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CHIKORITA] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 24 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_BAYLEEF] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MEGANIUM] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CYNDAQUIL] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId = 42 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_QUILAVA] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 6 },
        { .songLengthId = 8 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_CLOTH_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TYPHLOSION] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 24 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
    },
    [SPECIES_TOTODILE] = {
        { .songLengthId = 24 },
        { .songLengthId = 24 },
        { .songLengthId = 18 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TOTODILE] = {
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CROCONAW] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 24 },
        { .songLengthId = 27 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_FERALIGATR] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId =  0 },
        { .songLengthId = 15 },
        { .songLengthId =  3 },
        { .songLengthId = 48 },
        NULL_BARD_SOUND,
    },
    [SPECIES_SENTRET] = {
        { .songLengthId = 9 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        NULL_BARD_SOUND,
    },
    [SPECIES_SENTRET] = {
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_FURRET] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_HOOTHOOT] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_NOCTOWL] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 33 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_LEDYBA] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_LEDIAN] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SPINARAK] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId = 48 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ARIADOS] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CROBAT] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CHINCHOU] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId = 33 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_LANTURN] = {
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
    [SPECIES_PICHU] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CLEFFA] = {
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
    [SPECIES_IGGLYBUFF] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 42 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TOGEPI] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 9 },
        { .songLengthId = 12 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TOGETIC] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 9 },
        { .songLengthId = 17 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_NATU] = {
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
    [SPECIES_XATU] = {
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
    [SPECIES_MAREEP] = {
<<<<<<< HEAD
        { .songLengthId = 29 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_FLAAFFY] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_AMPHAROS] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 6 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_BELLOSSOM] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 27 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MARILL] = {
<<<<<<< HEAD
        { .songLengthId = 8 },
        { .songLengthId = 16 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_CLOTH_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_HELD) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_AZUMARILL] = {
<<<<<<< HEAD
        { .songLengthId = 8 },
        { .songLengthId = 39 },
        { .songLengthId = 44 },
        { .songLengthId = 16 },
=======
        { .songId = PHONEME_ID(PH_CLOTH_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_HELD) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SUDOWOODO] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 24 },
        { .songLengthId = 39 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_POLITOED] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 12 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_HOPPIP] = {
<<<<<<< HEAD
        { .songLengthId = 29 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SKIPLOOM] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_JUMPLUFF] = {
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
    [SPECIES_AIPOM] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SUNKERN] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SUNFLORA] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 24 },
        { .songLengthId = 44 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_YANMA] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_WOOPER] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_QUAGSIRE] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 18 },
        { .songLengthId = 50 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ESPEON] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_UMBREON] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 12 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MURKROW] = {
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
    [SPECIES_SLOWKING] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MISDREAVUS] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 12 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_UNOWN] = {
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
    [SPECIES_WOBBUFFET] = {
<<<<<<< HEAD
        { .songLengthId = 29 },
        { .songLengthId = 44 },
        { .songLengthId = 9 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GIRAFARIG] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId =  0 },
        { .songLengthId = 42 },
        { .songLengthId = 17 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PINECO] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_FORRETRESS] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 9 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DUNSPARCE] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 28 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_HELD) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GLIGAR] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_STEELIX] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SNUBBULL] = {
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
    [SPECIES_GRANBULL] = {
<<<<<<< HEAD
        { .songLengthId =  2 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_QWILFISH] = {
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
    [SPECIES_SCIZOR] = {
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
    [SPECIES_SHUCKLE] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 38 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_HERACROSS] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 42 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SNEASEL] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 38 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TEDDIURSA] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 48 },
        { .songLengthId = 44 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_URSARING] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 44 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SLUGMA] = {
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
    [SPECIES_MAGCARGO] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 27 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SWINUB] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PILOSWINE] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 26 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CORSOLA] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 24 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_REMORAID] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 24 },
        { .songLengthId =  3 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OCTILLERY] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 17 },
        { .songLengthId = 48 },
        { .songLengthId = 12 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DELIBIRD] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MANTINE] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SKARMORY] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 26 },
        { .songLengthId = 12 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_HOUNDOUR] = {
<<<<<<< HEAD
        { .songLengthId = 35 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_MOUTH_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_HOUNDOOM] = {
<<<<<<< HEAD
        { .songLengthId = 33 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_KINGDRA] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PHANPY] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DONPHAN] = {
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
    [SPECIES_PORYGON2] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 12 },
        { .songLengthId = 27 },
        { .songLengthId = 39 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_STANTLER] = {
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
    [SPECIES_SMEARGLE] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 38 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TYROGUE] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_HITMONTOP] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 21 },
        { .songLengthId = 29 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SMOOCHUM] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 44 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ELEKID] = {
<<<<<<< HEAD
        { .songLengthId = 11 },
        { .songLengthId = 11 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MAGBY] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MILTANK] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId =  3 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_BLISSEY] = {
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
    [SPECIES_RAIKOU] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ENTEI] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId =  3 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SUICUNE] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_LARVITAR] = {
<<<<<<< HEAD
        { .songLengthId = 21 },
        { .songLengthId = 17 },
        { .songLengthId = 21 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_LOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PUPITAR] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 17 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TYRANITAR] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId =  0 },
        { .songLengthId = 17 },
        { .songLengthId = 27 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_LUGIA] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_HO_OH] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CELEBI] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_B] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_C] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_D] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_E] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_F] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_G] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_H] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_I] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_J] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_K] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_L] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_M] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_N] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_O] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_P] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_Q] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_R] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_S] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_T] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_U] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_V] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_W] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_X] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_Y] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_OLD_UNOWN_Z] = {
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TREECKO] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GROVYLE] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SCEPTILE] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TORCHIC] = {
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
    [SPECIES_COMBUSKEN] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 44 },
        { .songLengthId = 15 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_BLAZIKEN] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 17 },
        { .songLengthId = 15 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MUDKIP] = {
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
    [SPECIES_MARSHTOMP] = {
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
    [SPECIES_SWAMPERT] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 48 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_POOCHYENA] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 12 },
        { .songLengthId = 9 },
        { .songLengthId = 44 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MIGHTYENA] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 12 },
        { .songLengthId = 9 },
        { .songLengthId = 44 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ZIGZAGOON] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId =  0 },
        { .songLengthId = 39 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_LINOONE] = {
<<<<<<< HEAD
        { .songLengthId = 20 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_WURMPLE] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 36 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SILCOON] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 40 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_GOOSE_HELD) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_BEAUTIFLY] = {
<<<<<<< HEAD
        { .songLengthId = 45 },
        { .songLengthId = 9 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_CURE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CASCOON] = {
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
    [SPECIES_DUSTOX] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 23 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_LOT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_LOTAD] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_LOMBRE] = {
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
    [SPECIES_LUDICOLO] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 9 },
        { .songLengthId = 26 },
        { .songLengthId = 26 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SEEDOT] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_NUZLEAF] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SHIFTRY] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_NINCADA] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId = 6 },
        { .songLengthId = 6 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_NINJASK] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SHEDINJA] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 15 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TAILLOW] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SWELLOW] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SHROOMISH] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_BRELOOM] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SPINDA] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_WINGULL] = {
<<<<<<< HEAD
        { .songLengthId = 15 },
        { .songLengthId = 36 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_PELIPPER] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SURSKIT] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MASQUERAIN] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 48 },
        { .songLengthId =  3 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_WAILMER] = {
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
    [SPECIES_WAILORD] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SKITTY] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DELCATTY] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId =  0 },
        { .songLengthId = 12 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_KECLEON] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_BALTOY] = {
<<<<<<< HEAD
        { .songLengthId =  1 },
        { .songLengthId = 30 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_HELD) },
        { .songId = PHONEME_ID(PH_CHOICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CLAYDOL] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_NOSEPASS] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TORKOAL] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SABLEYE] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 11 },
        { .songLengthId = 18 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_BARBOACH] = {
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
    [SPECIES_WHISCASH] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_LUVDISC] = {
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
    [SPECIES_CORPHISH] = {
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
    [SPECIES_CRAWDAUNT] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_FEEBAS] = {
<<<<<<< HEAD
        { .songLengthId = 14 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MILOTIC] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 24 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CARVANHA] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId =  1 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_HELD) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SHARPEDO] = {
<<<<<<< HEAD
        { .songLengthId = 29 },
        { .songLengthId = 12 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TRAPINCH] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 15 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_VIBRAVA] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 27 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_FLYGON] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MAKUHITA] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 39 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_HARIYAMA] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 12 },
        { .songLengthId = 27 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ELECTRIKE] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 9 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MANECTRIC] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 9 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_NUMEL] = {
<<<<<<< HEAD
        { .songLengthId = 44 },
        { .songLengthId = 11 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_DRESS_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CAMERUPT] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 48 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SPHEAL] = {
<<<<<<< HEAD
        { .songLengthId = 14 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SEALEO] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 12 },
        { .songLengthId = 24 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_WALREIN] = {
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
    [SPECIES_CACNEA] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CACTURNE] = {
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
    [SPECIES_SNORUNT] = {
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
    [SPECIES_GLALIE] = {
<<<<<<< HEAD
        { .songLengthId = 5 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_LUNATONE] = {
<<<<<<< HEAD
        { .songLengthId = 39 },
        { .songLengthId = 44 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SOLROCK] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_AZURILL] = {
<<<<<<< HEAD
        { .songLengthId = 6 },
        { .songLengthId = 39 },
        { .songLengthId = 15 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SPOINK] = {
<<<<<<< HEAD
        { .songLengthId = 30 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_CHOICE_BLEND) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GRUMPIG] = {
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
    [SPECIES_PLUSLE] = {
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
    [SPECIES_MINUN] = {
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
    [SPECIES_MAWILE] = {
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
    [SPECIES_MEDITITE] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 17 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_MEDICHAM] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 17 },
        { .songLengthId =  0 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SWABLU] = {
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
    [SPECIES_ALTARIA] = {
<<<<<<< HEAD
        { .songLengthId = 6 },
        { .songLengthId = 27 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_CLOTH_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_WYNAUT] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DUSKULL] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 38 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_FOOT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DUSCLOPS] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ROSELIA] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SLAKOTH] = {
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
    [SPECIES_VIGOROTH] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 48 },
        { .songLengthId = 27 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SLAKING] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GULPIN] = {
<<<<<<< HEAD
        { .songLengthId = 36 },
        { .songLengthId = 15 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FOOT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SWALOT] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_TROPIUS] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_WHISMUR] = {
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
    [SPECIES_LOUDRED] = {
<<<<<<< HEAD
        { .songLengthId = 33 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_EXPLOUD] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 33 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CLAMPERL] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 50 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_HUNTAIL] = {
<<<<<<< HEAD
        { .songLengthId = 42 },
        { .songLengthId = 5 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GOREBYSS] = {
<<<<<<< HEAD
        { .songLengthId = 26 },
        { .songLengthId = 44 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        { .songId = PHONEME_ID(PH_STRUT_SOLO) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ABSOL] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SHUPPET] = {
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
    [SPECIES_BANETTE] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SEVIPER] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 18 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ZANGOOSE] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 39 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_RELICANTH] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 17 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ARON] = {
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
    [SPECIES_LAIRON] = {
<<<<<<< HEAD
        { .songLengthId = 5 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_AGGRON] = {
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
<<<<<<< HEAD
    [SPECIES_CASTFORM] = {
        { .songLengthId =  0 },
        { .songLengthId = 26 },
        { .songLengthId = 51 },
=======
    [SPECIES_CASTFORM_NORMAL] = {
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_VOLBEAT] = {
<<<<<<< HEAD
        { .songLengthId = 24 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ILLUMISE] = {
<<<<<<< HEAD
        { .songLengthId = 12 },
        { .songLengthId = 39 },
        { .songLengthId = 12 },
        { .songLengthId =  3 },
=======
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOOSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_LILEEP] = {
<<<<<<< HEAD
        { .songLengthId = 17 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CRADILY] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId = 17 },
        { .songLengthId = 12 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ANORITH] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 24 },
        { .songLengthId = 17 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_ARMALDO] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 27 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_RALTS] = {
<<<<<<< HEAD
        { .songLengthId =  7 },
        { .songLengthId = 51 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_CLOTH_HELD) },
        PREV_BARD_SOUND,
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_KIRLIA] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 12 },
        { .songLengthId = 42 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GARDEVOIR] = {
<<<<<<< HEAD
        { .songLengthId = 27 },
        { .songLengthId = 9 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_BAGON] = {
<<<<<<< HEAD
        { .songLengthId = 5 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_SOLO) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_SHELGON] = {
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
    [SPECIES_SALAMENCE] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId =  0 },
        { .songLengthId = 9 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_BELDUM] = {
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
    [SPECIES_METANG] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_METAGROSS] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 42 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_REGIROCK] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 27 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_REGICE] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 18 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_REGISTEEL] = {
<<<<<<< HEAD
        { .songLengthId = 9 },
        { .songLengthId = 12 },
        { .songLengthId = 14 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_KYOGRE] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 24 },
        { .songLengthId = 48 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_GROUDON] = {
<<<<<<< HEAD
        { .songLengthId = 33 },
        { .songLengthId = 27 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_MOUTH_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_RAYQUAZA] = {
<<<<<<< HEAD
        { .songLengthId =  3 },
        { .songLengthId =  3 },
        { .songLengthId = 42 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_FACE_BLEND) },
        { .songId = PHONEME_ID(PH_STRUT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_LATIAS] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 12 },
        { .songLengthId =  0 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_LATIOS] = {
<<<<<<< HEAD
        { .songLengthId =  0 },
        { .songLengthId = 12 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_TRAP_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_JIRACHI] = {
<<<<<<< HEAD
        { .songLengthId = 48 },
        { .songLengthId = 27 },
        { .songLengthId = 12 },
        { .songLengthId = 51 },
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DEOXYS] = {
        { .songLengthId = 12 },
        { .songLengthId = 27 },
        { .songLengthId = 17 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_NURSE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        PREV_BARD_SOUND,
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_DEOXYS_NORMAL] = {
        { .songId = PHONEME_ID(PH_FLEECE_BLEND) },
        { .songId = PHONEME_ID(PH_THOUGHT_BLEND) },
        { .songId = PHONEME_ID(PH_KIT_SOLO) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    },
    [SPECIES_CHIMECHO] = {
<<<<<<< HEAD
        { .songLengthId = 18 },
        { .songLengthId = 9 },
        { .songLengthId = 24 },
        { .songLengthId = 51 },
=======
        { .songId = PHONEME_ID(PH_PRICE_BLEND) },
        { .songId = PHONEME_ID(PH_DRESS_BLEND) },
        { .songId = PHONEME_ID(PH_GOAT_BLEND) },
        PREV_BARD_SOUND,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        NULL_BARD_SOUND,
        NULL_BARD_SOUND,
    }
};

#endif //GUARD_DATA_BARD_MUSIC_POKEMON_H
