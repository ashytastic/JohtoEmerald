<<<<<<< HEAD
.set LOCALID_ATTENDANT, 1

=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
BattleFrontier_BattlePikeCorridor_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeCorridor_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeCorridor_OnWarp
	.byte 0

BattleFrontier_BattlePikeCorridor_OnFrame:
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePikeCorridor_EventScript_EnterCorridor
	.2byte 0

BattleFrontier_BattlePikeCorridor_EventScript_EnterCorridor::
	delay 16
	frontier_set FRONTIER_DATA_BATTLE_NUM, 1
	pike_cleartrainerids
	pike_nohealing TRUE
<<<<<<< HEAD
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattlePikeCorridor_Movement_PlayerEnterCorridor
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePikeCorridor_Movement_AttendantEnterCorridor
=======
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeCorridor_Movement_PlayerEnterCorridor
	applymovement LOCALID_PIKE_CORRIDOR_ATTENDANT, BattleFrontier_BattlePikeCorridor_Movement_AttendantEnterCorridor
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	waitmovement 0
	lockall
	msgbox BattleFrontier_BattlePikeCorridor_Text_YourChallengeHasBegun, MSGBOX_DEFAULT
	closemessage
	releaseall
<<<<<<< HEAD
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattlePikeCorridor_Movement_PlayerExitCorridor
=======
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeCorridor_Movement_PlayerExitCorridor
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	waitmovement 0
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 99
	call BattleFrontier_BattlePike_EventScript_CloseCurtain
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PIKE_THREE_PATH_ROOM, 6, 10
	waitstate
	end

BattleFrontier_BattlePikeCorridor_OnWarp:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePikeCorridor_EventScript_TurnPlayerNorth
	.2byte 0

BattleFrontier_BattlePikeCorridor_EventScript_TurnPlayerNorth::
	setvar VAR_TEMP_1, 1
<<<<<<< HEAD
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
=======
	turnobject LOCALID_PLAYER, DIR_NORTH
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	end

BattleFrontier_BattlePikeCorridor_Movement_PlayerEnterCorridor:
	walk_up
	walk_up
	step_end

BattleFrontier_BattlePikeCorridor_Movement_PlayerExitCorridor:
	walk_up
	walk_up
	set_invisible
	step_end

BattleFrontier_BattlePikeCorridor_Movement_AttendantEnterCorridor:
	walk_up
	walk_up
	walk_left
	face_down
	step_end

BattleFrontier_BattlePikeCorridor_Text_YourChallengeHasBegun:
	.string "Your Battle Choice challenge\n"
	.string "has now begun…$"

