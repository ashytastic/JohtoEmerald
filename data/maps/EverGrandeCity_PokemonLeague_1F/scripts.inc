<<<<<<< HEAD
.set LOCALID_NURSE, 1
.set LOCALID_GUARD_1, 3
.set LOCALID_GUARD_2, 4

=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
EverGrandeCity_PokemonLeague_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonLeague_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

EverGrandeCity_PokemonLeague_1F_OnTransition:
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
	call_if_unset FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor
	end

<<<<<<< HEAD
EverGrandeCity_PokemonLeague_1F_AncientPower::
	msgbox EverGrandeCity_PokemonLeague_1F_AncientPower_Text, MSGBOX_NPC
	end

EverGrandeCity_PokemonLeague_1F_AncientPower_Text:
	.string "There are three POKéMON that\n"
	.string "evolve using a certain MOVE.\p"
	.string "They are YANMA, PILOSWINE and TANGELA.\p"
	.string "Now… the move… I don't remember\n"
	.string "exactly… Something about an\l"
	.string "ANCIENT MOVE…$"

EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor::
	setobjectxyperm LOCALID_GUARD_1, 9, 2
	setobjectxyperm LOCALID_GUARD_2, 10, 2
	return

EverGrandeCity_PokemonLeague_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
=======
EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor::
	setobjectxyperm LOCALID_LEAGUE_GUARD_1, 9, 2
	setobjectxyperm LOCALID_LEAGUE_GUARD_2, 10, 2
	return

EverGrandeCity_PokemonLeague_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LEAGUE_NURSE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

EverGrandeCity_PokemonLeague_1F_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
<<<<<<< HEAD
	pokemart 0
=======
	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
@	.align 2
@EverGrandeCity_PokemonLeague_1F_Pokemart:
@	.2byte ITEM_ULTRA_BALL
@	.2byte ITEM_HYPER_POTION
@	.2byte ITEM_MAX_POTION
@	.2byte ITEM_FULL_RESTORE
@	.2byte ITEM_FULL_HEAL
@	.2byte ITEM_REVIVE
@	.2byte ITEM_MAX_REPEL
@	.2byte ITEM_NONE
@	release
@	end
=======
	.align 2
EverGrandeCity_PokemonLeague_1F_Pokemart:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	pokemartlistend
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

@ The door guards only check for FLAG_BADGE06_GET because Winonas badge is the only one that can be skipped
@ Its assumed the player has the remaining badges
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard::
	lockall
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_ge VAR_TEMP_0, 11, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight
	call_if_le VAR_TEMP_0, 8, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
	waitmessage
	delay 120
	goto_if_unset FLAG_BADGE06_GET, EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges
	closemessage
<<<<<<< HEAD
	applymovement LOCALID_GUARD_1, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay
	applymovement LOCALID_GUARD_2, EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay
=======
	applymovement LOCALID_LEAGUE_GUARD_1, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay
	applymovement LOCALID_LEAGUE_GUARD_2, EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	waitmovement 0
	delay 10
	playfanfare MUS_OBTAIN_BADGE
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
	waitmessage
	waitfanfare
	closemessage
<<<<<<< HEAD
	copyobjectxytoperm LOCALID_GUARD_1
	copyobjectxytoperm LOCALID_GUARD_2
=======
	copyobjectxytoperm LOCALID_LEAGUE_GUARD_1
	copyobjectxytoperm LOCALID_LEAGUE_GUARD_2
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	setflag FLAG_ENTERED_ELITE_FOUR
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight::
<<<<<<< HEAD
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight
=======
	applymovement LOCALID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	waitmovement 0
	return

EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft::
<<<<<<< HEAD
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft
=======
	applymovement LOCALID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	waitmovement 0
	return

EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges::
	playse SE_FAILURE
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_GoForth::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight:
	walk_down
	walk_left
	walk_in_place_faster_up
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft:
	walk_down
	walk_right
	walk_in_place_faster_up
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay:
	walk_left
	walk_in_place_faster_down
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay:
	walk_right
	walk_in_place_faster_down
	step_end

EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges:
	.string "Beyond this point, only those TRAINERS\n"
	.string "who have collected all the GYM BADGES\l"
	.string "are permitted to enter.\p"
	.string "TRAINER, let us confirm that you have\n"
	.string "all the GYM BADGES.$"

EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges:
	.string "You haven't obtained all the BADGES.\p"
	.string "If you're bound for the POKéMON\n"
	.string "LEAGUE, you must return with them.$"

EverGrandeCity_PokemonLeague_1F_Text_GoForth:
	.string "TRAINER! Believe in yourself and your\n"
	.string "POKéMON, and go forth!$"

