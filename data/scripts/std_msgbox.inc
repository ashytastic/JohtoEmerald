Std_MsgboxNPC:
	lock
	faceplayer
	message NULL
	waitmessage
	waitbuttonpress
	release
	return

Std_MsgboxSign:
<<<<<<< HEAD
=======
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	lockall
	message NULL
	waitmessage
	waitbuttonpress
	releaseall
<<<<<<< HEAD
=======
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	return

Std_MsgboxDefault:
	message NULL
	waitmessage
	waitbuttonpress
	return

Std_MsgboxYesNo:
	message NULL
	waitmessage
	yesnobox 20, 8
	return

Std_MsgboxGetPoints:
	message NULL
	playfanfare MUS_OBTAIN_B_POINTS
	waitfanfare
	waitmessage
	return

@ Never used, pokenavcall is always used directly instead
Std_MsgboxPokenav:
	pokenavcall NULL
	waitmessage
	return

EventScript_UnusedReturn:
	return

Common_EventScript_SaveGame::
	special SaveGame
	waitstate
	return
