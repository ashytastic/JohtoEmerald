const u8 gEasyChatWord_Excl[] = _("!");
const u8 gEasyChatWord_ExclExcl[] = _("!!");
const u8 gEasyChatWord_QuesExcl[] = _("?!");
const u8 gEasyChatWord_Ques[] = _("?");
const u8 gEasyChatWord_Ellipsis[] = _("…");
const u8 gEasyChatWord_EllipsisExcl[] = _("…!");
const u8 gEasyChatWord_EllipsisEllipsisEllipsis[] = _("………");
const u8 gEasyChatWord_Dash[] = _("-");
const u8 gEasyChatWord_DashDashDash[] = _("- - -");
const u8 gEasyChatWord_UhOh[] = _("UH-OH");
const u8 gEasyChatWord_Waaah[] = _("WAAAH");
const u8 gEasyChatWord_Ahaha[] = _("AHAHA");
const u8 gEasyChatWord_OhQues[] = _("OH?");
const u8 gEasyChatWord_Nope[] = _("NOPE");
const u8 gEasyChatWord_Urgh[] = _("URGH");
const u8 gEasyChatWord_Hmm[] = _("HMM");
const u8 gEasyChatWord_Whoah[] = _("WHOAH");
const u8 gEasyChatWord_WroooaarExcl[] = _("WROOOAAR!");
const u8 gEasyChatWord_Wow[] = _("WOW");
const u8 gEasyChatWord_Giggle[] = _("GIGGLE");
const u8 gEasyChatWord_Sigh[] = _("SIGH");
const u8 gEasyChatWord_Unbelievable[] = _("UNBELIEVABLE");
const u8 gEasyChatWord_Cries[] = _("CRIES");
const u8 gEasyChatWord_Agree[] = _("AGREE");
const u8 gEasyChatWord_EhQues[] = _("EH?");
const u8 gEasyChatWord_Cry[] = _("CRY");
const u8 gEasyChatWord_Ehehe[] = _("EHEHE");
const u8 gEasyChatWord_OiOiOi[] = _("OI, OI, OI");
const u8 gEasyChatWord_OhYeah[] = _("OH, YEAH");
const u8 gEasyChatWord_Oh[] = _("OH");
const u8 gEasyChatWord_Oops[] = _("OOPS");
const u8 gEasyChatWord_Shocked[] = _("SHOCKED");
const u8 gEasyChatWord_Eek[] = _("EEK");
const u8 gEasyChatWord_Graaah[] = _("GRAAAH");
const u8 gEasyChatWord_Gwahahaha[] = _("GWAHAHAHA");
const u8 gEasyChatWord_Way[] = _("WAY");
const u8 gEasyChatWord_Tch[] = _("TCH");
const u8 gEasyChatWord_Hehe[] = _("HEHE");
const u8 gEasyChatWord_Hah[] = _("HAH");
const u8 gEasyChatWord_Yup[] = _("YUP");
const u8 gEasyChatWord_Hahaha[] = _("HAHAHA");
const u8 gEasyChatWord_Aiyeeh[] = _("AIYEEH");
const u8 gEasyChatWord_Hiyah[] = _("HIYAH");
const u8 gEasyChatWord_Fufufu[] = _("FUFUFU");
const u8 gEasyChatWord_Lol[] = _("LOL");
const u8 gEasyChatWord_Snort[] = _("SNORT");
const u8 gEasyChatWord_Humph[] = _("HUMPH");
const u8 gEasyChatWord_Hehehe[] = _("HEHEHE");
const u8 gEasyChatWord_Heh[] = _("HEH");
const u8 gEasyChatWord_Hohoho[] = _("HOHOHO");
const u8 gEasyChatWord_UhHuh[] = _("UH-HUH");
const u8 gEasyChatWord_OhDear[] = _("OH, DEAR");
const u8 gEasyChatWord_Arrgh[] = _("ARRGH");
const u8 gEasyChatWord_Mufufu[] = _("MUFUFU");
const u8 gEasyChatWord_Mmm[] = _("MMM");
const u8 gEasyChatWord_OhKay[] = _("OH-KAY");
const u8 gEasyChatWord_Okay[] = _("OKAY");
const u8 gEasyChatWord_Lalala[] = _("LALALA");
const u8 gEasyChatWord_Yay[] = _("YAY");
const u8 gEasyChatWord_Aww[] = _("AWW");
const u8 gEasyChatWord_Wowee[] = _("WOWEE");
const u8 gEasyChatWord_Gwah[] = _("GWAH");
const u8 gEasyChatWord_Wahahaha[] = _("WAHAHAHA");

