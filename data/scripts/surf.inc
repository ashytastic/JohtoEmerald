EventScript_UseSurf::
<<<<<<< HEAD
	goto_if_unset FLAG_BADGE04_GET, EventScript_CantUseSurf
	checkpartymove MOVE_SURF
=======
	checkfieldmove FIELD_MOVE_SURF
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_EndUseSurf
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
<<<<<<< HEAD
	@msgbox gText_WantToUseSurf, MSGBOX_YESNO
	@goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
=======
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end
<<<<<<< HEAD

EventScript_CantUseSurf::
	@msgbox Text_CantUseSurf, MSGBOX_DEFAULT
	@closemessage
	releaseall
	end

=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
