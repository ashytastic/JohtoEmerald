const struct BattleFrontierTrainer gBattleFrontierTrainers[FRONTIER_TRAINERS_COUNT] =
{
    [FRONTIER_TRAINER_BRADY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("BRADY"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_NEVER, EC_WORD_GOING, EC_WORD_TO, EC_WORD_LOSE, EC_WORD_EXCL},
        .speechWin = {EC_WORD_I_AM, EC_WORD_STRONG, EC_WORD_AREN_T, EC_WORD_I, EC_WORD_QUES, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WHAT, EC_WORD_QUES, EC_EMPTY_WORD, EC_WORD_BUT, EC_WORD_HOW, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Brady
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CONNER] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("CONNER"),
        .speechBefore = {EC_WORD_LOSING, EC_WORD_DOESN_T, EC_WORD_BUG, EC_WORD_ME, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_A, EC_WORD_WIN, EC_WORD_IS, EC_WORD_JUST, EC_WORD_AWESOME, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_DARN, EC_WORD_ELLIPSIS, EC_WORD_LOSING, EC_WORD_DOES, EC_WORD_BUG, EC_WORD_ME},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Conner
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_BRADLEY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("BRADLEY"),
        .speechBefore = {EC_WORD_HEY_THERE, EC_WORD_EXCL, EC_WORD_YOU_RE, EC_WORD_MY, EC_WORD_OPPONENT, EC_WORD_TODAY},
        .speechWin = {EC_WORD_HAHAHA, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_SEE_YA, EC_WORD_LATER, EC_WORD_EXCL},
        .speechLose = {EC_WORD_TOMORROW, EC_WORD_IS, EC_WORD_WHEN, EC_WORD_WE, EC_WORD_REALLY, EC_WORD_BATTLE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Bradley
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CYBIL] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("CYBIL"),
        .speechBefore = {EC_WORD_YOU_RE, EC_WORD_REALLY, EC_WORD_NOT_VERY, EC_WORD_SCARY, EC_WORD_AT, EC_WORD_ALL},
        .speechWin = {EC_WORD_IT_S, EC_WORD_SAD, EC_WORD_TO, EC_WORD_SEE, EC_WORD_YOU, EC_MOVE2(STRUGGLE)},
        .speechLose = {EC_WORD_THIS, EC_WORD_CAN_T, EC_WORD_BE, EC_WORD_HAPPENING, EC_WORD_TO_ME, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Cybil
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_RODETTE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("RODETTE"),
        .speechBefore = {EC_WORD_OH, EC_WORD_THIS, EC_WORD_IS, EC_WORD_SO, EC_WORD_EXCITING, EC_WORD_EXCL},
        .speechWin = {EC_WORD_IT_S, EC_WORD_INCREDIBLE, EC_WORD_HOW, EC_WORD_STRONG, EC_WORD_I_AM, EC_WORD_EXCL},
        .speechLose = {EC_WORD_OH_DEAR, EC_WORD_ELLIPSIS, EC_WORD_I_AM, EC_WORD_JUST, EC_WORD_NO, EC_WORD_GOOD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Rodette
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_PEGGY] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("PEGGY"),
        .speechBefore = {EC_WORD_GET, EC_WORD_READY, EC_WORD_TO, EC_WORD_BE, EC_WORD_DESTROYED, EC_WORD_EXCL},
        .speechWin = {EC_WORD_HAHAHA, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_WORD_I_AM, EC_WORD_LOLLING, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I_AM, EC_WORD_FEELING, EC_WORD_SAD, EC_WORD_THANKS, EC_WORD_TO, EC_WORD_YOU},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Peggy
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KEITH] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("KEITH"),
        .speechBefore = {EC_WORD_I, EC_WORD_DON_T, EC_WORD_JUST, EC_WORD_STUDY, EC_WORD_YOU, EC_WORD_KNOW},
        .speechWin = {EC_WORD_YOU, EC_WORD_DON_T, EC_WORD_STUDY, EC_WORD_ENOUGH, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I, EC_WORD_NEED, EC_WORD_TO, EC_WORD_STUDY, EC_WORD_MORE, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Keith
=======
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GRAYSON] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("GRAYSON"),
        .speechBefore = {EC_WORD_A, EC_WORD_POKEMON, EC_WORD_BATTLE, EC_WORD_ISN_T, EC_WORD_CHILD_S_PLAY, EC_WORD_EXCL},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_DONE, EC_WORD_AREN_T, EC_WORD_YOU, EC_WORD_QUES, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WE, EC_WORD_WERE, EC_WORD_LIKE, EC_WORD_TOYS, EC_WORD_TO, EC_WORD_YOU},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Grayson
=======
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GLENN] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("GLENN"),
        .speechBefore = {EC_WORD_I, EC_WORD_WOULD, EC_WORD_BE, EC_WORD_COOL, EC_WORD_IF_I_WIN, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_COOL, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_THAT_S, EC_WORD_WHAT, EC_WORD_I_AM},
        .speechLose = {EC_WORD_I_AM, EC_WORD_NOT, EC_WORD_GOING, EC_WORD_TO, EC_WORD_BE, EC_WORD_COOL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Glenn
=======
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_LILIANA] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("LILIANA"),
        .speechBefore = {EC_WORD_I, EC_WORD_WON_T, EC_WORD_GIVE_UP, EC_WORD_UNTIL, EC_WORD_I, EC_WORD_WIN},
        .speechWin = {EC_WORD_THERE, EC_WORD_IS, EC_WORD_NO, EC_WORD_SURRENDER, EC_WORD_IN, EC_WORD_ME},
        .speechLose = {EC_WORD_THAT_S, EC_WORD_IT, EC_WORD_ELLIPSIS, EC_WORD_I, EC_WORD_GIVE_UP, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Liliana
=======
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ELISE] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("ELISE"),
        .speechBefore = {EC_WORD_MY, EC_WORD_STRATEGY, EC_WORD_IS, EC_WORD_FROM, EC_WORD_MY, EC_WORD_FATHER},
        .speechWin = {EC_WORD_I, EC_WORD_WIN, EC_WORD_EXCL, EC_WORD_FATHER, EC_WORD_I_VE, EC_WORD_WON},
        .speechLose = {EC_WORD_FORGIVE, EC_WORD_ME, EC_WORD_FATHER, EC_WORD_FOR, EC_WORD_I_VE, EC_WORD_LOST},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Elise
=======
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ZOEY] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("ZOEY"),
        .speechBefore = {EC_WORD_PLEASE, EC_WORD_BATTLE, EC_WORD_LIKE, EC_WORD_YOU, EC_WORD_MEAN, EC_WORD_IT},
        .speechWin = {EC_WORD_THANK_YOU, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_WORD_THANK_YOU, EC_WORD_SO, EC_WORD_MUCH},
        .speechLose = {EC_WORD_WERE, EC_WORD_YOU, EC_WORD_REALLY, EC_WORD_BEING, EC_WORD_SERIOUS, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Zoey
=======
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MANUEL] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("MANUEL"),
        .speechBefore = {EC_WORD_ME, EC_WORD_LOSE, EC_WORD_QUES, EC_WORD_THAT_S, EC_WORD_PREPOSTEROUS, EC_WORD_EXCL},
        .speechWin = {EC_WORD_NATURALLY, EC_WORD_I, EC_WORD_WIN, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WAAAH, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_I, EC_WORD_LOST, EC_WORD_MOTHER},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Manuel
=======
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_RUSS] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("RUSS"),
        .speechBefore = {EC_WORD_THEY, EC_WORD_ALL, EC_WORD_WANT, EC_WORD_MY, EC_WORD_FABULOUS, EC_WORD_POKEMON},
        .speechWin = {EC_WORD_I, EC_WORD_WILL, EC_WORD_HAVE, EC_WORD_A, EC_WORD_POKEMON, EC_WORD_PARTY},
        .speechLose = {EC_WORD_HOW, EC_WORD_COULD, EC_WORD_YOU, EC_WORD_DO, EC_WORD_THAT, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Russ
=======
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DUSTIN] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("DUSTIN"),
        .speechBefore = {EC_WORD_I, EC_WORD_REALLY, EC_WORD_LIKE, EC_WORD_COOL, EC_WORD_POKEMON, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I, EC_WORD_LIKE, EC_WORD_MYSELF, EC_WORD_WHEN_I_WIN, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I, EC_WORD_LIKE, EC_WORD_MYSELF, EC_WORD_IF_I_LOSE, EC_WORD_TOO, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Dustin
=======
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_TINA] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("TINA"),
        .speechBefore = {EC_WORD_IF_I_WIN, EC_WORD_YOU, EC_WORD_CAN, EC_WORD_HAVE, EC_WORD_A, EC_MOVE2(SWEET_KISS)},
        .speechWin = {EC_WORD_HERE_IT_IS, EC_WORD_YOUR, EC_MOVE2(SWEET_KISS), EC_WORD_FROM, EC_WORD_MY, EC_POKEMON_NATIONAL(JYNX)},
        .speechLose = {EC_WORD_YOU, EC_WORD_WANT, EC_WORD_A, EC_MOVE(SWIFT), EC_MOVE2(MEGA_KICK), EC_WORD_INSTEAD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Tina
=======
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GILLIAN1] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("GILLIAN"),
        .speechBefore = {EC_WORD_THE, EC_WORD_GOURMET, EC_WORD_THING, EC_WORD_IS, EC_WORD_SO, EC_WORD_YESTERDAY},
        .speechWin = {EC_WORD_POKEMON, EC_WORD_NEVER, EC_WORD_GO, EC_WORD_OUT, EC_WORD_OF, EC_WORD_FASHION},
        .speechLose = {EC_WORD_LOSING, EC_WORD_DOESN_T, EC_WORD_DISAPPOINT, EC_WORD_ME, EC_EMPTY_WORD, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Gillian
=======
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ZOE] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("ZOE"),
        .speechBefore = {EC_WORD_I, EC_WORD_HAVEN_T, EC_WORD_A, EC_WORD_WORRY, EC_WORD_AT, EC_WORD_ALL},
        .speechWin = {EC_WORD_LIFE, EC_WORD_IS, EC_WORD_ALWAYS, EC_WORD_GOOD, EC_WORD_TO_ME, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I, EC_WORD_WORRY, EC_WORD_ABOUT, EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_SKILL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Zoe
=======
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CHEN] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("CHEN"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_TOTALLY, EC_WORD_READY, EC_WORD_TO, EC_WORD_ROCK, EC_WORD_TODAY},
        .speechWin = {EC_WORD_I_AM, EC_WORD_READY, EC_WORD_TO, EC_WORD_GO, EC_WORD_ON, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I_VE, EC_WORD_LOST, EC_WORD_MY, EC_MOVE(FOCUS_ENERGY), EC_WORD_AND, EC_WORD_TOUGHNESS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Chen
=======
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_AL] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("AL"),
        .speechBefore = {EC_WORD_YOUR, EC_WORD_LOOK, EC_WORD_SAYS, EC_WORD_YOU_RE, EC_WORD_REALLY, EC_WORD_TOUGH},
        .speechWin = {EC_WORD_IT_S, EC_WORD_ME, EC_WORD_WHO_IS, EC_WORD_REALLY, EC_WORD_TOUGH, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I_AM, EC_WORD_RIGHT, EC_WORD_EXCL, EC_WORD_YOU_RE, EC_WORD_REALLY, EC_WORD_TOUGH},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Al
=======
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MITCH] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("MITCH"),
        .speechBefore = {EC_WORD_MOTHER, EC_WORD_NATURE, EC_WORD_IS, EC_WORD_MY, EC_WORD_ALLY, EC_WORD_EXCL},
        .speechWin = {EC_WORD_WAS, EC_WORD_THAT, EC_WORD_ENOUGH, EC_WORD_FOR, EC_WORD_YOU, EC_WORD_QUES},
        .speechLose = {EC_WORD_MOTHER, EC_WORD_NATURE, EC_WORD_DIDN_T, EC_WORD_LET_ME_WIN, EC_WORD_QUES, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Mitch
=======
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ANNE] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("ANNE"),
        .speechBefore = {EC_WORD_I, EC_WORD_CAN_T, EC_WORD_WAIT, EC_WORD_LET_S, EC_WORD_BATTLE, EC_WORD_NOW},
        .speechWin = {EC_WORD_MY, EC_WORD_HAPPINESS, EC_WORD_IS, EC_WORD_OVERWHELMING, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOU_VE, EC_WORD_DESTROYED, EC_WORD_MY, EC_WORD_HAPPINESS, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Anne
=======
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ALIZE] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("ALIZE"),
        .speechBefore = {EC_WORD_CUTE, EC_WORD_AND, EC_WORD_AWFULLY, EC_WORD_STRONG, EC_WORD_THAT_S, EC_WORD_ME},
        .speechWin = {EC_WORD_YUP, EC_WORD_I_AM, EC_WORD_CUTE, EC_WORD_AND, EC_WORD_AWFULLY, EC_WORD_STRONG},
        .speechLose = {EC_WORD_I_AM, EC_WORD_WEAK, EC_WORD_ELLIPSIS, EC_WORD_BUT, EC_WORD_I_AM, EC_WORD_CUTE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Alize
=======
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_LAUREN] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("LAUREN"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_OLD, EC_WORD_BUT, EC_WORD_I_AM, EC_WORD_ALSO, EC_WORD_GOOD},
        .speechWin = {EC_WORD_I, EC_WORD_SAID, EC_WORD_I_WAS, EC_WORD_OLD, EC_WORD_BUT, EC_WORD_GOOD},
        .speechLose = {EC_WORD_WHAT, EC_WORD_A, EC_WORD_WEIRD, EC_WORD_DREAM, EC_WORD_THAT_WAS, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Lauren
=======
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KIPP] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("KIPP"),
        .speechBefore = {EC_WORD_IF_I_WIN, EC_WORD_I_AM, EC_WORD_GOING, EC_WORD_TO, EC_WORD_GO, EC_MOVE2(SURF)},
        .speechWin = {EC_WORD_YEAH, EC_WORD_EXCL, EC_WORD_I_AM, EC_WORD_OFF, EC_WORD_TO, EC_MOVE2(SURF)},
        .speechLose = {EC_WORD_OH, EC_WORD_NO, EC_WORD_EXCL, EC_WORD_A, EC_MOVE(WHIRLPOOL), EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Kipp
=======
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JASON] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("JASON"),
        .speechBefore = {EC_WORD_TEACH, EC_WORD_ME, EC_WORD_A, EC_WORD_GOOD, EC_WORD_STRATEGY, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THAT_WAS, EC_WORD_YOUR, EC_WORD_GOOD, EC_WORD_STRATEGY, EC_WORD_QUES_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WOW, EC_WORD_THAT, EC_WORD_IS, EC_WORD_AN, EC_WORD_AWESOME, EC_WORD_STRATEGY},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jason
=======
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JOHN] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("JOHN"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_A, EC_WORD_PRETTY, EC_WORD_NEW, EC_WORD_TRAINER, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_AM, EC_WORD_NEW, EC_WORD_BUT, EC_WORD_I, EC_WORD_WON, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I_AM, EC_WORD_NEW, EC_WORD_SO, EC_WORD_WHAT, EC_WORD_IF_I_LOSE, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_John
=======
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ANN] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("ANN"),
        .speechBefore = {EC_WORD_IT_S, EC_WORD_SO, EC_WORD_EXCITING, EC_WORD_IT, EC_WORD_REALLY, EC_WORD_IS},
        .speechWin = {EC_WORD_I_AM, EC_WORD_SO, EC_WORD_HAPPY, EC_WORD_I, EC_WORD_CAN, EC_WORD_CRY},
        .speechLose = {EC_WORD_I_AM, EC_WORD_SO, EC_WORD_SAD, EC_WORD_I, EC_WORD_WILL, EC_WORD_CRY},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Ann
=======
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_EILEEN] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("EILEEN"),
        .speechBefore = {EC_WORD_LET_S, EC_WORD_PRETEND, EC_WORD_I_AM, EC_WORD_AN, EC_WORD_ADULT, EC_WORD_OK_QUES},
        .speechWin = {EC_WORD_SO, EC_WORD_THIS, EC_WORD_IS, EC_WORD_AN, EC_WORD_ADULT, EC_WORD_FEELING},
        .speechLose = {EC_WORD_AN, EC_WORD_ADULT, EC_WORD_CAN_T, EC_WORD_BEAT, EC_WORD_YOU, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Eileen
=======
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CARLIE] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("CARLIE"),
        .speechBefore = {EC_WORD_MY, EC_WORD_SUMMER, EC_WORD_VACATION, EC_WORD_IS, EC_WORD_FOR, EC_WORD_POKEMON},
        .speechWin = {EC_WORD_MY, EC_WORD_SUMMER, EC_WORD_VACATION, EC_WORD_WILL, EC_WORD_BE, EC_WORD_AWESOME},
        .speechLose = {EC_WORD_I, EC_WORD_CAN_T_WIN, EC_WORD_LIKE, EC_WORD_THIS, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Carlie
=======
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GORDON] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("GORDON"),
        .speechBefore = {EC_WORD_VICTORY, EC_WORD_WILL, EC_WORD_COME, EC_WORD_TO_ME, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_OH_YEAH, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_I, EC_WORD_REALLY, EC_WORD_WON},
        .speechLose = {EC_WORD_NOTHING, EC_WORD_IS, EC_WORD_WORKING, EC_WORD_OUT, EC_WORD_FOR, EC_WORD_ME},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Gordon
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_M_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_AYDEN] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("AYDEN"),
        .speechBefore = {EC_WORD_COME_ON, EC_WORD_I, EC_WORD_NEED, EC_WORD_A, EC_WORD_HOT, EC_WORD_BATTLE},
        .speechWin = {EC_WORD_I, EC_WORD_NEED, EC_WORD_WATER, EC_WORD_TO, EC_WORD_COOL, EC_WORD_DOWN},
        .speechLose = {EC_WORD_YOU, EC_WORD_HAVE, EC_WORD_ME, EC_WORD_FEELING, EC_WORD_ICE, EC_WORD_COLD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Ayden
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_M_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MARCO] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("MARCO"),
        .speechBefore = {EC_WORD_I, EC_MOVE2(SURF), EC_WORD_IN, EC_WORD_THE, EC_WORD_WINTER, EC_WORD_TOO},
        .speechWin = {EC_WORD_I, EC_WORD_WILL, EC_WORD_GO, EC_MOVE2(SURF), EC_WORD_RIGHT, EC_WORD_NOW},
        .speechLose = {EC_WORD_I, EC_WORD_WILL, EC_MOVE2(BEAT_UP), EC_WORD_MY, EC_MOVE2(SURF), EC_WORD_BOARD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Marco
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_M_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CIERRA] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("CIERRA"),
        .speechBefore = {EC_WORD_I, EC_WORD_LIKE, EC_WORD_TO, EC_WORD_SYNCHRONIZE, EC_WORD_MY, EC_WORD_SWIFT_SWIM},
        .speechWin = {EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_SYNCHRONIZE, EC_WORD_WITH, EC_WORD_ME, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I, EC_WORD_NEED, EC_WORD_TO, EC_WORD_SYNCHRONIZE, EC_WORD_BETTER, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Cierra
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_F_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MARCY] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("MARCY"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_A, EC_WORD_KNOCKOUT, EC_WORD_YOU, EC_WORD_CAN_T_WIN, EC_WORD_EXCL},
        .speechWin = {EC_WORD_AFTER, EC_WORD_ALL, EC_WORD_I_AM, EC_WORD_A, EC_WORD_KNOCKOUT, EC_WORD_EXCL},
        .speechLose = {EC_WORD_THAT_S, EC_WORD_NOT, EC_WORD_THE, EC_WORD_KNOCKOUT, EC_WORD_I, EC_WORD_MEAN},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Marcy
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_F_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KATHY] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("KATHY"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_WON, EC_WORD_EVERY, EC_WORD_MATCH, EC_WORD_TODAY, EC_WORD_EXCL},
        .speechWin = {EC_WORD_IT_S, EC_WORD_SO, EC_WORD_GREAT, EC_WORD_TO, EC_WORD_WIN, EC_WORD_EXCL},
        .speechLose = {EC_WORD_HUH_QUES, EC_WORD_I, EC_WORD_SHOULD, EC_WORD_NOT, EC_WORD_HAVE, EC_WORD_LOST},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Kathy
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_F_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_PEYTON] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("PEYTON"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_NEVER, EC_WORD_DISAPPOINTED, EC_WORD_WITH, EC_WORD_MY, EC_WORD_POKEMON},
        .speechWin = {EC_WORD_I_AM, EC_WORD_HAPPY, EC_WORD_IF, EC_WORD_WE, EC_WORD_WIN, EC_WORD_TOGETHER},
        .speechLose = {EC_WORD_I, EC_WORD_ADORE, EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_MORE, EC_WORD_IF_I_LOSE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Peyton
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_M_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JULIAN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("JULIAN"),
        .speechBefore = {EC_WORD_YOU, EC_WORD_ADORE, EC_WORD_YOUR, EC_WORD_POKEMON, EC_WORD_RIGHT, EC_WORD_QUES},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_TOTALLY, EC_WORD_OUT, EC_WORD_OF, EC_WORD_THE, EC_WORD_QUESTION},
        .speechLose = {EC_WORD_YOU, EC_WORD_DO, EC_WORD_ADORE, EC_WORD_YOUR, EC_WORD_POKEMON, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Julian
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_M_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_QUINN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("QUINN"),
        .speechBefore = {EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_BUT, EC_WORD_A, EC_WORD_DREAM},
        .speechWin = {EC_WORD_THIS, EC_WORD_IS, EC_WORD_A, EC_WORD_BEAUTIFUL, EC_WORD_DREAM, EC_WORD_EXCL},
        .speechLose = {EC_WORD_THIS, EC_WORD_IS, EC_WORD_AN, EC_WORD_AWFUL, EC_MOVE(NIGHTMARE), EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Quinn
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_M_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_HAYLEE] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("HAYLEE"),
        .speechBefore = {EC_WORD_I, EC_WORD_DON_T, EC_WORD_KNOW, EC_WORD_HOW, EC_WORD_I_AM, EC_WORD_FEELING},
        .speechWin = {EC_WORD_I_AM, EC_WORD_FEELING, EC_WORD_OVERWHELMING, EC_WORD_JOY, EC_WORD_OVER, EC_WORD_THIS},
        .speechLose = {EC_WORD_DESTROYED, EC_WORD_IS, EC_WORD_THE, EC_WORD_WAY, EC_WORD_I_AM, EC_WORD_FEELING},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Haylee
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_F_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_AMANDA] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("AMANDA"),
        .speechBefore = {EC_WORD_I, EC_WORD_COME, EC_WORD_FROM, EC_WORD_A, EC_WORD_TRAINER, EC_WORD_FAMILY},
        .speechWin = {EC_WORD_I, EC_WORD_WILL, EC_WORD_TREASURE, EC_WORD_THIS, EC_WORD_WIN, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I, EC_WORD_WANT, EC_WORD_TO, EC_WORD_GO_HOME, EC_WORD_RIGHT, EC_WORD_NOW},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Amanda
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_F_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_STACY] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("STACY"),
        .speechBefore = {EC_WORD_ALL, EC_WORD_POKEMON, EC_WORD_HAVE, EC_WORD_THEIR, EC_WORD_OWN, EC_WORD_CUTE_CHARM},
        .speechWin = {EC_WORD_YOU, EC_WORD_SEE, EC_WORD_WHAT, EC_WORD_I, EC_WORD_MEAN, EC_WORD_QUES},
        .speechLose = {EC_WORD_SHOULD, EC_WORD_I, EC_WORD_NOT, EC_WORD_ADORE, EC_WORD_POKEMON, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Stacy
    },
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_F_1}
    },
    // The below 6 are the early Pkmn Breeder class trainers, which use groups from other general classes
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    [FRONTIER_TRAINER_RAFAEL] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("RAFAEL"),
        .speechBefore = {EC_WORD_COME_ON, EC_WORD_EXCL, EC_WORD_LET_S, EC_WORD_SEE, EC_WORD_SOME, EC_WORD_SPIRIT},
        .speechWin = {EC_WORD_THAT_S_IT_EXCL, EC_WORD_THAT_S, EC_WORD_THE, EC_WORD_SPIRIT, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WELL, EC_WORD_SO, EC_WORD_MUCH, EC_WORD_FOR, EC_WORD_OUR, EC_WORD_SPIRIT},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Rafael
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_OLIVER] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("OLIVER"),
        .speechBefore = {EC_WORD_A, EC_WORD_GENIUS, EC_WORD_THAT_S, EC_WORD_WHAT, EC_WORD_I_AM, EC_WORD_EXCL},
        .speechWin = {EC_WORD_THAT_S, EC_WORD_HOW, EC_WORD_A, EC_WORD_GENIUS, EC_WORD_WORKS, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_MORE, EC_WORD_A, EC_WORD_GENIUS, EC_WORD_THAN, EC_WORD_I_AM},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Oliver
