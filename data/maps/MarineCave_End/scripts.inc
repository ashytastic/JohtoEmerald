<<<<<<< HEAD
.set LOCALID_KYOGRE, 1

=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
MarineCave_End_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, MarineCave_End_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, MarineCave_End_OnTransition
	.byte 0

MarineCave_End_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, MarineCave_End_EventScript_TryRemoveKyogre
	end

MarineCave_End_EventScript_TryRemoveKyogre::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
<<<<<<< HEAD
	removeobject LOCALID_KYOGRE
=======
	removeobject LOCALID_MARINE_CAVE_KYOGRE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	return

MarineCave_End_OnTransition:
	call_if_unset FLAG_DEFEATED_KYOGRE, MarineCave_End_EventScript_ShowKyogre
	end

MarineCave_End_EventScript_ShowKyogre::
<<<<<<< HEAD
	clearflag FLAG_GARBAGEFLAG
=======
	clearflag FLAG_HIDE_MARINE_CAVE_KYOGRE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	setvar VAR_TEMP_1, 1
	return

MarineCave_End_EventScript_Kyogre::
	lockall
<<<<<<< HEAD
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_KYOGRE, MarineCave_End_Movement_KyogreApproach
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 52  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
=======
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_MARINE_CAVE_KYOGRE, MarineCave_End_Movement_KyogreApproach
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	waitmovement 0
	waitse
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
<<<<<<< HEAD
	setvar VAR_LAST_TALKED, LOCALID_KYOGRE
=======
	setvar VAR_LAST_TALKED, LOCALID_MARINE_CAVE_KYOGRE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	setwildbattle SPECIES_KYOGRE, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_TEMP_1, 0
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, MarineCave_End_EventScript_DefeatedKyogre
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, MarineCave_End_EventScript_RanFromKyogre
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, MarineCave_End_EventScript_RanFromKyogre
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	setflag FLAG_DEFEATED_KYOGRE
	releaseall
	end

MarineCave_End_EventScript_DefeatedKyogre::
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	setflag FLAG_DEFEATED_KYOGRE
	goto Common_EventScript_RemoveStaticPokemon
	end

MarineCave_End_EventScript_RanFromKyogre::
	setvar VAR_0x8004, SPECIES_KYOGRE
	goto Common_EventScript_LegendaryFlewAway
	end

MarineCave_End_Movement_KyogreApproach:
<<<<<<< HEAD
	@init_affine_anim
	walk_down_affine
=======
	init_affine_anim
	walk_down_start_affine
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	delay_16
	delay_16
	walk_down_affine
	delay_16
	delay_16
	walk_down_affine
	step_end

