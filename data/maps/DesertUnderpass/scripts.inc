<<<<<<< HEAD
.set LOCALID_FOSSIL, 1

=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
DesertUnderpass_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DesertUnderpass_OnTransition
	.byte 0

DesertUnderpass_OnTransition:
	setflag FLAG_LANDMARK_DESERT_UNDERPASS
	end

DesertUnderpass_EventScript_Fossil::
	lock
	faceplayer
	goto_if_set FLAG_CHOSE_ROOT_FOSSIL, DesertUnderpass_EventScript_GiveClawFossil
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, DesertUnderpass_EventScript_GiveRootFossil
	release
	end

DesertUnderpass_EventScript_GiveClawFossil::
	giveitem ITEM_CLAW_FOSSIL
<<<<<<< HEAD
	removeobject LOCALID_FOSSIL
=======
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	removeobject LOCALID_UNDERPASS_FOSSIL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	release
	end

DesertUnderpass_EventScript_GiveRootFossil::
	giveitem ITEM_ROOT_FOSSIL
<<<<<<< HEAD
	removeobject LOCALID_FOSSIL
=======
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	removeobject LOCALID_UNDERPASS_FOSSIL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	release
	end

@ Unused
DesertUnderpass_Text_FoundRootFossil::
	.string "{PLAYER} found the ROOT FOSSIL.$"

@ Unused
DesertUnderpass_Text_FoundClawFossil::
	.string "{PLAYER} found the CLAW FOSSIL.$"

