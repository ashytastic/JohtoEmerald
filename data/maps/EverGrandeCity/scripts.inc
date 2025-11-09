EverGrandeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
<<<<<<< HEAD
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

EverGrandeCity_OnTransition:
	callnative SetTimeBasedEncounters
=======
	.byte 0

EverGrandeCity_OnTransition:
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

EverGrandeCity_EventScript_VictoryRoadSign::
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_CitySign::
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_PokemonLeagueSign::
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_SetVisitedEverGrande::
<<<<<<< HEAD
	setflag FLAG_VISITED_INDIGO_PLATEAU
=======
	setflag FLAG_VISITED_EVER_GRANDE_CITY
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	setvar VAR_TEMP_1, 1
	end

EverGrandeCity_Text_EnteringVictoryRoad:
	.string "ENTERING VICTORY ROAD$"

EverGrandeCity_Text_EnteringPokemonLeague:
	.string "ENTERING POKéMON LEAGUE\n"
	.string "CENTER GATE$"

EverGrandeCity_Text_CitySign:
	.string "EVER GRANDE CITY\p"
	.string "“The paradise of flowers, the sea,\n"
	.string "and POKéMON.”$"

