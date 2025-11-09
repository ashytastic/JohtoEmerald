MirageTower_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MirageTower_1F_OnTransition
<<<<<<< HEAD
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MirageTower_1F_OnTransition:
	callnative SetTimeBasedEncounters
=======
	.byte 0

MirageTower_1F_OnTransition:
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	setflag FLAG_ENTERED_MIRAGE_TOWER
	setflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	setflag FLAG_LANDMARK_MIRAGE_TOWER
	end

