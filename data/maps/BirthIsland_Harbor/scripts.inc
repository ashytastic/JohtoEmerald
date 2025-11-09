<<<<<<< HEAD
.set LOCALID_SAILOR, 1
.set LOCALID_SS_TIDAL, 2

=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
BirthIsland_Harbor_MapScripts::
	.byte 0

BirthIsland_Harbor_EventScript_Sailor::
	lock
	faceplayer
	msgbox BirthIsland_Harbor_Text_SailorReturn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BirthIsland_Harbor_EventScript_AsYouLike
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
<<<<<<< HEAD
	hideobjectat LOCALID_SAILOR, MAP_BIRTH_ISLAND_HARBOR
	setvar VAR_0x8004, LOCALID_SS_TIDAL
=======
	hideobjectat LOCALID_BIRTH_ISLAND_SAILOR, MAP_BIRTH_ISLAND_HARBOR
	setvar VAR_0x8004, LOCALID_BIRTH_ISLAND_SS_TIDAL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	call Common_EventScript_FerryDepartIsland
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end

BirthIsland_Harbor_EventScript_AsYouLike::
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
	release
	end

