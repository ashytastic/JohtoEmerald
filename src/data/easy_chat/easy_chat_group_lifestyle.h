const u8 gEasyChatWord_Chores[] = _("CHORES");
const u8 gEasyChatWord_Home[] = _("HOME");
const u8 gEasyChatWord_Money[] = _("MONEY");
const u8 gEasyChatWord_Allowance[] = _("ALLOWANCE");
const u8 gEasyChatWord_Bath[] = _("BATH");
const u8 gEasyChatWord_Conversation[] = _("CONVERSATION");
const u8 gEasyChatWord_School[] = _("SCHOOL");
const u8 gEasyChatWord_Commemorate[] = _("COMMEMORATE");
const u8 gEasyChatWord_Habit[] = _("HABIT");
const u8 gEasyChatWord_Group[] = _("GROUP");
const u8 gEasyChatWord_Word[] = _("WORD");
const u8 gEasyChatWord_Store[] = _("STORE");
const u8 gEasyChatWord_Service[] = _("SERVICE");
const u8 gEasyChatWord_Work[] = _("WORK");
const u8 gEasyChatWord_System[] = _("SYSTEM");
const u8 gEasyChatWord_Train[] = _("TRAIN");
const u8 gEasyChatWord_Class[] = _("CLASS");
const u8 gEasyChatWord_Lessons[] = _("LESSONS");
const u8 gEasyChatWord_Information[] = _("INFORMATION");
const u8 gEasyChatWord_Living[] = _("LIVING");
const u8 gEasyChatWord_Teacher[] = _("TEACHER");
const u8 gEasyChatWord_Tournament[] = _("TOURNAMENT");
const u8 gEasyChatWord_Letter[] = _("LETTER");
const u8 gEasyChatWord_Event[] = _("EVENT");
const u8 gEasyChatWord_Digital[] = _("DIGITAL");
const u8 gEasyChatWord_Test[] = _("TEST");
const u8 gEasyChatWord_DeptStore[] = _("DEPT. STORE");
const u8 gEasyChatWord_Television[] = _("TELEVISION");
const u8 gEasyChatWord_Phone[] = _("PHONE");
const u8 gEasyChatWord_Item[] = _("ITEM");
const u8 gEasyChatWord_Name[] = _("NAME");
const u8 gEasyChatWord_News[] = _("NEWS");
const u8 gEasyChatWord_Popular[] = _("POPULAR");
const u8 gEasyChatWord_Party[] = _("PARTY");
const u8 gEasyChatWord_Study[] = _("STUDY");
const u8 gEasyChatWord_Machine[] = _("MACHINE");
const u8 gEasyChatWord_Mail[] = _("MAIL");
const u8 gEasyChatWord_Message[] = _("MESSAGE");
const u8 gEasyChatWord_Promise[] = _("PROMISE");
const u8 gEasyChatWord_Dream[] = _("DREAM");
const u8 gEasyChatWord_Kindergarten[] = _("KINDERGARTEN");
const u8 gEasyChatWord_Life[] = _("LIFE");
const u8 gEasyChatWord_Radio[] = _("RADIO");
const u8 gEasyChatWord_Rental[] = _("RENTAL");
const u8 gEasyChatWord_World[] = _("WORLD");

