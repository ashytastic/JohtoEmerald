Route108_MapScripts::
<<<<<<< HEAD
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	map_script MAP_SCRIPT_ON_TRANSITION, SetTimeEncounters
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte 0

Route108_EventScript_Jerome::
	trainerbattle_single TRAINER_JEROME, Route108_Text_JeromeIntro, Route108_Text_JeromeDefeated
	msgbox Route108_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Matthew::
	trainerbattle_single TRAINER_MATTHEW, Route108_Text_MatthewIntro, Route108_Text_MatthewDefeated
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Tara::
	trainerbattle_single TRAINER_TARA, Route108_Text_TaraIntro, Route108_Text_TaraDefeated
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Missy::
	trainerbattle_single TRAINER_MISSY, Route108_Text_MissyIntro, Route108_Text_MissyDefeated
	msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Carolina::
<<<<<<< HEAD
	trainerbattle_single TRAINER_GRUNT_2, Route108_Text_CarolinaIntro, Route108_Text_CarolinaDefeated
=======
	trainerbattle_single TRAINER_CAROLINA, Route108_Text_CarolinaIntro, Route108_Text_CarolinaDefeated
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	msgbox Route108_Text_CarolinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Cory::
<<<<<<< HEAD
	trainerbattle_single TRAINER_GRUNT_29, Route108_Text_CoryIntro, Route108_Text_CoryDefeated, Route108_EventScript_CoryRegisterMatchCallAfterBattle
=======
	trainerbattle_single TRAINER_CORY_1, Route108_Text_CoryIntro, Route108_Text_CoryDefeated, Route108_EventScript_CoryRegisterMatchCallAfterBattle
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route108_EventScript_CoryRematch
	msgbox Route108_Text_CoryPostBattle, MSGBOX_DEFAULT
	release
	end

Route108_EventScript_CoryRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route108_Text_CoryRegister, MSGBOX_DEFAULT
<<<<<<< HEAD
	register_matchcall TRAINER_GRUNT_29
=======
	register_matchcall TRAINER_CORY_1
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	release
	end

Route108_EventScript_CoryRematch::
<<<<<<< HEAD
	trainerbattle_rematch TRAINER_GRUNT_29, Route108_Text_CoryRematchIntro, Route108_Text_CoryRematchDefeated
=======
	trainerbattle_rematch TRAINER_CORY_1, Route108_Text_CoryRematchIntro, Route108_Text_CoryRematchDefeated
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	msgbox Route108_Text_CoryRematchPostBattle, MSGBOX_AUTOCLOSE
	end

