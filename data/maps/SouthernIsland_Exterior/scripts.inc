<<<<<<< HEAD
.set LOCALID_SAILOR, 1
.set LOCALID_SS_TIDAL, 2

=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
SouthernIsland_Exterior_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_Exterior_OnTransition
	.byte 0

SouthernIsland_Exterior_OnTransition:
<<<<<<< HEAD
	setflag FLAG_VISITED_CERULEAN_CITY
=======
	setflag FLAG_LANDMARK_SOUTHERN_ISLAND
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	end

SouthernIsland_Exterior_EventScript_Sailor::
	lock
	faceplayer
	msgbox EventTicket_Text_SouthernIslandSailBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SouthernIsland_Exterior_EventScript_AsYouLike
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
<<<<<<< HEAD
	hideobjectat LOCALID_SAILOR, MAP_SOUTHERN_ISLAND_EXTERIOR
	setvar VAR_0x8004, LOCALID_SS_TIDAL
	call Common_EventScript_FerryDepartIsland
	warpsilent MAP_OLIVINE_CITY_PORT_INSIDE, 8, 16
=======
	hideobjectat LOCALID_SOUTHERN_ISLAND_SAILOR, MAP_SOUTHERN_ISLAND_EXTERIOR
	setvar VAR_0x8004, LOCALID_SOUTHERN_ISLAND_SS_TIDAL
	call Common_EventScript_FerryDepartIsland
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	waitstate
	release
	end

SouthernIsland_Exterior_EventScript_AsYouLike::
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
	release
	end

Ferry_EventScript_DepartIslandSouth::
<<<<<<< HEAD
	applymovement OBJ_EVENT_ID_PLAYER, Ferry_Movement_DepartIslandBoardSouth
=======
	applymovement LOCALID_PLAYER, Ferry_Movement_DepartIslandBoardSouth
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	waitmovement 0
	return

Ferry_EventScript_DepartIslandWest::
<<<<<<< HEAD
	applymovement OBJ_EVENT_ID_PLAYER, Ferry_Movement_DepartIslandBoardWest
=======
	applymovement LOCALID_PLAYER, Ferry_Movement_DepartIslandBoardWest
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	waitmovement 0
	return

Ferry_Movement_DepartIslandBoardSouth:
	walk_down
	step_end

Ferry_Movement_DepartIslandBoardWest:
	walk_left
	walk_in_place_faster_down
	step_end

SouthernIsland_Exterior_EventScript_Sign::
	msgbox SouthernIsland_Exterior_Text_Sign, MSGBOX_SIGN
	end