=======
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_PAYTON] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("PAYTON"),
        .speechBefore = {EC_WORD_I, EC_WORD_TRAIN, EC_WORD_FROM, EC_WORD_THE, EC_WORD_EGG, EC_WORD_UP},
        .speechWin = {EC_WORD_WELL, EC_WORD_DONE, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_A, EC_MOVE2(SOFT_BOILED), EC_WORD_LOSS, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Payton
=======
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_PAMELA] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("PAMELA"),
        .speechBefore = {EC_WORD_ALL, EC_WORD_POKEMON, EC_WORD_ADORE, EC_WORD_A, EC_WORD_KIND, EC_WORD_TRAINER},
        .speechWin = {EC_WORD_IT_S, EC_WORD_TOO, EC_WORD_BAD, EC_WORD_YOU, EC_WORD_LOST, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_KIND, EC_WORD_AND, EC_WORD_YOU_RE, EC_WORD_ALSO, EC_WORD_STRONG},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Pamela
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ELIZA] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("ELIZA"),
        .speechBefore = {EC_WORD_I, EC_WORD_ADORE, EC_WORD_POKEMON, EC_WORD_LIKE, EC_WORD_MY, EC_WORD_CHILDREN},
        .speechWin = {EC_WORD_I_AM, EC_WORD_SO, EC_WORD_HAPPY, EC_WORD_FOR, EC_WORD_MY, EC_WORD_POKEMON},
        .speechLose = {EC_WORD_OH_DEAR, EC_WORD_I_AM, EC_WORD_SO, EC_WORD_SORRY, EC_WORD_ABOUT, EC_WORD_THIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Eliza
=======
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MARISA] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("MARISA"),
        .speechBefore = {EC_WORD_I, EC_WORD_PROMISE, EC_WORD_TO, EC_WORD_BATTLE, EC_WORD_SERIOUSLY, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_PROMISE, EC_WORD_ME, EC_WORD_YOU, EC_WORD_WILL, EC_WORD_DO, EC_WORD_BETTER},
        .speechLose = {EC_WORD_PROMISE, EC_WORD_ME, EC_WORD_ANOTHER, EC_WORD_BATTLE, EC_WORD_PLEASE, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Marisa
=======
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_LEWIS] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("LEWIS"),
        .speechBefore = {EC_WORD_A_LITTLE, EC_WORD_BUG, EC_WORD_IS, EC_WORD_SCARY, EC_WORD_QUES, EC_WORD_HAHAHA},
        .speechWin = {EC_WORD_LOOK, EC_WORD_LOOK, EC_WORD_EXCL, EC_WORD_A, EC_WORD_SCARY, EC_WORD_BUG},
        .speechLose = {EC_WORD_OH, EC_WORD_A, EC_WORD_BUG, EC_WORD_ISN_T, EC_WORD_SCARY, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Lewis
=======
        .monSet = (const u16[]){FRONTIER_MONS_BUG_CATCHER_1_EXTRA(METAPOD, KAKUNA)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_YOSHI] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("YOSHI"),
        .speechBefore = {EC_WORD_BUG, EC_WORD_POKEMON, EC_WORD_MAKE, EC_WORD_ME, EC_WORD_FEELING, EC_WORD_LOVEY_DOVEY},
        .speechWin = {EC_WORD_BUG, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_THE, EC_WORD_BEST, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_IGNORANT, EC_WORD_ABOUT, EC_WORD_BUG, EC_WORD_POKEMON, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Yoshi
=======
        .monSet = (const u16[]){FRONTIER_MONS_BUG_CATCHER_1_EXTRA(SILCOON, CASCOON)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DESTIN] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("DESTIN"),
        .speechBefore = {EC_WORD_IT_S, EC_WORD_WAY, EC_WORD_TOO, EC_WORD_HOT, EC_WORD_HERE, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_AM, EC_WORD_ABOUT, EC_WORD_TO, EC_MOVE(OVERHEAT), EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_PLEASE, EC_WORD_I, EC_WORD_NEED, EC_WORD_SOME, EC_WORD_WATER, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Destin
=======
        .monSet = (const u16[]){FRONTIER_MONS_BUG_CATCHER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KEON] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("KEON"),
        .speechBefore = {EC_WORD_FORGIVE, EC_WORD_ME, EC_WORD_BUT, EC_WORD_HERE_I_COME, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_FORGIVE, EC_WORD_ME, EC_WORD_FOR, EC_WORD_MY, EC_WORD_OVERWHELMING, EC_WORD_POWER},
        .speechLose = {EC_WORD_I_AM, EC_WORD_SORRY, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Keon
=======
        .monSet = (const u16[]){FRONTIER_MONS_NINJA_BOY_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_STUART] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("STUART"),
        .speechBefore = {EC_WORD_I, EC_WORD_PROMISE, EC_WORD_YOU, EC_WORD_A, EC_WORD_HOT, EC_WORD_BATTLE},
        .speechWin = {EC_WORD_THE, EC_WORD_MASTER, EC_WORD_OF, EC_WORD_COOL, EC_WORD_THAT_S, EC_WORD_ME},
        .speechLose = {EC_WORD_I, EC_WORD_SEE, EC_WORD_I_AM, EC_WORD_NOT, EC_WORD_SO, EC_WORD_COOL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Stuart
=======
        .monSet = (const u16[]){FRONTIER_MONS_NINJA_BOY_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_NESTOR] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("NESTOR"),
        .speechBefore = {EC_WORD_SHOW, EC_WORD_ME, EC_WORD_A, EC_WORD_REALLY, EC_WORD_SMOOTH, EC_WORD_MOVE},
        .speechWin = {EC_WORD_THERE, EC_WORD_WAS, EC_WORD_NOTHING, EC_WORD_SMOOTH, EC_WORD_ABOUT, EC_WORD_THAT},
        .speechLose = {EC_WORD_YOU, EC_WORD_REALLY, EC_WORD_ARE, EC_WORD_SMOOTH, EC_WORD_EXCL, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Nestor
=======
        .monSet = (const u16[]){FRONTIER_MONS_NINJA_BOY_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DERRICK] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("DERRICK"),
        .speechBefore = {EC_WORD_LET_S, EC_WORD_SEE, EC_WORD_YOU, EC_MOVE2(MEDITATE), EC_WORD_LIKE, EC_WORD_ME},
        .speechWin = {EC_WORD_HOW, EC_WORD_I, EC_MOVE2(MEDITATE), EC_WORD_IS, EC_WORD_JUST, EC_WORD_BEAUTIFUL},
        .speechLose = {EC_WORD_I, EC_WORD_WILL, EC_MOVE2(MEDITATE), EC_WORD_FOR, EC_WORD_A, EC_MOVE2(CALM_MIND)},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Derrick
=======
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_BRYSON] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("BRYSON"),
        .speechBefore = {EC_MOVE2(POISON_POWDER), EC_WORD_IS, EC_WORD_IN, EC_WORD_OUR, EC_MOVE2(COTTON_SPORE), EC_WORD_MOVE},
        .speechWin = {EC_WORD_HOW_DO, EC_WORD_YOU, EC_WORD_LIKE, EC_WORD_OUR, EC_MOVE2(POISON_POWDER), EC_WORD_QUES},
        .speechLose = {EC_WORD_MY, EC_MOVE2(COTTON_SPORE), EC_WORD_WAS, EC_WORD_USELESS, EC_EMPTY_WORD, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Bryson
=======
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CLAYTON] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("CLAYTON"),
        .speechBefore = {EC_WORD_HUH_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_WORD_WHERE, EC_WORD_IS_IT_QUES, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WHERE, EC_WORD_IS_IT_QUES, EC_WORD_I_VE, EC_WORD_LOST, EC_WORD_MY, EC_WORD_POKENAV},
        .speechLose = {EC_WORD_WHERE, EC_WORD_IS_IT_QUES, EC_WORD_I_VE, EC_WORD_LOST, EC_WORD_MY, EC_WORD_SENSE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Clayton
=======
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_TRENTON] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("TRENTON"),
        .speechBefore = {EC_WORD_COME_OVER, EC_WORD_FOR, EC_WORD_SOME, EC_WORD_TASTY, EC_WORD_WATER, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_MMM, EC_WORD_DO, EC_WORD_YOU, EC_WORD_WANT, EC_WORD_SOME, EC_WORD_QUES},
        .speechLose = {EC_WORD_I, EC_WORD_GOT, EC_WORD_THIS, EC_WORD_TASTY, EC_WORD_WATER, EC_WORD_SHOPPING},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Trenton
=======
        .monSet = (const u16[]){FRONTIER_MONS_FISHERMAN_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JENSON] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("JENSON"),
        .speechBefore = {EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_WILL, EC_WORD_MAKE, EC_WORD_YOU, EC_WORD_DOWNCAST},
        .speechWin = {EC_WORD_YOUR, EC_WORD_POKEMON, EC_WORD_DON_T, EC_WORD_MAKE, EC_WORD_THE, EC_MOVE(CUT)},
        .speechLose = {EC_WORD_I_AM, EC_WORD_THE, EC_WORD_TRAINER, EC_WORD_WHO_IS, EC_WORD_FEELING, EC_WORD_DOWNCAST},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jenson
=======
        .monSet = (const u16[]){FRONTIER_MONS_FISHERMAN_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_WESLEY] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("WESLEY"),
        .speechBefore = {EC_POKEMON_NATIONAL(MEW), EC_POKEMON_NATIONAL(MEW), EC_WORD_IS, EC_WORD_HOW, EC_WORD_I, EC_WORD_CRY},
        .speechWin = {EC_WORD_YES, EC_WORD_I, EC_WORD_KNOW, EC_WORD_I_AM, EC_WORD_CUTE, EC_WORD_EXCL},
        .speechLose = {EC_POKEMON_NATIONAL(MEW), EC_POKEMON_NATIONAL(MEW), EC_WORD_EXCL, EC_POKEMON_NATIONAL(MEW), EC_WORD_EXCL_EXCL, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Wesley
=======
        .monSet = (const u16[]){FRONTIER_MONS_FISHERMAN_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ANTON] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("ANTON"),
        .speechBefore = {EC_WORD_GET, EC_WORD_READY, EC_WORD_FOR, EC_WORD_ME, EC_WORD_TO, EC_MOVE(THRASH)},
        .speechWin = {EC_WORD_WAHAHAHA, EC_WORD_EXCL, EC_WORD_SORRY, EC_WORD_ABOUT, EC_WORD_THAT, EC_WORD_EXCL},
        .speechLose = {EC_WORD_IT_S, EC_WORD_A, EC_WORD_TOUGH, EC_WORD_LOSS, EC_WORD_TO, EC_MOVE2(SWALLOW)},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Anton
=======
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_LAWSON] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("LAWSON"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_YOUNG, EC_WORD_AT, EC_WORD_HEART, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_NOT, EC_WORD_COOL, EC_WORD_EXCL, EC_WORD_NOT, EC_WORD_AT, EC_WORD_ALL},
        .speechLose = {EC_WORD_I_AM, EC_WORD_OLD, EC_WORD_AND, EC_WORD_FEELING, EC_WORD_SHAKY, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Lawson
=======
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_SAMMY] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("SAMMY"),
        .speechBefore = {EC_WORD_MY, EC_WORD_PARTY, EC_WORD_IS, EC_WORD_READY, EC_WORD_TO, EC_WORD_ROCK},
        .speechWin = {EC_WORD_MY, EC_WORD_PARTY, EC_WORD_IS, EC_WORD_JUST, EC_WORD_INCREDIBLE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I, EC_WORD_CRY, EC_WORD_FOR, EC_WORD_MY, EC_WORD_PARTY, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Sammy
    },
=======
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_1}
    },
    // The below 3 are the early Collector class trainers, which use groups from other general classes
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    [FRONTIER_TRAINER_ARNIE] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("ARNIE"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_NO_1, EC_WORD_I, EC_WORD_HAVE, EC_WORD_NO, EC_WORD_RIVAL},
        .speechWin = {EC_WORD_YOU, EC_WORD_SEE, EC_WORD_QUES, EC_WORD_I, EC_WORD_CAN_T, EC_WORD_LOSE},
        .speechLose = {EC_WORD_NO, EC_WORD_EXCL, EC_WORD_I, EC_WORD_WON_T, EC_WORD_ACCEPT, EC_WORD_THIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Arnie
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ADRIAN] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("ADRIAN"),
        .speechBefore = {EC_WORD_YAHOO, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_YAHOO, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THANK_YOU, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_THANK_YOU, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_GOOD_BYE, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_GOOD_BYE, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Adrian
=======
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_TRISTAN] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("TRISTAN"),
        .speechBefore = {EC_WORD_CONFUSED, EC_WORD_QUES, EC_EMPTY_WORD, EC_WORD_I_AM, EC_WORD_A, EC_WORD_GENIUS},
        .speechWin = {EC_WORD_SEE, EC_WORD_QUES, EC_EMPTY_WORD, EC_WORD_I_AM, EC_WORD_A, EC_WORD_GENIUS},
        .speechLose = {EC_WORD_I_AM, EC_WORD_NOT, EC_WORD_A, EC_WORD_GENIUS, EC_WORD_IN, EC_WORD_BATTLE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Tristan
=======
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JULIANA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("JULIANA"),
        .speechBefore = {EC_WORD_I, EC_WORD_THINK, EC_WORD_I_AM, EC_WORD_SHOPPING, EC_WORD_TOO, EC_WORD_MUCH},
        .speechWin = {EC_WORD_BUT, EC_WORD_I, EC_WORD_WANT, EC_WORD_A, EC_WORD_POKEMON, EC_WORD_PLUSH_DOLL},
        .speechLose = {EC_WORD_I, EC_WORD_SO, EC_WORD_WANT, EC_WORD_ANOTHER, EC_WORD_POKEMON, EC_WORD_PLUSH_DOLL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Juliana
=======
        .monSet = (const u16[]){FRONTIER_MONS_PARASOL_LADY_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_RYLEE] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("RYLEE"),
        .speechBefore = {EC_WORD_SHOW, EC_WORD_ME, EC_WORD_THAT, EC_WORD_YOU, EC_WORD_HAVE, EC_WORD_GUTS},
        .speechWin = {EC_WORD_BYE_BYE, EC_WORD_EXCL, EC_WORD_YOU, EC_WORD_HAVE, EC_WORD_NO, EC_WORD_GUTS},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_GUTSY, EC_WORD_ELLIPSIS, EC_WORD_YOU_RE, EC_WORD_QUITE, EC_WORD_SUPER},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Rylee
=======
        .monSet = (const u16[]){FRONTIER_MONS_PARASOL_LADY_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CHELSEA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("CHELSEA"),
        .speechBefore = {EC_WORD_I, EC_WORD_SERIOUSLY, EC_WORD_MEAN, EC_WORD_TO, EC_WORD_WIN, EC_WORD_EXCL},
        .speechWin = {EC_WORD_THAT_WAS, EC_WORD_MY, EC_WORD_WILL, EC_WORD_TO, EC_WORD_WIN, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_FAR, EC_WORD_TOO_STRONG, EC_WORD_FOR, EC_WORD_ME, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Chelsea
    },
=======
        .monSet = (const u16[]){FRONTIER_MONS_PARASOL_LADY_1}
    },
    // The below 3 are the early Beauty class trainers, which use groups from other general classes
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    [FRONTIER_TRAINER_DANELA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("DANELA"),
        .speechBefore = {EC_WORD_YOU, EC_WORD_MUST_BE, EC_WORD_MY, EC_WORD_OPPONENT, EC_WORD_NOW, EC_WORD_EXCL},
        .speechWin = {EC_WORD_OH_DEAR, EC_WORD_TOO_WEAK, EC_WORD_EXCL, EC_WORD_DON_T, EC_WORD_GIVE_UP, EC_WORD_EXCL},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_GOOD, EC_WORD_AND, EC_WORD_THIS, EC_WORD_IS, EC_WORD_GOOD_BYE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Danela
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_LIZBETH] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("LIZBETH"),
        .speechBefore = {EC_WORD_IF_I_LOSE, EC_WORD_YOU, EC_WORD_CAN, EC_WORD_HAVE, EC_WORD_A, EC_MOVE2(PRESENT)},
        .speechWin = {EC_WORD_HERE_IT_IS, EC_WORD_A_LITTLE, EC_WORD_PRAISE, EC_WORD_AS, EC_WORD_YOUR, EC_MOVE2(PRESENT)},
        .speechLose = {EC_WORD_YOUR, EC_MOVE2(PRESENT), EC_WORD_QUES_EXCL, EC_WORD_HERE_IT_IS, EC_WORD_A, EC_MOVE(DOUBLE_SLAP)},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Lizbeth
=======
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_AMELIA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("AMELIA"),
        .speechBefore = {EC_WORD_I, EC_WORD_BELIEVE, EC_WORD_IN, EC_WORD_CUTE, EC_WORD_FASHION, EC_WORD_APPEAL},
        .speechWin = {EC_WORD_YOUR, EC_WORD_FASHION, EC_WORD_SENSE, EC_WORD_IS, EC_WORD_A, EC_WORD_DISASTER},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_AWFUL, EC_WORD_EXCL, EC_WORD_I_AM, EC_WORD_GOING, EC_WORD_HOME},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Amelia
=======
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JILLIAN] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("JILLIAN"),
        .speechBefore = {EC_WORD_WHAT, EC_WORD_IS, EC_WORD_THAT, EC_WORD_I, EC_WORD_SMELL, EC_WORD_QUES},
        .speechWin = {EC_WORD_IT_S, EC_WORD_THE, EC_MOVE(SWEET_SCENT), EC_WORD_OF, EC_WORD_TASTY, EC_WORD_WATER},
        .speechLose = {EC_WORD_IT_S, EC_WORD_YOUR, EC_WORD_OFFENSIVE, EC_WORD_STENCH, EC_WORD_THAT_S, EC_WORD_WHAT},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jillian
=======
        .monSet = (const u16[]){FRONTIER_MONS_AROMA_LADY_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ABBIE] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("ABBIE"),
        .speechBefore = {EC_WORD_YOU, EC_WORD_TRY, EC_WORD_MY, EC_WORD_SECRET, EC_MOVE(AROMATHERAPY), EC_WORD_OK_QUES},
        .speechWin = {EC_WORD_MY, EC_MOVE(AROMATHERAPY), EC_WORD_IS, EC_WORD_TERRIBLE, EC_WORD_FOR, EC_WORD_YOU},
        .speechLose = {EC_WORD_DIDN_T, EC_WORD_YOU, EC_WORD_SMELL, EC_WORD_A, EC_WORD_THING, EC_WORD_QUES_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Abbie
=======
        .monSet = (const u16[]){FRONTIER_MONS_AROMA_LADY_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_BRIANA] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("BRIANA"),
        .speechBefore = {EC_WORD_MY, EC_WORD_BOY, EC_WORD_FRIEND, EC_WORD_WORKS, EC_WORD_TOO, EC_WORD_MUCH},
        .speechWin = {EC_WORD_I, EC_WORD_ONLY, EC_WORD_MISS, EC_WORD_HIM, EC_WORD_MORE, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_I_AM, EC_WORD_SO, EC_WORD_LONESOME, EC_WORD_WITHOUT, EC_WORD_HIM, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Briana
=======
        .monSet = (const u16[]){FRONTIER_MONS_AROMA_LADY_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ANTONIO] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("ANTONIO"),
        .speechBefore = {EC_WORD_I, EC_WORD_KNOW, EC_WORD_HOW, EC_WORD_TO, EC_WORD_GO, EC_WORD_GO},
        .speechWin = {EC_WORD_BUT, EC_WORD_I, EC_WORD_DON_T, EC_WORD_LIKE, EC_WORD_TO, EC_WORD_DANCE},
        .speechLose = {EC_WORD_GO, EC_WORD_GO, EC_WORD_ELLIPSIS, EC_WORD_JUST, EC_MOVE(FLAIL), EC_WORD_ABOUT},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Antonio
=======
        .monSet = (const u16[]){FRONTIER_MONS_GUITARIST_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JADEN] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("JADEN"),
        .speechBefore = {EC_WORD_HELLO, EC_WORD_I, EC_WORD_THINK, EC_WORD_I, EC_WORD_ADORE, EC_WORD_YOU},
        .speechWin = {EC_WORD_YOU, EC_WORD_MAKE, EC_WORD_ME, EC_MOVE(THRASH), EC_WORD_IN, EC_MOVE2(FRUSTRATION)},
        .speechLose = {EC_WORD_THIS_IS_IT_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_WORD_GOOD_BYE, EC_WORD_FOREVER, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jaden
=======
        .monSet = (const u16[]){FRONTIER_MONS_GUITARIST_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DAKOTA] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("DAKOTA"),
        .speechBefore = {EC_WORD_YOU, EC_WORD_HAVE, EC_WORD_TO, EC_WORD_DANCE, EC_WORD_WITH, EC_WORD_POWER},
        .speechWin = {EC_WORD_GOT, EC_WORD_IT, EC_WORD_QUES, EC_WORD_DANCE, EC_WORD_WITH, EC_WORD_POWER},
        .speechLose = {EC_WORD_OKAY, EC_WORD_YOU, EC_WORD_UNDERSTAND, EC_WORD_ALL_RIGHT, EC_WORD_EXCL, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Dakota
=======
        .monSet = (const u16[]){FRONTIER_MONS_GUITARIST_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_BRAYDEN] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("BRAYDEN"),
        .speechBefore = {EC_WORD_COLOR_CHANGE, EC_WORD_VERSION, EC_WORD_TOYS, EC_WORD_ARE, EC_WORD_USELESS, EC_WORD_EXCL},
        .speechWin = {EC_WORD_I, EC_WORD_ONLY, EC_WORD_COLLECT, EC_WORD_NORMAL, EC_WORD_VERSION, EC_WORD_TOYS},
        .speechLose = {EC_WORD_I, EC_MOVE2(ATTRACT), EC_WORD_COLOR_CHANGE, EC_WORD_VERSION, EC_WORD_TOYS, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Brayden
=======
        .monSet = (const u16[]){FRONTIER_MONS_BIRD_KEEPER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CORSON] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("CORSON"),
        .speechBefore = {EC_WORD_I, EC_WORD_GET, EC_WORD_TO, EC_MOVE2(BEAT_UP), EC_WORD_ON, EC_WORD_YOU},
        .speechWin = {EC_WORD_TOO, EC_WORD_EASY, EC_WORD_EXCL, EC_WORD_I_AM, EC_WORD_SO, EC_WORD_COOL},
        .speechLose = {EC_WORD_WHY, EC_WORD_QUES_EXCL, EC_EMPTY_WORD, EC_WORD_I, EC_MOVE2(CURSE), EC_WORD_YOU},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Corson
=======
        .monSet = (const u16[]){FRONTIER_MONS_BIRD_KEEPER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_TREVIN] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("TREVIN"),
        .speechBefore = {EC_WORD_THERE, EC_WORD_IS, EC_WORD_NONE, EC_WORD_BETTER, EC_WORD_THAN, EC_WORD_ME},
        .speechWin = {EC_WORD_YES_SIR_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_WORD_I_AM, EC_WORD_THE, EC_WORD_BEST},
        .speechLose = {EC_WORD_SERIOUS, EC_WORD_QUES_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Trevin
=======
        .monSet = (const u16[]){FRONTIER_MONS_BIRD_KEEPER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_PATRICK] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("PATRICK"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_PERFECT, EC_WORD_EXCL, EC_WORD_GIVE_UP, EC_WORD_NOW, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_DON_T, EC_WORD_BE, EC_WORD_DISAPPOINTED, EC_WORD_I_AM, EC_WORD_PERFECT, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_BUT, EC_WORD_HOW, EC_WORD_QUES, EC_WORD_I_AM, EC_WORD_PERFECT, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Patrick
=======
        .monSet = (const u16[]){FRONTIER_MONS_SAILOR_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KADEN] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("KADEN"),
        .speechBefore = {EC_WORD_WHAT, EC_WORD_ARE, EC_WORD_YOU, EC_WORD_UP, EC_WORD_TO, EC_WORD_QUES},
        .speechWin = {EC_WORD_YOU, EC_WORD_WERE, EC_WORD_A, EC_WORD_SURPRISE, EC_WORD_TO_ME, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I, EC_WORD_DON_T, EC_WORD_KNOW, EC_WORD_WHO, EC_WORD_I_AM, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Kaden
=======
        .monSet = (const u16[]){FRONTIER_MONS_SAILOR_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MAXWELL] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("MAXWELL"),
        .speechBefore = {EC_WORD_HEY_THERE, EC_WORD_WHO_IS, EC_WORD_YOUR, EC_WORD_RIVAL, EC_WORD_QUES, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_MY, EC_WORD_RIVAL, EC_WORD_IS, EC_WORD_MY, EC_WORD_GIRL, EC_WORD_FRIEND},
        .speechLose = {EC_WORD_I_AM, EC_WORD_MAKING, EC_WORD_YOU, EC_WORD_MY, EC_WORD_RIVAL, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Maxwell
=======
        .monSet = (const u16[]){FRONTIER_MONS_SAILOR_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DARYL] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("DARYL"),
        .speechBefore = {EC_WORD_I, EC_WORD_ONLY, EC_WORD_KNOW, EC_WORD_HOW, EC_WORD_TO, EC_MOVE(CHARGE)},
        .speechWin = {EC_WORD_AM, EC_WORD_I, EC_WORD_OVERWHELMING, EC_WORD_OR, EC_WORD_WHAT, EC_WORD_QUES},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_GOING, EC_WORD_TO, EC_WORD_A, EC_WORD_LEGEND, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Daryl
=======
        .monSet = (const u16[]){FRONTIER_MONS_HIKER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KENNETH] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("KENNETH"),
        .speechBefore = {EC_WORD_YOU, EC_WORD_BETTER, EC_WORD_NOT, EC_MOVE2(SLACK_OFF), EC_WORD_WITH, EC_WORD_ME},
        .speechWin = {EC_WORD_DID, EC_WORD_MY, EC_MOVE2(TAUNT), EC_WORD_INTIMIDATE, EC_WORD_YOU, EC_WORD_QUES},
        .speechLose = {EC_WORD_I_AM, EC_WORD_SORRY, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Kenneth
=======
        .monSet = (const u16[]){FRONTIER_MONS_HIKER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_RICH] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("RICH"),
        .speechBefore = {EC_WORD_YOUR, EC_MOVE(FACADE), EC_WORD_DOESN_T, EC_MOVE2(TRICK), EC_WORD_ME, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_SERIOUSLY, EC_WORD_ARE, EC_WORD_YOU, EC_WORD_REALLY, EC_WORD_OK_QUES, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_REALLY, EC_WORD_TOUGH, EC_WORD_ON, EC_WORD_ME, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Rich
    },
    [FRONTIER_TRAINER_CADEN] = {
        .facilityClass = FACILITY_CLASS_SUPER_NERD,
=======
        .monSet = (const u16[]){FRONTIER_MONS_HIKER_1}
    },
    [FRONTIER_TRAINER_CADEN] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .trainerName = _("CADEN"),
        .speechBefore = {EC_WORD_I, EC_WORD_CAN_T, EC_WORD_BE, EC_WORD_DEFEATED, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_FIRE, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_FIRE, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I_AM, EC_WORD_TIRED, EC_WORD_ELLIPSIS, EC_WORD_IT_S, EC_WORD_SO, EC_WORD_HOT},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Caden
    },
    [FRONTIER_TRAINER_MARLON] = {
        .facilityClass = FACILITY_CLASS_SUPER_NERD,
=======
        .monSet = (const u16[]){FRONTIER_MONS_KINDLER_1}
    },
    [FRONTIER_TRAINER_MARLON] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .trainerName = _("MARLON"),
        .speechBefore = {EC_WORD_A, EC_WORD_POKEDEX, EC_WORD_IS, EC_WORD_A_LITTLE, EC_WORD_RADIO, EC_WORD_QUES},
        .speechWin = {EC_WORD_A_LITTLE, EC_WORD_RADIO, EC_WORD_HUH_QUES, EC_WORD_THAT_S, EC_WORD_TOTALLY, EC_WORD_COOL},
        .speechLose = {EC_WORD_IT_S, EC_WORD_NOT, EC_WORD_QUES, EC_WORD_IS, EC_WORD_POKENAV, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Marlon
    },
    [FRONTIER_TRAINER_NASH] = {
        .facilityClass = FACILITY_CLASS_SUPER_NERD,
=======
        .monSet = (const u16[]){FRONTIER_MONS_KINDLER_1}
    },
    [FRONTIER_TRAINER_NASH] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .trainerName = _("NASH"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_ON, EC_WORD_FIRE, EC_WORD_BABY, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I, EC_WORD_LEFT, EC_WORD_YOU, EC_WORD_JUST, EC_WORD_AN, EC_MOVE2(EMBER)},
        .speechLose = {EC_WORD_AIYEEH, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_WORD_NO, EC_WORD_WATER, EC_WORD_PLEASE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Nash
=======
        .monSet = (const u16[]){FRONTIER_MONS_KINDLER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ROBBY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("ROBBY"),
        .speechBefore = {EC_WORD_HAHAHA, EC_WORD_EXCL, EC_WORD_HAPPY, EC_WORD_TO, EC_WORD_MEET_YOU, EC_WORD_EXCL},
        .speechWin = {EC_WORD_I_AM, EC_WORD_THE, EC_WORD_LEADER, EC_WORD_WITH, EC_WORD_REFRESHING, EC_WORD_SERENE_GRACE},
        .speechLose = {EC_WORD_I, EC_WORD_WILL, EC_MOVE(THRASH), EC_WORD_MY, EC_WORD_TOYS, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Robby
=======
        .monSet = (const u16[]){FRONTIER_MONS_RUNNING_TRIATHLETE_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_REECE] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("REECE"),
        .speechBefore = {EC_WORD_MY, EC_MOVE2(QUICK_ATTACK), EC_WORD_CAN, EC_WORD_BEAT, EC_WORD_A, EC_MOVE2(TELEPORT)},
        .speechWin = {EC_WORD_LIKE, EC_WORD_I, EC_WORD_SAID, EC_WORD_I_AM, EC_WORD_DARN, EC_WORD_FAST},
        .speechLose = {EC_WORD_I_WAS, EC_WORD_KIDDING, EC_WORD_ABOUT, EC_WORD_THAT, EC_MOVE2(TELEPORT), EC_WORD_THING},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Reece
=======
        .monSet = (const u16[]){FRONTIER_MONS_RUNNING_TRIATHLETE_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KATHRYN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("KATHRYN"),
        .speechBefore = {EC_WORD_I, EC_WORD_DON_T, EC_WORD_TRAIN, EC_WORD_GOOD, EC_WORD_ENOUGH, EC_WORD_QUES},
        .speechWin = {EC_WORD_DON_T, EC_MOVE2(TAUNT), EC_WORD_ME, EC_WORD_LIKE, EC_WORD_THAT, EC_WORD_OK_QUES},
        .speechLose = {EC_WORD_WHY, EC_WORD_COULDN_T, EC_WORD_I, EC_WORD_WIN, EC_WORD_THIS, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Kathryn
=======
        .monSet = (const u16[]){FRONTIER_MONS_RUNNING_TRIATHLETE_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ELLEN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("ELLEN"),
        .speechBefore = {EC_WORD_CRUSH, EC_WORD_YOU, EC_WORD_LIKE, EC_WORD_AN, EC_WORD_EGG, EC_WORD_EXCL},
        .speechWin = {EC_WORD_THAT_WAS, EC_WORD_A, EC_WORD_TASTY, EC_WORD_VICTORY, EC_WORD_FOR, EC_WORD_ME},
        .speechLose = {EC_WORD_TOO, EC_WORD_TOUGH, EC_WORD_TO, EC_WORD_CRUSH, EC_WORD_EXCL, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Ellen
=======
        .monSet = (const u16[]){FRONTIER_MONS_RUNNING_TRIATHLETE_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_RAMON] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("RAMON"),
        .speechBefore = {EC_WORD_OKAY, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_THIS, EC_WORD_IS, EC_WORD_PERFECTION},
        .speechWin = {EC_WORD_I_AM, EC_WORD_HAPPY, EC_WORD_THAT, EC_WORD_I, EC_WORD_WON, EC_WORD_EXCL},
        .speechLose = {EC_WORD_IT_S, EC_WORD_A, EC_WORD_SECRET, EC_WORD_WHY, EC_WORD_I_AM, EC_WORD_HAPPY},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Ramon
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ARTHUR] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ARTHUR"),
        .speechBefore = {EC_WORD_HERE_I_COME, EC_WORD_FEELING, EC_WORD_READY, EC_WORD_FOR, EC_WORD_IT, EC_WORD_ALL},
        .speechWin = {EC_WORD_THAT_S_IT_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_WORD_THAT_WAS, EC_WORD_FABULOUS, EC_WORD_EXCL},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_NOT, EC_WORD_WHAT, EC_WORD_I, EC_WORD_NEED, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Arthur
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ALONDRA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ALONDRA"),
        .speechBefore = {EC_WORD_EVERY, EC_WORD_DAY, EC_WORD_IS, EC_WORD_A, EC_WORD_GREAT, EC_WORD_DAY},
        .speechWin = {EC_WORD_MY, EC_MOVE2(DIVE), EC_WORD_WILL, EC_WORD_BE, EC_WORD_A, EC_WORD_LEGEND},
        .speechLose = {EC_WORD_MY, EC_MOVE2(DIVE), EC_WORD_LEFT, EC_WORD_ME, EC_WORD_COLD, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Alondra
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ADRIANA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ADRIANA"),
        .speechBefore = {EC_WORD_COME, EC_WORD_SEE, EC_WORD_AN, EC_WORD_INCREDIBLE, EC_WORD_SWIFT_SWIM, EC_WORD_EXCL},
        .speechWin = {EC_WORD_I, EC_WORD_MAKE, EC_WORD_IT, EC_WORD_LOOK, EC_WORD_SO, EC_WORD_EASY},
        .speechLose = {EC_WORD_I_AM, EC_WORD_FEELING, EC_MOVE2(BEAT_UP), EC_WORD_AND, EC_WORD_TIRED, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Adriana
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MALIK] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("MALIK"),
        .speechBefore = {EC_WORD_OH, EC_WORD_NOT, EC_WORD_ANOTHER, EC_WORD_BATTLE, EC_WORD_PLEASE, EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_I, EC_WORD_FINALLY, EC_WORD_WON, EC_WORD_ELLIPSIS, EC_WORD_I_AM, EC_WORD_TIRED},
        .speechLose = {EC_WORD_I, EC_WORD_FINALLY, EC_WORD_LOST, EC_WORD_ELLIPSIS, EC_WORD_I_AM, EC_WORD_TIRED},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Malik
=======
        .monSet = (const u16[]){FRONTIER_MONS_CYCLING_TRIATHLETE_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JILL] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("JILL"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_THE, EC_MOVE2(QUICK_ATTACK), EC_WORD_TRAINER, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THE, EC_MOVE2(QUICK_ATTACK), EC_WORD_TRAINER, EC_WORD_WINS, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THE, EC_MOVE2(QUICK_ATTACK), EC_WORD_TRAINER, EC_WORD_GIVES, EC_WORD_UP, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jill
=======
        .monSet = (const u16[]){FRONTIER_MONS_CYCLING_TRIATHLETE_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ERIK] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("ERIK"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_THE, EC_WORD_SPEED_BOOST, EC_WORD_HERO, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THANK_YOU, EC_WORD_FROM, EC_WORD_THE, EC_WORD_SPEED_BOOST, EC_WORD_HERO, EC_WORD_EXCL},
        .speechLose = {EC_WORD_WAAAH, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_WORD_NO, EC_WORD_NO, EC_WORD_EXCL_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Erik
=======
        .monSet = (const u16[]){FRONTIER_MONS_RUNNING_TRIATHLETE_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_YAZMIN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("YAZMIN"),
        .speechBefore = {EC_WORD_I, EC_WORD_WOULD, EC_WORD_RATHER, EC_WORD_RUN, EC_WORD_THAN, EC_WORD_BIKE},
        .speechWin = {EC_WORD_YES, EC_WORD_I, EC_WORD_WOULD, EC_WORD_MUCH, EC_WORD_RATHER, EC_WORD_RUN},
        .speechLose = {EC_WORD_BYE_BYE, EC_WORD_EXCL, EC_WORD_I_AM, EC_WORD_GOING, EC_WORD_TO, EC_WORD_RUN_AWAY},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Yazmin
=======
        .monSet = (const u16[]){FRONTIER_MONS_RUNNING_TRIATHLETE_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JAMAL] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("JAMAL"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_GOING, EC_WORD_TO, EC_WORD_BE, EC_WORD_A, EC_WORD_FATHER},
        .speechWin = {EC_WORD_I, EC_WORD_CAN_T, EC_WORD_WAIT, EC_WORD_FOR, EC_WORD_MY, EC_WORD_BABY},
        .speechLose = {EC_WORD_MY, EC_WORD_BABY, EC_WORD_WILL, EC_WORD_BE, EC_WORD_TOTALLY, EC_WORD_AWESOME},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jamal
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_LESLIE] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("LESLIE"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_GOING, EC_WORD_TO, EC_WORD_BE, EC_WORD_A, EC_WORD_MOTHER},
        .speechWin = {EC_WORD_A, EC_WORD_BABY, EC_WORD_WILL, EC_WORD_BE, EC_WORD_A_LITTLE, EC_WORD_CHALLENGE},
        .speechLose = {EC_WORD_I_AM, EC_WORD_TOO, EC_WORD_HAPPY, EC_WORD_TO, EC_WORD_BE, EC_WORD_ANGRY},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Leslie
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DAVE] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("DAVE"),
        .speechBefore = {EC_WORD_WHAT, EC_WORD_SHOULD, EC_WORD_I, EC_WORD_DO, EC_WORD_TODAY, EC_WORD_QUES},
        .speechWin = {EC_WORD_I, EC_WORD_SHOULD, EC_WORD_ENJOY, EC_WORD_SOME, EC_WORD_SPORTS, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I, EC_WORD_WILL, EC_WORD_GO, EC_WORD_PLAY, EC_WORD_A, EC_WORD_GAME},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Dave
=======
        .monSet = (const u16[]){FRONTIER_MONS_CYCLING_TRIATHLETE_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CARLO] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("CARLO"),
        .speechBefore = {EC_WORD_HAH, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_WORD_YEAH, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I, EC_WORD_DO, EC_WORD_THINGS, EC_WORD_AT, EC_MOVE(EXTREME_SPEED), EC_WORD_EXCL},
        .speechLose = {EC_WORD_I, EC_WORD_LOST, EC_WORD_AT, EC_MOVE(EXTREME_SPEED), EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Carlo
=======
        .monSet = (const u16[]){FRONTIER_MONS_CYCLING_TRIATHLETE_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_EMILIA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("EMILIA"),
        .speechBefore = {EC_WORD_ME, EC_WORD_WORRY, EC_WORD_QUES, EC_WORD_I, EC_WORD_HAVE, EC_WORD_NONE},
        .speechWin = {EC_WORD_AHAHA, EC_WORD_SEE, EC_WORD_QUES, EC_WORD_THAT_WAS, EC_WORD_FANTASTIC, EC_WORD_EXCL},
        .speechLose = {EC_WORD_AHAHA, EC_WORD_SEE, EC_WORD_QUES, EC_WORD_THAT_WAS, EC_WORD_ENTERTAINING, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Emilia
=======
        .monSet = (const u16[]){FRONTIER_MONS_CYCLING_TRIATHLETE_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DALIA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("DALIA"),
        .speechBefore = {EC_WORD_MY, EC_WORD_BIKE, EC_WORD_IS, EC_WORD_VERY, EC_WORD_EXPENSIVE, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_DON_T, EC_WORD_COME, EC_WORD_NEAR, EC_WORD_MY, EC_WORD_BIKE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_MY, EC_WORD_BIKE, EC_WORD_IS, EC_WORD_MY, EC_WORD_BEST, EC_WORD_FRIEND},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Dalia
=======
        .monSet = (const u16[]){FRONTIER_MONS_CYCLING_TRIATHLETE_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_HITOMI] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("HITOMI"),
        .speechBefore = {EC_WORD_YEAH, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_WORD_HAH, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WHAT, EC_WORD_QUES_EXCL, EC_EMPTY_WORD, EC_WORD_I, EC_WORD_WON, EC_WORD_QUES_EXCL},
        .speechLose = {EC_WORD_AIYEEH, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_WORD_I_AM, EC_WORD_SORRY, EC_WORD_EXCL_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Hitomi
=======
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_RICARDO] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("RICARDO"),
        .speechBefore = {EC_WORD_COME_ON, EC_WORD_EXCL, EC_WORD_PLAY, EC_WORD_TIME, EC_WORD_IS, EC_WORD_OVER},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_OUT, EC_WORD_OF, EC_WORD_HERE, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_PLEASE, EC_WORD_DON_T, EC_WORD_HIT, EC_WORD_ME, EC_WORD_EXCL, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Ricardo
=======
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_SHIZUKA] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("SHIZUKA"),
        .speechBefore = {EC_WORD_SHOW, EC_WORD_ME, EC_WORD_THAT, EC_WORD_YOU_RE, EC_WORD_SERIOUS, EC_WORD_EXCL},
        .speechWin = {EC_WORD_I, EC_WORD_WON_T, EC_WORD_FORGET, EC_WORD_ABOUT, EC_WORD_YOU, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_PERFECT, EC_WORD_IN, EC_WORD_EVERY, EC_WORD_WAY, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Shizuka
=======
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JOANA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("JOANA"),
        .speechBefore = {EC_WORD_YOU_RE, EC_WORD_GOING, EC_WORD_TO, EC_WORD_LOSE, EC_WORD_RIGHT, EC_WORD_AWAY},
        .speechWin = {EC_WORD_I_AM, EC_WORD_THE, EC_WORD_WINNER, EC_WORD_HEAR, EC_WORD_ME, EC_MOVE2(ROAR)},
        .speechLose = {EC_WORD_I, EC_WORD_REFUSE, EC_WORD_TO, EC_WORD_ACCEPT, EC_WORD_THAT, EC_MOVE(OUTRAGE)},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Joana
=======
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KELLY] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("KELLY"),
        .speechBefore = {EC_WORD_MY, EC_WORD_NIGHT, EC_WORD_SCHOOL, EC_WORD_IS, EC_WORD_REALLY, EC_WORD_SCARY},
        .speechWin = {EC_WORD_A, EC_WORD_LADY, EC_WORD_GHOST, EC_WORD_APPEARS, EC_WORD_THERE, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THE, EC_WORD_HOME, EC_WORD_WORK, EC_WORD_IS, EC_WORD_AWFULLY, EC_WORD_SCARY},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Kelly
=======
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_RAYNA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("RAYNA"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_NO_1, EC_WORD_WHEN, EC_WORD_IT_S, EC_WORD_ABOUT, EC_WORD_POWER},
        .speechWin = {EC_WORD_UNDERSTAND, EC_WORD_MY, EC_WORD_POWER, EC_WORD_NOW, EC_WORD_QUES, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_TERRIBLE, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_WORD_I_AM, EC_WORD_TERRIBLE, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Rayna
=======
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_EVAN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("EVAN"),
        .speechBefore = {EC_WORD_EVERY, EC_WORD_BATTLE, EC_WORD_HAS, EC_WORD_A, EC_WORD_SMELL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_OH, EC_WORD_EXCL, EC_WORD_THE, EC_MOVE(SWEET_SCENT), EC_WORD_OF, EC_WORD_VICTORY},
        .speechLose = {EC_WORD_THE, EC_WORD_AWFUL, EC_WORD_STENCH, EC_WORD_OF, EC_WORD_A, EC_WORD_LOSS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Evan
=======
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_1A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JORDAN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("JORDAN"),
        .speechBefore = {EC_WORD_GOOD, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_COME_ON, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_BEAT, EC_WORD_ME, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WHAT, EC_WORD_QUES_EXCL, EC_EMPTY_WORD, EC_WORD_BUT, EC_WORD_HOW, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jordan
=======
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_1B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JOEL] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("JOEL"),
        .speechBefore = {EC_WORD_FUFUFU, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_GIGGLE, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_HAHAHA, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Joel
=======
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_1C}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KRISTEN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("KRISTEN"),
        .speechBefore = {EC_WORD_HAHAHA, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_WORD_A, EC_WORD_KID, EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_JUST, EC_WORD_A_LITTLE, EC_WORD_KID, EC_WORD_AFTER, EC_WORD_ALL, EC_WORD_EXCL},
        .speechLose = {EC_WORD_A, EC_WORD_TOUGH, EC_WORD_KID, EC_WORD_HUH_QUES, EC_WORD_HUMPH, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Kristen
=======
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_1A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_SELPHY] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("SELPHY"),
        .speechBefore = {EC_WORD_HUH_QUES, EC_WORD_WHAT, EC_WORD_IS_IT_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_OH, EC_WORD_YES, EC_WORD_EXCL, EC_WORD_WHY, EC_WORD_NOT, EC_WORD_QUES},
        .speechLose = {EC_WORD_OH, EC_WORD_NO, EC_WORD_EXCL, EC_WORD_WHY, EC_WORD_NOT, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Selphy
=======
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_1B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CHLOE] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("CHLOE"),
        .speechBefore = {EC_WORD_COME, EC_WORD_WE, EC_WORD_WILL, EC_WORD_DO, EC_WORD_BATTLE, EC_WORD_NOW},
        .speechWin = {EC_WORD_MORE, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_ANOTHER, EC_WORD_BATTLE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_OH, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_STRONG, EC_WORD_YOU, EC_WORD_ARE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Chloe
=======
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_1C}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_NORTON] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("NORTON"),
        .speechBefore = {EC_WORD_I, EC_WORD_KNOW, EC_WORD_ONLY, EC_WORD_YOU, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_EXCUSE_ME, EC_WORD_BUT, EC_WORD_YOU_RE, EC_WORD_A, EC_WORD_PUSHOVER, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_SOME, EC_WORD_KIND, EC_WORD_OF, EC_WORD_AWESOME, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Norton
=======
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_LUKAS] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("LUKAS"),
        .speechBefore = {EC_WORD_MY, EC_WORD_JOKING, EC_WORD_IS, EC_WORD_PRETTY, EC_WORD_TERRIBLE, EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_YOUR, EC_WORD_ROCK_HEAD, EC_WORD_EXISTS, EC_WORD_TO, EC_WORD_SHINE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOUR, EC_WORD_ROCK_HEAD, EC_WORD_COME, EC_WORD_TO, EC_WORD_SHINE, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Lukas
=======
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ZACH] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("ZACH"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_AN, EC_WORD_EXCELLENT, EC_MOVE2(MIMIC), EC_WORD_OF, EC_WORD_POKEMON},
        .speechWin = {EC_WORD_I_AM, EC_WORD_HAPPY, EC_WORD_LIKE, EC_WORD_A_LITTLE, EC_POKEMON_NATIONAL(TOGEPI), EC_WORD_EXCL},
        .speechLose = {EC_WORD_I_AM, EC_WORD_ANGRY, EC_WORD_LIKE, EC_WORD_A, EC_POKEMON_NATIONAL(MANKEY), EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Zach
=======
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KAITLYN] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("KAITLYN"),
        .speechBefore = {EC_WORD_I, EC_WORD_CRUSH, EC_WORD_THINGS, EC_WORD_WITH, EC_WORD_PSYCHIC, EC_WORD_POWER},
        .speechWin = {EC_WORD_MY, EC_WORD_VICTORY, EC_WORD_WILL, EC_WORD_MAKE, EC_WORD_THE, EC_WORD_NEWS},
        .speechLose = {EC_WORD_NO, EC_WORD_NO, EC_WORD_ELLIPSIS, EC_WORD_THIS, EC_WORD_WON_T, EC_WORD_DO},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Kaitlyn
=======
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_BREANNA] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("BREANNA"),
        .speechBefore = {EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_WILL, EC_WORD_CRUSH, EC_WORD_YOU, EC_WORD_EXCL},
        .speechWin = {EC_WORD_HAVE, EC_WORD_SOME, EC_WORD_MORE, EC_WORD_OF, EC_WORD_THIS, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU, EC_WORD_HAVE, EC_WORD_GUTS, EC_WORD_AND, EC_WORD_SKILL, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Breanna
=======
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KENDRA] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("KENDRA"),
        .speechBefore = {EC_WORD_IF, EC_WORD_YOU_RE, EC_WORD_SMART, EC_WORD_STOP, EC_WORD_RIGHT, EC_WORD_NOW},
        .speechWin = {EC_WORD_I, EC_WORD_SAID, EC_WORD_THAT, EC_WORD_YOU, EC_WORD_SHOULD, EC_WORD_STOP},
        .speechLose = {EC_WORD_WHY, EC_WORD_DIDN_T, EC_WORD_YOU, EC_WORD_STOP, EC_WORD_QUES, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Kendra
=======
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MOLLY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("MOLLY"),
        .speechBefore = {EC_WORD_WILL, EC_WORD_MY, EC_WORD_CUTE_CHARM, EC_MOVE2(ATTRACT), EC_WORD_YOU, EC_WORD_QUES},
        .speechWin = {EC_WORD_YOUR, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_MY, EC_WORD_TOYS, EC_WORD_NOW},
        .speechLose = {EC_WORD_OH, EC_WORD_HOW, EC_WORD_COULD, EC_WORD_YOU, EC_WORD_QUES, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Molly
=======
        .monSet = (const u16[]){FRONTIER_MONS_HEX_MANIAC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JAZMIN] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("JAZMIN"),
        .speechBefore = {EC_WORD_I, EC_WORD_FORECAST, EC_WORD_TERRIBLE, EC_WORD_THINGS, EC_WORD_FOR, EC_WORD_YOU},
        .speechWin = {EC_WORD_THERE, EC_WORD_WASN_T, EC_WORD_MY, EC_WORD_FORECAST, EC_WORD_RIGHT, EC_WORD_QUES},
        .speechLose = {EC_WORD_MY, EC_MOVE2(FORESIGHT), EC_WORD_DIDN_T, EC_WORD_SHOW, EC_WORD_ME, EC_WORD_THIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jazmin
=======
        .monSet = (const u16[]){FRONTIER_MONS_HEX_MANIAC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KELSEY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("KELSEY"),
        .speechBefore = {EC_WORD_I, EC_WORD_HAVEN_T, EC_WORD_SLEPT, EC_WORD_IN, EC_WORD_DAYS, EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_MY, EC_WORD_SLEEP, EC_WORD_WILL, EC_WORD_BE, EC_WORD_EXCELLENT, EC_WORD_NOW},
        .speechLose = {EC_WORD_YOU, EC_WORD_HAVE, EC_WORD_DESTROYED, EC_WORD_MY, EC_WORD_SLEEP, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Kelsey
=======
        .monSet = (const u16[]){FRONTIER_MONS_HEX_MANIAC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JALEN] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("JALEN"),
        .speechBefore = {EC_WORD_I, EC_WORD_DON_T, EC_WORD_ALLOW, EC_WORD_POKEMON, EC_WORD_TO, EC_MOVE(THRASH)},
        .speechWin = {EC_WORD_HAHAHA, EC_WORD_EXCL, EC_WORD_ARE, EC_WORD_YOU, EC_WORD_ANGRY, EC_WORD_QUES},
        .speechLose = {EC_WORD_WHY, EC_WORD_IS, EC_WORD_THIS, EC_WORD_SO, EC_WORD_HARD, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jalen
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEMANIAC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GRIFFEN] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("GRIFFEN"),
        .speechBefore = {EC_WORD_I, EC_MOVE2(SWALLOW), EC_MOVE2(SLUDGE), EC_WORD_TO, EC_MOVE2(TRANSFORM), EC_WORD_MYSELF},
        .speechWin = {EC_WORD_I, EC_WORD_HAVE, EC_WORD_A, EC_MOVE(GROWTH), EC_WORD_OF, EC_MOVE2(ACID_ARMOR)},
        .speechLose = {EC_WORD_I, EC_WORD_HAVE, EC_WORD_A, EC_MOVE(GROWTH), EC_WORD_OF, EC_WORD_SUCTION_CUPS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Griffen
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEMANIAC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_XANDER] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("XANDER"),
        .speechBefore = {EC_WORD_I, EC_WORD_GOT, EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_ON, EC_WORD_RENTAL},
        .speechWin = {EC_WORD_IT_S, EC_WORD_INCREDIBLE, EC_WORD_MY, EC_WORD_RENTAL, EC_WORD_POKEMON, EC_WORD_WON},
        .speechLose = {EC_WORD_RENTAL, EC_WORD_POKEMON, EC_WORD_AREN_T, EC_WORD_UP, EC_WORD_TO, EC_MOVE2(SCRATCH)},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Xander
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEMANIAC_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MARVIN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("MARVIN"),
        .speechBefore = {EC_WORD_YOU_RE, EC_WORD_UP, EC_WORD_TO, EC_WORD_THE, EC_WORD_CHALLENGE, EC_WORD_QUES},
        .speechWin = {EC_WORD_I, EC_WORD_DIDN_T, EC_WORD_THINK, EC_WORD_YOU_RE, EC_WORD_GOOD, EC_WORD_ENOUGH},
        .speechLose = {EC_WORD_I_AM, EC_WORD_FEELING, EC_WORD_PERFECT, EC_WORD_THANK_YOU, EC_WORD_SO, EC_WORD_MUCH},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Marvin
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENTLEMAN_1A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_BRENNAN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("BRENNAN"),
        .speechBefore = {EC_WORD_I, EC_MOVE2(WISH), EC_WORD_TO, EC_WORD_SEE, EC_WORD_THE, EC_WORD_NEWS},
        .speechWin = {EC_WORD_COMICS, EC_WORD_GET, EC_WORD_DAMP, EC_WORD_FROM, EC_WORD_DRIZZLE, EC_WORD_QUES},
        .speechLose = {EC_WORD_THE, EC_WORD_TIGHT, EC_WORD_MONEY, EC_WORD_LIVING, EC_WORD_CHANNEL, EC_WORD_QUES_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Brennan
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENTLEMAN_1B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_BALEY] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("BALEY"),
        .speechBefore = {EC_MOVE(SCREECH), EC_WORD_IS, EC_WORD_LIKE, EC_WORD_MUSIC, EC_WORD_TO_ME, EC_WORD_EXCL},
        .speechWin = {EC_WORD_MY, EC_MOVE(SCREECH), EC_WORD_STRATEGY, EC_WORD_IS, EC_WORD_THE, EC_WORD_BEST},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_SOUNDPROOF, EC_WORD_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Baley
=======
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ZACKARY] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("ZACKARY"),
        .speechBefore = {EC_WORD_CAN, EC_WORD_YOU, EC_MOVE(DIG), EC_WORD_IT, EC_WORD_YO, EC_WORD_QUES},
        .speechWin = {EC_MOVE2(TAKE_DOWN), EC_WORD_TAKE, EC_WORD_A, EC_MOVE2(DIVE), EC_WORD_YO, EC_WORD_YO},
        .speechLose = {EC_WORD_BREAK, EC_WORD_DOWN, EC_MOVE2(DIVE), EC_WORD_TIME, EC_WORD_FOR, EC_WORD_ME},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Zackary
=======
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GABRIEL] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("GABRIEL"),
        .speechBefore = {EC_MOVE2(POUND), EC_WORD_THE, EC_WORD_THICK_FAT, EC_WORD_ON, EC_WORD_MY, EC_MOVE2(BELLY_DRUM)},
        .speechWin = {EC_MOVE2(POUND), EC_WORD_MY, EC_MOVE2(BELLY_DRUM), EC_MOVE2(POUND), EC_WORD_MY, EC_MOVE2(BELLY_DRUM)},
        .speechLose = {EC_WORD_MY, EC_MOVE2(BELLY_DRUM), EC_WORD_WAS, EC_WORD_TOO_WEAK, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Gabriel
=======
        .monSet = (const u16[]){FRONTIER_MONS_COLLECTOR_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_EMILY] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("EMILY"),
        .speechBefore = {EC_WORD_HOW, EC_WORD_ABOUT, EC_WORD_A_TINY_BIT, EC_WORD_OF, EC_MOVE(HYPNOSIS), EC_WORD_QUES},
        .speechWin = {EC_WORD_MY, EC_MOVE(HYPNOSIS), EC_WORD_STRATEGY, EC_WORD_WORKS, EC_WORD_TO, EC_WORD_PERFECTION},
        .speechLose = {EC_WORD_MY, EC_MOVE(HYPNOSIS), EC_WORD_STRATEGY, EC_WORD_WENT, EC_WORD_BADLY, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Emily
=======
        .monSet = (const u16[]){FRONTIER_MONS_PARASOL_LADY_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JORDYN] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("JORDYN"),
        .speechBefore = {EC_WORD_YOU, EC_WORD_DON_T, EC_WORD_KNOW, EC_WORD_MY, EC_WORD_SECRET, EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_I_AM, EC_WORD_NOT, EC_WORD_AS, EC_WORD_I, EC_WORD_APPEAR, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_BUT, EC_WORD_HOW, EC_WORD_DID, EC_WORD_YOU, EC_WORD_KNOW, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jordyn
=======
        .monSet = (const u16[]){FRONTIER_MONS_BEAUTY_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_SOFIA] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("SOFIA"),
        .speechBefore = {EC_POKEMON(LOUDRED), EC_WORD_PROBABLY, EC_WORD_HAS, EC_WORD_A, EC_MOVE(SWEET_SCENT), EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THAT_S, EC_WORD_THE, EC_WORD_FEELING, EC_WORD_THAT, EC_WORD_I, EC_WORD_GET},
        .speechLose = {EC_WORD_I, EC_WORD_WORK, EC_WORD_AT, EC_WORD_THE, EC_WORD_DEPT_STORE, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Sofia
=======
        .monSet = (const u16[]){FRONTIER_MONS_AROMA_LADY_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_BRADEN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("BRADEN"),
        .speechBefore = {EC_WORD_I_CHOOSE_YOU, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_THIS_IS_IT_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_AM, EC_WORD_FEELING, EC_WORD_PRETTY, EC_WORD_AWESOME, EC_WORD_ABOUT, EC_WORD_MYSELF},
        .speechLose = {EC_WORD_ALL_RIGHT, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_I, EC_WORD_SURRENDER, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Braden
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_1A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KAYDEN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("KAYDEN"),
        .speechBefore = {EC_WORD_THEY, EC_WORD_OVERDO, EC_WORD_THAT, EC_WORD_GOURMET, EC_WORD_THING, EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_THAT, EC_WORD_GOURMET, EC_WORD_THING, EC_WORD_ISN_T, EC_WORD_FOR, EC_WORD_ME},
        .speechLose = {EC_WORD_HEY, EC_WORD_THIS, EC_WORD_IS, EC_WORD_PRETTY, EC_WORD_TASTY, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Kayden
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_1B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_COOPER] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("COOPER"),
        .speechBefore = {EC_WORD_THIS, EC_WORD_SHOULD, EC_WORD_ABSOLUTELY, EC_WORD_BE, EC_WORD_A, EC_WORD_PUSHOVER},
        .speechWin = {EC_WORD_THAT_WAS, EC_WORD_TOO, EC_WORD_EXCITING, EC_WORD_FOR, EC_WORD_ME, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_PLEASE, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_SORRY, EC_WORD_I_AM, EC_WORD_SORRY},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Cooper
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_1C}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JULIA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("JULIA"),
        .speechBefore = {EC_WORD_SPIRIT, EC_WORD_ALONE, EC_WORD_WON_T, EC_WORD_MAKE, EC_WORD_YOU, EC_WORD_WIN},
        .speechWin = {EC_WORD_YOU, EC_WORD_SHOULD, EC_WORD_ACCEPT, EC_WORD_THIS, EC_WORD_WITH, EC_WORD_SERENE_GRACE},
        .speechLose = {EC_WORD_FOR_NOW, EC_WORD_GOOD_BYE, EC_WORD_BUT, EC_WORD_IT_S, EC_WORD_NOT, EC_WORD_OVER},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Julia
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_1A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_AMARA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("AMARA"),
        .speechBefore = {EC_WORD_WROOOAAR_EXCL, EC_WORD_EXCL_EXCL, EC_WORD_I_AM, EC_WORD_SO, EC_WORD_READY, EC_WORD_EXCL_EXCL},
        .speechWin = {EC_WORD_I, EC_WORD_LOSE, EC_WORD_MYSELF, EC_WORD_IF, EC_WORD_IT_S, EC_WORD_EXCITING},
        .speechLose = {EC_WORD_THAT_S, EC_WORD_TOO, EC_WORD_MUCH, EC_WORD_TO, EC_MOVE2(TACKLE), EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Amara
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_1B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_LYNN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("LYNN"),
        .speechBefore = {EC_WORD_YOUR, EC_WORD_SECRET, EC_WORD_CAN_T, EC_WORD_BE, EC_WORD_HIDDEN, EC_WORD_FOREVER},
        .speechWin = {EC_WORD_I, EC_WORD_KNOW, EC_WORD_YOUR, EC_WORD_SECRET, EC_WORD_NOW, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU, EC_WORD_CAN_T, EC_MOVE(SAFEGUARD), EC_WORD_YOUR, EC_WORD_OWN, EC_WORD_SECRET},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Lynn
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_1C}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JOVAN] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("JOVAN"),
        .speechBefore = {EC_WORD_YOUR, EC_WORD_BATTLE, EC_WORD_SENSE, EC_WORD_IS, EC_WORD_SADLY, EC_WORD_LACKING},
        .speechWin = {EC_WORD_MY, EC_WORD_BATTLE, EC_WORD_SENSE, EC_WORD_IS, EC_WORD_COOL, EC_WORD_ISN_T_IT_QUES},
        .speechLose = {EC_WORD_I_WAS, EC_WORD_MINUS, EC_WORD_MY, EC_WORD_NORMAL, EC_WORD_POWER, EC_WORD_TODAY},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jovan
=======
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_RANGER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DOMINIC] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("DOMINIC"),
        .speechBefore = {EC_WORD_I, EC_WORD_HAVE, EC_WORD_THIS, EC_WORD_EXCELLENT, EC_WORD_CAMERA, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_MY, EC_WORD_CAMERA, EC_WORD_WAS, EC_WORD_AWFULLY, EC_WORD_EXPENSIVE, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_MY, EC_WORD_CAMERA, EC_WORD_DOESN_T, EC_WORD_MISS, EC_WORD_A, EC_WORD_THING},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Dominic
=======
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_RANGER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_NIKOLAS] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("NIKOLAS"),
        .speechBefore = {EC_WORD_I, EC_MOVE2(MIMIC), EC_WORD_POKEMON, EC_WORD_AFTER, EC_WORD_EVERY, EC_WORD_BATTLE},
        .speechWin = {EC_WORD_IF_I_WIN, EC_WORD_I, EC_WORD_PRETEND, EC_WORD_I_AM, EC_WORD_A, EC_POKEMON_NATIONAL(TAUROS)},
        .speechLose = {EC_WORD_IF_I_LOSE, EC_WORD_I, EC_WORD_PRETEND, EC_WORD_I_AM, EC_WORD_A, EC_POKEMON_NATIONAL(MILTANK)},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Nikolas
=======
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_RANGER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_VALERIA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("VALERIA"),
        .speechBefore = {EC_WORD_I, EC_MOVE2(WISH), EC_WORD_YOU, EC_WORD_WOULD, EC_WORD_NOT, EC_MOVE2(GLARE)},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_MEAN, EC_WORD_EXCL, EC_WORD_I, EC_WORD_MEAN, EC_WORD_REALLY},
        .speechLose = {EC_WORD_YOU, EC_WORD_HAVE, EC_WORD_A, EC_WORD_REALLY, EC_MOVE(SCARY_FACE), EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Valeria
=======
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_RANGER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DELANEY] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("DELANEY"),
        .speechBefore = {EC_WORD_SCHOOL, EC_WORD_IS, EC_WORD_OVER, EC_WORD_TIME, EC_WORD_TO, EC_WORD_PLAY},
        .speechWin = {EC_WORD_MY, EC_WORD_BOY, EC_WORD_FRIEND, EC_WORD_IS, EC_WORD_FROM, EC_WORD_SCHOOL},
        .speechLose = {EC_WORD_I, EC_WORD_HAVE, EC_WORD_TO, EC_WORD_WORK, EC_WORD_NEXT, EC_WORD_WEEK},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Delaney
=======
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_RANGER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MEGHAN] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("MEGHAN"),
        .speechBefore = {EC_WORD_SCHOOL, EC_WORD_IS, EC_WORD_OUT, EC_WORD_TIME, EC_WORD_TO, EC_WORD_PLAY},
        .speechWin = {EC_WORD_MY, EC_WORD_BOY, EC_WORD_FRIEND, EC_WORD_LIKES, EC_WORD_COMICS, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_IT_S, EC_WORD_BACK, EC_WORD_TO, EC_WORD_SCHOOL, EC_WORD_SOON, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Meghan
=======
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_RANGER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ROBERTO] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("ROBERTO"),
        .speechBefore = {EC_WORD_DRAGON, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_INVINCIBLE, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_YOU, EC_WORD_WEREN_T, EC_WORD_BAD, EC_WORD_I_WAS, EC_WORD_JUST, EC_WORD_BETTER},
        .speechLose = {EC_WORD_AREN_T, EC_WORD_YOU, EC_WORD_SATISFIED, EC_WORD_YET, EC_WORD_QUES, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Roberto
=======
        .monSet = (const u16[]){FRONTIER_MONS_DRAGON_TAMER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DAMIAN] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("DAMIAN"),
        .speechBefore = {EC_WORD_MY, EC_WORD_PURE_POWER, EC_WORD_IS, EC_WORD_MACHINE, EC_WORD_LIKE, EC_WORD_EXCL},
        .speechWin = {EC_WORD_MY, EC_MOVE2(MACH_PUNCH), EC_WORD_WILL, EC_WORD_MAKE, EC_WORD_A, EC_MOVE(BRICK_BREAK)},
        .speechLose = {EC_WORD_ARRGH, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_NO, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Damian
=======
        .monSet = (const u16[]){FRONTIER_MONS_DRAGON_TAMER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_BRODY] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("BRODY"),
        .speechBefore = {EC_WORD_MY, EC_WORD_FASHION, EC_WORD_SENSE, EC_WORD_SEEMS, EC_POKEMON(ODDISH), EC_WORD_QUES},
        .speechWin = {EC_WORD_IT_S, EC_WORD_MY, EC_WORD_FAMILY, EC_WORD_STAY_AT_HOME, EC_WORD_LOOK, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I, EC_WORD_QUESTION, EC_WORD_YOUR, EC_WORD_FASHION, EC_WORD_SENSE, EC_WORD_SERIOUSLY},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Brody
=======
        .monSet = (const u16[]){FRONTIER_MONS_DRAGON_TAMER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GRAHAM] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("GRAHAM"),
        .speechBefore = {EC_WORD_YEAH, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_YEAH_YEAH, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WAHAHAHA, EC_WORD_WAHAHAHA, EC_WORD_EXCL, EC_WORD_WAHAHAHA, EC_WORD_WAHAHAHA, EC_WORD_EXCL_EXCL},
        .speechLose = {EC_WORD_I_AM, EC_WORD_SORRY, EC_WORD_ELLIPSIS, EC_WORD_IT_S, EC_WORD_MY, EC_WORD_BAD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Graham
=======
        .monSet = (const u16[]){FRONTIER_MONS_DRAGON_TAMER_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_TYLOR] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("TYLOR"),
        .speechBefore = {EC_WORD_ARE, EC_WORD_YOU, EC_WORD_FEELING, EC_WORD_MY, EC_MOVE2(HEAT_WAVE), EC_WORD_QUES},
        .speechWin = {EC_WORD_YES, EC_WORD_I_AM, EC_WORD_ON, EC_WORD_FIRE, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_BUT, EC_WORD_I_WAS, EC_WORD_ON, EC_WORD_FIRE, EC_WORD_FOR, EC_WORD_YOU},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Tylor
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JAREN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("JAREN"),
        .speechBefore = {EC_WORD_FIGHTING, EC_WORD_SPIRIT, EC_WORD_QUES, EC_WORD_ME, EC_WORD_QUES, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I, EC_WORD_WANT, EC_WORD_MORE, EC_WORD_CUTE, EC_WORD_POKEMON, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOUR, EC_WORD_POKEMON, EC_WORD_LOOK, EC_WORD_QUITE, EC_WORD_CUTE, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jaren
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CORDELL] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("CORDELL"),
        .speechBefore = {EC_WORD_A, EC_WORD_BATTLE, EC_WORD_IS, EC_WORD_DECIDED, EC_WORD_ON, EC_WORD_SPIRIT},
        .speechWin = {EC_WORD_CAN_T, EC_WORD_YOU, EC_WORD_ACCEPT, EC_WORD_THAT, EC_WORD_QUES, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I, EC_WORD_WILL, EC_WORD_BE, EC_WORD_ON, EC_WORD_MY, EC_WORD_WAY},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Cordell
=======
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_BREEDER_M_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JAZLYN] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("JAZLYN"),
        .speechBefore = {EC_WORD_IS, EC_WORD_YOUR, EC_WORD_POKEDEX, EC_WORD_REALLY, EC_WORD_AWESOME, EC_WORD_QUES},
        .speechWin = {EC_WORD_OH_YEAH, EC_WORD_WOW, EC_WORD_YOUR, EC_WORD_POKEDEX, EC_WORD_IS, EC_WORD_SUPER},
        .speechLose = {EC_WORD_AN, EC_WORD_AVANT_GARDE, EC_WORD_POKEDEX, EC_WORD_WOULD, EC_WORD_BE, EC_WORD_AWESOME},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jazlyn
=======
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_BREEDER_F_1}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ZACHERY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("ZACHERY"),
        .speechBefore = {EC_WORD_I, EC_WORD_HAVE, EC_WORD_MY, EC_WORD_OWN, EC_WORD_PLACE, EC_WORD_YEEHAW_EXCL},
        .speechWin = {EC_WORD_IT_S, EC_WORD_AN, EC_WORD_EXCITING, EC_WORD_TIME, EC_WORD_FOR, EC_WORD_ME},
        .speechLose = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_FLATTEN, EC_WORD_MY, EC_WORD_HAPPINESS, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Zachery
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JOHAN] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("JOHAN"),
        .speechBefore = {EC_WORD_WINTER, EC_WORD_WILL, EC_WORD_SOON, EC_WORD_BE, EC_WORD_HERE, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_MY, EC_WORD_ALLOWANCE, EC_WORD_COULD, EC_WORD_USE, EC_WORD_A, EC_MOVE2(HELPING_HAND)},
        .speechLose = {EC_WORD_I, EC_WORD_ALWAYS, EC_WORD_USE, EC_WORD_MY, EC_WORD_ALLOWANCE, EC_WORD_UP},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Johan
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_2_NO_DUGTRIO}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_SHEA] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("SHEA"),
        .speechBefore = {EC_WORD_DO, EC_WORD_YOU, EC_WORD_BATTLE, EC_WORD_WITH, EC_WORD_BEAUTY, EC_WORD_QUES},
        .speechWin = {EC_WORD_YOU, EC_WORD_BATTLE, EC_WORD_IN, EC_WORD_AN, EC_WORD_UGLY, EC_WORD_WAY},
        .speechLose = {EC_WORD_WHAT, EC_WORD_IS, EC_WORD_BEAUTY, EC_WORD_TO, EC_WORD_YOU, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Shea
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KAILA] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("KAILA"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_FEELING, EC_WORD_THIRSTY, EC_WORD_RIGHT, EC_WORD_NOW, EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_I, EC_WORD_COULD, EC_WORD_USE, EC_WORD_A, EC_WORD_COLD, EC_WORD_DRINK},
        .speechLose = {EC_WORD_THAT, EC_WORD_LOSS, EC_WORD_IS, EC_WORD_HARD, EC_WORD_TO, EC_MOVE2(SWALLOW)},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Kaila
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ISIAH] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("ISIAH"),
        .speechBefore = {EC_WORD_I, EC_WORD_PRETEND, EC_WORD_TO, EC_WORD_STUDY, EC_WORD_A_LOT, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I, EC_MOVE2(TRICK), EC_WORD_MOTHER, EC_WORD_FOR, EC_WORD_MY, EC_WORD_ALLOWANCE},
        .speechLose = {EC_WORD_I, EC_WORD_DON_T, EC_WORD_WANT, EC_WORD_TO, EC_WORD_STUDY, EC_WORD_MORE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Isiah
=======
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GARRETT] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("GARRETT"),
        .speechBefore = {EC_WORD_I, EC_WORD_ENJOY, EC_WORD_COMICS, EC_WORD_AND, EC_WORD_THIS, EC_WORD_GAME},
        .speechWin = {EC_WORD_I, EC_WORD_LIKE, EC_WORD_THIS, EC_WORD_MUSIC, EC_WORD_IDOL, EC_WORD_TOO},
        .speechLose = {EC_WORD_BUT, EC_WORD_I, EC_WORD_HAVE, EC_WORD_TO, EC_WORD_STUDY, EC_WORD_MORE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Garrett
=======
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_HAYLIE] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("HAYLIE"),
        .speechBefore = {EC_WORD_I, EC_WORD_WORRY, EC_WORD_TOO, EC_WORD_MUCH, EC_WORD_TO, EC_WORD_SLEEP},
        .speechWin = {EC_WORD_A, EC_WORD_WIN, EC_WORD_GIVES, EC_WORD_ME, EC_WORD_A, EC_MOVE2(CALM_MIND)},
        .speechLose = {EC_WORD_MY, EC_WORD_INSOMNIA, EC_WORD_WILL, EC_WORD_GET, EC_WORD_BAD, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Haylie
=======
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MEGAN] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("MEGAN"),
        .speechBefore = {EC_WORD_I, EC_WORD_BELIEVE, EC_WORD_IN, EC_WORD_AN, EC_MOVE(AROMATHERAPY), EC_WORD_BATH},
        .speechWin = {EC_WORD_I, EC_WORD_WANT, EC_WORD_A, EC_WORD_HEALTHY, EC_WORD_CLEAR_BODY, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_IF, EC_WORD_ONLY, EC_MOVE(AROMATHERAPY), EC_WORD_WERE, EC_WORD_LESS, EC_WORD_EXPENSIVE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Megan
=======
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ISSAC] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("ISSAC"),
        .speechBefore = {EC_WORD_MY, EC_WORD_HOBBY, EC_WORD_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I, EC_WORD_LIKE, EC_WORD_ANY, EC_WORD_KIND, EC_WORD_OF, EC_MOVE2(WATER_SPORT)},
        .speechLose = {EC_WORD_I, EC_WORD_DISLIKE, EC_WORD_ANY, EC_WORD_KIND, EC_WORD_OF, EC_MOVE2(MUD_SPORT)},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Issac
=======
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_QUINTON] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("QUINTON"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_SAD, EC_WORD_CAUSE, EC_WORD_I_AM, EC_WORD_TOO_WEAK, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_YOU, EC_WORD_AREN_T, EC_WORD_TOO_STRONG, EC_WORD_FOR, EC_WORD_ME, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_HEY, EC_WORD_WHAT, EC_WORD_DID, EC_WORD_I, EC_WORD_DO, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Quinton
=======
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_SALMA] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("SALMA"),
        .speechBefore = {EC_WORD_YOU_VE, EC_WORD_GOT, EC_WORD_YOUR, EC_WORD_HUSTLE, EC_WORD_ON, EC_WORD_EXCL},
        .speechWin = {EC_WORD_I, EC_WORD_WIN, EC_WORD_YOU, EC_WORD_HUSTLE, EC_WORD_ON, EC_WORD_OUT},
        .speechLose = {EC_WORD_I, EC_WORD_DON_T, EC_WORD_GET, EC_WORD_HOW, EC_WORD_I, EC_WORD_LOST},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Salma
=======
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ANSLEY] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("ANSLEY"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_BORED, EC_WORD_ELLIPSIS, EC_WORD_DANCE, EC_WORD_FOR, EC_WORD_ME},
        .speechWin = {EC_WORD_YOU_VE, EC_WORD_BORED, EC_WORD_ME, EC_WORD_SOME, EC_WORD_MORE, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_TAKE, EC_WORD_YOUR, EC_MOVE2(FRUSTRATION), EC_WORD_SOME, EC_WORD_OTHER, EC_WORD_PLACE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Ansley
=======
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_HOLDEN] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("HOLDEN"),
        .speechBefore = {EC_WORD_LET_S, EC_WORD_COMMEMORATE, EC_WORD_MY, EC_WORD_COOLNESS, EC_WORD_IN, EC_WORD_BATTLE},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_TOO_WEAK, EC_WORD_FOR, EC_WORD_ANY, EC_WORD_PRAISE, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOUR, EC_WORD_BATTLE, EC_WORD_SENSE, EC_WORD_IS, EC_WORD_AMUSING, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Holden
=======
        .monSet = (const u16[]){FRONTIER_MONS_BUG_CATCHER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_LUCA] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("LUCA"),
        .speechBefore = {EC_WORD_WE, EC_WORD_WILL, EC_WORD_HAVE, EC_WORD_A, EC_WORD_COOL, EC_WORD_BATTLE},
        .speechWin = {EC_WORD_I, EC_WORD_WON, EC_WORD_IN, EC_WORD_A, EC_WORD_COOL, EC_WORD_WAY},
        .speechLose = {EC_WORD_HELLO, EC_WORD_QUES, EC_WORD_I_AM, EC_WORD_JUST, EC_WORD_A, EC_WORD_KID},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Luca
=======
        .monSet = (const u16[]){FRONTIER_MONS_BUG_CATCHER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JAMISON] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("JAMISON"),
        .speechBefore = {EC_WORD_MY, EC_MOVE2(SECRET_POWER), EC_WORD_IS, EC_WORD_OVERWHELMING, EC_WORD_TO, EC_WORD_POKEMON},
        .speechWin = {EC_WORD_DID, EC_WORD_YOU, EC_WORD_SEE, EC_WORD_THAT, EC_WORD_QUES, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I, EC_WORD_WILL, EC_WORD_USE, EC_MOVE(SMOKESCREEN), EC_WORD_TO, EC_WORD_ESCAPE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jamison
=======
        .monSet = (const u16[]){FRONTIER_MONS_NINJA_BOY_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GUNNAR] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("GUNNAR"),
        .speechBefore = {EC_WORD_I, EC_MOVE(CUT), EC_WORD_DOWN, EC_WORD_EVERY, EC_WORD_OPPONENT, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_DON_T, EC_MOVE(GRUDGE), EC_WORD_ME, EC_WORD_FOR, EC_WORD_YOUR, EC_WORD_LOSS},
        .speechLose = {EC_WORD_PLEASE, EC_WORD_LOSE, EC_WORD_THAT, EC_MOVE(SCARY_FACE), EC_WORD_OF, EC_WORD_YOURS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Gunnar
=======
        .monSet = (const u16[]){FRONTIER_MONS_NINJA_BOY_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CRAIG] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("CRAIG"),
        .speechBefore = {EC_WORD_I, EC_WORD_CAN_T, EC_WORD_WAIT, EC_WORD_FOR, EC_WORD_MY, EC_WORD_TRAIN},
        .speechWin = {EC_WORD_MY, EC_WORD_TRAIN, EC_WORD_ISN_T, EC_WORD_HERE, EC_WORD_YET, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_HERE_IT_IS, EC_WORD_MY, EC_WORD_TRAIN, EC_WORD_SEE_YA, EC_WORD_EXCL, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Craig
=======
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_PIERCE] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("PIERCE"),
        .speechBefore = {EC_WORD_THERE, EC_WORD_WAS, EC_WORD_A, EC_MOVE2(HEAT_WAVE), EC_WORD_LAST, EC_WORD_WEEK},
        .speechWin = {EC_WORD_I, EC_WORD_CAN_T, EC_WORD_TAKE, EC_WORD_A, EC_MOVE2(HEAT_WAVE), EC_EMPTY_WORD},
        .speechLose = {EC_WORD_DIDN_T, EC_WORD_IT, EC_MOVE(HAIL), EC_WORD_TOO, EC_WORD_QUES, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Pierce
=======
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_REGINA] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("REGINA"),
        .speechBefore = {EC_WORD_I, EC_WORD_LIKE, EC_WORD_TO, EC_WORD_PLAY, EC_WORD_IN, EC_WORD_WATER},
        .speechWin = {EC_WORD_I, EC_WORD_REFUSE, EC_WORD_TO, EC_WORD_COME, EC_WORD_OUT, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_NOT, EC_WORD_MUCH, EC_WORD_GOOD, EC_WORD_IN, EC_WORD_WATER},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Regina
=======
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ALISON] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("ALISON"),
        .speechBefore = {EC_WORD_THIS, EC_WORD_KINDERGARTEN, EC_WORD_MAGAZINE, EC_WORD_IS, EC_WORD_TOO, EC_WORD_MUCH},
        .speechWin = {EC_WORD_HOW, EC_WORD_TO, EC_WORD_BUG, EC_WORD_YOUR, EC_WORD_TEACHER, EC_WORD_QUES},
        .speechLose = {EC_WORD_ENJOY, EC_WORD_A, EC_WORD_TASTY, EC_WORD_SCHOOL, EC_WORD_DIET, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Alison
=======
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_HANK] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("HANK"),
        .speechBefore = {EC_WORD_THERE, EC_WORD_IS, EC_WORD_A, EC_WORD_BUG, EC_WORD_EVENT, EC_WORD_SOON},
        .speechWin = {EC_WORD_IT_S, EC_WORD_A, EC_WORD_BUG, EC_WORD_FASHION, EC_WORD_SHOW, EC_WORD_EXCL},
        .speechLose = {EC_WORD_DON_T, EC_WORD_YOU, EC_WORD_LIKE, EC_WORD_BUG, EC_WORD_POKEMON, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Hank
=======
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_EARL] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("EARL"),
        .speechBefore = {EC_WORD_THE, EC_WORD_INVINCIBLE, EC_WORD_BUG, EC_WORD_TRAINER, EC_WORD_IS, EC_WORD_HERE},
        .speechWin = {EC_WORD_THE, EC_WORD_INVINCIBLE, EC_WORD_BUG, EC_WORD_TRAINER, EC_WORD_AM, EC_WORD_I},
        .speechLose = {EC_WORD_SEE, EC_WORD_HOW, EC_WORD_FAST, EC_WORD_I, EC_WORD_RUN_AWAY, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Earl
=======
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_RAMIRO] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("RAMIRO"),
        .speechBefore = {EC_WORD_I, EC_WORD_WENT, EC_WORD_TO, EC_WORD_A, EC_WORD_FISHING, EC_WORD_SCHOOL},
        .speechWin = {EC_WORD_SERIOUSLY, EC_WORD_I_AM, EC_WORD_IN, EC_WORD_THE, EC_WORD_FISHING, EC_WORD_HALL_OF_FAME},
        .speechLose = {EC_WORD_I, EC_WORD_WANT, EC_WORD_TO, EC_WORD_GO, EC_WORD_BACK, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Ramiro
=======
        .monSet = (const u16[]){FRONTIER_MONS_FISHERMAN_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_HUNTER] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("HUNTER"),
        .speechBefore = {EC_WORD_SHOW, EC_WORD_ME, EC_WORD_A, EC_WORD_TOTALLY, EC_WORD_COOL, EC_MOVE(CROSS_CHOP)},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_TOO_WEAK, EC_WORD_TO, EC_WORD_DO, EC_WORD_A, EC_MOVE(CROSS_CHOP)},
        .speechLose = {EC_WORD_WAS, EC_WORD_IT, EC_WORD_A, EC_WORD_MISTAKE, EC_WORD_QUES, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Hunter
=======
        .monSet = (const u16[]){FRONTIER_MONS_FISHERMAN_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_AIDEN] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("AIDEN"),
        .speechBefore = {EC_WORD_MY, EC_WORD_WORK, EC_WORD_IS, EC_WORD_MAKING, EC_WORD_ME, EC_WORD_HEALTHY},
        .speechWin = {EC_WORD_YOU, EC_WORD_SEE, EC_WORD_QUES, EC_WORD_I_AM, EC_WORD_HEALTHY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_MORE, EC_WORD_HEALTHY, EC_WORD_THAN, EC_WORD_I_AM, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Aiden
=======
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_XAVIER] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("XAVIER"),
        .speechBefore = {EC_WORD_HEY_THERE, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_LOOK, EC_WORD_LOOK, EC_WORD_EXCL_EXCL},
        .speechWin = {EC_WORD_GOOD_BYE, EC_WORD_AND, EC_WORD_THANK_YOU, EC_WORD_THAT_WAS, EC_WORD_FUNNY, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WOWEE, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_NO, EC_WORD_NO, EC_WORD_EXCL_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Xavier
=======
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CLINTON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("CLINTON"),
        .speechBefore = {EC_WORD_WANT, EC_WORD_TO, EC_WORD_SEE, EC_WORD_MY, EC_MOVE(HYPNOSIS), EC_WORD_QUES},
        .speechWin = {EC_WORD_YOUR, EC_MOVE2(FURY_SWIPES), EC_WORD_YOUR, EC_MOVE(STRENGTH), EC_WORD_YOUNG, EC_WORD_TRAINER},
        .speechLose = {EC_WORD_TCH, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_WORD_I_AM, EC_WORD_TOO_WEAK, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Clinton
=======
        .monSet = (const u16[]){FRONTIER_MONS_COLLECTOR_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JESSE] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("JESSE"),
        .speechBefore = {EC_WORD_THIS, EC_WORD_BATTLE, EC_WORD_IS, EC_WORD_FOR, EC_WORD_MY, EC_WORD_MOTHER},
        .speechWin = {EC_WORD_MOTHER, EC_WORD_WILL, EC_WORD_BE, EC_WORD_HAPPY, EC_WORD_FOR, EC_WORD_ME},
        .speechLose = {EC_WORD_I, EC_WORD_WANT, EC_WORD_MY, EC_WORD_MOTHER, EC_WORD_EXCL, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jesse
=======
        .monSet = (const u16[]){FRONTIER_MONS_COLLECTOR_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_EDUARDO] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("EDUARDO"),
        .speechBefore = {EC_WORD_OUR, EC_WORD_MUSIC, EC_WORD_WILL, EC_WORD_PLAY, EC_WORD_ALL, EC_WORD_NIGHT},
        .speechWin = {EC_WORD_NIGHTTIME, EC_WORD_IS, EC_WORD_WHEN, EC_WORD_I, EC_WORD_PLAY, EC_WORD_BEST},
        .speechLose = {EC_WORD_LET_S, EC_WORD_PARTY, EC_WORD_UNTIL, EC_WORD_THE, EC_MOVE(MORNING_SUN), EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Eduardo
=======
        .monSet = (const u16[]){FRONTIER_MONS_GUITARIST_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_HAL] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("HAL"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_TRENDY, EC_WORD_AREN_T, EC_WORD_I, EC_WORD_QUES, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_AM, EC_WORD_FEELING, EC_WORD_HIP_AND, EC_WORD_HAPPENING, EC_WORD_OH_YEAH, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I_AM, EC_WORD_ALWAYS, EC_WORD_TRENDY, EC_WORD_THANK_YOU, EC_WORD_VERY, EC_WORD_MUCH},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Hal
=======
        .monSet = (const u16[]){FRONTIER_MONS_GUITARIST_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GAGE] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("GAGE"),
        .speechBefore = {EC_WORD_HERE_IT_IS, EC_WORD_A, EC_WORD_FLYING, EC_WORD_TYPE, EC_WORD_HIDDEN, EC_WORD_MOVE},
        .speechWin = {EC_WORD_IT_S, EC_WORD_A, EC_WORD_FLYING, EC_WORD_TYPE, EC_WORD_VICTORY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_IF_I_LOSE, EC_WORD_I, EC_WORD_JUST, EC_MOVE(FLY), EC_WORD_AWAY, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Gage
=======
        .monSet = (const u16[]){FRONTIER_MONS_BIRD_KEEPER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ARNOLD] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("ARNOLD"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_FEELING, EC_WORD_WEIRD, EC_WORD_FROM, EC_WORD_A, EC_WORD_DREAM},
        .speechWin = {EC_WORD_YOUR, EC_MOVE(SCARY_FACE), EC_WORD_WAS, EC_WORD_IN, EC_WORD_MY, EC_WORD_DREAM},
        .speechLose = {EC_WORD_MY, EC_WORD_INCREDIBLE, EC_WORD_DREAM, EC_WORD_WAS, EC_WORD_SO, EC_WORD_WEIRD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Arnold
=======
        .monSet = (const u16[]){FRONTIER_MONS_BIRD_KEEPER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JARRETT] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("JARRETT"),
        .speechBefore = {EC_WORD_COME_ON, EC_WORD_LET_S, EC_WORD_DANCE, EC_WORD_LIKE, EC_WORD_IT_S, EC_WORD_YESTERDAY},
        .speechWin = {EC_WORD_YOU, EC_WORD_LIKE, EC_WORD_HOW, EC_WORD_I, EC_WORD_DANCE, EC_WORD_QUES},
        .speechLose = {EC_WORD_YOU, EC_WORD_DON_T, EC_WORD_APPRECIATE, EC_WORD_HOW, EC_WORD_I, EC_WORD_DANCE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jarrett
=======
        .monSet = (const u16[]){FRONTIER_MONS_SAILOR_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GARETT] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("GARETT"),
        .speechBefore = {EC_WORD_MY, EC_WORD_GIRL, EC_WORD_GIVES, EC_WORD_ME, EC_WORD_A_LITTLE, EC_MOVE2(SWEET_KISS)},
        .speechWin = {EC_WORD_MY, EC_WORD_GIRL, EC_WORD_FRIEND, EC_WORD_IS, EC_WORD_MY, EC_WORD_TREASURE},
        .speechLose = {EC_WORD_A, EC_WORD_TREASURE, EC_WORD_ISN_T, EC_WORD_ALWAYS, EC_WORD_ABOUT, EC_WORD_MONEY},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Garett
=======
        .monSet = (const u16[]){FRONTIER_MONS_SAILOR_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_EMANUEL] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("EMANUEL"),
        .speechBefore = {EC_WORD_SMARTNESS, EC_WORD_ALONE, EC_WORD_WON_T, EC_WORD_MAKE, EC_WORD_YOU, EC_WORD_WIN},
        .speechWin = {EC_WORD_I_AM, EC_WORD_NOT_VERY, EC_WORD_SMART, EC_WORD_BUT, EC_WORD_I, EC_WORD_WON},
        .speechLose = {EC_WORD_HOW, EC_WORD_DID, EC_WORD_YOU, EC_MOVE2(FAKE_OUT), EC_WORD_ME, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Emanuel
=======
        .monSet = (const u16[]){FRONTIER_MONS_HIKER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GUSTAVO] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("GUSTAVO"),
        .speechBefore = {EC_MOVE(CHARGE), EC_WORD_EXCL, EC_EMPTY_WORD, EC_MOVE(CHARGE), EC_WORD_EXCL_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_SURRENDER, EC_WORD_QUES, EC_EMPTY_WORD, EC_WORD_SO, EC_WORD_SOON, EC_WORD_QUES},
        .speechLose = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_MAKE, EC_WORD_ME, EC_WORD_SURRENDER, EC_WORD_YET},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Gustavo
    },
    [FRONTIER_TRAINER_KAMERON] = {
        .facilityClass = FACILITY_CLASS_SUPER_NERD,
=======
        .monSet = (const u16[]){FRONTIER_MONS_HIKER_2}
    },
    [FRONTIER_TRAINER_KAMERON] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .trainerName = _("KAMERON"),
        .speechBefore = {EC_WORD_TAKE_THAT, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_MY, EC_WORD_FIERY, EC_MOVE2(TRICK)},
        .speechWin = {EC_WORD_DID, EC_WORD_MY, EC_WORD_FIERY, EC_MOVE2(TRICK), EC_MOVE(ASTONISH), EC_WORD_QUES},
        .speechLose = {EC_WORD_YOU, EC_WORD_DIDN_T, EC_WORD_FALL, EC_WORD_FOR, EC_WORD_MY, EC_MOVE2(TRICK)},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Kameron
    },
    [FRONTIER_TRAINER_ALFREDO] = {
        .facilityClass = FACILITY_CLASS_SUPER_NERD,
=======
        .monSet = (const u16[]){FRONTIER_MONS_KINDLER_2}
    },
    [FRONTIER_TRAINER_ALFREDO] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .trainerName = _("ALFREDO"),
        .speechBefore = {EC_WORD_A, EC_WORD_FIERY, EC_WORD_GOURMET, EC_WORD_AM, EC_WORD_I, EC_WORD_EXCL},
        .speechWin = {EC_WORD_IT_S, EC_WORD_A, EC_WORD_TASTY, EC_WORD_GOURMET, EC_WORD_VICTORY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_WHAT, EC_WORD_A, EC_WORD_DISASTER, EC_WORD_THAT_WAS, EC_WORD_EXCL, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Alfredo
=======
        .monSet = (const u16[]){FRONTIER_MONS_KINDLER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_RUBEN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("RUBEN"),
        .speechBefore = {EC_WORD_I, EC_WORD_CAN_T, EC_WORD_WAIT, EC_WORD_TO, EC_WORD_GET, EC_WORD_GOING},
        .speechWin = {EC_WORD_GET, EC_WORD_GOING, EC_WORD_EXCL, EC_WORD_THIS, EC_WORD_IS, EC_WORD_GOOD_BYE},
        .speechLose = {EC_WORD_I_VE, EC_WORD_GOT, EC_WORD_TO, EC_WORD_GET, EC_WORD_GOING, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Ruben
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENTLEMAN_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_LAMAR] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("LAMAR"),
        .speechBefore = {EC_WORD_A, EC_MOVE2(PRESENT), EC_WORD_FOR, EC_WORD_ME, EC_WORD_QUES, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_MMM, EC_WORD_THIS, EC_WORD_IS, EC_WORD_QUITE, EC_WORD_TASTY, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_OH, EC_WORD_IT_S, EC_WORD_A, EC_WORD_GAME, EC_WORD_IS_IT_QUES, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Lamar
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENTLEMAN_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JAXON] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("JAXON"),
        .speechBefore = {EC_WORD_A, EC_WORD_SHELL_ARMOR, EC_WORD_IS, EC_WORD_WHAT, EC_WORD_I, EC_WORD_WANT},
        .speechWin = {EC_WORD_MY, EC_WORD_FATHER, EC_WORD_AND, EC_WORD_MOTHER, EC_WORD_WON_T, EC_WORD_ACCEPT},
        .speechLose = {EC_WORD_PLEASE, EC_WORD_I, EC_WORD_NEED, EC_WORD_A, EC_WORD_SHELL_ARMOR, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jaxon
    },
    [FRONTIER_TRAINER_LEADER_BROCK] = {
        .facilityClass = FACILITY_CLASS_LEADER_BROCK,
        .trainerName = _("BROCK"),
        .speechBefore = {EC_WORD_I, EC_WORD_WILL, EC_WORD_ROCK, EC_WORD_YOUR, EC_WORD_WORLD, EC_WORD_EXCL},
        .speechWin = {EC_WORD_IT, EC_WORD_IS, EC_WORD_WHAT, EC_WORD_IT, EC_WORD_IS, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_IT, EC_WORD_IS, EC_WORD_WHAT, EC_WORD_IT, EC_WORD_IS, EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Brock
    },
    [FRONTIER_TRAINER_LEADER_CHUCK] = {
        .facilityClass = FACILITY_CLASS_LEADER_CHUCK,
        .trainerName = _("CHUCK"),
        .speechBefore = {EC_WORD_HEY_THERE, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WHAT, EC_WORD_AN, EC_WORD_EASY, EC_WORD_FIGHT, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WHAT, EC_WORD_A, EC_WORD_TERRIBLE, EC_WORD_FIGHT, EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Chuck
    },
    [FRONTIER_TRAINER_LEADER_LT_SURGE] = {
        .facilityClass = FACILITY_CLASS_LEADER_LT_SURGE,
        .trainerName = _("LT. SURGE"),
        .speechBefore = {EC_WORD_TODAY, EC_WORD_FORECAST, EC_WORD_IS, EC_WORD_ELECTRIC, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_TODAY, EC_WORD_I, EC_WORD_WIN, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_CANCEL, EC_WORD_TODAY, EC_WORD_FORECAST, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_LtSurge
    },
    [FRONTIER_TRAINER_LEADER_BLAINE] = {
        .facilityClass = FACILITY_CLASS_LEADER_BLAINE,
        .trainerName = _("BLAINE"),
        .speechBefore = {EC_WORD_MY, EC_WORD_TRUMP_CARD, EC_WORD_IS, EC_WORD_DROUGHT, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_MY, EC_WORD_FIRE, EC_WORD_TRUMP_CARD, EC_WORD_WORKS, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_MY, EC_WORD_FIRE, EC_WORD_TRUMP_CARD, EC_WORD_DOESN_T, EC_WORD_WORK, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Blaine
    },
    [FRONTIER_TRAINER_LEADER_WHITNEY] = { 
        .facilityClass = FACILITY_CLASS_LEADER_WHITNEY,
        .trainerName = _("WHITNEY"),
        .speechBefore = {EC_WORD_HI, EC_WORD_SON, EC_WORD_ELLIPSIS, EC_WORD_LET_S, EC_WORD_FIGHT, EC_WORD_EXCL},
        .speechWin = {EC_WORD_AHAHA, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_OKAY, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOUR, EC_WORD_MOTHER, EC_WORD_WILL, EC_WORD_BE, EC_WORD_HAPPY, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Whitney
    },
    [FRONTIER_TRAINER_LEADER_FALKNER] = {
        .facilityClass = FACILITY_CLASS_LEADER_FALKNER,
        .trainerName = _("FALKNER"),
        .speechBefore = {EC_WORD_GO, EC_WORD_FLYING, EC_WORD_FRIEND, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_MY, EC_WORD_FLYING, EC_WORD_SKILL, EC_WORD_HAS, EC_WORD_NO_MATCH, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I, EC_WORD_HAVE, EC_WORD_BEEN, EC_WORD_DESTROYED, EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Falkner
    },
    [FRONTIER_TRAINER_LEADER_SABRINA] = {
        .facilityClass = FACILITY_CLASS_LEADER_SABRINA,
        .trainerName = _("SABRINA"),
        .speechBefore = {EC_WORD_GET, EC_WORD_READY, EC_WORD_TO_ME, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THAT_S, EC_WORD_TOO, EC_WORD_EASY, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD,},
        .speechLose = {EC_WORD_WHOAH, EC_WORD_EXCL, EC_WORD_I_VE, EC_WORD_BEEN, EC_WORD_DEFEATED, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Sabrina
    },
    [FRONTIER_TRAINER_LEADER_JANINE] = {
        .facilityClass = FACILITY_CLASS_LEADER_JANINE,
        .trainerName = _("JANINE"),
        .speechBefore = {EC_WORD_I, EC_WORD_AM, EC_WORD_STRONG, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THAT_WAS, EC_WORD_HARD, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_SIGH, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Janine
    },
    [FRONTIER_TRAINER_LEADER_MISTY] = {
        .facilityClass = FACILITY_CLASS_LEADER_MISTY,
        .trainerName = _("MISTY"),
        .speechBefore = {EC_WORD_WATER, EC_WORD_TYPE, EC_WORD_IS, EC_WORD_THE, EC_WORD_BEST, EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_OH, EC_WORD_MY, EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_AHAHA, EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_WORD_WHAT, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Misty
    },
    [FRONTIER_TRAINER_LEADER_ERIKA] = {
        .facilityClass = FACILITY_CLASS_LEADER_ERIKA,
        .trainerName = _("ERIKA"),
        .speechBefore = {EC_WORD_DO, EC_WORD_YOU, EC_WORD_LIKE, EC_WORD_MY, EC_WORD_POKEBLOCK, EC_WORD_QUES},
        .speechWin = {EC_WORD_YOUR, EC_WORD_PARTY, EC_WORD_IS, EC_WORD_TOO, EC_WORD_SIMPLE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOUR, EC_WORD_PARTY, EC_WORD_IS, EC_WORD_TOO, EC_WORD_STRONG, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Erika
    },
    [FRONTIER_TRAINER_LEADER_PRYCE] = {
        .facilityClass = FACILITY_CLASS_LEADER_PRYCE,
        .trainerName = _("PRYCE"),
        .speechBefore = {EC_WORD_ICE, EC_WORD_IS, EC_WORD_HOT, EC_WORD_OR, EC_WORD_COLD, EC_WORD_QUES},
        .speechWin = {EC_WORD_YOU, EC_WORD_HAVE, EC_WORD_BEEN, EC_WORD_DEFEATED, EC_WORD_IN, EC_WORD_COLD},
        .speechLose = {EC_WORD_ICE, EC_WORD_IS, EC_WORD_COLD, EC_WORD_AND, EC_WORD_YOU, EC_WORD_TOO},
        .monSet = gBattleFrontierTrainerMons_Pryce
    },
    [FRONTIER_TRAINER_LEADER_MORTY] = {
        .facilityClass = FACILITY_CLASS_LEADER_MORTY,
        .trainerName = _("MORTY"),
        .speechBefore = {EC_WORD_DON_T, EC_WORD_TALK, EC_WORD_JUST, EC_WORD_BATTLE, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_BYE_BYE, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_KTHX_BYE, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Morty
    },
    [FRONTIER_TRAINER_LEADER_CLAIR] = {
        .facilityClass = FACILITY_CLASS_LEADER_CLAIR,
        .trainerName = _("CLAIR"),
        .speechBefore = {EC_WORD_MY, EC_WORD_HOBBY, EC_WORD_ARE, EC_WORD_DRAGON, EC_WORD_POKEMON, EC_WORD_EXCL},
        .speechWin = {EC_WORD_DRAGON, EC_WORD_POWER, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_DRAGON, EC_WORD_DESTROYED, EC_WORD_DRAGON, EC_WORD_DESTROYED, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Clair
    },
    [FRONTIER_TRAINER_LEADER_BLUE] = {
        .facilityClass = FACILITY_CLASS_LEADER_BLUE,
        .trainerName = _("BLUE"),
        .speechBefore = {EC_WORD_HI, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_OH, EC_WORD_WHAT, EC_WORD_QUES_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_NEXT, EC_WORD_TIME, EC_WORD_WILL, EC_WORD_BE, EC_WORD_THE, EC_WORD_TIME},
        .monSet = gBattleFrontierTrainerMons_Blue
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_LOGAN] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("LOGAN"),
        .speechBefore = {EC_WORD_IF_I_LOSE, EC_WORD_I, EC_WORD_WILL, EC_WORD_STUDY, EC_WORD_FOR, EC_WORD_SCHOOL},
        .speechWin = {EC_WORD_ME, EC_WORD_STUDY, EC_WORD_QUES, EC_WORD_NOT_VERY, EC_WORD_LIKELY_TO, EC_WORD_SEE},
        .speechLose = {EC_WORD_NO, EC_WORD_THANKS, EC_WORD_I_AM, EC_WORD_GOING, EC_WORD_TO, EC_WORD_SLEEP},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Logan
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_EMILEE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("EMILEE"),
        .speechBefore = {EC_WORD_IS, EC_WORD_THIS, EC_WORD_KIND, EC_WORD_OF, EC_WORD_BATTLE, EC_WORD_OK_QUES},
        .speechWin = {EC_WORD_LET_S, EC_WORD_GO, EC_WORD_FOR, EC_WORD_AN, EC_MOVE(ICY_WIND), EC_MOVE2(SURF)},
        .speechLose = {EC_WORD_HOW, EC_WORD_ABOUT, EC_WORD_A, EC_MOVE(ROCK_SLIDE), EC_WORD_SHOW, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Emilee
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JOSIE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("JOSIE"),
        .speechBefore = {EC_WORD_A, EC_WORD_POKEMON, EC_WORD_FASHION, EC_WORD_CONTEST, EC_WORD_IS, EC_WORD_PRETTY},
        .speechWin = {EC_WORD_I, EC_WORD_REALLY, EC_WORD_LIKE, EC_WORD_MODE, EC_WORD_FASHION, EC_WORD_THINGS},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_TOTALLY, EC_WORD_LACKING, EC_WORD_IN, EC_WORD_FASHION, EC_WORD_SENSE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Josie
=======
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ARMANDO] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("ARMANDO"),
        .speechBefore = {EC_WORD_I, EC_WORD_NEED, EC_WORD_MORE, EC_WORD_GRASS, EC_WORD_TYPE, EC_WORD_POKEMON},
        .speechWin = {EC_WORD_TRADE, EC_WORD_ME, EC_WORD_A, EC_WORD_GRASS, EC_WORD_POKEMON, EC_WORD_PLEASE},
        .speechLose = {EC_WORD_THERE, EC_WORD_AREN_T, EC_WORD_ENOUGH, EC_WORD_GRASS, EC_WORD_TYPE, EC_WORD_POKEMON},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Armando
=======
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_SKYLER] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("SKYLER"),
        .speechBefore = {EC_MOVE2(INGRAIN), EC_WORD_IS, EC_WORD_MY, EC_WORD_CHOICE, EC_WORD_BATTLE, EC_WORD_MOVE},
        .speechWin = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_MOVE, EC_WORD_ME, EC_WORD_NOW, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU, EC_MOVE(CUT), EC_WORD_ME, EC_WORD_DOWN, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Skyler
=======
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_RUTH] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("RUTH"),
        .speechBefore = {EC_WORD_I, EC_WORD_WANT, EC_WORD_TO, EC_WORD_ENJOY, EC_WORD_THIS, EC_WORD_BATTLE},
        .speechWin = {EC_WORD_THAT_WAS, EC_WORD_MUCH, EC_WORD_TOO, EC_WORD_EASY, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_PLEASE, EC_WORD_STOP, EC_WORD_I, EC_WORD_DON_T, EC_WORD_ENJOY, EC_WORD_THIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Ruth
=======
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MELODY] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("MELODY"),
        .speechBefore = {EC_WORD_I, EC_MOVE2(WISH), EC_WORD_SUNDAY, EC_WORD_IS, EC_WORD_A, EC_MOVE2(SUNNY_DAY)},
        .speechWin = {EC_WORD_SUNDAY, EC_WORD_SEEMS, EC_WORD_FOREVER, EC_WORD_TO, EC_WORD_COME, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_THE, EC_WORD_FORECAST, EC_WORD_SAYS, EC_WORD_IT, EC_WORD_WILL, EC_MOVE(HAIL)},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Melody
=======
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_PEDRO] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("PEDRO"),
        .speechBefore = {EC_WORD_A, EC_WORD_SWIFT_SWIM, EC_WORD_WILL, EC_WORD_DO, EC_WORD_YOU, EC_WORD_GOOD},
        .speechWin = {EC_WORD_THAT_S, EC_WORD_HOW, EC_WORD_I, EC_WORD_SINK, EC_WORD_AN, EC_WORD_OPPONENT},
        .speechLose = {EC_WORD_UH_OH, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_A, EC_MOVE(WHIRLPOOL), EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Pedro
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_M_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ERICK] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("ERICK"),
        .speechBefore = {EC_WORD_I, EC_WORD_WILL, EC_MOVE2(TACKLE), EC_WORD_YOU, EC_WORD_DOWN, EC_WORD_EXCL},
        .speechWin = {EC_WORD_DON_T, EC_WORD_YOU, EC_WORD_RUN_AWAY, EC_WORD_YOU, EC_WORD_LOSER, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I, EC_WORD_DIDN_T, EC_WORD_THINK, EC_WORD_YOU, EC_WORD_WOULD, EC_MOVE(COUNTER)},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Erick
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_M_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ELAINE] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("ELAINE"),
        .speechBefore = {EC_WORD_MY, EC_WORD_HEROINE, EC_WORD_ADVENTURE, EC_WORD_ISN_T, EC_WORD_GOING, EC_WORD_WELL},
        .speechWin = {EC_WORD_THANK_YOU, EC_WORD_EXCL, EC_WORD_THAT_S, EC_WORD_WHAT, EC_WORD_I, EC_WORD_NEED},
        .speechLose = {EC_WORD_I, EC_WORD_KNOW, EC_WORD_I_AM, EC_WORD_NOT, EC_WORD_A, EC_WORD_HEROINE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Elaine
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_F_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JOYCE] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("JOYCE"),
        .speechBefore = {EC_WORD_YOU, EC_WORD_MAKE, EC_WORD_ME, EC_WORD_GO, EC_WORD_AHAHA, EC_WORD_EXCL},
        .speechWin = {EC_WORD_LALALA, EC_WORD_NO, EC_WORD_LOSING, EC_WORD_FOR, EC_WORD_ME, EC_WORD_EXCL},
        .speechLose = {EC_WORD_LALALA, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_WORD_HUH_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Joyce
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_F_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_TODD] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("TODD"),
        .speechBefore = {EC_WORD_YOU_RE, EC_WORD_A, EC_WORD_LIGHTNINGROD, EC_WORD_FOR, EC_WORD_MY, EC_WORD_POWER},
        .speechWin = {EC_WORD_THAT_S, EC_WORD_ALL, EC_WORD_YOU, EC_WORD_COULD, EC_MOVE(ABSORB), EC_WORD_QUES},
        .speechLose = {EC_WORD_YOU, EC_MOVE2(REFLECT), EC_WORD_MY, EC_WORD_POWER, EC_WORD_BACK, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Todd
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GAVIN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("GAVIN"),
        .speechBefore = {EC_WORD_I, EC_WORD_WILL, EC_MOVE(BIDE), EC_WORD_MY, EC_WORD_TIME, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_IT_S, EC_WORD_OVER, EC_WORD_SO, EC_WORD_SOON, EC_WORD_QUES, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_MY, EC_WORD_MISTAKE, EC_WORD_WAS, EC_WORD_TOO, EC_WORD_EXPENSIVE, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Gavin
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MALORY] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("MALORY"),
        .speechBefore = {EC_WORD_PROMISE, EC_WORD_TO, EC_WORD_SHOW, EC_WORD_ME, EC_WORD_CUTE, EC_WORD_POKEMON},
        .speechWin = {EC_WORD_GIGGLE, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_WORD_THANK_YOU, EC_WORD_SO, EC_WORD_MUCH},
        .speechLose = {EC_WORD_TCH, EC_WORD_YOUR, EC_WORD_POKEMON, EC_WORD_AREN_T, EC_WORD_VERY, EC_WORD_NICE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Malory
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ESTHER] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("ESTHER"),
        .speechBefore = {EC_WORD_I, EC_WORD_WANT, EC_WORD_A, EC_WORD_NICE, EC_MOVE2(PRESENT), EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_PLEASE, EC_WORD_GET, EC_WORD_ME, EC_WORD_A, EC_WORD_POKEMON, EC_WORD_GAME},
        .speechLose = {EC_WORD_MESSAGE, EC_WORD_CARDS, EC_WORD_MAKE, EC_WORD_A, EC_WORD_WEAK, EC_MOVE2(PRESENT)},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Esther
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_OSCAR] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("OSCAR"),
        .speechBefore = {EC_WORD_LET_S, EC_WORD_SEE, EC_WORD_YOUR, EC_WORD_POWER, EC_WORD_IN, EC_WORD_FULL},
        .speechWin = {EC_WORD_THAT_WAS, EC_WORD_NOT, EC_WORD_YOUR, EC_WORD_FULL, EC_WORD_POWER, EC_WORD_EXCL},
        .speechLose = {EC_WORD_NOT, EC_WORD_FUNNY, EC_WORD_ELLIPSIS, EC_WORD_YOU_RE, EC_WORD_TOO_STRONG, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Oscar
=======
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_BREEDER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_WILSON] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("WILSON"),
        .speechBefore = {EC_WORD_WORK, EC_WORD_IS, EC_WORD_MAKING, EC_WORD_ME, EC_WORD_AN, EC_WORD_EARLY_BIRD},
        .speechWin = {EC_WORD_ALL, EC_WORD_WORK, EC_WORD_AND, EC_WORD_NO, EC_WORD_PLAY, EC_WORD_ELLIPSIS},
        .speechLose = {EC_MOVE(ENDURE), EC_WORD_IS, EC_WORD_ALL, EC_WORD_I, EC_WORD_CAN, EC_WORD_DO},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Wilson
=======
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_BREEDER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CLARE] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("CLARE"),
        .speechBefore = {EC_WORD_YAY, EC_WORD_EXCL, EC_WORD_A, EC_WORD_TOUGH, EC_WORD_TRAINER, EC_WORD_EXCL},
        .speechWin = {EC_WORD_AWW, EC_WORD_EXCL, EC_WORD_A, EC_WORD_WIMPY, EC_WORD_TRAINER, EC_WORD_EXCL},
        .speechLose = {EC_WORD_COOL, EC_WORD_EXCL, EC_WORD_A, EC_WORD_GENIUS, EC_WORD_TRAINER, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Clare
=======
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_BREEDER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_TESS] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("TESS"),
        .speechBefore = {EC_WORD_WANT, EC_WORD_SOME, EC_POKEMON(GULPIN), EC_WORD_DESIGN, EC_WORD_SWEETS, EC_WORD_QUES},
        .speechWin = {EC_WORD_THEY_RE, EC_WORD_A, EC_WORD_SECRET, EC_WORD_POKEMON, EC_WORD_GOURMET, EC_WORD_ITEM},
        .speechLose = {EC_WORD_THEY_RE, EC_WORD_TASTY, EC_WORD_EXCL, EC_WORD_REFRESHING, EC_WORD_TOO, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Tess
=======
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_BREEDER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_LEON] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("LEON"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_BETTER, EC_WORD_THAN, EC_WORD_ANY, EC_WORD_OTHER, EC_WORD_TRAINER},
        .speechWin = {EC_WORD_I, EC_WORD_DID, EC_WORD_IT, EC_MOVE2(JUMP_KICK), EC_WORD_FOR, EC_WORD_JOY},
        .speechLose = {EC_WORD_BACK, EC_WORD_HOME, EC_WORD_I, EC_WORD_WILL, EC_WORD_GO, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Leon
    },
    [FRONTIER_TRAINER_CHAMPION_LANCE] = {
        .facilityClass = FACILITY_CLASS_CHAMPION_LANCE,
        .trainerName = _("LANCE"),
        .speechBefore = {EC_WORD_I, EC_WORD_HAVE, EC_WORD_TO, EC_WORD_WIN, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I, EC_WORD_WON, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I, EC_WORD_LOST, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Lance
    },
    [FRONTIER_TRAINER_CHAMPION_STEVEN] = {
        .facilityClass = FACILITY_CLASS_CHAMPION_STEVEN,
        .trainerName = _("STEVEN"),
        .speechBefore = {EC_WORD_ROCK, EC_WORD_ARE, EC_WORD_COOL, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_STEEL, EC_WORD_IS, EC_WORD_BETTER, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_AWFUL, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Steven
    },
    [FRONTIER_TRAINER_LEADER_JASMINE] = {//EC_EMPTY_WORD
        .facilityClass = FACILITY_CLASS_LEADER_JASMINE,
        .trainerName = _("JASMINE"),
        .speechBefore = {EC_WORD_STEEL, EC_WORD_POWER, EC_WORD_IS, EC_WORD_INCREDIBLE, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THERE, EC_WORD_WE, EC_WORD_GO, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_SORRY, EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_WORD_I, EC_WORD_WASN_T, EC_WORD_ENOUGH, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Jasmine
    },
    [FRONTIER_TRAINER_LEADER_BUGSY] = {
        .facilityClass = FACILITY_CLASS_LEADER_BUGSY,
        .trainerName = _("BUGSY"),
        .speechBefore = {EC_WORD_BUG, EC_WORD_POWER, EC_WORD_IS, EC_WORD_INCREDIBLE, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_NOT, EC_WORD_BAD, EC_WORD_EXCL, EC_WORD_FOR, EC_WORD_ME, EC_WORD_EXCL},
        .speechLose = {EC_WORD_WHAT, EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_WORD_YOU, EC_WORD_WERE, EC_WORD_BETTER, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Bugsy
    },
    [FRONTIER_TRAINER_RED] = {
        .facilityClass = FACILITY_CLASS_RED,
        .trainerName = _("RED"),
        .speechBefore = {EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Red
    },
    [FRONTIER_TRAINER_LEAF] = {
        .facilityClass = FACILITY_CLASS_LEAF,
        .trainerName = _("LEAF"),
        .speechBefore = {EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Leaf
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_M_2A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ALONZO] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("ALONZO"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_NOT, EC_WORD_LOST, EC_WORD_ONCE, EC_WORD_YET, EC_WORD_EXCL},
        .speechWin = {EC_WORD_YOUR, EC_WORD_SAD, EC_WORD_LOOK, EC_WORD_BECOMES, EC_WORD_YOU, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I, EC_WORD_DON_T, EC_WORD_BELIEVE, EC_WORD_THIS, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Alonzo
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_M_2B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_VINCE] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("VINCE"),
        .speechBefore = {EC_WORD_THE, EC_WORD_TOP, EC_WORD_TRAINER, EC_WORD_THAT_S, EC_WORD_ME, EC_WORD_EXCL},
        .speechWin = {EC_WORD_THE, EC_WORD_TOP, EC_WORD_RANK, EC_WORD_BELONGS_TO, EC_WORD_ME, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I, EC_WORD_WILL, EC_WORD_APPEAL, EC_WORD_THIS, EC_MOVE(OUTRAGE), EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Vince
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_2C(LATIOS)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_BRYON] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("BRYON"),
        .speechBefore = {EC_WORD_MY, EC_MOVE2(BARRAGE), EC_WORD_WILL, EC_MOVE2(SLAM), EC_WORD_YOU, EC_WORD_EXCL},
        .speechWin = {EC_WORD_YOU, EC_WORD_DIDN_T, EC_WORD_COUNT_ON, EC_WORD_ANY, EC_WORD_LESS, EC_WORD_QUES},
        .speechLose = {EC_WORD_I, EC_WORD_JUST, EC_WORD_DON_T, EC_WORD_GET, EC_WORD_IT, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Bryon
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_2D(LATIOS)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_AVA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("AVA"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_A, EC_WORD_TREASURE, EC_WORD_OF, EC_WORD_THIS, EC_WORD_WORLD},
        .speechWin = {EC_WORD_MY, EC_WORD_WORLD, EC_WORD_IS, EC_WORD_FULL, EC_WORD_OF, EC_WORD_WONDER},
        .speechLose = {EC_WORD_WHY, EC_WORD_ARE, EC_WORD_YOU, EC_WORD_SO, EC_WORD_TERRIBLE, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Ava
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_F_2A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MIRIAM] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("MIRIAM"),
        .speechBefore = {EC_WORD_OH, EC_WORD_A, EC_WORD_TRAINER, EC_WORD_WITH, EC_WORD_A, EC_MOVE(SCARY_FACE)},
        .speechWin = {EC_WORD_AHAHA, EC_WORD_YOU, EC_WORD_ONLY, EC_WORD_LOOK, EC_WORD_SCARY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_AIYEEH, EC_WORD_EXCL, EC_WORD_YOU, EC_WORD_REALLY, EC_WORD_ARE, EC_WORD_SCARY},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Miriam
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_F_2B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CARRIE] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("CARRIE"),
        .speechBefore = {EC_WORD_I, EC_WORD_WILL, EC_WORD_SHOW, EC_WORD_YOU, EC_WORD_GUTSY, EC_WORD_EXCL},
        .speechWin = {EC_WORD_IT_S, EC_WORD_ALL, EC_WORD_ABOUT, EC_WORD_GUTS, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_OH, EC_WORD_NO, EC_WORD_ELLIPSIS, EC_MOVE(SELF_DESTRUCT), EC_WORD_MODE, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Carrie
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_2C(LATIAS)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GILLIAN2] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("GILLIAN"),
        .speechBefore = {EC_WORD_I, EC_WORD_SEEK, EC_WORD_A, EC_WORD_TRULY, EC_WORD_GREAT, EC_WORD_BATTLE},
        .speechWin = {EC_WORD_I, EC_WORD_NEED, EC_WORD_A_LOT, EC_WORD_BETTER, EC_WORD_BATTLE, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_A_LITTLE, EC_WORD_TOO, EC_WORD_MUCH, EC_WORD_TO, EC_WORD_TAKE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Gillian2
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_2D(LATIAS)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_TYLER] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("TYLER"),
        .speechBefore = {EC_WORD_YO, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_LET_S, EC_WORD_GO, EC_WORD_EXCL_EXCL},
        .speechWin = {EC_WORD_YO, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_I, EC_WORD_WON, EC_WORD_YO},
        .speechLose = {EC_WORD_YO, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_I, EC_WORD_LOST, EC_WORD_YO},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Tyler
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CHAZ] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("CHAZ"),
        .speechBefore = {EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_HAVE, EC_WORD_TOO, EC_WORD_MUCH, EC_WORD_POWER},
        .speechWin = {EC_WORD_THEY, EC_WORD_HAVE, EC_WORD_MORE, EC_WORD_POWER, EC_WORD_NOW, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YEAH, EC_MOVE2(TAKE_DOWN), EC_WORD_THEIR, EC_WORD_POWER, EC_WORD_A_TINY_BIT, EC_WORD_PLEASE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Chaz
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_NELSON] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("NELSON"),
        .speechBefore = {EC_WORD_WELL_THEN, EC_WORD_WILL, EC_WORD_THIS, EC_WORD_POKEMON, EC_WORD_WORK, EC_WORD_QUES},
        .speechWin = {EC_WORD_I, EC_WORD_SEE, EC_WORD_THAT, EC_WORD_IT, EC_WORD_WAS, EC_WORD_TOO_STRONG},
        .speechLose = {EC_WORD_IT, EC_WORD_DIDN_T, EC_WORD_MATCH_UP, EC_WORD_WELL, EC_WORD_I, EC_WORD_THINK},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Nelson
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_2D(LATIOS)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_SHANIA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("SHANIA"),
        .speechBefore = {EC_WORD_ALL, EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_ABSOLUTELY, EC_WORD_ADORE, EC_WORD_ME},
        .speechWin = {EC_WORD_HAPPINESS, EC_WORD_IS, EC_WORD_A, EC_WORD_POKEMON, EC_WORD_WITH, EC_WORD_CUTE_CHARM},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_SO, EC_WORD_MEAN, EC_WORD_TO, EC_WORD_CUTE, EC_WORD_POKEMON},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Shania
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_C}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_STELLA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("STELLA"),
        .speechBefore = {EC_WORD_I, EC_WORD_WANT, EC_WORD_TO, EC_WORD_SEE, EC_WORD_YOUR, EC_WORD_POKEMON},
        .speechWin = {EC_WORD_WELL, EC_WORD_AREN_T, EC_WORD_THEY, EC_WORD_BORING, EC_WORD_QUES, EC_WORD_AHAHA},
        .speechLose = {EC_WORD_YOUR, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_SOMETHING, EC_WORD_ELSE, EC_WORD_ALL_RIGHT},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Stella
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_D}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DORINE] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("DORINE"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_YOUNG, EC_WORD_AND, EC_WORD_STRONG, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_SEE, EC_WORD_QUES, EC_WORD_AREN_T, EC_WORD_I, EC_WORD_GOOD, EC_WORD_QUES},
        .speechLose = {EC_WORD_THIS, EC_WORD_ISN_T, EC_WORD_WORKING, EC_WORD_OUT, EC_WORD_AT, EC_WORD_ALL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Dorine
=======
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_2D(LATIAS)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MADDOX] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("MADDOX"),
        .speechBefore = {EC_WORD_DRAGON, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_MY, EC_WORD_NO_1, EC_WORD_CHOICE},
        .speechWin = {EC_WORD_IT_S, EC_WORD_NO, EC_WORD_SECRET, EC_WORD_DRAGON, EC_WORD_POKEMON, EC_WORD_WIN},
        .speechLose = {EC_WORD_DRAGON, EC_WORD_POKEMON, EC_WORD_SHOULD, EC_WORD_NOT, EC_WORD_LOSE, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Maddox
=======
        .monSet = (const u16[]){FRONTIER_MONS_DRAGON_TAMER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DAVIN] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("DAVIN"),
        .speechBefore = {EC_WORD_LET_S, EC_WORD_HEAR, EC_WORD_YOU, EC_MOVE2(ROAR), EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WROOOAAR_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_WORD_VICTORY, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WROOOAAR_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_WORD_WHY, EC_WORD_QUES_EXCL, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Davin
=======
        .monSet = (const u16[]){FRONTIER_MONS_DRAGON_TAMER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_TREVON] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("TREVON"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_LIVING, EC_WORD_ONLY, EC_WORD_WITH, EC_WORD_DRAGON, EC_WORD_POKEMON},
        .speechWin = {EC_WORD_THE, EC_WORD_WAY, EC_WORD_I_AM, EC_WORD_LIVING, EC_WORD_IS, EC_WORD_PERFECT},
        .speechLose = {EC_WORD_YOU_VE, EC_WORD_DESTROYED, EC_WORD_THE, EC_WORD_WAY, EC_WORD_I_AM, EC_WORD_LIVING},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Trevon
=======
        .monSet = (const u16[]){FRONTIER_MONS_DRAGON_TAMER_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MATEO] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("MATEO"),
        .speechBefore = {EC_WORD_THIS, EC_WORD_SHOULD, EC_WORD_BE, EC_WORD_OVER, EC_WORD_SOON, EC_WORD_ENOUGH},
        .speechWin = {EC_WORD_WELL, EC_WORD_THAT, EC_WORD_DIDN_T, EC_WORD_TAKE, EC_WORD_VERY, EC_WORD_MUCH},
        .speechLose = {EC_WORD_I, EC_WORD_CAN_T, EC_WORD_LOSE, EC_WORD_SO, EC_WORD_SOON, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Mateo
=======
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_2A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_BRET] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("BRET"),
        .speechBefore = {EC_WORD_I, EC_WORD_LIKE, EC_WORD_ROCK_SOLID, EC_WORD_POKEMON, EC_WORD_THE, EC_WORD_BEST},
        .speechWin = {EC_WORD_TOUGHNESS, EC_WORD_IS, EC_WORD_THE, EC_WORD_WAY, EC_WORD_TO, EC_WORD_GO},
        .speechLose = {EC_WORD_I, EC_WORD_ALSO, EC_WORD_HAVE, EC_WORD_A, EC_WORD_PLUSH_DOLL, EC_WORD_COLLECTION},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Bret
=======
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_2B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_RAUL] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("RAUL"),
        .speechBefore = {EC_WORD_I, EC_WORD_REJECT, EC_WORD_EVERY, EC_WORD_WEAK, EC_WORD_TRAINER, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_HUMPH, EC_WORD_EXCL, EC_WORD_ANOTHER, EC_WORD_WEAK, EC_WORD_TRAINER, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_THERE, EC_WORD_IS, EC_WORD_NOTHING, EC_WORD_WEAK, EC_WORD_ABOUT, EC_WORD_YOU},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Raul
=======
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_2C}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KAY] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("KAY"),
        .speechBefore = {EC_WORD_AND, EC_WORD_YET, EC_WORD_ANOTHER, EC_WORD_BATTLE, EC_WORD_QUES, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I, EC_WORD_WON, EC_WORD_BUT, EC_WORD_I_AM, EC_WORD_TIRED, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_GOOD, EC_WORD_IT_S, EC_WORD_OVER, EC_WORD_AT, EC_WORD_LAST, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Kay
=======
        .monSet = (const u16[]){FRONTIER_MONS_BATTLE_GIRL_2A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ELENA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("ELENA"),
        .speechBefore = {EC_WORD_A, EC_WORD_BATTLE, EC_WORD_GIRL, EC_WORD_THAT_S, EC_WORD_ME, EC_WORD_EXCL},
        .speechWin = {EC_WORD_ISN_T, EC_WORD_A, EC_WORD_BATTLE, EC_WORD_GIRL, EC_WORD_AWESOME, EC_WORD_QUES},
        .speechLose = {EC_WORD_YOU, EC_WORD_DISLIKE, EC_WORD_A, EC_WORD_BATTLE, EC_WORD_GIRL, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Elena
=======
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_2B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ALANA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("ALANA"),
        .speechBefore = {EC_WORD_EAT, EC_WORD_MY, EC_WORD_INVINCIBLE, EC_WORD_ATTACK, EC_WORD_YOU, EC_WORD_EXCL},
        .speechWin = {EC_WORD_YOU, EC_WORD_HAVE, EC_WORD_MUCH, EC_WORD_TO, EC_WORD_LEARN, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_SO, EC_WORD_MUCH, EC_WORD_FOR, EC_WORD_MY, EC_WORD_INVINCIBLE, EC_WORD_ATTACK},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Alana
    },
    [FRONTIER_TRAINER_BAILEYS] = {
=======
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_2C}
    },
    [FRONTIER_TRAINER_ALEXAS] = {
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("ALEXAS"),
        .speechBefore = {EC_WORD_GOOD, EC_WORD_TO, EC_WORD_MEET_YOU, EC_WORD_YOUNG, EC_WORD_TRAINER, EC_WORD_EXCL},
        .speechWin = {EC_WORD_WAHAHAHA, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_GIVE, EC_WORD_IT, EC_WORD_UP},
        .speechLose = {EC_WORD_YOU, EC_WORD_ARE, EC_WORD_A, EC_WORD_STRONG, EC_WORD_TRAINER, EC_WORD_KID},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Alexas
=======
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_2A(TYRANITAR)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_WESTON] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("WESTON"),
        .speechBefore = {EC_WORD_I, EC_WORD_DON_T, EC_WORD_PLAY, EC_WORD_DOWN, EC_WORD_ALL_RIGHT, EC_WORD_QUES},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_FAR, EC_WORD_TOO, EC_WORD_EASY, EC_WORD_TO, EC_WORD_ATTACK},
        .speechLose = {EC_WORD_WELL, EC_WORD_WELL, EC_WORD_ELLIPSIS, EC_WORD_I, EC_WORD_SURRENDER, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Weston
=======
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_2B(LATIOS)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JASPER] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("JASPER"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_NOT, EC_WORD_OLD, EC_WORD_I_AM, EC_WORD_SKILLED, EC_WORD_EXCL},
        .speechWin = {EC_WORD_SKILLED, EC_WORD_THAT_S, EC_WORD_WHAT, EC_WORD_I_AM, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I_AM, EC_WORD_SHOCKED, EC_WORD_EXCL, EC_WORD_DOWN, EC_WORD_I, EC_WORD_GO},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jasper
=======
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_2C(TYRANITAR)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_NADIA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("NADIA"),
        .speechBefore = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_BEAT, EC_WORD_ME, EC_WORD_DOWN, EC_WORD_EXCL},
        .speechWin = {EC_WORD_HAH, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_I, EC_WORD_BEAT, EC_WORD_YOU},
        .speechLose = {EC_WORD_I_AM, EC_MOVE2(BEAT_UP), EC_WORD_AND, EC_WORD_DOWNCAST, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Nadia
=======
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_2A(DRAGONITE)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MIRANDA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("MIRANDA"),
        .speechBefore = {EC_WORD_WELL, EC_WORD_WELL, EC_EMPTY_WORD, EC_WORD_LET_S, EC_WORD_START, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WHAT, EC_WORD_QUES, EC_WORD_DONE, EC_WORD_SO, EC_WORD_SOON, EC_WORD_QUES},
        .speechLose = {EC_WORD_WELL, EC_WORD_I, EC_WORD_SEE, EC_WORD_THAT, EC_WORD_I_AM, EC_WORD_TOO_WEAK},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Miranda
=======
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_2B(LATIAS)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_EMMA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("EMMA"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_BEEN, EC_WORD_HEARING, EC_WORD_ABOUT, EC_WORD_YOU, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I, EC_WORD_THINK, EC_WORD_I_VE, EC_WORD_MISHEARD, EC_WORD_THINGS, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WHAT, EC_WORD_I_VE, EC_WORD_BEEN, EC_WORD_HEARING, EC_WORD_IS, EC_WORD_RIGHT},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Emma
=======
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_2C(DRAGONITE)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ROLANDO] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("ROLANDO"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_A, EC_WORD_SUPER, EC_WORD_POKEMON, EC_WORD_HERO, EC_WORD_EXCL},
        .speechWin = {EC_WORD_WAS, EC_WORD_THAT, EC_WORD_ENOUGH, EC_WORD_FOR, EC_WORD_YOU, EC_WORD_QUES},
        .speechLose = {EC_WORD_YOU, EC_WORD_SHOULD, EC_WORD_NOT, EC_WORD_BEAT, EC_WORD_A, EC_WORD_HERO},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Rolando
=======
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_2(LATIOS, ARTICUNO, ZAPDOS, MOLTRES)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_STANLY] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("STANLY"),
        .speechBefore = {EC_WORD_THIS, EC_WORD_SHOULD, EC_WORD_BE, EC_WORD_AN, EC_WORD_EASY, EC_WORD_MATCH},
        .speechWin = {EC_WORD_IT, EC_WORD_REALLY, EC_WORD_WAS, EC_WORD_EASY, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_ARE, EC_WORD_YOU, EC_WORD_HAPPY, EC_WORD_NOW, EC_WORD_QUES, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Stanly
=======
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_2(LATIOS, RAIKOU, ENTEI, SUICUNE)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DARIO] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("DARIO"),
        .speechBefore = {EC_WORD_MY, EC_MOVE2(FORESIGHT), EC_WORD_SAYS, EC_WORD_I, EC_WORD_WILL, EC_WORD_WIN},
        .speechWin = {EC_WORD_MY, EC_MOVE2(FORESIGHT), EC_WORD_HAS, EC_WORD_BEEN, EC_WORD_PERFECT, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I, EC_WORD_DIDN_T, EC_WORD_SEE, EC_WORD_THIS, EC_MOVE(REVERSAL), EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Dario
=======
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_2(LATIOS, REGIROCK, REGICE, REGISTEEL)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_KARLEE] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("KARLEE"),
        .speechBefore = {EC_WORD_SOMETHING, EC_WORD_GOOD, EC_WORD_WILL, EC_WORD_COME, EC_WORD_OF, EC_WORD_THIS},
        .speechWin = {EC_WORD_YOU, EC_WORD_SEE, EC_WORD_QUES, EC_WORD_FANTASTIC, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THAT, EC_WORD_SOMETHING, EC_WORD_GOOD, EC_WORD_WENT, EC_WORD_TO, EC_WORD_YOU},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Karlee
=======
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_2(LATIAS, ARTICUNO, ZAPDOS, MOLTRES)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JAYLIN] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("JAYLIN"),
        .speechBefore = {EC_WORD_EVERY, EC_WORD_TRAINER, EC_WORD_HAS, EC_WORD_BEEN, EC_WORD_TOO_WEAK, EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_IT_S, EC_WORD_MAKING, EC_WORD_ME, EC_MOVE(YAWN), EC_WORD_THAT, EC_WORD_BATTLE},
        .speechLose = {EC_WORD_I, EC_WORD_SLEPT, EC_WORD_AND, EC_WORD_SO, EC_WORD_I, EC_WORD_LOST},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jaylin
=======
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_2(LATIAS, RAIKOU, ENTEI, SUICUNE)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_INGRID] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("INGRID"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_NOT, EC_WORD_A, EC_WORD_VERY, EC_WORD_MEAN, EC_WORD_TRAINER},
        .speechWin = {EC_WORD_WASN_T, EC_WORD_THAT, EC_WORD_A, EC_WORD_GOOD, EC_WORD_MATCH, EC_WORD_QUES},
        .speechLose = {EC_WORD_I, EC_WORD_LOST, EC_WORD_CAUSE, EC_WORD_YOU_RE, EC_WORD_MEAN, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Ingrid
=======
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_2(LATIAS, REGIROCK, REGICE, REGISTEEL)}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DELILAH] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("DELILAH"),
        .speechBefore = {EC_WORD_DON_T, EC_MOVE(GRUDGE), EC_WORD_ME, EC_WORD_IF_I_WIN, EC_WORD_OK_QUES, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_AM, EC_WORD_SORRY, EC_WORD_TO, EC_WORD_SEE, EC_WORD_YOU, EC_WORD_ANGRY},
        .speechLose = {EC_WORD_I, EC_WORD_HAVE, EC_WORD_A, EC_MOVE(GRUDGE), EC_WORD_WITH, EC_WORD_YOU},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Delilah
=======
        .monSet = (const u16[]){FRONTIER_MONS_HEX_MANIAC_2A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CARLY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("CARLY"),
        .speechBefore = {EC_WORD_I, EC_WORD_WILL, EC_WORD_SCATTER, EC_WORD_SOME, EC_MOVE2(POISON_POWDER), EC_WORD_ABOUT},
        .speechWin = {EC_WORD_IT_S, EC_WORD_SCARY, EC_WORD_HOW, EC_WORD_MY, EC_WORD_STRATEGY, EC_WORD_WORKS},
        .speechLose = {EC_WORD_I, EC_WORD_DISLIKE, EC_WORD_YOU, EC_WORD_AND, EC_WORD_YOUR, EC_WORD_POKEMON},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Carly
=======
        .monSet = (const u16[]){FRONTIER_MONS_HEX_MANIAC_2B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_LEXIE] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("LEXIE"),
        .speechBefore = {EC_WORD_WANT, EC_WORD_TO, EC_WORD_SEE, EC_WORD_SCARY, EC_WORD_POKEMON, EC_WORD_QUES},
        .speechWin = {EC_WORD_WASN_T, EC_WORD_THAT, EC_WORD_SCARY, EC_WORD_EH_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_MORE, EC_WORD_SCARY, EC_WORD_THAN, EC_WORD_MY, EC_WORD_POKEMON},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Lexie
=======
        .monSet = (const u16[]){FRONTIER_MONS_HEX_MANIAC_2C}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MILLER] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("MILLER"),
        .speechBefore = {EC_WORD_HELLO, EC_WORD_QUES, EC_EMPTY_WORD, EC_WORD_HELLO, EC_WORD_QUES_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_HELLO, EC_WORD_MOTHER, EC_WORD_EXCL, EC_WORD_I, EC_WORD_WON, EC_WORD_EXCL},
        .speechLose = {EC_WORD_MY, EC_WORD_PHONE, EC_WORD_ISN_T, EC_WORD_WORKING, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Miller
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEMANIAC_2A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MARV] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("MARV"),
        .speechBefore = {EC_WORD_YOU, EC_WORD_CAN, EC_WORD_LOSE, EC_WORD_YOUR, EC_MOVE(SWAGGER), EC_WORD_NOW},
        .speechWin = {EC_WORD_THERE, EC_WORD_IS, EC_WORD_NO, EC_MOVE(SWAGGER), EC_WORD_LEFT, EC_WORD_EH_QUES},
        .speechLose = {EC_WORD_GO, EC_WORD_ON, EC_MOVE(SWAGGER), EC_WORD_ALL, EC_WORD_YOU, EC_WORD_WANT},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Marv
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEMANIAC_2B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_LAYTON] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("LAYTON"),
        .speechBefore = {EC_WORD_I, EC_WORD_KNOW, EC_WORD_I_AM, EC_WORD_TOTALLY, EC_WORD_COOL, EC_WORD_EXCL},
        .speechWin = {EC_WORD_YOU, EC_WORD_CAN, EC_WORD_LOOK, EC_WORD_UP, EC_WORD_TO, EC_WORD_ME},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_COOL, EC_WORD_EXCL, EC_WORD_NO, EC_WORD_REALLY, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Layton
=======
        .monSet = (const u16[]){FRONTIER_MONS_POKEMANIAC_2C}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_BROOKS] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("BROOKS"),
        .speechBefore = {EC_WORD_THIS, EC_WORD_IS, EC_WORD_A, EC_WORD_HIGH, EC_WORD_LEVEL, EC_WORD_BATTLE},
        .speechWin = {EC_WORD_THAT_WAS, EC_WORD_HIGH, EC_WORD_LEVEL, EC_WORD_AND, EC_WORD_EXCITING, EC_WORD_TOO},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_TOO, EC_WORD_HIGH, EC_WORD_IN, EC_WORD_LEVEL, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Brooks
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GREGORY] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("GREGORY"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_NOT, EC_WORD_THAT, EC_WORD_OLD, EC_WORD_YET, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WHO, EC_WORD_SAYS, EC_WORD_I_AM, EC_WORD_TOO, EC_WORD_OLD, EC_WORD_QUES},
        .speechLose = {EC_WORD_PLEASE, EC_WORD_I_AM, EC_WORD_REALLY, EC_WORD_NOT, EC_WORD_THAT, EC_WORD_OLD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Gregory
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENTLEMAN_3A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_REESE] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("REESE"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_A, EC_WORD_COUPLE, EC_WORD_THINGS, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_DON_T, EC_WORD_DIET, EC_WORD_PLAY, EC_WORD_SPORTS, EC_WORD_INSTEAD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_INSTEAD, EC_WORD_OF, EC_WORD_TELEVISION, EC_WORD_GET, EC_WORD_A, EC_WORD_BOOK},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Reese
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENTLEMAN_3B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_MASON] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("MASON"),
        .speechBefore = {EC_WORD_PLEASE, EC_WORD_DON_T, EC_WORD_MAKE, EC_WORD_THIS, EC_WORD_SCARY, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THANK_YOU, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_WORD_I_AM, EC_WORD_HAPPY, EC_WORD_NOW},
        .speechLose = {EC_WORD_I_AM, EC_WORD_DISAPPOINTED, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Mason
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_TOBY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("TOBY"),
        .speechBefore = {EC_WORD_LISTEN, EC_WORD_UP, EC_EMPTY_WORD, EC_WORD_I, EC_WORD_ALWAYS, EC_WORD_WIN},
        .speechWin = {EC_WORD_I_AM, EC_WORD_A, EC_WORD_GENIUS, EC_WORD_OR, EC_WORD_WHAT, EC_WORD_QUES},
        .speechLose = {EC_WORD_I, EC_WORD_CAN, EC_WORD_BEAT, EC_WORD_YOU, EC_WORD_AT, EC_WORD_SMARTNESS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Toby
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DOROTHY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("DOROTHY"),
        .speechBefore = {EC_WORD_THE, EC_WORD_SPORTS, EC_WORD_WORLD, EC_WORD_SHOULD, EC_WORD_ACCEPT, EC_WORD_POKEMON},
        .speechWin = {EC_WORD_THANK_YOU, EC_WORD_EXCL, EC_WORD_THAT, EC_WORD_WIN, EC_WORD_WAS, EC_WORD_REFRESHING},
        .speechLose = {EC_WORD_THANK_YOU, EC_WORD_EXCL, EC_WORD_THAT, EC_WORD_LOSS, EC_WORD_WAS, EC_WORD_REFRESHING},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Dorothy
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_C}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_PIPER] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("PIPER"),
        .speechBefore = {EC_WORD_COME_ON, EC_WORD_YOU, EC_WORD_NEED, EC_WORD_A, EC_WORD_SPEED_BOOST, EC_WORD_QUES},
        .speechWin = {EC_WORD_YOU, EC_WORD_NEED, EC_WORD_TO, EC_WORD_SHOW, EC_WORD_MORE, EC_WORD_GUTS},
        .speechLose = {EC_WORD_OH, EC_WORD_YOU, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Piper
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_D}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_FINN] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("FINN"),
        .speechBefore = {EC_WORD_NOT, EC_WORD_ANOTHER, EC_WORD_TRAINER, EC_WORD_BATTLE, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WON_T, EC_WORD_THIS, EC_WORD_EVER, EC_WORD_END, EC_WORD_QUES, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I, EC_WORD_FINALLY, EC_WORD_GET, EC_WORD_TO, EC_MOVE2(REST), EC_WORD_A_LITTLE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Finn
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_M_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_SAMIR] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("SAMIR"),
        .speechBefore = {EC_WORD_I, EC_MOVE2(DIVE), EC_WORD_BELOW, EC_WORD_THE, EC_MOVE2(SURF), EC_WORD_EXCL},
        .speechWin = {EC_WORD_YAHOO, EC_WORD_TAKE, EC_WORD_A, EC_MOVE2(DIVE), EC_WORD_YOU, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I_AM, EC_WORD_GOING, EC_WORD_TO, EC_WORD_SINK, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Samir
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_M_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_FIONA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("FIONA"),
        .speechBefore = {EC_WORD_DID, EC_WORD_YOU, EC_WORD_LIMBER, EC_WORD_UP, EC_WORD_BEFORE, EC_WORD_QUES},
        .speechWin = {EC_WORD_YOU, EC_WORD_NEED, EC_WORD_TO, EC_WORD_BE, EC_WORD_MORE, EC_WORD_READY},
        .speechLose = {EC_WORD_BEING, EC_WORD_LIMBER, EC_WORD_DIDN_T, EC_WORD_WORK, EC_WORD_FOR, EC_WORD_ME},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Fiona
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_F_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GLORIA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("GLORIA"),
        .speechBefore = {EC_WORD_I, EC_WORD_LIKE, EC_WORD_TO, EC_WORD_ATTACK, EC_WORD_WITH, EC_WORD_SUCTION_CUPS},
        .speechWin = {EC_WORD_GIGGLE, EC_WORD_ELLIPSIS, EC_WORD_IT_S, EC_WORD_OVER, EC_WORD_FOR, EC_WORD_YOU},
        .speechLose = {EC_WORD_I, EC_WORD_DON_T, EC_WORD_GET, EC_WORD_HOW, EC_WORD_SUCTION_CUPS, EC_WORD_WORK},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Gloria
=======
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_F_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_NICO] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("NICO"),
        .speechBefore = {EC_WORD_LIKE, EC_WORD_A, EC_MOVE(SONIC_BOOM), EC_WORD_I_VE_ARRIVED, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_SORRY, EC_WORD_TO, EC_WORD_MAKE, EC_WORD_YOU, EC_WORD_SO, EC_WORD_DOWNCAST},
        .speechLose = {EC_WORD_I_AM, EC_WORD_GOING, EC_WORD_WITH, EC_WORD_A, EC_MOVE2(SUPERSONIC), EC_WORD_SPEED_BOOST},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Nico
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_JEREMY] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("JEREMY"),
        .speechBefore = {EC_WORD_A, EC_WORD_POKEMON, EC_WORD_MASTER, EC_WORD_THAT_S, EC_WORD_MY, EC_WORD_DREAM},
        .speechWin = {EC_WORD_MY, EC_WORD_DREAM, EC_WORD_ISN_T, EC_WORD_FAR, EC_WORD_OFF, EC_WORD_EXCL},
        .speechLose = {EC_WORD_WHAT, EC_WORD_I, EC_WORD_DREAM, EC_WORD_ISN_T, EC_WORD_HAPPENING, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Jeremy
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CAITLIN] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("CAITLIN"),
        .speechBefore = {EC_WORD_DON_T, EC_WORD_YOU, EC_WORD_THINK, EC_WORD_I_AM, EC_WORD_CUTE, EC_WORD_QUES},
        .speechWin = {EC_WORD_THERE, EC_WORD_IS, EC_WORD_MORE, EC_WORD_TO_ME, EC_WORD_THAN, EC_WORD_CUTENESS},
        .speechLose = {EC_WORD_MY, EC_WORD_CUTE_CHARM, EC_WORD_DOESN_T, EC_MOVE2(ATTRACT), EC_WORD_YOU, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Caitlin
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_C}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_REENA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("REENA"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_ALWAYS, EC_WORD_HAPPY, EC_WORD_HAPPY, EC_WORD_HAPPY, EC_WORD_EXCL},
        .speechWin = {EC_WORD_OH, EC_WORD_YAY, EC_WORD_EXCL, EC_WORD_YAHOO, EC_WORD_FOR, EC_WORD_ME},
        .speechLose = {EC_WORD_YAHOO, EC_WORD_EXCL, EC_WORD_I_AM, EC_WORD_HAPPY, EC_WORD_FOR, EC_WORD_YOU},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Reena
=======
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_D}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_AVERY] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("AVERY"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_GOT, EC_WORD_A_LOT, EC_WORD_OF, EC_WORD_BUG, EC_WORD_POKEMON},
        .speechWin = {EC_WORD_MY, EC_WORD_BUG, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_ALL, EC_WORD_UNBELIEVABLE},
        .speechLose = {EC_WORD_MY, EC_WORD_BUG, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_ALL, EC_WORD_UPSIDE_DOWN},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Avery
=======
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_4}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_LIAM] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("LIAM"),
        .speechBefore = {EC_WORD_WE, EC_WORD_REALLY, EC_WORD_DISLIKE, EC_WORD_FIRE, EC_WORD_AND, EC_WORD_FLYING},
        .speechWin = {EC_WORD_BUG, EC_WORD_POKEMON, EC_WORD_AREN_T, EC_WORD_BAD, EC_WORD_HEY_QUES, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOU, EC_WORD_KNOW, EC_WORD_WHAT, EC_WORD_WE, EC_WORD_DISLIKE, EC_WORD_HEY_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Liam
=======
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_4}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_THEO] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("THEO"),
        .speechBefore = {EC_WORD_FISHING, EC_WORD_IS, EC_WORD_MY, EC_WORD_CHOICE, EC_WORD_IN, EC_WORD_LIFE},
        .speechWin = {EC_WORD_WATER, EC_WORD_POKEMON, EC_MOVE2(ATTRACT), EC_WORD_ME, EC_WORD_WITHOUT, EC_WORD_END},
        .speechLose = {EC_WORD_DON_T, EC_WORD_COUNT_ON, EC_WORD_THAT, EC_WORD_HAPPENING, EC_WORD_ANOTHER, EC_WORD_TIME},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Theo
=======
        .monSet = (const u16[]){FRONTIER_MONS_FISHERMAN_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_BAILEY] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("BAILEY"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_AN, EC_WORD_ADULT, EC_WORD_I, EC_WORD_BATTLE, EC_WORD_EASY},
        .speechWin = {EC_WORD_I_AM, EC_WORD_AN, EC_WORD_ADULT, EC_WORD_I, EC_MOVE2(SWALLOW), EC_WORD_JOY},
        .speechLose = {EC_WORD_I_AM, EC_WORD_AN, EC_WORD_ADULT, EC_WORD_I, EC_MOVE2(SWALLOW), EC_MOVE2(FRUSTRATION)},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Bailey
=======
        .monSet = (const u16[]){FRONTIER_MONS_FISHERMAN_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_HUGO] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("HUGO"),
        .speechBefore = {EC_WORD_I, EC_WORD_TRY, EC_WORD_THE, EC_WORD_BEST, EC_WORD_I, EC_WORD_CAN},
        .speechWin = {EC_WORD_I, EC_WORD_CAN_WIN, EC_WORD_IF, EC_WORD_I, EC_WORD_TRY, EC_WORD_ENOUGH},
        .speechLose = {EC_WORD_I, EC_WORD_DID, EC_WORD_TRY, EC_WORD_DIDN_T, EC_WORD_I, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Hugo
=======
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_4}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_BRYCE] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("BRYCE"),
        .speechBefore = {EC_WORD_I_WAS, EC_WORD_ON, EC_WORD_VACATION, EC_WORD_UNTIL, EC_WORD_ONLY, EC_WORD_YESTERDAY},
        .speechWin = {EC_WORD_I, EC_WORD_HAVEN_T, EC_WORD_LOST, EC_WORD_MY, EC_WORD_SKILL, EC_WORD_YET},
        .speechLose = {EC_WORD_THAT_S, EC_WORD_IT, EC_WORD_ELLIPSIS, EC_WORD_I, EC_WORD_NEED, EC_WORD_SLEEP},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Bryce
=======
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_4}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GIDEON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("GIDEON"),
        .speechBefore = {EC_WORD_WHAT_S_UP_QUES, EC_WORD_YOU, EC_WORD_THINK, EC_WORD_I_AM, EC_WORD_SCARY, EC_WORD_QUES},
        .speechWin = {EC_WORD_I_AM, EC_WORD_COOL, EC_WORD_BUT, EC_WORD_NOT, EC_WORD_SCARY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_LOOK, EC_WORD_AT, EC_WORD_MY, EC_WORD_FABULOUS, EC_WORD_FASHION, EC_WORD_SENSE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Gideon
=======
        .monSet = (const u16[]){FRONTIER_MONS_COLLECTOR_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_TRISTON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("TRISTON"),
        .speechBefore = {EC_WORD_I, EC_WORD_WOULD, EC_WORD_RATHER, EC_WORD_LOOK, EC_WORD_AT, EC_WORD_POKEMON},
        .speechWin = {EC_WORD_HUH_QUES, EC_WORD_YOU, EC_WORD_MEAN, EC_WORD_I, EC_WORD_WON, EC_WORD_QUES_EXCL},
        .speechLose = {EC_WORD_SEE, EC_WORD_QUES, EC_EMPTY_WORD, EC_WORD_I, EC_WORD_ALWAYS, EC_WORD_LOSE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Triston
=======
        .monSet = (const u16[]){FRONTIER_MONS_COLLECTOR_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_CHARLES] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("CHARLES"),
        .speechBefore = {EC_WORD_IT_S, EC_WORD_HOPELESS, EC_WORD_TO, EC_MOVE2(STRUGGLE), EC_WORD_WITH, EC_WORD_ME},
        .speechWin = {EC_MOVE(SUBMISSION), EC_WORD_WAS, EC_WORD_YOUR, EC_WORD_ONLY, EC_WORD_CHOICE, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I_AM, EC_WORD_GOING, EC_WORD_DOWN, EC_WORD_DOWN, EC_WORD_DOWN, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Charles
=======
        .monSet = (const u16[]){FRONTIER_MONS_GUITARIST_3A}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_RAYMOND] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("RAYMOND"),
        .speechBefore = {EC_WORD_WANT, EC_WORD_TO, EC_WORD_HEAR, EC_WORD_MY, EC_WORD_SONG, EC_WORD_QUES},
        .speechWin = {EC_WORD_SATISFIED, EC_WORD_THAT_S, EC_WORD_WHAT, EC_WORD_I_AM, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_SATISFIED, EC_WORD_IS, EC_WORD_WHAT, EC_WORD_I, EC_WORD_CAN_T, EC_WORD_BE},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Raymond
=======
        .monSet = (const u16[]){FRONTIER_MONS_GUITARIST_3B}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DIRK] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("DIRK"),
        .speechBefore = {EC_WORD_FLYING, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_ABOVE, EC_WORD_THE, EC_MOVE2(REST)},
        .speechWin = {EC_WORD_YOU, EC_WORD_CAN_T_WIN, EC_WORD_EXCL, EC_WORD_FLYING, EC_WORD_POKEMON, EC_WORD_RULE},
        .speechLose = {EC_WORD_AREN_T, EC_WORD_THERE, EC_WORD_MORE, EC_WORD_FLYING, EC_WORD_POKEMON, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Dirk
=======
        .monSet = (const u16[]){FRONTIER_MONS_BIRD_KEEPER_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_HAROLD] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("HAROLD"),
        .speechBefore = {EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_APPEAL, EC_WORD_TO, EC_WORD_YOU, EC_WORD_QUES},
        .speechWin = {EC_WORD_YOU, EC_WORD_DO, EC_WORD_LIKE, EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_QUES},
        .speechLose = {EC_WORD_SO, EC_WORD_YOU, EC_WORD_DISLIKE, EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Harold
=======
        .monSet = (const u16[]){FRONTIER_MONS_BIRD_KEEPER_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_OMAR] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("OMAR"),
        .speechBefore = {EC_WORD_LET_ME_WIN, EC_WORD_IN, EC_MOVE(RETURN), EC_WORD_FOR, EC_WORD_A, EC_MOVE2(PRESENT)},
        .speechWin = {EC_WORD_HERE, EC_WORD_YOU, EC_WORD_ARE, EC_WORD_SOME, EC_MOVE2(TOXIC), EC_WORD_SWEETS},
        .speechLose = {EC_WORD_YOUR, EC_MOVE2(PRESENT), EC_WORD_QUES, EC_WORD_WHAT, EC_WORD_FOR, EC_WORD_QUES_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Omar
=======
        .monSet = (const u16[]){FRONTIER_MONS_SAILOR_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_PETER] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("PETER"),
        .speechBefore = {EC_WORD_I, EC_WORD_BRAG, EC_WORD_ABOUT, EC_WORD_MY, EC_WORD_HAPPINESS, EC_WORD_OK_QUES},
        .speechWin = {EC_WORD_YOU, EC_WORD_HAVE, EC_WORD_TO, EC_WORD_LISTEN, EC_WORD_TO_ME, EC_WORD_BRAG},
        .speechLose = {EC_WORD_I_AM, EC_WORD_DISAPPOINTED, EC_WORD_YOU, EC_WORD_WON_T, EC_WORD_LISTEN, EC_WORD_TO_ME},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Peter
=======
        .monSet = (const u16[]){FRONTIER_MONS_SAILOR_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DEV] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("DEV"),
        .speechBefore = {EC_WORD_COME_ON, EC_WORD_LET_S, EC_WORD_GET, EC_WORD_A, EC_WORD_MOVE, EC_WORD_ON},
        .speechWin = {EC_WORD_I, EC_WORD_GET, EC_WORD_TO, EC_WORD_NAP, EC_WORD_AFTER, EC_WORD_THAT},
        .speechLose = {EC_WORD_I, EC_WORD_NEED, EC_WORD_TO, EC_WORD_NAP, EC_WORD_AFTER, EC_WORD_THAT},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Dev
=======
        .monSet = (const u16[]){FRONTIER_MONS_HIKER_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_COREY] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("COREY"),
        .speechBefore = {EC_WORD_LET_S, EC_WORD_TEACH, EC_WORD_YOU, EC_WORD_HOW, EC_WORD_TOUGH, EC_WORD_I_AM},
        .speechWin = {EC_WORD_LOOK, EC_WORD_AT, EC_WORD_ME, EC_WORD_MAKE, EC_WORD_A, EC_MOVE(BRICK_BREAK)},
        .speechLose = {EC_WORD_MY, EC_MOVE2(FRUSTRATION), EC_WORD_IS, EC_WORD_CLOSE, EC_WORD_TO, EC_MOVE2(ERUPTION)},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Corey
    },
    [FRONTIER_TRAINER_ANDRE] = {
        .facilityClass = FACILITY_CLASS_SUPER_NERD,
=======
        .monSet = (const u16[]){FRONTIER_MONS_HIKER_3}
    },
    [FRONTIER_TRAINER_ANDRE] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .trainerName = _("ANDRE"),
        .speechBefore = {EC_WORD_NOW, EC_WORD_THIS, EC_WORD_IS, EC_WORD_A, EC_WORD_PERFECT, EC_WORD_FLAME_BODY},
        .speechWin = {EC_WORD_LOOK, EC_WORD_AT, EC_WORD_MY, EC_WORD_FIERY, EC_WORD_DANCE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU, EC_WORD_WANT, EC_WORD_AN, EC_MOVE2(EXPLOSION), EC_WORD_HERE, EC_WORD_QUES},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Andre
    },
    [FRONTIER_TRAINER_FERRIS] = {
        .facilityClass = FACILITY_CLASS_SUPER_NERD,
=======
        .monSet = (const u16[]){FRONTIER_MONS_KINDLER_3}
    },
    [FRONTIER_TRAINER_FERRIS] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .trainerName = _("FERRIS"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_NO_1, EC_WORD_IN, EC_WORD_THE, EC_WORD_OLD, EC_WORD_CLASS},
        .speechWin = {EC_WORD_NO_1, EC_WORD_THAT_S, EC_WORD_WHAT, EC_WORD_I_AM, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I_AM, EC_WORD_NOT, EC_WORD_NO_1, EC_WORD_ANY, EC_WORD_MORE, EC_WORD_ELLIPSIS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Ferris
=======
        .monSet = (const u16[]){FRONTIER_MONS_KINDLER_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ALIVIA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("ALIVIA"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_FEELING, EC_WORD_GIDDY, EC_WORD_SO, EC_WORD_SHOULD, EC_WORD_YOU},
        .speechWin = {EC_WORD_IT, EC_WORD_WAS, EC_WORD_ALL, EC_WORD_TOGETHER, EC_WORD_TOO, EC_WORD_EASY},
        .speechLose = {EC_WORD_I, EC_WORD_WILL, EC_WORD_GIDDY, EC_WORD_UP, EC_WORD_AND, EC_WORD_AWAY},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Alivia
=======
        .monSet = (const u16[]){FRONTIER_MONS_PARASOL_LADY_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_PAIGE] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("PAIGE"),
        .speechBefore = {EC_WORD_LET_S, EC_WORD_ENJOY, EC_WORD_OUR, EC_WORD_BATTLE, EC_WORD_TOGETHER, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THAT_S_IT_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_WORD_THANK_YOU, EC_WORD_VERY, EC_WORD_MUCH},
        .speechLose = {EC_WORD_THAT_S_IT_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_WORD_DO, EC_WORD_GO, EC_WORD_ON},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Paige
=======
        .monSet = (const u16[]){FRONTIER_MONS_PARASOL_LADY_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ANYA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("ANYA"),
        .speechBefore = {EC_WORD_I, EC_WORD_DISLIKE, EC_WORD_OH, EC_WORD_SO, EC_WORD_PRETTY, EC_WORD_FASHION},
        .speechWin = {EC_WORD_FASHION, EC_WORD_SHOULD, EC_WORD_MATCH, EC_WORD_THE, EC_WORD_PERSON, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_PRETTY, EC_WORD_COULD, EC_WORD_BE, EC_WORD_GOOD, EC_EMPTY_WORD, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Anya
=======
        .monSet = (const u16[]){FRONTIER_MONS_EEVEELUTIONS}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_DAWN] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("DAWN"),
        .speechBefore = {EC_WORD_I, EC_WORD_GO, EC_WORD_ALL, EC_WORD_OUT, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_DON_T, EC_WORD_BE, EC_WORD_A, EC_WORD_BABY, EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOU, EC_WORD_WON, EC_WORD_EXCL, EC_WORD_MOVE, EC_WORD_ON, EC_WORD_EXCL},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Dawn
=======
        .monSet = (const u16[]){FRONTIER_MONS_BEAUTY_2}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_ABBY] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("ABBY"),
        .speechBefore = {EC_WORD_I, EC_WORD_LIKE, EC_WORD_A, EC_WORD_TRAINER, EC_WORD_THAT_S, EC_WORD_REFRESHING},
        .speechWin = {EC_WORD_VICTORY, EC_WORD_HAS, EC_WORD_A, EC_MOVE(SWEET_SCENT), EC_WORD_EXCL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WHAT, EC_WORD_AN, EC_WORD_AWFUL, EC_WORD_STENCH, EC_WORD_EXCL, EC_EMPTY_WORD},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Abby
=======
        .monSet = (const u16[]){FRONTIER_MONS_AROMA_LADY_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    },
    [FRONTIER_TRAINER_GRETEL] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("GRETEL"),
        .speechBefore = {EC_WORD_I, EC_WORD_CAUSE, EC_MOVE(OUTRAGE), EC_WORD_AS, EC_WORD_A, EC_WORD_TRAINER},
        .speechWin = {EC_WORD_IT_S, EC_WORD_ONLY, EC_WORD_NATURAL, EC_WORD_SEE_YA, EC_WORD_BYE_BYE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_IT_S, EC_WORD_HARD, EC_WORD_TO, EC_WORD_BELIEVE, EC_WORD_BUT, EC_WORD_CONGRATS},
<<<<<<< HEAD
        .monSet = gBattleFrontierTrainerMons_Gretel
=======
        .monSet = (const u16[]){FRONTIER_MONS_AROMA_LADY_3}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }
};
