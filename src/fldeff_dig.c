#include "global.h"
#include "braille_puzzles.h"
<<<<<<< HEAD
=======
#include "event_scripts.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "field_effect.h"
#include "field_player_avatar.h"
#include "fldeff.h"
#include "item_use.h"
#include "overworld.h"
#include "party_menu.h"
<<<<<<< HEAD
=======
#include "script.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
#include "sprite.h"
#include "constants/field_effects.h"

// static functions
static void FieldCallback_Dig(void);
static void StartDigFieldEffect(void);

// text
<<<<<<< HEAD
bool8 SetUpFieldMove_Dig(void)
=======
bool32 SetUpFieldMove_Dig(void)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    if (CanUseDigOrEscapeRopeOnCurMap() == TRUE)
    {
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_Dig;
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

static void FieldCallback_Dig(void)
{
    Overworld_ResetStateAfterDigEscRope();
<<<<<<< HEAD
    FieldEffectStart(FLDEFF_USE_DIG);
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
=======
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    ScriptContext_SetupScript(EventScript_UseDig);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

bool8 FldEff_UseDig(void)
{
    u8 taskId = CreateFieldMoveTask();

    gTasks[taskId].data[8] = (u32)StartDigFieldEffect >> 16;
    gTasks[taskId].data[9] = (u32)StartDigFieldEffect;
<<<<<<< HEAD

=======
    if (!ShouldDoBrailleDigEffect())
        SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    return FALSE;
}

static void StartDigFieldEffect(void)
{
    u8 taskId;

    FieldEffectActiveListRemove(FLDEFF_USE_DIG);
<<<<<<< HEAD
    taskId = CreateTask(Task_UseDigEscapeRopeOnField, 8);
    gTasks[taskId].data[0] = 0;
=======
    if (ShouldDoBrailleDigEffect())
    {
        // EventScript_DigSealedChamber handles DoBrailleDigEffect call
        ScriptContext_Enable();
    }
    else
    {
        taskId = CreateTask(Task_UseDigEscapeRopeOnField, 8);
        gTasks[taskId].data[0] = 0;
    }
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}
