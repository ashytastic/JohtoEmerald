#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "malloc.h"
#include "pokemon.h"
#include "trainer_hill.h"
#include "party_menu.h"
#include "event_data.h"
#include "constants/abilities.h"
#include "random.h"
#include "battle_scripts.h"
#include "constants/battle_string_ids.h"

void AllocateBattleResources(void)
{
<<<<<<< HEAD
    gBattleResources = gBattleResources; // something dumb needed to match

=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
        InitTrainerHillBattleStruct();

    gBattleStruct = AllocZeroed(sizeof(*gBattleStruct));
<<<<<<< HEAD

    gBattleResources = AllocZeroed(sizeof(*gBattleResources));
    gBattleResources->secretBase = AllocZeroed(sizeof(*gBattleResources->secretBase));
    gBattleResources->flags = AllocZeroed(sizeof(*gBattleResources->flags));
    gBattleResources->battleScriptsStack = AllocZeroed(sizeof(*gBattleResources->battleScriptsStack));
    gBattleResources->battleCallbackStack = AllocZeroed(sizeof(*gBattleResources->battleCallbackStack));
    gBattleResources->beforeLvlUp = AllocZeroed(sizeof(*gBattleResources->beforeLvlUp));
    gBattleResources->ai = AllocZeroed(sizeof(*gBattleResources->ai));
    gBattleResources->battleHistory = AllocZeroed(sizeof(*gBattleResources->battleHistory));
    gBattleResources->AI_ScriptsStack = AllocZeroed(sizeof(*gBattleResources->AI_ScriptsStack));
=======
    gAiBattleData = AllocZeroed(sizeof(*gAiBattleData));
    gAiThinkingStruct = AllocZeroed(sizeof(*gAiThinkingStruct));
    gAiLogicData = AllocZeroed(sizeof(*gAiLogicData));
    gAiPartyData = AllocZeroed(sizeof(*gAiPartyData));
    gBattleHistory = AllocZeroed(sizeof(*gBattleHistory));

#if B_FLAG_SKY_BATTLE
    gBattleStruct->isSkyBattle = FlagGet(B_FLAG_SKY_BATTLE);
#endif

    gBattleResources = AllocZeroed(sizeof(*gBattleResources));
    gBattleResources->secretBase = AllocZeroed(sizeof(*gBattleResources->secretBase));
    gBattleResources->battleScriptsStack = AllocZeroed(sizeof(*gBattleResources->battleScriptsStack));
    gBattleResources->battleCallbackStack = AllocZeroed(sizeof(*gBattleResources->battleCallbackStack));
    gBattleResources->beforeLvlUp = AllocZeroed(sizeof(*gBattleResources->beforeLvlUp));
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

    gLinkBattleSendBuffer = AllocZeroed(BATTLE_BUFFER_LINK_SIZE);
    gLinkBattleRecvBuffer = AllocZeroed(BATTLE_BUFFER_LINK_SIZE);

    gBattleAnimBgTileBuffer = AllocZeroed(0x2000);
    gBattleAnimBgTilemapBuffer = AllocZeroed(0x1000);

    if (gBattleTypeFlags & BATTLE_TYPE_SECRET_BASE)
    {
<<<<<<< HEAD
        u16 currSecretBaseId = VarGet(VAR_GARBAGEVAR);
=======
        u16 currSecretBaseId = VarGet(VAR_CURRENT_SECRET_BASE);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        CreateSecretBaseEnemyParty(&gSaveBlock1Ptr->secretBases[currSecretBaseId]);
    }
}

