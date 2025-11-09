FieryPath_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FieryPath_OnTransition
<<<<<<< HEAD
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte 0

FieryPath_OnTransition:
	call_if_unset FLAG_LANDMARK_FIERY_PATH, FieryPath_EventScript_MoveScottToFallarbor
	setflag FLAG_LANDMARK_FIERY_PATH
<<<<<<< HEAD
	callnative SetTimeBasedEncounters
	end

FieryPath_EventScript_MoveScottToFallarbor::
	setflag FLAG_GARBAGEFLAG
	clearflag FLAG_GARBAGEFLAG
=======
	end

FieryPath_EventScript_MoveScottToFallarbor::
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	clearflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	return

