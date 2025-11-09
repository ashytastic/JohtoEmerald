CaveOfOrigin_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CaveOfOrigin_1F_OnTransition
	.byte 0

CaveOfOrigin_1F_OnTransition:
<<<<<<< HEAD
	call_if_set FLAG_FINITE_TMS, CaveOfOrigin_EventScript_DisableTriggers
=======
	call_if_set FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE, CaveOfOrigin_EventScript_DisableTriggers
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	end
