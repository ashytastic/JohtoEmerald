<<<<<<< HEAD
.set LOCALID_ATTENDANT, 1

=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
BattleFrontier_BattlePikeRoomFinal_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeRoomFinal_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeRoomFinal_OnWarp
	.byte 0

BattleFrontier_BattlePikeRoomFinal_OnFrame:
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePikeRoomFinal_EventScript_EnterRoom
	.2byte 0

BattleFrontier_BattlePikeRoomFinal_EventScript_EnterRoom::
	delay 16
<<<<<<< HEAD
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePikeRoomFinal_Movement_AttendantApproachPlayer
=======
	applymovement LOCALID_PIKE_FINAL_ROOM_ATTENDANT, BattleFrontier_BattlePikeRoomFinal_Movement_AttendantApproachPlayer
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	waitmovement 0
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
	lockall
	msgbox BattleFrontier_BattlePikeRoomFinal_Text_CongratsThisWayPlease, MSGBOX_DEFAULT
	closemessage
	releaseall
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 5, 6
	waitstate
	end

BattleFrontier_BattlePikeRoomFinal_Movement_AttendantApproachPlayer:
	walk_down
	walk_down
	step_end

BattleFrontier_BattlePikeRoomFinal_OnWarp:
	map_script_2 VAR_TEMP_4, 0, BattleFrontier_BattlePikeRoomFinal_EventScript_TurnPlayerNorth
	.2byte 0

BattleFrontier_BattlePikeRoomFinal_EventScript_TurnPlayerNorth::
	setvar VAR_TEMP_4, 1
<<<<<<< HEAD
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
=======
	turnobject LOCALID_PLAYER, DIR_NORTH
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	end

BattleFrontier_BattlePikeRoomFinal_Text_CongratsThisWayPlease:
	.string "Congratulations…\n"
	.string "Now, this way, please…$"

