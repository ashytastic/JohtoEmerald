const u8 gEasyChatWord_Opponent[] = _("OPPONENT");
const u8 gEasyChatWord_I[] = _("I");
const u8 gEasyChatWord_You[] = _("YOU");
const u8 gEasyChatWord_Yours[] = _("YOURS");
const u8 gEasyChatWord_Son[] = _("SON");
const u8 gEasyChatWord_Your[] = _("YOUR");
const u8 gEasyChatWord_Youre[] = _("YOU'RE");
const u8 gEasyChatWord_Youve[] = _("YOU'VE");
const u8 gEasyChatWord_Mother[] = _("MOTHER");
const u8 gEasyChatWord_Grandfather[] = _("GRANDFATHER");
const u8 gEasyChatWord_Uncle[] = _("UNCLE");
const u8 gEasyChatWord_Father[] = _("FATHER");
const u8 gEasyChatWord_Boy[] = _("BOY");
const u8 gEasyChatWord_Adult[] = _("ADULT");
const u8 gEasyChatWord_Brother[] = _("BROTHER");
const u8 gEasyChatWord_Sister[] = _("SISTER");
const u8 gEasyChatWord_Grandmother[] = _("GRANDMOTHER");
const u8 gEasyChatWord_Aunt[] = _("AUNT");
const u8 gEasyChatWord_Parent[] = _("PARENT");
const u8 gEasyChatWord_Man[] = _("MAN");
const u8 gEasyChatWord_Me[] = _("ME");
const u8 gEasyChatWord_Girl[] = _("GIRL");
const u8 gEasyChatWord_Babe[] = _("BABE");
const u8 gEasyChatWord_Family[] = _("FAMILY");
const u8 gEasyChatWord_Her[] = _("HER");
const u8 gEasyChatWord_Him[] = _("HIM");
const u8 gEasyChatWord_He[] = _("HE");
const u8 gEasyChatWord_Place[] = _("PLACE");
const u8 gEasyChatWord_Daughter[] = _("DAUGHTER");
const u8 gEasyChatWord_His[] = _("HIS");
const u8 gEasyChatWord_Hes[] = _("HE'S");
const u8 gEasyChatWord_Arent[] = _("AREN'T");
const u8 gEasyChatWord_Siblings[] = _("SIBLINGS");
const u8 gEasyChatWord_Kid[] = _("KID");
const u8 gEasyChatWord_Children[] = _("CHILDREN");
const u8 gEasyChatWord_Mr[] = _("MR.");
const u8 gEasyChatWord_Mrs[] = _("MRS.");
const u8 gEasyChatWord_Myself[] = _("MYSELF");
const u8 gEasyChatWord_IWas[] = _("I WAS");
const u8 gEasyChatWord_ToMe[] = _("TO ME");
const u8 gEasyChatWord_My[] = _("MY");
const u8 gEasyChatWord_IAm[] = _("I AM");
const u8 gEasyChatWord_Ive[] = _("I'VE");
const u8 gEasyChatWord_Who[] = _("WHO");
const u8 gEasyChatWord_Someone[] = _("SOMEONE");
const u8 gEasyChatWord_WhoWas[] = _("WHO WAS");
const u8 gEasyChatWord_ToWhom[] = _("TO WHOM");
const u8 gEasyChatWord_Whose[] = _("WHOSE");
const u8 gEasyChatWord_WhoIs[] = _("WHO IS");
const u8 gEasyChatWord_Its[] = _("IT'S");
const u8 gEasyChatWord_Lady[] = _("LADY");
const u8 gEasyChatWord_Friend[] = _("FRIEND");
const u8 gEasyChatWord_Ally[] = _("ALLY");
const u8 gEasyChatWord_Person[] = _("PERSON");
const u8 gEasyChatWord_Dude[] = _("DUDE");
const u8 gEasyChatWord_They[] = _("THEY");
const u8 gEasyChatWord_TheyWere[] = _("THEY WERE");
const u8 gEasyChatWord_ToThem[] = _("TO THEM");
const u8 gEasyChatWord_Their[] = _("THEIR");
const u8 gEasyChatWord_Theyre[] = _("THEY'RE");
const u8 gEasyChatWord_Theyve[] = _("THEY'VE");
const u8 gEasyChatWord_We[] = _("WE");
const u8 gEasyChatWord_Been[] = _("BEEN");
const u8 gEasyChatWord_ToUs[] = _("TO US");
const u8 gEasyChatWord_Our[] = _("OUR");
const u8 gEasyChatWord_WeRe[] = _("WE'RE");
const u8 gEasyChatWord_Rival[] = _("RIVAL");
const u8 gEasyChatWord_Weve[] = _("WE'VE");
const u8 gEasyChatWord_Woman[] = _("WOMAN");
const u8 gEasyChatWord_She[] = _("SHE");
const u8 gEasyChatWord_SheWas[] = _("SHE WAS");
const u8 gEasyChatWord_ToHer[] = _("TO HER");
const u8 gEasyChatWord_Hers[] = _("HERS");
const u8 gEasyChatWord_SheIs[] = _("SHE IS");
const u8 gEasyChatWord_Some[] = _("SOME");