const struct EasyChatWordInfo gEasyChatGroup_Lifestyle[] = {
    [EC_INDEX(EC_WORD_CHORES)] =
    {
        .text = gEasyChatWord_Chores,
<<<<<<< HEAD
        .alphabeticalOrder = 3,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_ALLOWANCE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOME)] =
    {
        .text = gEasyChatWord_Home,
<<<<<<< HEAD
        .alphabeticalOrder = 4,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_BATH),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MONEY)] =
    {
        .text = gEasyChatWord_Money,
<<<<<<< HEAD
        .alphabeticalOrder = 0,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_CHORES),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALLOWANCE)] =
    {
        .text = gEasyChatWord_Allowance,
<<<<<<< HEAD
        .alphabeticalOrder = 16,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_CLASS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BATH)] =
    {
        .text = gEasyChatWord_Bath,
<<<<<<< HEAD
        .alphabeticalOrder = 7,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_COMMEMORATE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CONVERSATION)] =
    {
        .text = gEasyChatWord_Conversation,
<<<<<<< HEAD
        .alphabeticalOrder = 5,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_CONVERSATION),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SCHOOL)] =
    {
        .text = gEasyChatWord_School,
<<<<<<< HEAD
        .alphabeticalOrder = 26,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_DEPT_STORE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COMMEMORATE)] =
    {
        .text = gEasyChatWord_Commemorate,
<<<<<<< HEAD
        .alphabeticalOrder = 24,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_DIGITAL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HABIT)] =
    {
        .text = gEasyChatWord_Habit,
<<<<<<< HEAD
        .alphabeticalOrder = 39,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_DREAM),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GROUP)] =
    {
        .text = gEasyChatWord_Group,
<<<<<<< HEAD
        .alphabeticalOrder = 23,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_EVENT),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WORD)] =
    {
        .text = gEasyChatWord_Word,
<<<<<<< HEAD
        .alphabeticalOrder = 9,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_GROUP),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STORE)] =
    {
        .text = gEasyChatWord_Store,
<<<<<<< HEAD
        .alphabeticalOrder = 8,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HABIT),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SERVICE)] =
    {
        .text = gEasyChatWord_Service,
<<<<<<< HEAD
        .alphabeticalOrder = 1,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HOME),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WORK)] =
    {
        .text = gEasyChatWord_Work,
<<<<<<< HEAD
        .alphabeticalOrder = 18,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_INFORMATION),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SYSTEM)] =
    {
        .text = gEasyChatWord_System,
<<<<<<< HEAD
        .alphabeticalOrder = 29,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_ITEM),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TRAIN)] =
    {
        .text = gEasyChatWord_Train,
<<<<<<< HEAD
        .alphabeticalOrder = 40,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_KINDERGARTEN),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CLASS)] =
    {
        .text = gEasyChatWord_Class,
<<<<<<< HEAD
        .alphabeticalOrder = 17,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_LESSONS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LESSONS)] =
    {
        .text = gEasyChatWord_Lessons,
<<<<<<< HEAD
        .alphabeticalOrder = 22,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_LETTER),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_INFORMATION)] =
    {
        .text = gEasyChatWord_Information,
<<<<<<< HEAD
        .alphabeticalOrder = 41,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_LIFE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LIVING)] =
    {
        .text = gEasyChatWord_Living,
<<<<<<< HEAD
        .alphabeticalOrder = 19,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_LIVING),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TEACHER)] =
    {
        .text = gEasyChatWord_Teacher,
<<<<<<< HEAD
        .alphabeticalOrder = 35,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MACHINE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOURNAMENT)] =
    {
        .text = gEasyChatWord_Tournament,
<<<<<<< HEAD
        .alphabeticalOrder = 36,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MAIL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LETTER)] =
    {
        .text = gEasyChatWord_Letter,
<<<<<<< HEAD
        .alphabeticalOrder = 37,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MESSAGE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EVENT)] =
    {
        .text = gEasyChatWord_Event,
<<<<<<< HEAD
        .alphabeticalOrder = 2,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MONEY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DIGITAL)] =
    {
        .text = gEasyChatWord_Digital,
<<<<<<< HEAD
        .alphabeticalOrder = 30,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_NAME),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TEST)] =
    {
        .text = gEasyChatWord_Test,
<<<<<<< HEAD
        .alphabeticalOrder = 31,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_NEWS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DEPT_STORE)] =
    {
        .text = gEasyChatWord_DeptStore,
<<<<<<< HEAD
        .alphabeticalOrder = 33,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_PARTY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TELEVISION)] =
    {
        .text = gEasyChatWord_Television,
<<<<<<< HEAD
        .alphabeticalOrder = 28,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_PHONE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PHONE)] =
    {
        .text = gEasyChatWord_Phone,
<<<<<<< HEAD
        .alphabeticalOrder = 32,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_POPULAR),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ITEM)] =
    {
        .text = gEasyChatWord_Item,
<<<<<<< HEAD
        .alphabeticalOrder = 38,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_PROMISE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NAME)] =
    {
        .text = gEasyChatWord_Name,
<<<<<<< HEAD
        .alphabeticalOrder = 42,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_RADIO),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NEWS)] =
    {
        .text = gEasyChatWord_News,
<<<<<<< HEAD
        .alphabeticalOrder = 43,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_RENTAL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_POPULAR)] =
    {
        .text = gEasyChatWord_Popular,
<<<<<<< HEAD
        .alphabeticalOrder = 6,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SCHOOL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PARTY)] =
    {
        .text = gEasyChatWord_Party,
<<<<<<< HEAD
        .alphabeticalOrder = 12,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SERVICE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STUDY)] =
    {
        .text = gEasyChatWord_Study,
<<<<<<< HEAD
        .alphabeticalOrder = 11,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_STORE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MACHINE)] =
    {
        .text = gEasyChatWord_Machine,
<<<<<<< HEAD
        .alphabeticalOrder = 34,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_STUDY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MAIL)] =
    {
        .text = gEasyChatWord_Mail,
<<<<<<< HEAD
        .alphabeticalOrder = 14,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SYSTEM),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MESSAGE)] =
    {
        .text = gEasyChatWord_Message,
<<<<<<< HEAD
        .alphabeticalOrder = 20,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_TEACHER),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PROMISE)] =
    {
        .text = gEasyChatWord_Promise,
<<<<<<< HEAD
        .alphabeticalOrder = 27,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_TELEVISION),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DREAM)] =
    {
        .text = gEasyChatWord_Dream,
<<<<<<< HEAD
        .alphabeticalOrder = 25,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_TEST),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_KINDERGARTEN)] =
    {
        .text = gEasyChatWord_Kindergarten,
<<<<<<< HEAD
        .alphabeticalOrder = 21,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_TOURNAMENT),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LIFE)] =
    {
        .text = gEasyChatWord_Life,
<<<<<<< HEAD
        .alphabeticalOrder = 15,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_TRAIN),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RADIO)] =
    {
        .text = gEasyChatWord_Radio,
<<<<<<< HEAD
        .alphabeticalOrder = 10,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WORD),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RENTAL)] =
    {
        .text = gEasyChatWord_Rental,
<<<<<<< HEAD
        .alphabeticalOrder = 13,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WORK),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WORLD)] =
    {
        .text = gEasyChatWord_World,
<<<<<<< HEAD
        .alphabeticalOrder = 44,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WORLD),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
};
