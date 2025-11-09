EventScript_PC::
	lockall
	setvar VAR_0x8004, PC_LOCATION_OTHER
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox Text_BootUpPC, MSGBOX_DEFAULT
	goto EventScript_PCMainMenu
	end

EventScript_PCMainMenu::
	message gText_WhichPCShouldBeAccessed
	waitmessage
	special ScriptMenu_CreatePCMultichoice
	waitstate
	goto EventScript_AccessPC
	end

EventScript_AccessPC::
	switch VAR_RESULT
	case 0, EventScript_AccessPokemonStorage
	case 1, EventScript_AccessPlayersPC
	case 2, EventScript_AccessHallOfFame
	case 3, EventScript_TurnOffPC
	case MULTI_B_PRESSED, EventScript_TurnOffPC
	end

EventScript_AccessPlayersPC::
	playse SE_PC_LOGIN
	msgbox gText_AccessedPlayersPC, MSGBOX_DEFAULT
	special PlayerPC
	waitstate
	goto EventScript_PCMainMenu
	end

EventScript_AccessPokemonStorage::
	playse SE_PC_LOGIN
<<<<<<< HEAD
	call_if_unset FLAG_SYS_PC_BILL, EventScript_AccessSomeonesPC
	call_if_set FLAG_SYS_PC_BILL, EventScript_AccessBillsPC
=======
	call_if_unset FLAG_SYS_PC_LANETTE, EventScript_AccessSomeonesPC
	call_if_set FLAG_SYS_PC_LANETTE, EventScript_AccessLanettesPC
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
	special ShowPokemonStorageSystemPC
	waitstate
	goto EventScript_PCMainMenu
	end

EventScript_AccessSomeonesPC::
	msgbox gText_AccessedSomeonesPC, MSGBOX_DEFAULT
	return

<<<<<<< HEAD
EventScript_AccessBillsPC::
	msgbox gText_AccessedBillsPC, MSGBOX_DEFAULT
=======
EventScript_AccessLanettesPC::
	msgbox gText_AccessedLanettesPC, MSGBOX_DEFAULT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	return

EventScript_TurnOffPC::
	setvar VAR_0x8004, PC_LOCATION_OTHER
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end

EventScript_AccessHallOfFame::
	goto_if_unset FLAG_SYS_GAME_CLEAR, EventScript_TurnOffPC
	playse SE_PC_LOGIN
	special AccessHallOfFamePC
	waitstate
	goto EventScript_AccessPC
	end
<<<<<<< HEAD
=======

EventScript_AccessPokemonBoxLink::
	playse SE_PC_LOGIN
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
	special ShowPokemonStorageSystemPC
	waitstate
	goto EventScript_TurnOffPC
	end
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