void FreeBattleResources(void)
{
    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
        FreeTrainerHillBattleStruct();

<<<<<<< HEAD
    if (gBattleResources != NULL)
    {
        FREE_AND_SET_NULL(gBattleStruct);

        FREE_AND_SET_NULL(gBattleResources->secretBase);
        FREE_AND_SET_NULL(gBattleResources->flags);
        FREE_AND_SET_NULL(gBattleResources->battleScriptsStack);
        FREE_AND_SET_NULL(gBattleResources->battleCallbackStack);
        FREE_AND_SET_NULL(gBattleResources->beforeLvlUp);
        FREE_AND_SET_NULL(gBattleResources->ai);
        FREE_AND_SET_NULL(gBattleResources->battleHistory);
        FREE_AND_SET_NULL(gBattleResources->AI_ScriptsStack);
=======
    gFieldStatuses = 0;
    if (gBattleResources != NULL)
    {
        FREE_AND_SET_NULL(gBattleStruct);
        FREE_AND_SET_NULL(gAiBattleData);
        FREE_AND_SET_NULL(gAiThinkingStruct);
        FREE_AND_SET_NULL(gAiLogicData);
        FREE_AND_SET_NULL(gAiPartyData);
        FREE_AND_SET_NULL(gBattleHistory);

        FREE_AND_SET_NULL(gBattleResources->secretBase);
        FREE_AND_SET_NULL(gBattleResources->battleScriptsStack);
        FREE_AND_SET_NULL(gBattleResources->battleCallbackStack);
        FREE_AND_SET_NULL(gBattleResources->beforeLvlUp);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        FREE_AND_SET_NULL(gBattleResources);

        FREE_AND_SET_NULL(gLinkBattleSendBuffer);
        FREE_AND_SET_NULL(gLinkBattleRecvBuffer);

        FREE_AND_SET_NULL(gBattleAnimBgTileBuffer);
        FREE_AND_SET_NULL(gBattleAnimBgTilemapBuffer);
    }
}

<<<<<<< HEAD
void AdjustFriendshipOnBattleFaint(u8 battlerId)
{
    u8 opposingBattlerId;

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
=======
void AdjustFriendshipOnBattleFaint(u8 battler)
{
    u8 opposingBattlerId;

    if (IsDoubleBattle())
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    {
        u8 opposingBattlerId2;

        opposingBattlerId = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
        opposingBattlerId2 = GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT);

        if (gBattleMons[opposingBattlerId2].level > gBattleMons[opposingBattlerId].level)
            opposingBattlerId = opposingBattlerId2;
    }
    else
    {
        opposingBattlerId = GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT);
    }

<<<<<<< HEAD
    if (gBattleMons[opposingBattlerId].level > gBattleMons[battlerId].level)
    {
        if (gBattleMons[opposingBattlerId].level - gBattleMons[battlerId].level > 29)
            AdjustFriendship(&gPlayerParty[gBattlerPartyIndexes[battlerId]], FRIENDSHIP_EVENT_FAINT_LARGE);
        else
            AdjustFriendship(&gPlayerParty[gBattlerPartyIndexes[battlerId]], FRIENDSHIP_EVENT_FAINT_SMALL);
    }
    else
    {
        AdjustFriendship(&gPlayerParty[gBattlerPartyIndexes[battlerId]], FRIENDSHIP_EVENT_FAINT_SMALL);
    }
}