const struct EasyChatWordInfo gEasyChatGroup_Voices[] = {
    [EC_INDEX(EC_WORD_EXCL)] =
    {
        .text = gEasyChatWord_Excl,
<<<<<<< HEAD
        .alphabeticalOrder = 0,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_EXCL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EXCL_EXCL)] =
    {
        .text = gEasyChatWord_ExclExcl,
<<<<<<< HEAD
        .alphabeticalOrder = 1,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_EXCL_EXCL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_QUES_EXCL)] =
    {
        .text = gEasyChatWord_QuesExcl,
<<<<<<< HEAD
        .alphabeticalOrder = 7,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_DASH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_QUES)] =
    {
        .text = gEasyChatWord_Ques,
<<<<<<< HEAD
        .alphabeticalOrder = 8,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_DASH_DASH_DASH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ELLIPSIS)] =
    {
        .text = gEasyChatWord_Ellipsis,
<<<<<<< HEAD
        .alphabeticalOrder = 4,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_ELLIPSIS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ELLIPSIS_EXCL)] =
    {
        .text = gEasyChatWord_EllipsisExcl,
<<<<<<< HEAD
        .alphabeticalOrder = 5,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_ELLIPSIS_EXCL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS)] =
    {
        .text = gEasyChatWord_EllipsisEllipsisEllipsis,
<<<<<<< HEAD
        .alphabeticalOrder = 6,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DASH)] =
    {
        .text = gEasyChatWord_Dash,
<<<<<<< HEAD
        .alphabeticalOrder = 3,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_QUES),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DASH_DASH_DASH)] =
    {
        .text = gEasyChatWord_DashDashDash,
<<<<<<< HEAD
        .alphabeticalOrder = 2,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_QUES_EXCL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UH_OH)] =
    {
        .text = gEasyChatWord_UhOh,
<<<<<<< HEAD
        .alphabeticalOrder = 23,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_AGREE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WAAAH)] =
    {
        .text = gEasyChatWord_Waaah,
<<<<<<< HEAD
        .alphabeticalOrder = 11,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_AHAHA),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AHAHA)] =
    {
        .text = gEasyChatWord_Ahaha,
<<<<<<< HEAD
        .alphabeticalOrder = 41,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_AIYEEH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OH_QUES)] =
    {
        .text = gEasyChatWord_OhQues,
<<<<<<< HEAD
        .alphabeticalOrder = 52,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_ARRGH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NOPE)] =
    {
        .text = gEasyChatWord_Nope,
<<<<<<< HEAD
        .alphabeticalOrder = 59,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_AWW),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_URGH)] =
    {
        .text = gEasyChatWord_Urgh,
<<<<<<< HEAD
        .alphabeticalOrder = 22,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_CRIES),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HMM)] =
    {
        .text = gEasyChatWord_Hmm,
<<<<<<< HEAD
        .alphabeticalOrder = 25,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_CRY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHOAH)] =
    {
        .text = gEasyChatWord_Whoah,
<<<<<<< HEAD
        .alphabeticalOrder = 32,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_EEK),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WROOOAAR_EXCL)] =
    {
        .text = gEasyChatWord_WroooaarExcl,
<<<<<<< HEAD
        .alphabeticalOrder = 24,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_EH_QUES),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WOW)] =
    {
        .text = gEasyChatWord_Wow,
<<<<<<< HEAD
        .alphabeticalOrder = 26,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_EHEHE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GIGGLE)] =
    {
        .text = gEasyChatWord_Giggle,
<<<<<<< HEAD
        .alphabeticalOrder = 43,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_FUFUFU),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SIGH)] =
    {
        .text = gEasyChatWord_Sigh,
<<<<<<< HEAD
        .alphabeticalOrder = 19,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_GIGGLE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UNBELIEVABLE)] =
    {
        .text = gEasyChatWord_Unbelievable,
<<<<<<< HEAD
        .alphabeticalOrder = 33,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_GRAAAH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CRIES)] =
    {
        .text = gEasyChatWord_Cries,
<<<<<<< HEAD
        .alphabeticalOrder = 61,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_GWAH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AGREE)] =
    {
        .text = gEasyChatWord_Agree,
<<<<<<< HEAD
        .alphabeticalOrder = 34,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_GWAHAHAHA),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EH_QUES)] =
    {
        .text = gEasyChatWord_EhQues,
<<<<<<< HEAD
        .alphabeticalOrder = 38,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HAH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CRY)] =
    {
        .text = gEasyChatWord_Cry,
<<<<<<< HEAD
        .alphabeticalOrder = 40,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HAHAHA),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EHEHE)] =
    {
        .text = gEasyChatWord_Ehehe,
<<<<<<< HEAD
        .alphabeticalOrder = 48,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OI_OI_OI)] =
    {
        .text = gEasyChatWord_OiOiOi,
<<<<<<< HEAD
        .alphabeticalOrder = 37,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEHE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OH_YEAH)] =
    {
        .text = gEasyChatWord_OhYeah,
<<<<<<< HEAD
        .alphabeticalOrder = 47,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEHEHE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OH)] =
    {
        .text = gEasyChatWord_Oh,
<<<<<<< HEAD
        .alphabeticalOrder = 42,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HIYAH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OOPS)] =
    {
        .text = gEasyChatWord_Oops,
<<<<<<< HEAD
        .alphabeticalOrder = 15,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HMM),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHOCKED)] =
    {
        .text = gEasyChatWord_Shocked,
<<<<<<< HEAD
        .alphabeticalOrder = 49,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HOHOHO),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EEK)] =
    {
        .text = gEasyChatWord_Eek,
<<<<<<< HEAD
        .alphabeticalOrder = 46,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HUMPH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GRAAAH)] =
    {
        .text = gEasyChatWord_Graaah,
<<<<<<< HEAD
        .alphabeticalOrder = 57,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_LALALA),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GWAHAHAHA)] =
    {
        .text = gEasyChatWord_Gwahahaha,
<<<<<<< HEAD
        .alphabeticalOrder = 44,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_LOL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WAY)] =
    {
        .text = gEasyChatWord_Way,
<<<<<<< HEAD
        .alphabeticalOrder = 54,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MMM),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TCH)] =
    {
        .text = gEasyChatWord_Tch,
<<<<<<< HEAD
        .alphabeticalOrder = 53,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MUFUFU),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEHE)] =
    {
        .text = gEasyChatWord_Hehe,
<<<<<<< HEAD
        .alphabeticalOrder = 13,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_NOPE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HAH)] =
    {
        .text = gEasyChatWord_Hah,
<<<<<<< HEAD
        .alphabeticalOrder = 29,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_OH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YUP)] =
    {
        .text = gEasyChatWord_Yup,
<<<<<<< HEAD
        .alphabeticalOrder = 51,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_OH_DEAR),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HAHAHA)] =
    {
        .text = gEasyChatWord_Hahaha,
<<<<<<< HEAD
        .alphabeticalOrder = 28,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_OH_YEAH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AIYEEH)] =
    {
        .text = gEasyChatWord_Aiyeeh,
<<<<<<< HEAD
        .alphabeticalOrder = 55,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_OH_KAY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HIYAH)] =
    {
        .text = gEasyChatWord_Hiyah,
<<<<<<< HEAD
        .alphabeticalOrder = 12,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_OH_QUES),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FUFUFU)] =
    {
        .text = gEasyChatWord_Fufufu,
<<<<<<< HEAD
        .alphabeticalOrder = 27,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_OI_OI_OI),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOL)] =
    {
        .text = gEasyChatWord_Lol,
<<<<<<< HEAD
        .alphabeticalOrder = 56,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_OKAY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SNORT)] =
    {
        .text = gEasyChatWord_Snort,
<<<<<<< HEAD
        .alphabeticalOrder = 30,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_OOPS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HUMPH)] =
    {
        .text = gEasyChatWord_Humph,
<<<<<<< HEAD
        .alphabeticalOrder = 31,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SHOCKED),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEHEHE)] =
    {
        .text = gEasyChatWord_Hehehe,
<<<<<<< HEAD
        .alphabeticalOrder = 20,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SIGH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEH)] =
    {
        .text = gEasyChatWord_Heh,
<<<<<<< HEAD
        .alphabeticalOrder = 45,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SNORT),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOHOHO)] =
    {
        .text = gEasyChatWord_Hohoho,
<<<<<<< HEAD
        .alphabeticalOrder = 36,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_TCH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UH_HUH)] =
    {
        .text = gEasyChatWord_UhHuh,
<<<<<<< HEAD
        .alphabeticalOrder = 50,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_UH_HUH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OH_DEAR)] =
    {
        .text = gEasyChatWord_OhDear,
<<<<<<< HEAD
        .alphabeticalOrder = 9,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_UH_OH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ARRGH)] =
    {
        .text = gEasyChatWord_Arrgh,
<<<<<<< HEAD
        .alphabeticalOrder = 21,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_UNBELIEVABLE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MUFUFU)] =
    {
        .text = gEasyChatWord_Mufufu,
<<<<<<< HEAD
        .alphabeticalOrder = 14,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_URGH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MMM)] =
    {
        .text = gEasyChatWord_Mmm,
<<<<<<< HEAD
        .alphabeticalOrder = 10,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WAAAH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OH_KAY)] =
    {
        .text = gEasyChatWord_OhKay,
<<<<<<< HEAD
        .alphabeticalOrder = 62,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WAHAHAHA),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OKAY)] =
    {
        .text = gEasyChatWord_Okay,
<<<<<<< HEAD
        .alphabeticalOrder = 35,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WAY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LALALA)] =
    {
        .text = gEasyChatWord_Lalala,
<<<<<<< HEAD
        .alphabeticalOrder = 16,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHOAH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YAY)] =
    {
        .text = gEasyChatWord_Yay,
<<<<<<< HEAD
        .alphabeticalOrder = 18,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WOW),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AWW)] =
    {
        .text = gEasyChatWord_Aww,
<<<<<<< HEAD
        .alphabeticalOrder = 60,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WOWEE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WOWEE)] =
    {
        .text = gEasyChatWord_Wowee,
<<<<<<< HEAD
        .alphabeticalOrder = 17,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WROOOAAR_EXCL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GWAH)] =
    {
        .text = gEasyChatWord_Gwah,
<<<<<<< HEAD
        .alphabeticalOrder = 58,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_YAY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WAHAHAHA)] =
    {
        .text = gEasyChatWord_Wahahaha,
<<<<<<< HEAD
        .alphabeticalOrder = 39,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_YUP),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
};
