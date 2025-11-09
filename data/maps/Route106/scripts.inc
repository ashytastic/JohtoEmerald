Route106_MapScripts::
<<<<<<< HEAD
	map_script MAP_SCRIPT_ON_TRANSITION, SetTimeEncounters
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte 0

Route106_EventScript_TrainerTipsSign::
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
	end

Route106_EventScript_Douglas::
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Kyla::
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Elliot::
<<<<<<< HEAD
	trainerbattle_single TRAINER_MASA, Route106_Text_ElliotIntro, Route106_Text_ElliotDefeated, Route106_EventScript_ElliotRegisterMatchCallAfterBattle
=======
	trainerbattle_single TRAINER_ELLIOT_1, Route106_Text_ElliotIntro, Route106_Text_ElliotDefeated, Route106_EventScript_ElliotRegisterMatchCallAfterBattle
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route106_EventScript_ElliotRematch
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
	release
	end

Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
<<<<<<< HEAD
	register_matchcall TRAINER_MASA
=======
	register_matchcall TRAINER_ELLIOT_1
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	release
	end

Route106_EventScript_ElliotRematch::
<<<<<<< HEAD
	trainerbattle_rematch TRAINER_MASA, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
=======
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Ned::
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_Text_TrainerTips:
	.string "TRAINER TIPS\p"
	.string "Advice on catching POKéMON with a ROD:\n"
	.string "Press the A Button if you get a bite.$"