void SwitchPartyOrderInGameMulti(u8 battlerId, u8 arg1)
{
    if (GetBattlerSide(battlerId) != B_SIDE_OPPONENT)
    {
        s32 i;
        for (i = 0; i < (int)ARRAY_COUNT(gBattlePartyCurrentOrder); i++)
            gBattlePartyCurrentOrder[i] = *(0 * 3 + i + (u8 *)(gBattleStruct->battlerPartyOrders));

        SwitchPartyMonSlots(GetPartyIdFromBattlePartyId(gBattlerPartyIndexes[battlerId]), GetPartyIdFromBattlePartyId(arg1));

        for (i = 0; i < (int)ARRAY_COUNT(gBattlePartyCurrentOrder); i++)
            *(0 * 3 + i + (u8 *)(gBattleStruct->battlerPartyOrders)) = gBattlePartyCurrentOrder[i];
=======
    if (gBattleMons[opposingBattlerId].level - gBattleMons[battler].level > 29)
        AdjustFriendship(GetBattlerMon(battler), FRIENDSHIP_EVENT_FAINT_LARGE);
    else
        AdjustFriendship(GetBattlerMon(battler), FRIENDSHIP_EVENT_FAINT_SMALL);
}

void SwitchPartyOrderInGameMulti(u8 battler, u8 arg1)
{
    if (IsOnPlayerSide(battler))
    {
        s32 i;
        for (i = 0; i < (int)ARRAY_COUNT(gBattlePartyCurrentOrder); i++)
            gBattlePartyCurrentOrder[i] = *(i + (u8 *)(gBattleStruct->battlerPartyOrders));

        SwitchPartyMonSlots(GetPartyIdFromBattlePartyId(gBattlerPartyIndexes[battler]), GetPartyIdFromBattlePartyId(arg1));

        for (i = 0; i < (int)ARRAY_COUNT(gBattlePartyCurrentOrder); i++)
            *(i + (u8 *)(gBattleStruct->battlerPartyOrders)) = gBattlePartyCurrentOrder[i];
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }
}

// Called when a Pokémon is unable to attack during a Battle Palace battle.
// Check if it was because they are frozen/asleep, and if so try to cure the status.
<<<<<<< HEAD
u32 BattlePalace_TryEscapeStatus(u8 battlerId)
=======
u32 BattlePalace_TryEscapeStatus(u8 battler)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    u32 effect = 0;

    do
    {
        switch (gBattleCommunication[MULTIUSE_STATE])
        {
        case 0:
<<<<<<< HEAD
            if (gBattleMons[battlerId].status1 & STATUS1_SLEEP)
            {
                if (UproarWakeUpCheck(battlerId))
                {
                    // Wake up from Uproar
                    gBattleMons[battlerId].status1 &= ~(STATUS1_SLEEP);
                    gBattleMons[battlerId].status2 &= ~(STATUS2_NIGHTMARE);
                    BattleScriptPushCursor();
                    gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_WOKE_UP_UPROAR;
                    gBattlescriptCurrInstr = BattleScript_MoveUsedWokeUp;
=======
            if (gBattleMons[battler].status1 & STATUS1_SLEEP)
            {
                if (UproarWakeUpCheck(battler))
                {
                    // Wake up from Uproar
                    gEffectBattler = battler;
                    gBattleMons[battler].status1 &= ~(STATUS1_SLEEP);
                    gBattleMons[battler].volatiles.nightmare = FALSE;
                    gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_WOKE_UP_UPROAR;
                    BattleScriptCall(BattleScript_MoveUsedWokeUp);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                    effect = 2;
                }
                else
                {
                    u32 toSub;

<<<<<<< HEAD
                    if (gBattleMons[battlerId].ability == ABILITY_EARLY_BIRD)
=======
                    if (GetBattlerAbility(battler) == ABILITY_EARLY_BIRD)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                        toSub = 2;
                    else
                        toSub = 1;

                    // Reduce number of sleep turns
<<<<<<< HEAD
                    if ((gBattleMons[battlerId].status1 & STATUS1_SLEEP) < toSub)
                        gBattleMons[battlerId].status1 &= ~(STATUS1_SLEEP);
                    else
                        gBattleMons[battlerId].status1 -= toSub;

                    if (gBattleMons[battlerId].status1 & STATUS1_SLEEP)
=======
                    if ((gBattleMons[battler].status1 & STATUS1_SLEEP) < toSub)
                        gBattleMons[battler].status1 &= ~(STATUS1_SLEEP);
                    else
                        gBattleMons[battler].status1 -= toSub;

                    if (gBattleMons[battler].status1 & STATUS1_SLEEP)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                    {
                        // Still asleep
                        gBattlescriptCurrInstr = BattleScript_MoveUsedIsAsleep;
                        effect = 2;
                    }
                    else
                    {
                        // Wake up
<<<<<<< HEAD
                        gBattleMons[battlerId].status2 &= ~(STATUS2_NIGHTMARE);
                        BattleScriptPushCursor();
                        gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_WOKE_UP;
                        gBattlescriptCurrInstr = BattleScript_MoveUsedWokeUp;
=======
                        gBattleMons[battler].volatiles.nightmare = FALSE;
                        gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_WOKE_UP;
                        BattleScriptCall(BattleScript_MoveUsedWokeUp);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                        effect = 2;
                    }
                }
            }
            gBattleCommunication[MULTIUSE_STATE]++;
            break;
        case 1:
<<<<<<< HEAD
            if (gBattleMons[battlerId].status1 & STATUS1_FREEZE)
=======
            if (gBattleMons[battler].status1 & STATUS1_FREEZE)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
            {
                if (Random() % 5 != 0)
                {
                    // Still frozen
                    gBattlescriptCurrInstr = BattleScript_MoveUsedIsFrozen;
                }
                else
                {
                    // Unfreeze
<<<<<<< HEAD
                    gBattleMons[battlerId].status1 &= ~(STATUS1_FREEZE);
                    BattleScriptPushCursor();
                    gBattlescriptCurrInstr = BattleScript_MoveUsedUnfroze;
=======
                    gBattleMons[battler].status1 &= ~(STATUS1_FREEZE);
                    BattleScriptCall(BattleScript_MoveUsedUnfroze);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
                    gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_DEFROSTED;
                }
                effect = 2;
            }
            gBattleCommunication[MULTIUSE_STATE]++;
            break;
        case 2:
            break;
        }
        // Loop until reaching the final state, or stop early if Pokémon was Asleep/Frozen
    } while (gBattleCommunication[MULTIUSE_STATE] != 2 && effect == 0);

    if (effect == 2)
    {
<<<<<<< HEAD
        gActiveBattler = battlerId;
        BtlController_EmitSetMonData(BUFFER_A, REQUEST_STATUS_BATTLE, 0, 4, &gBattleMons[gActiveBattler].status1);
        MarkBattlerForControllerExec(gActiveBattler);
=======
        BtlController_EmitSetMonData(battler, B_COMM_TO_CONTROLLER, REQUEST_STATUS_BATTLE, 0, 4, &gBattleMons[battler].status1);
        MarkBattlerForControllerExec(battler);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    }

    return effect;
}
