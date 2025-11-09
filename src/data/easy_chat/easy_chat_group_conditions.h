const u8 gEasyChatWord_Hot[] = _("HOT");
const u8 gEasyChatWord_Exists[] = _("EXISTS");
const u8 gEasyChatWord_Excess[] = _("EXCESS");
const u8 gEasyChatWord_Approved[] = _("APPROVED");
const u8 gEasyChatWord_Has[] = _("HAS");
const u8 gEasyChatWord_Good[] = _("GOOD");
const u8 gEasyChatWord_Less[] = _("LESS");
const u8 gEasyChatWord_Momentum[] = _("MOMENTUM");
const u8 gEasyChatWord_Going[] = _("GOING");
const u8 gEasyChatWord_Weird[] = _("WEIRD");
const u8 gEasyChatWord_Busy[] = _("BUSY");
const u8 gEasyChatWord_Together[] = _("TOGETHER");
const u8 gEasyChatWord_Full[] = _("FULL");
const u8 gEasyChatWord_Absent[] = _("ABSENT");
const u8 gEasyChatWord_Being[] = _("BEING");
const u8 gEasyChatWord_Need[] = _("NEED");
const u8 gEasyChatWord_Tasty[] = _("TASTY");
const u8 gEasyChatWord_Skilled[] = _("SKILLED");
const u8 gEasyChatWord_Noisy[] = _("NOISY");
const u8 gEasyChatWord_Big[] = _("BIG");
const u8 gEasyChatWord_Late[] = _("LATE");
const u8 gEasyChatWord_Close[] = _("CLOSE");
const u8 gEasyChatWord_Docile[] = _("DOCILE");
const u8 gEasyChatWord_Amusing[] = _("AMUSING");
const u8 gEasyChatWord_Entertaining[] = _("ENTERTAINING");
const u8 gEasyChatWord_Perfection[] = _("PERFECTION");
const u8 gEasyChatWord_Pretty[] = _("PRETTY");
const u8 gEasyChatWord_Healthy[] = _("HEALTHY");
const u8 gEasyChatWord_Excellent[] = _("EXCELLENT");
const u8 gEasyChatWord_UpsideDown[] = _("UPSIDE DOWN");
const u8 gEasyChatWord_Cold[] = _("COLD");
const u8 gEasyChatWord_Refreshing[] = _("REFRESHING");
const u8 gEasyChatWord_Unavoidable[] = _("UNAVOIDABLE");
const u8 gEasyChatWord_Much[] = _("MUCH");
const u8 gEasyChatWord_Overwhelming[] = _("OVERWHELMING");
const u8 gEasyChatWord_Fabulous[] = _("FABULOUS");
const u8 gEasyChatWord_Else[] = _("ELSE");
const u8 gEasyChatWord_Expensive[] = _("EXPENSIVE");
const u8 gEasyChatWord_Correct[] = _("CORRECT");
const u8 gEasyChatWord_Impossible[] = _("IMPOSSIBLE");
const u8 gEasyChatWord_Small[] = _("SMALL");
const u8 gEasyChatWord_Different[] = _("DIFFERENT");
const u8 gEasyChatWord_Tired[] = _("TIRED");
const u8 gEasyChatWord_Skill[] = _("SKILL");
const u8 gEasyChatWord_Top[] = _("TOP");
const u8 gEasyChatWord_NonStop[] = _("NON-STOP");
const u8 gEasyChatWord_Preposterous[] = _("PREPOSTEROUS");
const u8 gEasyChatWord_None[] = _("NONE");
const u8 gEasyChatWord_Nothing[] = _("NOTHING");
const u8 gEasyChatWord_Natural[] = _("NATURAL");
const u8 gEasyChatWord_Becomes[] = _("BECOMES");
const u8 gEasyChatWord_Lukewarm[] = _("LUKEWARM");
const u8 gEasyChatWord_Fast[] = _("FAST");
const u8 gEasyChatWord_Low[] = _("LOW");
const u8 gEasyChatWord_Awful[] = _("AWFUL");
const u8 gEasyChatWord_Alone[] = _("ALONE");
const u8 gEasyChatWord_Bored[] = _("BORED");
const u8 gEasyChatWord_Secret[] = _("SECRET");
const u8 gEasyChatWord_Mystery[] = _("MYSTERY");
const u8 gEasyChatWord_Lacks[] = _("LACKS");
const u8 gEasyChatWord_Best[] = _("BEST");
const u8 gEasyChatWord_Lousy[] = _("LOUSY");
const u8 gEasyChatWord_Mistake[] = _("MISTAKE");
const u8 gEasyChatWord_Kind[] = _("KIND");
const u8 gEasyChatWord_Well[] = _("WELL");
const u8 gEasyChatWord_Weakened[] = _("WEAKENED");
const u8 gEasyChatWord_Simple[] = _("SIMPLE");
const u8 gEasyChatWord_Seems[] = _("SEEMS");
const u8 gEasyChatWord_Badly[] = _("BADLY");

