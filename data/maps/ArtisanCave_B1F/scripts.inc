ArtisanCave_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ArtisanCave_B1F_OnTransition
<<<<<<< HEAD
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

ArtisanCave_B1F_OnTransition:
	callnative SetTimeBasedEncounters
=======
	.byte 0

ArtisanCave_B1F_OnTransition:
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	setflag FLAG_LANDMARK_ARTISAN_CAVE
	end

