ShoalCave_LowTideStairsRoom_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideStairsRoom_OnLoad
	.byte 0

ShoalCave_LowTideStairsRoom_OnLoad:
	call ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles
	end

ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatiles::
<<<<<<< HEAD
	goto_if_set FLAG_GARBAGEFLAG, ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatilesEnd
=======
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_3, ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatilesEnd
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	setmetatile 11, 11, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
	return

ShoalCave_LowTideStairsRoom_EventScript_SetShoalItemMetatilesEnd::
	return

ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3::
	lockall
<<<<<<< HEAD
	goto_if_set FLAG_GARBAGEFLAG, ShoalCave_LowTideStairsRoom_EventScript_ReceivedShoalSalt
=======
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_3, ShoalCave_LowTideStairsRoom_EventScript_ReceivedShoalSalt
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	giveitem ITEM_SHOAL_SALT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setmetatile 11, 11, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	special DrawWholeMapView
<<<<<<< HEAD
	setflag FLAG_GARBAGEFLAG
=======
	setflag FLAG_RECEIVED_SHOAL_SALT_3
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	releaseall
	end

ShoalCave_LowTideStairsRoom_EventScript_ReceivedShoalSalt::
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
	releaseall
	end