const struct EasyChatWordInfo gEasyChatGroup_People[] = {
    [EC_INDEX(EC_WORD_OPPONENT)] =
    {
        .text = gEasyChatWord_Opponent,
<<<<<<< HEAD
        .alphabeticalOrder = 13,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_ADULT),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_I)] =
    {
        .text = gEasyChatWord_I,
<<<<<<< HEAD
        .alphabeticalOrder = 52,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_ALLY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOU)] =
    {
        .text = gEasyChatWord_You,
<<<<<<< HEAD
        .alphabeticalOrder = 31,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_AREN_T),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOURS)] =
    {
        .text = gEasyChatWord_Yours,
<<<<<<< HEAD
        .alphabeticalOrder = 17,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_AUNT),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SON)] =
    {
        .text = gEasyChatWord_Son,
<<<<<<< HEAD
        .alphabeticalOrder = 22,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_BABE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOUR)] =
    {
        .text = gEasyChatWord_Your,
<<<<<<< HEAD
        .alphabeticalOrder = 62,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_BEEN),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOU_RE)] =
    {
        .text = gEasyChatWord_Youre,
<<<<<<< HEAD
        .alphabeticalOrder = 12,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_BOY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOU_VE)] =
    {
        .text = gEasyChatWord_Youve,
<<<<<<< HEAD
        .alphabeticalOrder = 14,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_BROTHER),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MOTHER)] =
    {
        .text = gEasyChatWord_Mother,
<<<<<<< HEAD
        .alphabeticalOrder = 34,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_CHILDREN),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GRANDFATHER)] =
    {
        .text = gEasyChatWord_Grandfather,
<<<<<<< HEAD
        .alphabeticalOrder = 28,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_DAUGHTER),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UNCLE)] =
    {
        .text = gEasyChatWord_Uncle,
<<<<<<< HEAD
        .alphabeticalOrder = 54,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_DUDE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FATHER)] =
    {
        .text = gEasyChatWord_Father,
<<<<<<< HEAD
        .alphabeticalOrder = 23,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_FAMILY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BOY)] =
    {
        .text = gEasyChatWord_Boy,
<<<<<<< HEAD
        .alphabeticalOrder = 11,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_FATHER),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ADULT)] =
    {
        .text = gEasyChatWord_Adult,
<<<<<<< HEAD
        .alphabeticalOrder = 51,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_FRIEND),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BROTHER)] =
    {
        .text = gEasyChatWord_Brother,
<<<<<<< HEAD
        .alphabeticalOrder = 21,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_GIRL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SISTER)] =
    {
        .text = gEasyChatWord_Sister,
<<<<<<< HEAD
        .alphabeticalOrder = 9,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_GRANDFATHER),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GRANDMOTHER)] =
    {
        .text = gEasyChatWord_Grandmother,
<<<<<<< HEAD
        .alphabeticalOrder = 16,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_GRANDMOTHER),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AUNT)] =
    {
        .text = gEasyChatWord_Aunt,
<<<<<<< HEAD
        .alphabeticalOrder = 26,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PARENT)] =
    {
        .text = gEasyChatWord_Parent,
<<<<<<< HEAD
        .alphabeticalOrder = 30,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HE_S),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MAN)] =
    {
        .text = gEasyChatWord_Man,
<<<<<<< HEAD
        .alphabeticalOrder = 24,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HER),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ME)] =
    {
        .text = gEasyChatWord_Me,
<<<<<<< HEAD
        .alphabeticalOrder = 72,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HERS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GIRL)] =
    {
        .text = gEasyChatWord_Girl,
<<<<<<< HEAD
        .alphabeticalOrder = 25,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HIM),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BABE)] =
    {
        .text = gEasyChatWord_Babe,
<<<<<<< HEAD
        .alphabeticalOrder = 29,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_HIS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FAMILY)] =
    {
        .text = gEasyChatWord_Family,
<<<<<<< HEAD
        .alphabeticalOrder = 1,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_I),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HER)] =
    {
        .text = gEasyChatWord_Her,
<<<<<<< HEAD
        .alphabeticalOrder = 41,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_I_AM),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HIM)] =
    {
        .text = gEasyChatWord_Him,
<<<<<<< HEAD
        .alphabeticalOrder = 38,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_I_WAS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HE)] =
    {
        .text = gEasyChatWord_He,
<<<<<<< HEAD
        .alphabeticalOrder = 42,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_I_VE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PLACE)] =
    {
        .text = gEasyChatWord_Place,
<<<<<<< HEAD
        .alphabeticalOrder = 49,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_IT_S),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DAUGHTER)] =
    {
        .text = gEasyChatWord_Daughter,
<<<<<<< HEAD
        .alphabeticalOrder = 33,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_KID),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HIS)] =
    {
        .text = gEasyChatWord_His,
<<<<<<< HEAD
        .alphabeticalOrder = 50,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_LADY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HE_S)] =
    {
        .text = gEasyChatWord_Hes,
<<<<<<< HEAD
        .alphabeticalOrder = 19,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MAN),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AREN_T)] =
    {
        .text = gEasyChatWord_Arent,
<<<<<<< HEAD
        .alphabeticalOrder = 20,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_ME),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SIBLINGS)] =
    {
        .text = gEasyChatWord_Siblings,
<<<<<<< HEAD
        .alphabeticalOrder = 8,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MOTHER),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_KID)] =
    {
        .text = gEasyChatWord_Kid,
<<<<<<< HEAD
        .alphabeticalOrder = 35,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MR),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CHILDREN)] =
    {
        .text = gEasyChatWord_Children,
<<<<<<< HEAD
        .alphabeticalOrder = 36,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MRS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MR)] =
    {
        .text = gEasyChatWord_Mr,
<<<<<<< HEAD
        .alphabeticalOrder = 40,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MRS)] =
    {
        .text = gEasyChatWord_Mrs,
<<<<<<< HEAD
        .alphabeticalOrder = 37,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_MYSELF),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MYSELF)] =
    {
        .text = gEasyChatWord_Myself,
<<<<<<< HEAD
        .alphabeticalOrder = 0,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_OPPONENT),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_I_WAS)] =
    {
        .text = gEasyChatWord_IWas,
<<<<<<< HEAD
        .alphabeticalOrder = 64,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_OUR),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO_ME)] =
    {
        .text = gEasyChatWord_ToMe,
<<<<<<< HEAD
        .alphabeticalOrder = 18,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_PARENT),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MY)] =
    {
        .text = gEasyChatWord_My,
<<<<<<< HEAD
        .alphabeticalOrder = 53,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_PERSON),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_I_AM)] =
    {
        .text = gEasyChatWord_IAm,
<<<<<<< HEAD
        .alphabeticalOrder = 27,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_PLACE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_I_VE)] =
    {
        .text = gEasyChatWord_Ive,
<<<<<<< HEAD
        .alphabeticalOrder = 66,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_RIVAL),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHO)] =
    {
        .text = gEasyChatWord_Who,
<<<<<<< HEAD
        .alphabeticalOrder = 69,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SHE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SOMEONE)] =
    {
        .text = gEasyChatWord_Someone,
<<<<<<< HEAD
        .alphabeticalOrder = 73,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SHE_IS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHO_WAS)] =
    {
        .text = gEasyChatWord_WhoWas,
<<<<<<< HEAD
        .alphabeticalOrder = 70,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SHE_WAS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO_WHOM)] =
    {
        .text = gEasyChatWord_ToWhom,
<<<<<<< HEAD
        .alphabeticalOrder = 32,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SIBLINGS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHOSE)] =
    {
        .text = gEasyChatWord_Whose,
<<<<<<< HEAD
        .alphabeticalOrder = 15,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SISTER),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHO_IS)] =
    {
        .text = gEasyChatWord_WhoIs,
<<<<<<< HEAD
        .alphabeticalOrder = 74,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SOME),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IT_S)] =
    {
        .text = gEasyChatWord_Its,
<<<<<<< HEAD
        .alphabeticalOrder = 44,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SOMEONE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LADY)] =
    {
        .text = gEasyChatWord_Lady,
<<<<<<< HEAD
        .alphabeticalOrder = 4,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_SON),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FRIEND)] =
    {
        .text = gEasyChatWord_Friend,
<<<<<<< HEAD
        .alphabeticalOrder = 58,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_THEIR),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALLY)] =
    {
        .text = gEasyChatWord_Ally,
<<<<<<< HEAD
        .alphabeticalOrder = 55,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_THEY),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PERSON)] =
    {
        .text = gEasyChatWord_Person,
<<<<<<< HEAD
        .alphabeticalOrder = 56,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_THEY_WERE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DUDE)] =
    {
        .text = gEasyChatWord_Dude,
<<<<<<< HEAD
        .alphabeticalOrder = 59,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_THEY_RE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THEY)] =
    {
        .text = gEasyChatWord_They,
<<<<<<< HEAD
        .alphabeticalOrder = 60,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_THEY_VE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THEY_WERE)] =
    {
        .text = gEasyChatWord_TheyWere,
<<<<<<< HEAD
        .alphabeticalOrder = 71,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_TO_HER),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO_THEM)] =
    {
        .text = gEasyChatWord_ToThem,
<<<<<<< HEAD
        .alphabeticalOrder = 39,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_TO_ME),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THEIR)] =
    {
        .text = gEasyChatWord_Their,
<<<<<<< HEAD
        .alphabeticalOrder = 57,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_TO_THEM),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THEY_RE)] =
    {
        .text = gEasyChatWord_Theyre,
<<<<<<< HEAD
        .alphabeticalOrder = 63,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_TO_US),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THEY_VE)] =
    {
        .text = gEasyChatWord_Theyve,
<<<<<<< HEAD
        .alphabeticalOrder = 46,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_TO_WHOM),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WE)] =
    {
        .text = gEasyChatWord_We,
<<<<<<< HEAD
        .alphabeticalOrder = 10,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_UNCLE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BEEN)] =
    {
        .text = gEasyChatWord_Been,
<<<<<<< HEAD
        .alphabeticalOrder = 61,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO_US)] =
    {
        .text = gEasyChatWord_ToUs,
<<<<<<< HEAD
        .alphabeticalOrder = 65,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WE_RE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OUR)] =
    {
        .text = gEasyChatWord_Our,
<<<<<<< HEAD
        .alphabeticalOrder = 67,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WE_VE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WE_RE)] =
    {
        .text = gEasyChatWord_WeRe,
<<<<<<< HEAD
        .alphabeticalOrder = 43,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHO),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RIVAL)] =
    {
        .text = gEasyChatWord_Rival,
<<<<<<< HEAD
        .alphabeticalOrder = 48,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHO_IS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WE_VE)] =
    {
        .text = gEasyChatWord_Weve,
<<<<<<< HEAD
        .alphabeticalOrder = 45,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHO_WAS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WOMAN)] =
    {
        .text = gEasyChatWord_Woman,
<<<<<<< HEAD
        .alphabeticalOrder = 47,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHOSE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHE)] =
    {
        .text = gEasyChatWord_She,
<<<<<<< HEAD
        .alphabeticalOrder = 68,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_WOMAN),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHE_WAS)] =
    {
        .text = gEasyChatWord_SheWas,
<<<<<<< HEAD
        .alphabeticalOrder = 2,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_YOU),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO_HER)] =
    {
        .text = gEasyChatWord_ToHer,
<<<<<<< HEAD
        .alphabeticalOrder = 6,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_YOU_RE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HERS)] =
    {
        .text = gEasyChatWord_Hers,
<<<<<<< HEAD
        .alphabeticalOrder = 7,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_YOU_VE),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHE_IS)] =
    {
        .text = gEasyChatWord_SheIs,
<<<<<<< HEAD
        .alphabeticalOrder = 5,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_YOUR),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SOME)] =
    {
        .text = gEasyChatWord_Some,
<<<<<<< HEAD
        .alphabeticalOrder = 3,
=======
        .alphabeticalOrder = EC_INDEX(EC_WORD_YOURS),
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        .enabled = TRUE,
    },
};
