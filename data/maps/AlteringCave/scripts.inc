<<<<<<< HEAD
.set LOCALID_MEWTWO, 5

=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
AlteringCave_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AlteringCave_OnTransition
	.byte 0

AlteringCave_OnTransition:
	setflag FLAG_LANDMARK_ALTERING_CAVE
<<<<<<< HEAD
	call_if_set FLAG_UNLOCK_MEWTWO, AlteringCave_EventScript_OpenCave
	end

AlteringCave_EventScript_OpenCave::
	setmaplayoutindex LAYOUT_ALTERING_CAVE_MEWTWO
	end
=======
	end

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
