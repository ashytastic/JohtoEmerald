ShoalCave_LowTideInnerRoom_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideInnerRoom_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalCave_LowTideInnerRoom_OnTransition
	.byte 0

ShoalCave_LowTideInnerRoom_OnTransition:
<<<<<<< HEAD
	goto_if_set FLAG_SYS_LAKE_OF_RAGE_TIDE, ShoalCave_LowTideInnerRoom_EventScript_SetHighTide
=======
	goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideInnerRoom_EventScript_SetHighTide
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	goto ShoalCave_LowTideInnerRoom_EventScript_SetLowTide

ShoalCave_LowTideInnerRoom_EventScript_SetHighTide::
	setmaplayoutindex LAYOUT_SHOAL_CAVE_HIGH_TIDE_INNER_ROOM
	end

ShoalCave_LowTideInnerRoom_EventScript_SetLowTide::
	setmaplayoutindex LAYOUT_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
	end

ShoalCave_LowTideInnerRoom_OnLoad:
	call ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles
	end

ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles::
<<<<<<< HEAD
	goto_if_set FLAG_GARBAGEFLAG, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2
	goto_if_set FLAG_SYS_LAKE_OF_RAGE_TIDE, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2
=======
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_1, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2
	goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	setmetatile 31, 8, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2
	end

ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2::
<<<<<<< HEAD
	goto_if_set FLAG_GARBAGEFLAG, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3
	goto_if_set FLAG_SYS_LAKE_OF_RAGE_TIDE, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3
=======
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_2, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3
	goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	setmetatile 14, 26, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3
	end

ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3::
<<<<<<< HEAD
	goto_if_set FLAG_GARBAGEFLAG, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4
=======
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_1, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	setmetatile 41, 20, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4
	end

ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4::
<<<<<<< HEAD
	goto_if_set FLAG_GARBAGEFLAG, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5
=======
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_2, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	setmetatile 41, 10, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5
	end

ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5::
<<<<<<< HEAD
	goto_if_set FLAG_GARBAGEFLAG, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6
=======
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_3, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	setmetatile 6, 9, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6
	end

ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6::
<<<<<<< HEAD
	goto_if_set FLAG_GARBAGEFLAG, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatilesEnd
=======
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_4, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatilesEnd
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	setmetatile 16, 13, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
	return

ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatilesEnd::
	return

ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1::
	lockall
<<<<<<< HEAD
	goto_if_set FLAG_GARBAGEFLAG, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
=======
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_1, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	giveitem ITEM_SHOAL_SHELL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setmetatile 41, 20, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	special DrawWholeMapView
<<<<<<< HEAD
	setflag FLAG_GARBAGEFLAG
=======
	setflag FLAG_RECEIVED_SHOAL_SHELL_1
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	releaseall
	end

ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell::
	msgbox ShoalCave_Text_WasShoallShellNowNothing, MSGBOX_DEFAULT
	releaseall
	end

ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2::
	lockall
<<<<<<< HEAD
	goto_if_set FLAG_GARBAGEFLAG, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
=======
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_2, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	giveitem ITEM_SHOAL_SHELL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setmetatile 41, 10, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	special DrawWholeMapView
<<<<<<< HEAD
	setflag FLAG_GARBAGEFLAG
=======
	setflag FLAG_RECEIVED_SHOAL_SHELL_2
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	releaseall
	end

ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3::
	lockall
<<<<<<< HEAD
	goto_if_set FLAG_GARBAGEFLAG, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
=======
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_3, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	giveitem ITEM_SHOAL_SHELL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setmetatile 6, 9, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	special DrawWholeMapView
<<<<<<< HEAD
	setflag FLAG_GARBAGEFLAG
=======
	setflag FLAG_RECEIVED_SHOAL_SHELL_3
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	releaseall
	end

ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4::
	lockall
<<<<<<< HEAD
	goto_if_set FLAG_GARBAGEFLAG, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
=======
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_4, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	giveitem ITEM_SHOAL_SHELL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setmetatile 16, 13, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	special DrawWholeMapView
<<<<<<< HEAD
	setflag FLAG_GARBAGEFLAG
=======
	setflag FLAG_RECEIVED_SHOAL_SHELL_4
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	releaseall
	end

ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1::
	lockall
<<<<<<< HEAD
	goto_if_set FLAG_GARBAGEFLAG, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt
=======
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_1, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	giveitem ITEM_SHOAL_SALT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setmetatile 31, 8, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	special DrawWholeMapView
<<<<<<< HEAD
	setflag FLAG_GARBAGEFLAG
=======
	setflag FLAG_RECEIVED_SHOAL_SALT_1
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	releaseall
	end

ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt::
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
	releaseall
	end

ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2::
	lockall
<<<<<<< HEAD
	goto_if_set FLAG_GARBAGEFLAG, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt
=======
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_2, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	giveitem ITEM_SHOAL_SALT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setmetatile 14, 26, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
	special DrawWholeMapView
<<<<<<< HEAD
	setflag FLAG_GARBAGEFLAG
=======
	setflag FLAG_RECEIVED_SHOAL_SALT_2
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	releaseall
	end