const struct EasyChatWordInfo gEasyChatGroup_Conditions[] = {
    [EC_INDEX(EC_WORD_HOT)] =
    {
        .text = gEasyChatWord_Hot,
<<<<<<< HEAD
        .alphabeticalOrder = 13,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_ABSENT),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EXISTS)] =
    {
        .text = gEasyChatWord_Exists,
<<<<<<< HEAD
        .alphabeticalOrder = 55,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_ALONE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EXCESS)] =
    {
        .text = gEasyChatWord_Excess,
<<<<<<< HEAD
        .alphabeticalOrder = 23,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_AMUSING),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_APPROVED)] =
    {
        .text = gEasyChatWord_Approved,
<<<<<<< HEAD
        .alphabeticalOrder = 3,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_APPROVED),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HAS)] =
    {
        .text = gEasyChatWord_Has,
<<<<<<< HEAD
        .alphabeticalOrder = 54,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_AWFUL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GOOD)] =
    {
        .text = gEasyChatWord_Good,
<<<<<<< HEAD
        .alphabeticalOrder = 68,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_BADLY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LESS)] =
    {
        .text = gEasyChatWord_Less,
<<<<<<< HEAD
        .alphabeticalOrder = 50,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_BECOMES),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MOMENTUM)] =
    {
        .text = gEasyChatWord_Momentum,
<<<<<<< HEAD
        .alphabeticalOrder = 14,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_BEING),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GOING)] =
    {
        .text = gEasyChatWord_Going,
<<<<<<< HEAD
        .alphabeticalOrder = 60,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_BEST),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WEIRD)] =
    {
        .text = gEasyChatWord_Weird,
<<<<<<< HEAD
        .alphabeticalOrder = 19,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_BIG),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BUSY)] =
    {
        .text = gEasyChatWord_Busy,
<<<<<<< HEAD
        .alphabeticalOrder = 56,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_BORED),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOGETHER)] =
    {
        .text = gEasyChatWord_Together,
<<<<<<< HEAD
        .alphabeticalOrder = 10,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_BUSY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FULL)] =
    {
        .text = gEasyChatWord_Full,
<<<<<<< HEAD
        .alphabeticalOrder = 21,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_CLOSE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ABSENT)] =
    {
        .text = gEasyChatWord_Absent,
<<<<<<< HEAD
        .alphabeticalOrder = 30,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_COLD),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BEING)] =
    {
        .text = gEasyChatWord_Being,
<<<<<<< HEAD
        .alphabeticalOrder = 38,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_CORRECT),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NEED)] =
    {
        .text = gEasyChatWord_Need,
<<<<<<< HEAD
        .alphabeticalOrder = 41,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_DIFFERENT),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TASTY)] =
    {
        .text = gEasyChatWord_Tasty,
<<<<<<< HEAD
        .alphabeticalOrder = 22,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_DOCILE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SKILLED)] =
    {
        .text = gEasyChatWord_Skilled,
<<<<<<< HEAD
        .alphabeticalOrder = 36,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_ELSE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NOISY)] =
    {
        .text = gEasyChatWord_Noisy,
<<<<<<< HEAD
        .alphabeticalOrder = 24,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_ENTERTAINING),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BIG)] =
    {
        .text = gEasyChatWord_Big,
<<<<<<< HEAD
        .alphabeticalOrder = 28,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_EXCELLENT),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LATE)] =
    {
        .text = gEasyChatWord_Late,
<<<<<<< HEAD
        .alphabeticalOrder = 2,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_EXCESS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CLOSE)] =
    {
        .text = gEasyChatWord_Close,
<<<<<<< HEAD
        .alphabeticalOrder = 1,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_EXISTS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DOCILE)] =
    {
        .text = gEasyChatWord_Docile,
<<<<<<< HEAD
        .alphabeticalOrder = 37,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_EXPENSIVE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AMUSING)] =
    {
        .text = gEasyChatWord_Amusing,
<<<<<<< HEAD
        .alphabeticalOrder = 35,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_FABULOUS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ENTERTAINING)] =
    {
        .text = gEasyChatWord_Entertaining,
<<<<<<< HEAD
        .alphabeticalOrder = 52,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_FAST),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PERFECTION)] =
    {
        .text = gEasyChatWord_Perfection,
<<<<<<< HEAD
        .alphabeticalOrder = 12,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_FULL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PRETTY)] =
    {
        .text = gEasyChatWord_Pretty,
<<<<<<< HEAD
        .alphabeticalOrder = 8,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_GOING),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEALTHY)] =
    {
        .text = gEasyChatWord_Healthy,
<<<<<<< HEAD
        .alphabeticalOrder = 5,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_GOOD),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EXCELLENT)] =
    {
        .text = gEasyChatWord_Excellent,
<<<<<<< HEAD
        .alphabeticalOrder = 4,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HAS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UPSIDE_DOWN)] =
    {
        .text = gEasyChatWord_UpsideDown,
<<<<<<< HEAD
        .alphabeticalOrder = 27,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEALTHY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COLD)] =
    {
        .text = gEasyChatWord_Cold,
<<<<<<< HEAD
        .alphabeticalOrder = 0,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HOT),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_REFRESHING)] =
    {
        .text = gEasyChatWord_Refreshing,
<<<<<<< HEAD
        .alphabeticalOrder = 39,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_IMPOSSIBLE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UNAVOIDABLE)] =
    {
        .text = gEasyChatWord_Unavoidable,
<<<<<<< HEAD
        .alphabeticalOrder = 63,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_KIND),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MUCH)] =
    {
        .text = gEasyChatWord_Much,
<<<<<<< HEAD
        .alphabeticalOrder = 59,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_LACKS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OVERWHELMING)] =
    {
        .text = gEasyChatWord_Overwhelming,
<<<<<<< HEAD
        .alphabeticalOrder = 20,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_LATE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FABULOUS)] =
    {
        .text = gEasyChatWord_Fabulous,
<<<<<<< HEAD
        .alphabeticalOrder = 6,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_LESS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ELSE)] =
    {
        .text = gEasyChatWord_Else,
<<<<<<< HEAD
        .alphabeticalOrder = 61,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_LOUSY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EXPENSIVE)] =
    {
        .text = gEasyChatWord_Expensive,
<<<<<<< HEAD
        .alphabeticalOrder = 53,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_LOW),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CORRECT)] =
    {
        .text = gEasyChatWord_Correct,
<<<<<<< HEAD
        .alphabeticalOrder = 51,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_LUKEWARM),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IMPOSSIBLE)] =
    {
        .text = gEasyChatWord_Impossible,
<<<<<<< HEAD
        .alphabeticalOrder = 62,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MISTAKE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SMALL)] =
    {
        .text = gEasyChatWord_Small,
<<<<<<< HEAD
        .alphabeticalOrder = 7,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MOMENTUM),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DIFFERENT)] =
    {
        .text = gEasyChatWord_Different,
<<<<<<< HEAD
        .alphabeticalOrder = 33,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MUCH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TIRED)] =
    {
        .text = gEasyChatWord_Tired,
<<<<<<< HEAD
        .alphabeticalOrder = 58,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MYSTERY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SKILL)] =
    {
        .text = gEasyChatWord_Skill,
<<<<<<< HEAD
        .alphabeticalOrder = 49,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_NATURAL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOP)] =
    {
        .text = gEasyChatWord_Top,
<<<<<<< HEAD
        .alphabeticalOrder = 15,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_NEED),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NON_STOP)] =
    {
        .text = gEasyChatWord_NonStop,
<<<<<<< HEAD
        .alphabeticalOrder = 18,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_NOISY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PREPOSTEROUS)] =
    {
        .text = gEasyChatWord_Preposterous,
<<<<<<< HEAD
        .alphabeticalOrder = 45,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_NON_STOP),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NONE)] =
    {
        .text = gEasyChatWord_None,
<<<<<<< HEAD
        .alphabeticalOrder = 47,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_NONE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NOTHING)] =
    {
        .text = gEasyChatWord_Nothing,
<<<<<<< HEAD
        .alphabeticalOrder = 48,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_NOTHING),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NATURAL)] =
    {
        .text = gEasyChatWord_Natural,
<<<<<<< HEAD
        .alphabeticalOrder = 34,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_OVERWHELMING),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BECOMES)] =
    {
        .text = gEasyChatWord_Becomes,
<<<<<<< HEAD
        .alphabeticalOrder = 25,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_PERFECTION),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LUKEWARM)] =
    {
        .text = gEasyChatWord_Lukewarm,
<<<<<<< HEAD
        .alphabeticalOrder = 46,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_PREPOSTEROUS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FAST)] =
    {
        .text = gEasyChatWord_Fast,
<<<<<<< HEAD
        .alphabeticalOrder = 26,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_PRETTY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOW)] =
    {
        .text = gEasyChatWord_Low,
<<<<<<< HEAD
        .alphabeticalOrder = 31,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_REFRESHING),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AWFUL)] =
    {
        .text = gEasyChatWord_Awful,
<<<<<<< HEAD
        .alphabeticalOrder = 57,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SECRET),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALONE)] =
    {
        .text = gEasyChatWord_Alone,
<<<<<<< HEAD
        .alphabeticalOrder = 67,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SEEMS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BORED)] =
    {
        .text = gEasyChatWord_Bored,
<<<<<<< HEAD
        .alphabeticalOrder = 66,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SIMPLE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SECRET)] =
    {
        .text = gEasyChatWord_Secret,
<<<<<<< HEAD
        .alphabeticalOrder = 43,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SKILL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MYSTERY)] =
    {
        .text = gEasyChatWord_Mystery,
<<<<<<< HEAD
        .alphabeticalOrder = 17,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SKILLED),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LACKS)] =
    {
        .text = gEasyChatWord_Lacks,
<<<<<<< HEAD
        .alphabeticalOrder = 40,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SMALL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BEST)] =
    {
        .text = gEasyChatWord_Best,
<<<<<<< HEAD
        .alphabeticalOrder = 16,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_TASTY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOUSY)] =
    {
        .text = gEasyChatWord_Lousy,
<<<<<<< HEAD
        .alphabeticalOrder = 42,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_TIRED),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MISTAKE)] =
    {
        .text = gEasyChatWord_Mistake,
<<<<<<< HEAD
        .alphabeticalOrder = 11,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_TOGETHER),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_KIND)] =
    {
        .text = gEasyChatWord_Kind,
<<<<<<< HEAD
        .alphabeticalOrder = 44,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_TOP),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WELL)] =
    {
        .text = gEasyChatWord_Well,
<<<<<<< HEAD
        .alphabeticalOrder = 32,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_UNAVOIDABLE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WEAKENED)] =
    {
        .text = gEasyChatWord_Weakened,
<<<<<<< HEAD
        .alphabeticalOrder = 29,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_UPSIDE_DOWN),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SIMPLE)] =
    {
        .text = gEasyChatWord_Simple,
<<<<<<< HEAD
        .alphabeticalOrder = 65,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WEAKENED),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SEEMS)] =
    {
        .text = gEasyChatWord_Seems,
<<<<<<< HEAD
        .alphabeticalOrder = 9,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WEIRD),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BADLY)] =
    {
        .text = gEasyChatWord_Badly,
<<<<<<< HEAD
        .alphabeticalOrder = 64,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WELL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
};
