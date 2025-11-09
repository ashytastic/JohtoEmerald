<<<<<<< HEAD
	@ Does nothing.
	.macro nop
	.byte 0x00
=======
	.set ALLOCATE_SCRIPT_CMD_TABLE, 0
	.include "data/script_cmd_table.inc"

	@ Does nothing.
	.macro nop
	.byte SCR_OP_NOP
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Does nothing.
	.macro nop1
<<<<<<< HEAD
	.byte 0x01
=======
	.byte SCR_OP_NOP1
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Terminates script execution.
	.macro end
<<<<<<< HEAD
	.byte 0x02
=======
	.byte SCR_OP_END
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Jumps back to after the last-executed call statement, and continues script execution from there.
	.macro return
<<<<<<< HEAD
	.byte 0x03
=======
	.byte SCR_OP_RETURN
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Jumps to destination and continues script execution from there. The location of the calling script is remembered and can be returned to later.
	.macro call destination:req
<<<<<<< HEAD
	.byte 0x04
=======
	.byte SCR_OP_CALL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \destination
	.endm

	@ Jumps to destination and continues script execution from there.
	.macro goto destination:req
<<<<<<< HEAD
	.byte 0x05
=======
	.byte SCR_OP_GOTO
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \destination
	.endm

	@ If the result of the last comparison matches condition (see Comparison operators), jumps to destination and continues script execution from there.
	.macro goto_if condition:req, destination:req
<<<<<<< HEAD
	.byte 0x06
=======
	.byte SCR_OP_GOTO_IF
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \condition
	.4byte \destination
	.endm

	@ If the result of the last comparison matches condition (see Comparison operators), calls destination.
	.macro call_if condition:req, destination:req
<<<<<<< HEAD
	.byte 0x07
=======
	.byte SCR_OP_CALL_IF
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \condition
	.4byte \destination
	.endm

	@ Jumps to the script in gStdScripts at index function.
	.macro gotostd function:req
<<<<<<< HEAD
	.byte 0x08
=======
	.byte SCR_OP_GOTO_STD
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \function
	.endm

	@ callstd function names
	STD_OBTAIN_ITEM = 0
	STD_FIND_ITEM = 1
	STD_OBTAIN_DECORATION = 7
	STD_REGISTER_MATCH_CALL = 8

	@ Calls the script in gStdScripts at index function.
	.macro callstd function:req
<<<<<<< HEAD
	.byte 0x09
=======
	.byte SCR_OP_CALL_STD
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \function
	.endm

	@ If the result of the last comparison matches condition (see Comparison operators), jumps to the script in gStdScripts at index function.
	.macro gotostd_if condition:req, function:req
<<<<<<< HEAD
	.byte 0x0a
=======
	.byte SCR_OP_GOTO_STD_IF
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \condition
	.byte \function
	.endm

	@ If the result of the last comparison matches condition (see Comparison operators), calls the script in gStdScripts at index function.
	.macro callstd_if condition:req, function:req
<<<<<<< HEAD
	.byte 0x0b
=======
	.byte SCR_OP_CALL_STD_IF
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \condition
	.byte \function
	.endm

	@ Equivalent to the 'return' command for a RAM script.
	.macro returnram
<<<<<<< HEAD
	.byte 0x0c
=======
	.byte SCR_OP_RETURNRAM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Equivalent to the 'end' command for a RAM script.
	.macro endram
<<<<<<< HEAD
	.byte 0x0d
=======
	.byte SCR_OP_ENDRAM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Sets the Mystery Event script status (MEVENT_STATUS_*).
	.macro setmysteryeventstatus value:req
<<<<<<< HEAD
	.byte 0x0e
=======
	.byte SCR_OP_SETMYSTERYEVENTSTATUS
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \value
	.endm

	@ Sets the value at the specified script data index to a fixed 4-byte value.
	.macro loadword destIndex:req, value:req
<<<<<<< HEAD
	.byte 0x0f
=======
	.byte SCR_OP_LOAD_WORD
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \destIndex
	.4byte \value
	.endm

	@ Sets the value at the specified script data index to a fixed byte value.
	.macro loadbyte destIndex:req, value:req
<<<<<<< HEAD
	.byte 0x10
=======
	.byte SCR_OP_LOAD_BYTE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \destIndex
	.byte \value
	.endm

	@ Sets the value at the specified pointer.
	.macro setptr value:req, ptr:req
<<<<<<< HEAD
	.byte 0x11
=======
	.byte SCR_OP_SETPTR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \value
	.4byte \ptr
	.endm

	@ Sets the value at the specified script data index to the value at pointer 'source'.
	.macro loadbytefromptr destIndex:req, source:req
<<<<<<< HEAD
	.byte 0x12
=======
	.byte SCR_OP_LOADBYTEFROMPTR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \destIndex
	.4byte \source
	.endm

	@ Sets the value at pointer 'destination' to the contents of the script data at 'srcIndex'.
	.macro setptrbyte srcIndex:req, destination:req
<<<<<<< HEAD
	.byte 0x13
=======
	.byte SCR_OP_SETPTRBYTE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \srcIndex
	.4byte \destination
	.endm

	@ Copies the contents of the script data from one index to another.
	.macro copylocal destIndex:req, srcIndex:req
<<<<<<< HEAD
	.byte 0x14
=======
	.byte SCR_OP_COPYLOCAL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \destIndex
	.byte \srcIndex
	.endm

	@ Copies the byte at source to destination, replacing whatever byte was previously there.
	.macro copybyte destination:req, source:req
<<<<<<< HEAD
	.byte 0x15
=======
	.byte SCR_OP_COPYBYTE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \destination
	.4byte \source
	.endm

	@ Changes the value of destination to value.
<<<<<<< HEAD
	.macro setvar destination:req, value:req
	.byte 0x16
=======
	.macro setvar destination:req, value:req, warn=TRUE
	.if \warn && ((\value >= VARS_START && \value <= VARS_END) || (\value >= SPECIAL_VARS_START && \value <= SPECIAL_VARS_END))
	.warning "setvar with a value that might be a VAR_ constant; did you mean copyvar instead?"
	.endif
	.byte SCR_OP_SETVAR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \destination
	.2byte \value
	.endm

	@ Changes the value of destination by adding value to it. Overflow is not prevented (0xFFFF + 1 = 0x0000).
	.macro addvar destination:req, value:req
<<<<<<< HEAD
	.byte 0x17
=======
	.byte SCR_OP_ADDVAR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \destination
	.2byte \value
	.endm

	@ Changes the value of destination by subtracting value to it. Overflow is not prevented (0x0000 - 1 = 0xFFFF).
	.macro subvar destination:req, value:req
<<<<<<< HEAD
	.byte 0x18
=======
	.byte SCR_OP_SUBVAR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \destination
	.2byte \value
	.endm

	@ Copies the value of source into destination.
	.macro copyvar destination:req, source:req
<<<<<<< HEAD
	.byte 0x19
=======
	.byte SCR_OP_COPYVAR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \destination
	.2byte \source
	.endm

	@ If source is not a variable, then this function acts like setvar. Otherwise, it acts like copyvar.
	.macro setorcopyvar destination:req, source:req
<<<<<<< HEAD
	.byte 0x1a
=======
	.byte SCR_OP_SETORCOPYVAR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \destination
	.2byte \source
	.endm

	@ Compares the values of the script data at indexes 'local1' and 'local2'.
	@ The result is stored in comparisonResult to be acted on by goto_if / call_if
	.macro compare_local_to_local local1:req, local2:req
<<<<<<< HEAD
	.byte 0x1b
=======
	.byte SCR_OP_COMPARE_LOCAL_TO_LOCAL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \local1
	.byte \local2
	.endm

	@ Compares the value of the script data at index 'local' to a fixed value.
	@ The result is stored in comparisonResult to be acted on by goto_if / call_if
	.macro compare_local_to_value local:req, value:req
<<<<<<< HEAD
	.byte 0x1c
=======
	.byte SCR_OP_COMPARE_LOCAL_TO_VALUE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \local
	.byte \value
	.endm

	@ Compares the value of the script data at index 'local' to the value at 'ptr'
	@ The result is stored in comparisonResult to be acted on by goto_if / call_if
	.macro compare_local_to_ptr local:req, ptr:req
<<<<<<< HEAD
	.byte 0x1d
=======
	.byte SCR_OP_COMPARE_LOCAL_TO_PTR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \local
	.4byte \ptr
	.endm

	@ Compares the value at 'ptr' to the value of the script data at index 'local'.
	@ The result is stored in comparisonResult to be acted on by goto_if / call_if
	.macro compare_ptr_to_local ptr:req, local:req
<<<<<<< HEAD
	.byte 0x1e
=======
	.byte SCR_OP_COMPARE_PTR_TO_LOCAL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \ptr
	.byte \local
	.endm

	@ Compares the value at 'ptr' to a fixed value.
	@ The result is stored in comparisonResult to be acted on by goto_if / call_if
	.macro compare_ptr_to_value ptr:req, value:req
<<<<<<< HEAD
	.byte 0x1f
=======
	.byte SCR_OP_COMPARE_PTR_TO_VALUE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \ptr
	.byte \value
	.endm

	@ Compares the value at 'ptr1' to the value at 'ptr2'.
	@ The result is stored in comparisonResult to be acted on by goto_if / call_if
	.macro compare_ptr_to_ptr ptr1:req, ptr2:req
<<<<<<< HEAD
	.byte 0x20
=======
	.byte SCR_OP_COMPARE_PTR_TO_PTR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \ptr1
	.4byte \ptr2
	.endm

	@ Compares the value of 'var' to a fixed value.
	@ The result is stored in comparisonResult to be acted on by goto_if / call_if
	.macro compare_var_to_value var:req, value:req
<<<<<<< HEAD
	.byte 0x21
=======
	.byte SCR_OP_COMPARE_VAR_TO_VALUE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \var
	.2byte \value
	.endm

	@ Compares the value of 'var1' to the value of 'var2'.
	@ The result is stored in comparisonResult to be acted on by goto_if / call_if
	.macro compare_var_to_var var1:req, var2:req
<<<<<<< HEAD
	.byte 0x22
=======
	.byte SCR_OP_COMPARE_VAR_TO_VAR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \var1
	.2byte \var2
	.endm

	@ Generic compare macro which attempts to deduce argument types based on their values
	@ Any values between VARS_START to VARS_END and SPECIAL_VARS_START to SPECIAL_VARS_END are considered event variable identifiers
	.macro compare var:req, arg:req
		.if ((\arg >= VARS_START && \arg <= VARS_END) || (\arg >= SPECIAL_VARS_START && \arg <= SPECIAL_VARS_END))
			compare_var_to_var \var, \arg
		.else
			compare_var_to_value \var, \arg
		.endif
	.endm

	@ Calls the native C function stored at func.
<<<<<<< HEAD
	.macro callnative func:req
	.byte 0x23
	.4byte \func
	.endm

	@ Replaces the script with the function stored at func. Execution returns to the bytecode script when func returns TRUE.
	.macro gotonative func:req
	.byte 0x24
	.4byte \func
=======
	@ 'callnative's should set 'requests_effects=1' if the native
	@ contains a call to 'Script_RequestEffects', which allows them
	@ to be analyzed by 'RunScriptImmediatelyUntilEffect'.
	.macro callnative func:req, requests_effects=0
	.byte SCR_OP_CALLNATIVE
	.if \requests_effects == 0
	.4byte \func
	.else
	.4byte \func + ROM_SIZE
	.endif
	.endm

	@ Replaces the script with the function stored at func. Execution returns to the bytecode script when func returns TRUE.
	.macro gotonative func:req, requests_effects=0
	.byte SCR_OP_GOTONATIVE
	.if \requests_effects == 0
	.4byte \func
	.else
	.4byte \func + ROM_SIZE
	.endif
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Calls a function listed in the table in data/specials.inc.
	.macro special function:req
<<<<<<< HEAD
	.byte 0x25
=======
	.byte SCR_OP_SPECIAL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte SPECIAL_\function
	.endm

	@ Calls a function listed in the table in data/specials.inc.
	@ That function's output (if any) will be written to the variable specified by 'output'.
	.macro specialvar output:req, function:req
<<<<<<< HEAD
	.byte 0x26
=======
	.byte SCR_OP_SPECIALVAR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \output
	.2byte SPECIAL_\function
	.endm

	@ Blocks script execution until a command or C code manually unblocks it. Generally used with specific
	@ commands and specials. Calling ScriptContext_Enable for instance will allow execution to continue.
	.macro waitstate
<<<<<<< HEAD
	.byte 0x27
=======
	.byte SCR_OP_WAITSTATE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Blocks script execution for frames. (Pokemon Emerald runs at just shy of 60 frames per second.)
	.macro delay frames:req
<<<<<<< HEAD
	.byte 0x28
=======
	.byte SCR_OP_DELAY
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \frames
	.endm

	@ Sets flag to TRUE.
	.macro setflag flag:req
<<<<<<< HEAD
	.byte 0x29
=======
	.byte SCR_OP_SETFLAG
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \flag
	.endm

	@ Sets flag to FALSE.
	.macro clearflag flag:req
<<<<<<< HEAD
	.byte 0x2a
=======
	.byte SCR_OP_CLEARFLAG
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \flag
	.endm

	@ Compares flag to TRUE and stores the result in comparisonResult to be used by goto_if, etc
	@ See additional _if_unset and _if_set macros
	.macro checkflag flag:req
<<<<<<< HEAD
	.byte 0x2b
=======
	.byte SCR_OP_CHECKFLAG
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \flag
	.endm

	@ Initializes the RTC`s local time offset to the given hour and minute.
	.macro initclock hour:req, minute:req
<<<<<<< HEAD
	.byte 0x2c
=======
	.byte SCR_OP_INITCLOCK
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \hour
	.2byte \minute
	.endm

	@ Updates local time using the RTC and runs time based events.
	.macro dotimebasedevents
<<<<<<< HEAD
	.byte 0x2d
=======
	.byte SCR_OP_DOTIMEBASEDEVENTS
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Sets the values of variables VAR_0x8000, VAR_0x8001, and VAR_0x8002 to the current hour, minute, and second.
	.macro gettime
<<<<<<< HEAD
	.byte 0x2e
=======
	.byte SCR_OP_GETTIME
	.endm

	@ Sets the values of variable VAR_0x8000 to the time of day according to those found in rtc.h.
	@ 0 = MORNING, 1 = DAY, 2 = EVENING, 3 = NIGHT
	.macro gettimeofday
	callnative ScrCmd_gettimeofday, requests_effects=1
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Plays the specified sound. Only one sound may play at a time, with newer ones interrupting older ones.
	.macro playse song:req
<<<<<<< HEAD
	.byte 0x2f
=======
	.byte SCR_OP_PLAYSE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \song
	.endm

	@ Blocks script execution until the currently-playing sound (triggered by playse) finishes playing.
	.macro waitse
<<<<<<< HEAD
	.byte 0x30
=======
	.byte SCR_OP_WAITSE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Plays the fanfare specified by the song number. If the specified song is not a fanfare it will instead play the first song in sFanfares.
	.macro playfanfare song:req
<<<<<<< HEAD
	.byte 0x31
=======
	.byte SCR_OP_PLAYFANFARE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \song
	.endm

	@ Blocks script execution until all currently-playing fanfares finish.
	.macro waitfanfare
<<<<<<< HEAD
	.byte 0x32
=======
	.byte SCR_OP_WAITFANFARE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Plays the specified song. If save_song is TRUE, the
	@ specified song will be saved as if savebgm was called with it.
	.macro playbgm song:req, save_song:req
<<<<<<< HEAD
	.byte 0x33
=======
	.byte SCR_OP_PLAYBGM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \song
	.byte \save_song
	.endm

	@ Saves the specified song to be played later. Saved music may be played when Overworld_PlaySpecialMapMusic is called. This occurs on
	@ exiting most warps.
	.macro savebgm song:req
<<<<<<< HEAD
	.byte 0x34
=======
	.byte SCR_OP_SAVEBGM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \song
	.endm

	@ Crossfades the currently-playing song into the map's default song.
	.macro fadedefaultbgm
<<<<<<< HEAD
	.byte 0x35
=======
	.byte SCR_OP_FADEDEFAULTBGM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Crossfades the currently-playing song into the specified song.
	.macro fadenewbgm song:req
<<<<<<< HEAD
	.byte 0x36
=======
	.byte SCR_OP_FADENEWBGM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \song
	.endm

	@ Fades out the currently-playing song.
	.macro fadeoutbgm speed:req
<<<<<<< HEAD
	.byte 0x37
=======
	.byte SCR_OP_FADEOUTBGM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \speed
	.endm

	@ Fades the previously-playing song back in.
	.macro fadeinbgm speed:req
<<<<<<< HEAD
	.byte 0x38
=======
	.byte SCR_OP_FADEINBGM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \speed
	.endm

	@ Helper macro for warp commands that formats their arguments.
	@ It allows warp macros to either provide 1. a valid id for which warp location to use,
	@ or 2. a pair of x/y coordinates to use. Both may be provided but at least one will be
	@ ignored by SetPlayerCoordsFromWarp. If none are provided it will use dummy arguments,
	@ and the warp will send the player to the center of the map.
	@ Examples of valid inputs for a warp command:
	@ - warp MAP, x, y
	@ - warp MAP, warpId
	@ - warp MAP
	@ - warp MAP, warpId, x, y
	.macro formatwarp map:req, a, b, c
	map \map
	.ifb \a @ No arguments provided, use dummy warpId and coords.
		.byte WARP_ID_NONE
		.2byte -1 @ x
		.2byte -1 @ y
	.else
	.ifb \b @ Only one argument provided, treat it as a warpId and use dummy coords.
		.byte \a   @ warpId
		.2byte -1  @ x
		.2byte -1  @ y
	.else
	.ifb \c @ Only two arguments provided, treat them as a coord pair and use dummy warpId.
		.byte WARP_ID_NONE
		.2byte \a  @ x
		.2byte \b  @ y
	.else @ All three arguments provided. Output them and let the warp sort out which to use.
		.byte \a  @ warpId
		.2byte \b @ x
		.2byte \c @ y
	.endif
	.endif
	.endif
	.endm


	@ Warps the player to the specified map.
	@ Warp commands can be given either the id of which warp location to go to on the destination map
	@ or a pair of x/y coordinates to go to directly on the destination map.
	.macro warp map:req, a, b, c
<<<<<<< HEAD
	.byte 0x39
=======
	.byte SCR_OP_WARP
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	formatwarp \map, \a, \b, \c
	.endm

	@ Warps the player to the specified map without playing a sound effect.
	@ Warp commands can be given either the id of which warp location to go to on the destination map
	@ or a pair of x/y coordinates to go to directly on the destination map.
	.macro warpsilent map:req, a, b, c
<<<<<<< HEAD
	.byte 0x3a
=======
	.byte SCR_OP_WARPSILENT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	formatwarp \map, \a, \b, \c
	.endm

	@ Warps the player to the specified map and plays a door opening animation before stepping upwards into it.
	@ Warp commands can be given either the id of which warp location to go to on the destination map
	@ or a pair of x/y coordinates to go to directly on the destination map.
	.macro warpdoor map:req, a, b, c
<<<<<<< HEAD
	.byte 0x3b
=======
	.byte SCR_OP_WARPDOOR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	formatwarp \map, \a, \b, \c
	.endm

	@ Warps the player to another map using a hole animation. If the specified map is MAP_UNDEFINED it will instead
	@ use the map set by setholewarp. In either case the target coordinates on the destination map will be the
	@ player's current position.
	.macro warphole map:req
<<<<<<< HEAD
	.byte 0x3c
=======
	.byte SCR_OP_WARPHOLE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	map \map
	.endm

	@ Warps the player to the specified map using a teleport effect. Effect is similar to warpspinenter but
	@ this warp has a fade out first and doesn't maintain the original facing direction.
	@ Warp commands can be given either the id of which warp location to go to on the destination map
	@ or a pair of x/y coordinates to go to directly on the destination map.
	.macro warpteleport map:req, a, b, c
<<<<<<< HEAD
	.byte 0x3d
=======
	.byte SCR_OP_WARPTELEPORT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	formatwarp \map, \a, \b, \c
	.endm

	@ Sets the warp destination to be used later.
	@ Warp commands can be given either the id of which warp location to go to on the destination map
	@ or a pair of x/y coordinates to go to directly on the destination map.
	.macro setwarp map:req, a, b, c
<<<<<<< HEAD
	.byte 0x3e
=======
	.byte SCR_OP_SETWARP
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	formatwarp \map, \a, \b, \c
	.endm

	@ Sets the dynamic warp destination. Warps with a destination map of MAP_DYNAMIC will target this destination.
	@ Warp commands can be given either the id of which warp location to go to on the destination map
	@ or a pair of x/y coordinates to go to directly on the destination map.
	.macro setdynamicwarp map:req, a, b, c
<<<<<<< HEAD
	.byte 0x3f
=======
	.byte SCR_OP_SETDYNAMICWARP
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	formatwarp \map, \a, \b, \c
	.endm

	@ Sets the destination that diving or emerging from a dive will take the player to. Note that this only
	@ applies if the current map does not have a dive/emerge connection. If it does have a corresponding
	@ map connection then that map and the player's current coordinates will be used as the destination instead.
	@ Warp commands can be given either the id of which warp location to go to on the destination map
	@ or a pair of x/y coordinates to go to directly on the destination map.
	.macro setdivewarp map:req, a, b, c
<<<<<<< HEAD
	.byte 0x40
=======
	.byte SCR_OP_SETDIVEWARP
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	formatwarp \map, \a, \b, \c
	.endm

	@ Sets the destination that falling into a hole will take the player to.
	@ While it does accept and set the x/y coordinates and warpId, they are ultimately ignored.
	@ This is only used to set the map the player should fall to. The exact location on the
	@ map to fall to is determined by warphole.
	@ Warp commands can be given either the id of which warp location to go to on the destination map
	@ or a pair of x/y coordinates to go to directly on the destination map.
	.macro setholewarp map:req, a=0, b=0, c
<<<<<<< HEAD
	.byte 0x41
	formatwarp \map, \a, \b, \c
	.endm

	@ Retrieves the object's zero-indexed x- and y-coordinates in the map, and stores them in the specified variables.
	.macro getplayerxy x:req, y:req
	.byte 0x42
=======
	.byte SCR_OP_SETHOLEWARP
	formatwarp \map, \a, \b, \c
	.endm

	@ Retrieves the player's zero-indexed x- and y-coordinates in the map, and stores them in the specified variables.
	.macro getplayerxy x:req, y:req
	.byte SCR_OP_GETPLAYERXY
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \x
	.2byte \y
	.endm

	@ Retrieves the number of Pokemon in the player's party, and stores that number in VAR_RESULT.
	.macro getpartysize
<<<<<<< HEAD
	.byte 0x43
=======
	.byte SCR_OP_GETPARTYSIZE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Attempts to add quantity of the specified item to the player's Bag. If the player has enough room, the item will
	@ be added and VAR_RESULT will be set to TRUE; otherwise, VAR_RESULT is set to FALSE.
	.macro additem itemId:req, quantity=1
<<<<<<< HEAD
	.byte 0x44
=======
	.byte SCR_OP_ADDITEM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \itemId
	.2byte \quantity
	.endm

	@ Removes quantity of the specified item from the player's Bag. If the player has fewer than 'quantity' in their bag
	@ then none will be removed and VAR_RESULT will be set to FALSE. Otherwise it will be set to TRUE.
	.macro removeitem itemId:req, quantity=1
<<<<<<< HEAD
	.byte 0x45
=======
	.byte SCR_OP_REMOVEITEM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \itemId
	.2byte \quantity
	.endm

	@ Checks if the player has enough space in their Bag to hold quantity more of the specified item. Sets VAR_RESULT to
	@ TRUE if there is room, or FALSE is there is no room.
	.macro checkitemspace itemId:req, quantity=1
<<<<<<< HEAD
	.byte 0x46
=======
	.byte SCR_OP_CHECKITEMSPACE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \itemId
	.2byte \quantity
	.endm

	@ Checks if the player has quantity or more of the specified item in their Bag. Sets VAR_RESULT to TRUE if the player has
	@ enough of the item, or FALSE if they have fewer than quantity of the item.
	.macro checkitem itemId:req, quantity=1
<<<<<<< HEAD
	.byte 0x47
=======
	.byte SCR_OP_CHECKITEM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \itemId
	.2byte \quantity
	.endm

	@ Checks which Bag pocket the specified item belongs in, and writes the pocket value (POCKET_*) to VAR_RESULT.
	@ This is used to show the name of the proper Bag pocket when the player receives an item via callstd.
	.macro checkitemtype itemId:req
<<<<<<< HEAD
	.byte 0x48
=======
	.byte SCR_OP_CHECKITEMTYPE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \itemId
	.endm

	@ Adds quantity of the specified item to the player's PC.
	.macro addpcitem itemId:req, quantity=1
<<<<<<< HEAD
	.byte 0x49
=======
	.byte SCR_OP_ADDPCITEM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \itemId
	.2byte \quantity
	.endm

	@ Checks for quantity of the specified item in the player's PC.
	.macro checkpcitem itemId:req, quantity=1
<<<<<<< HEAD
	.byte 0x4a
=======
	.byte SCR_OP_CHECKPCITEM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \itemId
	.2byte \quantity
	.endm

	@ Adds a decoration to the player's PC.
	.macro adddecoration decoration:req
<<<<<<< HEAD
	.byte 0x4b
=======
	.byte SCR_OP_ADDDECORATION
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \decoration
	.endm

	@ Removes a decoration from the player's PC.
	.macro removedecoration decoration:req
<<<<<<< HEAD
	.byte 0x4c
=======
	.byte SCR_OP_REMOVEDECORATION
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \decoration
	.endm

	@ Checks for decoration in the player's PC.
	.macro checkdecor decoration:req
<<<<<<< HEAD
	.byte 0x4d
=======
	.byte SCR_OP_CHECKDECOR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \decoration
	.endm

	@ Checks if the player has enough space in their PC to hold the decoration.
	@ Sets VAR_RESULT to TRUE if there is room, or FALSE is there is no room.
	.macro checkdecorspace decoration:req
<<<<<<< HEAD
	.byte 0x4e
=======
	.byte SCR_OP_CHECKDECORSPACE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \decoration
	.endm

	@ Applies the movement data at movements to the specified (localId) object. If no map is specified, then the current map is used.
	.macro applymovement localId:req, movements:req, map
		.ifb \map
<<<<<<< HEAD
			.byte 0x4f
=======
			.byte SCR_OP_APPLYMOVEMENT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
			.2byte \localId
			.4byte \movements
		.else
			@ Really only useful if the object has followed from one map to another (e.g. Wally during the catching event).
<<<<<<< HEAD
			.byte 0x50
=======
			.byte SCR_OP_APPLYMOVEMENTAT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
			.2byte \localId
			.4byte \movements
			map \map
		.endif
	.endm

	@ Blocks script execution until the movements being applied to the specified (localId) object finish.
<<<<<<< HEAD
	@ If localId is 0, then the id of the last-moved object will be used instead. If the specified object
	@ is not currently being manipulated with applymovement, then this command does nothing.
	@ If no map is specified, then the current map is used.
	.macro waitmovement localId:req, map
		.ifb \map
			.byte 0x51
			.2byte \localId
		.else
			.byte 0x52
=======
	@ If localId is LOCALID_NONE (0), then the id of the last-moved object will be used instead.
	@ If the specified object is not currently being manipulated with applymovement, then this command does nothing.
	@ If no map is specified, then the current map is used.
	.macro waitmovement localId=LOCALID_NONE, map
		.ifb \map
			.byte SCR_OP_WAITMOVEMENT
			.2byte \localId
		.else
			.byte SCR_OP_WAITMOVEMENTAT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
			.2byte \localId
			map \map
		.endif
	.endm

	@ Attempts to despawn the specified (localId) object on the specified map.
	@ It also sets the object's visibility flag if it has one.
	@ If no map is specified, then the current map is used.
	.macro removeobject localId:req, map
		.ifb \map
<<<<<<< HEAD
			.byte 0x53
			.2byte \localId
		.else
			.byte 0x54
=======
			.byte SCR_OP_REMOVEOBJECT
			.2byte \localId
		.else
			.byte SCR_OP_REMOVEOBJECTAT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
			.2byte \localId
			map \map
		.endif
	.endm

	@ Attempts to spawn the specified (localId) object the specified map.
	@ Note that unlike removeobject this does not modify the object's flag.
	@ If no map is specified, then the current map is used.
	.macro addobject localId:req, map
		.ifb \map
<<<<<<< HEAD
			.byte 0x55
			.2byte \localId
		.else
			.byte 0x56
=======
			.byte SCR_OP_ADDOBJECT
			.2byte \localId
		.else
			.byte SCR_OP_ADDOBJECTAT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
			.2byte \localId
			map \map
		.endif
	.endm

	@ Sets the specified (localId) object's position on the current map.
	.macro setobjectxy localId:req, x:req, y:req
<<<<<<< HEAD
	.byte 0x57
=======
	.byte SCR_OP_SETOBJECTXY
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \localId
	.2byte \x
	.2byte \y
	.endm

	@ Sets the specified object's invisibility to FALSE.
	.macro showobjectat localId:req, map:req
<<<<<<< HEAD
	.byte 0x58
=======
	.byte SCR_OP_SHOWOBJECTAT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \localId
	map \map
	.endm

<<<<<<< HEAD
	@ Sets the specified object's invisibility to TRUE.
	.macro hideobjectat localId:req, map:req
	.byte 0x59
=======
	@ Set the player object's invisibility to FALSE.
	.macro showplayer
	.byte SCR_OP_SHOWOBJECTAT
	.2byte LOCALID_PLAYER
	.byte 0 @ map group
	.byte 0 @ map num
	.endm

	@ Sets the specified object's invisibility to TRUE.
	.macro hideobjectat localId:req, map:req
	.byte SCR_OP_HIDEOBJECTAT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \localId
	map \map
	.endm

<<<<<<< HEAD
	@ Turns the currently selected object (if there is one) to face the player.
	.macro faceplayer
	.byte 0x5a
=======
	@ Set the player object's invisibility to TRUE.
	.macro hideplayer
	.byte SCR_OP_HIDEOBJECTAT
	.2byte LOCALID_PLAYER
	.byte 0 @ map group
	.byte 0 @ map num
	.endm

	@ Turns the currently selected object (if there is one) to face the player.
	.macro faceplayer
	.byte SCR_OP_FACEPLAYER
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Turns the specified object in the specified direction.
	.macro turnobject localId:req, direction:req
<<<<<<< HEAD
	.byte 0x5b
=======
	.byte SCR_OP_TURNOBJECT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \localId
	.byte \direction
	.endm

<<<<<<< HEAD
	@ Configures the arguments for a trainer battle, then jumps to the appropriate script in scripts/trainer_battle.inc
	.macro trainerbattle type:req, trainer:req, local_id:req, pointer1:req, pointer2, pointer3, pointer4
	.byte 0x5c
	.byte \type
	.2byte \trainer
	.2byte \local_id
	.if \type == TRAINER_BATTLE_SINGLE
		.4byte \pointer1 @ text
		.4byte \pointer2 @ text
	.elseif \type == TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC
		.4byte \pointer1 @ text
		.4byte \pointer2 @ text
		.4byte \pointer3 @ event script
	.elseif \type == TRAINER_BATTLE_CONTINUE_SCRIPT
		.4byte \pointer1 @ text
		.4byte \pointer2 @ text
		.4byte \pointer3 @ event script
	.elseif \type == TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT
		.4byte \pointer1 @ text
	.elseif \type == TRAINER_BATTLE_DOUBLE
		.4byte \pointer1 @ text
		.4byte \pointer2 @ text
		.4byte \pointer3 @ text
	.elseif \type == TRAINER_BATTLE_REMATCH
		.4byte \pointer1 @ text
		.4byte \pointer2 @ text
	.elseif \type == TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE
		.4byte \pointer1 @ text
		.4byte \pointer2 @ text
		.4byte \pointer3 @ text
		.4byte \pointer4 @ event script
	.elseif \type == TRAINER_BATTLE_REMATCH_DOUBLE
		.4byte \pointer1 @ text
		.4byte \pointer2 @ text
		.4byte \pointer3 @ text
	.elseif \type == TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC
		.4byte \pointer1 @ text
		.4byte \pointer2 @ text
		.4byte \pointer3 @ text
		.4byte \pointer4 @ event script
	.elseif \type == TRAINER_BATTLE_PYRAMID
		.4byte \pointer1 @ text
		.4byte \pointer2 @ text
	.elseif \type == TRAINER_BATTLE_SET_TRAINER_A
		.4byte \pointer1 @ text
		.4byte \pointer2 @ text
	.elseif \type == TRAINER_BATTLE_SET_TRAINER_B
		.4byte \pointer1 @ text
		.4byte \pointer2 @ text
	.elseif \type == TRAINER_BATTLE_HILL
		.4byte \pointer1 @ text
		.4byte \pointer2 @ text
	.endif
=======
	NULL = 0
	OBJ_ID_NONE = 0

	@ Configures the arguments for a trainer battle, then jumps to the appropriate script in scripts/trainer_battle.inc
	.macro trainerbattle type:req localIdA:req, trainer_a:req, intro_text_a:req, lose_text_a:req, event_script_a:req, localIdB:req, trainer_b:req, intro_text_b:req, lose_text_b:req, event_script_b:req, victory_text:req, cannot_battle:req, isDouble:req, playMusicA:req, playMusicB:req, isRematch:req
	.byte SCR_OP_TRAINERBATTLE
	.set trainerbattle_flags, 0
	.ifgt \isDouble; .set trainerbattle_flags, trainerbattle_flags | (1 << 0); .endif
	.ifgt \isRematch; .set trainerbattle_flags, trainerbattle_flags | (1 << 1); .endif
	.ifgt \playMusicA; .set trainerbattle_flags, trainerbattle_flags | (1 << 2); .endif
	.ifgt \playMusicB; .set trainerBattle_flags, trainerbattle_flags | (1 << 3); .endif
	.ifgt \type; .set trainerbattle_flags, trainerbattle_flags | (\type << 4); .endif
	.byte trainerbattle_flags
	.byte \localIdA             @ objEventLocalIdA
	.2byte \trainer_a           @ opponentA
	.4byte \intro_text_a        @ introTextA
	.4byte \lose_text_a         @ defeatTextA
	.4byte \event_script_a      @ retAddrA
	.byte  \localIdB            @ objEventLocalIdB
	.2byte \trainer_b           @ opponentB
	.4byte \intro_text_b        @ introTextB
	.4byte \lose_text_b         @ defeatTextB
	.4byte \event_script_b      @ retAddrB
	.4byte \victory_text        @ victoryText
	.4byte \cannot_battle       @ cannotBattle
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	NO_MUSIC = FALSE

	@ Starts a single trainer battle. Takes a trainer, intro text, loss text, and an optional event script.
	@ When used with an event script, you can also pass in an optional flag to disable music
	.macro trainerbattle_single trainer:req, intro_text:req, lose_text:req, event_script=FALSE, music=TRUE
	.if \event_script == FALSE
<<<<<<< HEAD
	trainerbattle TRAINER_BATTLE_SINGLE, \trainer, 0, \intro_text, \lose_text
	.elseif \music == TRUE
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, \trainer, 0, \intro_text, \lose_text, \event_script
	.else
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, \trainer, 0, \intro_text, \lose_text, \event_script
=======
	trainerbattle TRAINER_BATTLE_SINGLE, LOCALID_NONE, \trainer, \intro_text, \lose_text, NULL, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	.elseif \music == TRUE
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_NONE, \trainer, \intro_text, \lose_text, \event_script, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	.else
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, LOCALID_NONE, \trainer, \intro_text, \lose_text, \event_script, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endif
	.endm

	@ Starts a double trainer battle. Takes a trainer, intro text, loss text, text for when you have too few pokemon
	@ and an optional event script. When used with an event script you can pass in an optional flag to disable music
	.macro trainerbattle_double trainer:req, intro_text:req, lose_text:req, not_enough_pkmn_text:req, event_script=FALSE, music=TRUE
	.if \event_script == FALSE
<<<<<<< HEAD
	trainerbattle TRAINER_BATTLE_DOUBLE, \trainer, 0, \intro_text, \lose_text, \not_enough_pkmn_text
	.elseif \music == TRUE
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, \trainer, 0, \intro_text, \lose_text, \not_enough_pkmn_text, \event_script
	.else
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC, \trainer, 0, \intro_text, \lose_text, \not_enough_pkmn_text, \event_script
=======
	trainerbattle TRAINER_BATTLE_DOUBLE, LOCALID_NONE, \trainer, \intro_text, \lose_text, NULL, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, \not_enough_pkmn_text, TRUE, TRUE, FALSE, FALSE
	.elseif \music == TRUE
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE, LOCALID_NONE, \trainer, \intro_text, \lose_text, \event_script, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, \not_enough_pkmn_text, TRUE, TRUE, FALSE, FALSE
	.else
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC, LOCALID_NONE, \trainer, \intro_text, \lose_text, \event_script, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, \not_enough_pkmn_text, TRUE, FALSE, FALSE, FALSE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endif
	.endm

	@ Starts a rematch battle. Takes a trainer, intro text and loss text
	.macro trainerbattle_rematch trainer:req, intro_text:req, lose_text:req
<<<<<<< HEAD
	trainerbattle TRAINER_BATTLE_REMATCH, \trainer, 0, \intro_text, \lose_text
=======
	trainerbattle TRAINER_BATTLE_REMATCH, LOCALID_NONE, \trainer, \intro_text, \lose_text, NULL, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, TRUE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Starts a rematch double battle. Takes a trainer, intro text, loss text, and text for when you have too few pokemon
	.macro trainerbattle_rematch_double trainer:req, intro_text:req, lose_text:req, not_enough_pkmn_text:req
<<<<<<< HEAD
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, \trainer, 0, \intro_text, \lose_text, \not_enough_pkmn_text
=======
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, LOCALID_NONE, \trainer, \intro_text, \lose_text, NULL, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, \not_enough_pkmn_text, FALSE, TRUE, FALSE, TRUE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Starts a trainer battle, skipping intro text. Takes a trainer and loss text
	.macro trainerbattle_no_intro trainer:req, lose_text:req
<<<<<<< HEAD
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, \trainer, 0, \lose_text
	.endm

=======
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, LOCALID_NONE, \trainer, NULL, \lose_text, NULL, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	.endm

	@ Starts a double battle with the player against two trainers
	@ Takes two trainers and defeat text for each
	.macro trainerbattle_two_trainers trainer_a:req, lose_text_a:req, trainer_b:req, lose_text_b:req
	trainerbattle TRAINER_BATTLE_TWO_TRAINERS_NO_INTRO, OBJ_ID_NONE, \trainer_a, NULL, \lose_text_a, NULL, OBJ_ID_NONE, \trainer_b, NULL, \lose_text_b, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	.endm
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

	@ Starts a trainer battle using the battle information stored in RAM (usually by the scripts in trainer_battle.inc, which
	@ are run by trainerbattle), and blocks script execution until the battle finishes.
	.macro dotrainerbattle
<<<<<<< HEAD
	.byte 0x5d
=======
	.byte SCR_OP_DOTRAINERBATTLE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Goes to address after the trainerbattle command (called by the battle functions, see battle_setup.c)
	.macro gotopostbattlescript
<<<<<<< HEAD
	.byte 0x5e
=======
	.byte SCR_OP_GOTOPOSTBATTLESCRIPT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Goes to address specified in the trainerbattle command (called by the battle functions, see battle_setup.c)
	.macro gotobeatenscript
<<<<<<< HEAD
	.byte 0x5f
=======
	.byte SCR_OP_GOTOBEATENSCRIPT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Checks if the trainer has been defeated by the player (by comparing the flag 'trainer + TRAINER_FLAGS_START' to TRUE).
	.macro checktrainerflag trainer:req
<<<<<<< HEAD
	.byte 0x60
=======
	.byte SCR_OP_CHECKTRAINERFLAG
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \trainer
	.endm

	@ Sets the trainer flag (trainer + TRAINER_FLAGS_START) to TRUE (defeated).
	.macro settrainerflag trainer:req
<<<<<<< HEAD
	.byte 0x61
=======
	.byte SCR_OP_SETTRAINERFLAG
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \trainer
	.endm

	@ Sets the trainer flag (trainer + TRAINER_FLAGS_START) to FALSE (not defeated).
	.macro cleartrainerflag trainer:req
<<<<<<< HEAD
	.byte 0x62
=======
	.byte SCR_OP_CLEARTRAINERFLAG
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \trainer
	.endm

	@ Sets the coordinates of an object's template, so that if the sprite goes off screen
	@ it'll still be there when it comes back on screen.
	.macro setobjectxyperm localId:req, x:req, y:req
<<<<<<< HEAD
	.byte 0x63
=======
	.byte SCR_OP_SETOBJECTXYPERM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \localId
	.2byte \x
	.2byte \y
	.endm

	@ Copies a live object event's xy position to its template, so that if the sprite goes off screen
	@ it'll still be there when it comes back on screen.
	.macro copyobjectxytoperm localId:req
<<<<<<< HEAD
	.byte 0x64
=======
	.byte SCR_OP_COPYOBJECTXYTOPERM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \localId
	.endm

	@ Sets the movement type (MOVEMENT_TYPE_*) for an object's template.
	.macro setobjectmovementtype localId:req, movementType:req
<<<<<<< HEAD
	.byte 0x65
=======
	.byte SCR_OP_SETOBJECTMOVEMENTTYPE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \localId
	.byte \movementType
	.endm

	@ If a standard message box (or its text) is being drawn on-screen, this command blocks script execution until the
	@ box and its text have been fully drawn.
	.macro waitmessage
<<<<<<< HEAD
	.byte 0x66
=======
	.byte SCR_OP_WAITMESSAGE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Starts displaying a standard message box containing the specified text. If text is a pointer, then the string at
	@ that offset will be loaded and used. If text is NULL, then the value of script data 0 will be treated as
	@ a pointer to the text. The 'loadword 0' in msgbox sets this value, for instance.
	.macro message text:req
<<<<<<< HEAD
	.byte 0x67
=======
	.byte SCR_OP_MESSAGE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \text
	.endm

	@ Closes the current message box.
	.macro closemessage
<<<<<<< HEAD
	.byte 0x68
=======
	.byte SCR_OP_CLOSEMESSAGE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Freezes all objects immediately except the player. The player is frozen once their movement is finished.
	.macro lockall
<<<<<<< HEAD
	.byte 0x69
=======
	.byte SCR_OP_LOCKALL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Freezes all objects immediately except the player and the selected object. The player and selected object are frozen once their movement is finished.
	.macro lock
<<<<<<< HEAD
	.byte 0x6a
=======
	.byte SCR_OP_LOCK
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Resumes normal movement for all objects on-screen, and closes any standard message boxes that are still open.
	.macro releaseall
<<<<<<< HEAD
	.byte 0x6b
=======
	.byte SCR_OP_RELEASEALL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Resumes normal movement for the selected object (if there is one) and the player. Also closes any standard message boxes that are still open.
	.macro release
<<<<<<< HEAD
	.byte 0x6c
=======
	.byte SCR_OP_RELEASE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Blocks script execution until the player presses the A or B button.
	.macro waitbuttonpress
<<<<<<< HEAD
	.byte 0x6d
=======
	.byte SCR_OP_WAITBUTTONPRESS
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Displays a YES/NO multichoice box at the specified coordinates, and blocks script execution until the user makes a selection.
	@ Their selection is stored in VAR_RESULT as NO (0) or YES (1). Pressing B is equivalent to answering NO
	.macro yesnobox x:req, y:req
<<<<<<< HEAD
	.byte 0x6e
=======
	.byte SCR_OP_YESNOBOX
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \x
	.byte \y
	.endm

	@ Displays a multichoice box from which the user can choose a selection, and blocks script execution until a selection is made.
	@ Lists of options are predefined (sMultichoiceLists) and the one to be used is specified with multichoiceId.
	@ If ignoreBPress is set to a non-zero value, then the user will not be allowed to back out of the multichoice with the B button.
	.macro multichoice x:req, y:req, multichoiceId:req, ignoreBPress:req
<<<<<<< HEAD
	.byte 0x6f
=======
	.byte SCR_OP_MULTICHOICE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \x
	.byte \y
	.byte \multichoiceId
	.byte \ignoreBPress
	.endm

	@ Displays a multichoice box from which the user can choose a selection, and blocks script execution until a selection is made.
	@ Lists of options are predefined (sMultichoiceLists) and the one to be used is specified with multichoiceId.
	@ The default argument determines the initial position of the cursor when the box is first opened; it is zero-indexed, and if it is too large, it is treated as 0.
	@ If ignoreBPress is set to a non-zero value, then the user will not be allowed to back out of the multichoice with the B button.
	.macro multichoicedefault x:req, y:req, multichoiceId:req, default:req, ignoreBPress:req
<<<<<<< HEAD
	.byte 0x70
=======
	.byte SCR_OP_MULTICHOICEDEFAULT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \x
	.byte \y
	.byte \multichoiceId
	.byte \default
	.byte \ignoreBPress
	.endm

	@ Displays a multichoice box from which the user can choose a selection, and blocks script execution until a selection is made.
	@ Lists of options are predefined (sMultichoiceLists) and the one to be used is specified with multichoiceId.
	@ The per_row argument determines how many list items will be shown on a single row of the box.
	@ If ignoreBPress is set to a non-zero value, then the user will not be allowed to back out of the multichoice with the B button.
	.macro multichoicegrid x:req, y:req, multichoiceId:req, per_row:req, ignoreBPress:req
<<<<<<< HEAD
	.byte 0x71
=======
	.byte SCR_OP_MULTICHOICEGRID
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \x
	.byte \y
	.byte \multichoiceId
	.byte \per_row
	.byte \ignoreBPress
	.endm

	@ Nopped in Emerald.
	.macro drawbox
<<<<<<< HEAD
	.byte 0x72
=======
	.byte SCR_OP_DRAWBOX
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Nopped in Emerald, but still consumes parameters.
	.macro erasebox left:req, top:req, right:req, bottom:req
<<<<<<< HEAD
	.byte 0x73
=======
	.byte SCR_OP_ERASEBOX
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \left
	.byte \top
	.byte \right
	.byte \bottom
	.endm

	@ Nopped in Emerald, but still consumes parameters.
	.macro drawboxtext left:req, top:req, multichoiceId:req, ignoreBPress:req
<<<<<<< HEAD
	.byte 0x74
=======
	.byte SCR_OP_DRAWBOXTEXT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \left
	.byte \top
	.byte \multichoiceId
	.byte \ignoreBPress
	.endm

	@ Displays a box containing the front sprite for the specified Pokemon species.
	.macro showmonpic species:req, x:req, y:req
<<<<<<< HEAD
	.byte 0x75
=======
	.byte SCR_OP_SHOWMONPIC
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \species
	.byte \x
	.byte \y
	.endm

	@ Hides the box displayed by showmonpic.
	.macro hidemonpic
<<<<<<< HEAD
	.byte 0x76
=======
	.byte SCR_OP_HIDEMONPIC
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Draws an image of the winner of the contest. winnerId is any CONTEST_WINNER_* constant.
	.macro showcontestpainting winnerId:req
<<<<<<< HEAD
	.byte 0x77
=======
	.byte SCR_OP_SHOWCONTESTPAINTING
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \winnerId
	.endm

	@ Displays the given string as braille text in a standard message box. The string should use the .braille directive
	@ to convert text to braille, and be preceded by brailleformat. The brailleformat data is skipped over (in RS, these
	@ bytes determined the box's size and position, but in Emerald these are calculated automatically).
	.macro braillemessage text:req
<<<<<<< HEAD
	.byte 0x78
=======
	.byte SCR_OP_BRAILLEMESSAGE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \text
	.endm

	@ Formatting for the braille window, to be put at the start of a pointer used by braillemessage.
	@ These are from RS and are ignored in Emerald (see ScrCmd_braillemessage, and comment above)
	.macro brailleformat winLeft:req, winTop:req, winRight:req, winBottom:req, textLeft:req, textTop:req
	.byte \winLeft
	.byte \winTop
	.byte \winRight
	.byte \winBottom
	.byte \textLeft
	.byte \textTop
	.endm

<<<<<<< HEAD
	@ Gives the player a Pokémon of the specified species and level, holding the specified item. The trailing 0s are unused parameters.
	@ VAR_RESULT will be set to MON_GIVEN_TO_PARTY, MON_GIVEN_TO_PC, or MON_CANT_GIVE depending on the outcome.
	.macro givemon species:req, level:req, item=ITEM_NONE
	.byte 0x79
	.2byte \species
	.byte \level
	.2byte \item
	.4byte 0
	.4byte 0
	.byte 0
=======
	@ Gives the player a Pokémon of the specified species and level, and allows to customize extra parameters.
	@ VAR_RESULT will be set to MON_GIVEN_TO_PARTY, MON_GIVEN_TO_PC, or MON_CANT_GIVE depending on the outcome.
	.macro givemon species:req, level:req, item, ball, nature, abilityNum, gender, hpEv, atkEv, defEv, speedEv, spAtkEv, spDefEv, hpIv, atkIv, defIv, speedIv, spAtkIv, spDefIv, move1, move2, move3, move4, shinyMode, gmaxFactor, teraType, dmaxLevel
	callnative ScrCmd_createmon, requests_effects=1
	.byte 0
	.byte PARTY_SIZE @ assign to first empty slot
	.set givemon_flags, 0
	.2byte \species
	.2byte \level
	.ifnb \item; .set givemon_flags, givemon_flags | (1 << 0); .endif
	.ifnb \ball; .set givemon_flags, givemon_flags | (1 << 1); .endif
	.ifnb \nature; .set givemon_flags, givemon_flags | (1 << 2); .endif
	.ifnb \abilityNum; .set givemon_flags, givemon_flags | (1 << 3); .endif
	.ifnb \gender; .set givemon_flags, givemon_flags | (1 << 4); .endif
	.ifnb \hpEv; .set givemon_flags, givemon_flags | (1 << 5); .endif
	.ifnb \atkEv; .set givemon_flags, givemon_flags | (1 << 6); .endif
	.ifnb \defEv; .set givemon_flags, givemon_flags | (1 << 7); .endif
	.ifnb \speedEv; .set givemon_flags, givemon_flags | (1 << 8); .endif
	.ifnb \spAtkEv; .set givemon_flags, givemon_flags | (1 << 9); .endif
	.ifnb \spDefEv; .set givemon_flags, givemon_flags | (1 << 10); .endif
	.ifnb \hpIv; .set givemon_flags, givemon_flags | (1 << 11); .endif
	.ifnb \atkIv; .set givemon_flags, givemon_flags | (1 << 12); .endif
	.ifnb \defIv; .set givemon_flags, givemon_flags | (1 << 13); .endif
	.ifnb \speedIv; .set givemon_flags, givemon_flags | (1 << 14); .endif
	.ifnb \spAtkIv; .set givemon_flags, givemon_flags | (1 << 15); .endif
	.ifnb \spDefIv; .set givemon_flags, givemon_flags | (1 << 16); .endif
	.ifnb \move1; .set givemon_flags, givemon_flags | (1 << 17); .endif
	.ifnb \move2; .set givemon_flags, givemon_flags | (1 << 18); .endif
	.ifnb \move3; .set givemon_flags, givemon_flags | (1 << 19); .endif
	.ifnb \move4; .set givemon_flags, givemon_flags | (1 << 20); .endif
	.ifnb \shinyMode; .set givemon_flags, givemon_flags | (1 << 21); .endif
	.ifnb \gmaxFactor; .set givemon_flags, givemon_flags | (1 << 22); .endif
	.ifnb \teraType; .set givemon_flags, givemon_flags | (1 << 23); .endif
	.ifnb \dmaxLevel; .set givemon_flags, givemon_flags | (1 << 24); .endif
	.4byte givemon_flags
	.ifnb \item; .2byte \item; .endif
	.ifnb \ball; .2byte \ball; .endif
	.ifnb \nature; .2byte \nature; .endif
	.ifnb \abilityNum; .2byte \abilityNum; .endif
	.ifnb \gender; .2byte \gender; .endif
	.ifnb \hpEv; .2byte \hpEv; .endif
	.ifnb \atkEv; .2byte \atkEv; .endif
	.ifnb \defEv; .2byte \defEv; .endif
	.ifnb \speedEv; .2byte \speedEv; .endif
	.ifnb \spAtkEv; .2byte \spAtkEv; .endif
	.ifnb \spDefEv; .2byte \spDefEv; .endif
	.ifnb \hpIv; .2byte \hpIv; .endif
	.ifnb \atkIv; .2byte \atkIv; .endif
	.ifnb \defIv; .2byte \defIv; .endif
	.ifnb \speedIv; .2byte \speedIv; .endif
	.ifnb \spAtkIv; .2byte \spAtkIv; .endif
	.ifnb \spDefIv; .2byte \spDefIv; .endif
	.ifnb \move1; .2byte \move1; .endif
	.ifnb \move2; .2byte \move2; .endif
	.ifnb \move3; .2byte \move3; .endif
	.ifnb \move4; .2byte \move4; .endif
	.ifnb \shinyMode; .2byte \shinyMode; .endif
	.ifnb \gmaxFactor; .2byte \gmaxFactor; .endif
	.ifnb \teraType; .2byte \teraType; .endif
	.ifnb \dmaxLevel; .2byte \dmaxLevel; .endif
	.endm

	@ creates a mon for a given party and slot
	@ otherwise
	.macro createmon side:req, slot:req, species:req, level:req, item, ball, nature, abilityNum, gender, hpEv, atkEv, defEv, speedEv, spAtkEv, spDefEv, hpIv, atkIv, defIv, speedIv, spAtkIv, spDefIv, move1, move2, move3, move4, shinyMode, gmaxFactor, teraType, dmaxLevel
	callnative ScrCmd_createmon, requests_effects=1
	.byte \side	 @ 0 - player, 1 - opponent
	.byte \slot	 @ 0-5
	.set givemon_flags, 0
	.2byte \species
	.2byte \level
	.ifnb \item; .set givemon_flags, givemon_flags | (1 << 0); .endif
	.ifnb \ball; .set givemon_flags, givemon_flags | (1 << 1); .endif
	.ifnb \nature; .set givemon_flags, givemon_flags | (1 << 2); .endif
	.ifnb \abilityNum; .set givemon_flags, givemon_flags | (1 << 3); .endif
	.ifnb \gender; .set givemon_flags, givemon_flags | (1 << 4); .endif
	.ifnb \hpEv; .set givemon_flags, givemon_flags | (1 << 5); .endif
	.ifnb \atkEv; .set givemon_flags, givemon_flags | (1 << 6); .endif
	.ifnb \defEv; .set givemon_flags, givemon_flags | (1 << 7); .endif
	.ifnb \speedEv; .set givemon_flags, givemon_flags | (1 << 8); .endif
	.ifnb \spAtkEv; .set givemon_flags, givemon_flags | (1 << 9); .endif
	.ifnb \spDefEv; .set givemon_flags, givemon_flags | (1 << 10); .endif
	.ifnb \hpIv; .set givemon_flags, givemon_flags | (1 << 11); .endif
	.ifnb \atkIv; .set givemon_flags, givemon_flags | (1 << 12); .endif
	.ifnb \defIv; .set givemon_flags, givemon_flags | (1 << 13); .endif
	.ifnb \speedIv; .set givemon_flags, givemon_flags | (1 << 14); .endif
	.ifnb \spAtkIv; .set givemon_flags, givemon_flags | (1 << 15); .endif
	.ifnb \spDefIv; .set givemon_flags, givemon_flags | (1 << 16); .endif
	.ifnb \move1; .set givemon_flags, givemon_flags | (1 << 17); .endif
	.ifnb \move2; .set givemon_flags, givemon_flags | (1 << 18); .endif
	.ifnb \move3; .set givemon_flags, givemon_flags | (1 << 19); .endif
	.ifnb \move4; .set givemon_flags, givemon_flags | (1 << 20); .endif
	.ifnb \shinyMode; .set givemon_flags, givemon_flags | (1 << 21); .endif
	.ifnb \gmaxFactor; .set givemon_flags, givemon_flags | (1 << 22); .endif
	.ifnb \teraType; .set givemon_flags, givemon_flags | (1 << 23); .endif
	.ifnb \dmaxLevel; .set givemon_flags, givemon_flags | (1 << 24); .endif
	.4byte givemon_flags
	.ifnb \item; .2byte \item; .endif
	.ifnb \ball; .2byte \ball; .endif
	.ifnb \nature; .2byte \nature; .endif
	.ifnb \abilityNum; .2byte \abilityNum; .endif
	.ifnb \gender; .2byte \gender; .endif
	.ifnb \hpEv; .2byte \hpEv; .endif
	.ifnb \atkEv; .2byte \atkEv; .endif
	.ifnb \defEv; .2byte \defEv; .endif
	.ifnb \speedEv; .2byte \speedEv; .endif
	.ifnb \spAtkEv; .2byte \spAtkEv; .endif
	.ifnb \spDefEv; .2byte \spDefEv; .endif
	.ifnb \hpIv; .2byte \hpIv; .endif
	.ifnb \atkIv; .2byte \atkIv; .endif
	.ifnb \defIv; .2byte \defIv; .endif
	.ifnb \speedIv; .2byte \speedIv; .endif
	.ifnb \spAtkIv; .2byte \spAtkIv; .endif
	.ifnb \spDefIv; .2byte \spDefIv; .endif
	.ifnb \move1; .2byte \move1; .endif
	.ifnb \move2; .2byte \move2; .endif
	.ifnb \move3; .2byte \move3; .endif
	.ifnb \move4; .2byte \move4; .endif
	.ifnb \shinyMode; .2byte \shinyMode; .endif
	.ifnb \gmaxFactor; .2byte \gmaxFactor; .endif
	.ifnb \teraType; .2byte \teraType; .endif
	.ifnb \dmaxLevel; .2byte \dmaxLevel; .endif
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Gives the player an Egg of the specified species.
	@ VAR_RESULT will be set to MON_GIVEN_TO_PARTY, MON_GIVEN_TO_PC, or MON_CANT_GIVE depending on the outcome.
	.macro giveegg species:req
<<<<<<< HEAD
	.byte 0x7a
=======
	.byte SCR_OP_GIVEEGG
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \species
	.endm

	@ Replaces the move at 'slot' of the Pokémon in the player's party at 'partyIndex' with the specified move.
	@ If a value greater than PARTY_SIZE is given for partyIndex it will use the last Pokémon in the party instead.
	@ Note that this means in vanilla a value equal to PARTY_SIZE for partyIndex will go out of bounds.
	.macro setmonmove partyIndex:req, slot:req, move:req
<<<<<<< HEAD
	.byte 0x7b
=======
	.byte SCR_OP_SETMONMOVE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \partyIndex
	.byte \slot
	.2byte \move
	.endm

<<<<<<< HEAD
	@ Checks if at least one Pokemon in the player's party knows the specified move. If so, VAR_RESULT is set to the
	@ (zero-indexed) slot number of the first Pokemon that knows the move. If not, VAR_RESULT is set to PARTY_SIZE.
	@ VAR_0x8004 is also set to this Pokemon's species.
	.macro checkpartymove move:req
	.byte 0x7c
	.2byte \move
=======
	@ Checks if at least one Pokemon in the player's party knows the specified field move and if the field move is unlocked. If so, VAR_RESULT is set to the
	@ (zero-indexed) slot number of the first Pokemon that knows the move. If not, VAR_RESULT is set to PARTY_SIZE.
	@ VAR_0x8004 is also set to this Pokemon's species.
	.macro checkfieldmove fieldMove:req, checkUnlocked=FALSE
	.byte SCR_OP_CHECKFIELDMOVE
	.byte \fieldMove
	.byte \checkUnlocked
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Converts STR_VAR_1, STR_VAR_2, or STR_VAR_3 to its corresponding index into sScriptStringVars (0, 1, or 2).
	@ If given anything else it will output it directly.
	@ Note: Because the STR_VAR_# arguments given to this macro are not part of a processed string they are not
	@       replaced with their charmap values, they are just passed as the literal characters "STR_VAR_#".
	.macro stringvar id:req
	.if \id == STR_VAR_1
		.byte 0
	.elseif \id == STR_VAR_2
		.byte 1
	.elseif \id == STR_VAR_3
		.byte 2
	.else
		.byte \id
	.endif
	.endm

	@ Writes the name of the given Pokemon species to the specified buffer.
	.macro bufferspeciesname stringVarId:req, species:req
<<<<<<< HEAD
	.byte 0x7d
=======
	.byte SCR_OP_BUFFERSPECIESNAME
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	stringvar \stringVarId
	.2byte \species
	.endm

	@ Writes the name of the species of the first Pokemon in the player's party to the specified buffer.
	.macro bufferleadmonspeciesname stringVarId:req
<<<<<<< HEAD
	.byte 0x7e
=======
	.byte SCR_OP_BUFFERLEADMONSPECIESNAME
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	stringvar \stringVarId
	.endm

	@ Writes the nickname of the Pokemon in 'slot' (zero-indexed) of the player's party to the specified buffer.
	@ If an empty or invalid slot is specified, ten spaces ("") are written to the buffer.
	.macro bufferpartymonnick stringVarId:req, slot:req
<<<<<<< HEAD
	.byte 0x7f
=======
	.byte SCR_OP_BUFFERPARTYMONNICK
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	stringvar \stringVarId
	.2byte \slot
	.endm

	@ Writes the name of the specified item to the specified buffer. If itemId is >= ITEMS_COUNT,
	@ then the name of ITEM_NONE ("????????") is buffered instead.
	.macro bufferitemname stringVarId:req, item:req
<<<<<<< HEAD
	.byte 0x80
=======
	.byte SCR_OP_BUFFERITEMNAME
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	stringvar \stringVarId
	.2byte \item
	.endm

	@ Writes the name of the specified decoration to the specified buffer.
	.macro bufferdecorationname stringVarId:req, decoration:req
<<<<<<< HEAD
	.byte 0x81
=======
	.byte SCR_OP_BUFFERDECORATIONNAME
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	stringvar \stringVarId
	.2byte \decoration
	.endm

	@ Writes the name of the specified move to the specified buffer.
	.macro buffermovename stringVarId:req, move:req
<<<<<<< HEAD
	.byte 0x82
=======
	.byte SCR_OP_BUFFERMOVENAME
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	stringvar \stringVarId
	.2byte \move
	.endm

	@ Converts the value of input to a decimal string, and writes that string to the specified buffer.
	.macro buffernumberstring stringVarId:req, input:req
<<<<<<< HEAD
	.byte 0x83
=======
	.byte SCR_OP_BUFFERNUMBERSTRING
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	stringvar \stringVarId
	.2byte \input
	.endm

	@ Writes the given standard string (STDSTRING_*) to the specified buffer. Invalid std string ids are not handled.
	.macro bufferstdstring stringVarId:req, index:req
<<<<<<< HEAD
	.byte 0x84
=======
	.byte SCR_OP_BUFFERSTDSTRING
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	stringvar \stringVarId
	.2byte \index
	.endm

	@ Copies the string at the given pointer to the specified buffer.
	.macro bufferstring stringVarId:req, text:req
<<<<<<< HEAD
	.byte 0x85
=======
	.byte SCR_OP_BUFFERSTRING
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	stringvar \stringVarId
	.4byte \text
	.endm

	@ Opens the Pokemart system, offering the specified products for sale.
	@ Products should be a list of .2byte item values preceded by an .align 2
	.macro pokemart products:req
<<<<<<< HEAD
	.byte 0x86
	.4byte \products
	.endm

	@ Opens the Pokemart system and treats the list of items as decorations.
	@ Products should be a list of .2byte decoration values preceded by an .align 2
	.macro pokemartdecoration products:req
	.byte 0x87
=======
	.byte SCR_OP_POKEMART
	.4byte \products
	.endm

	@ Used as the endpoint for a Pokemart item list
	.macro pokemartlistend
	.2byte ITEM_NONE
	release
	end
	.endm

	@ Opens the Pokemart system and treats the list of items as decorations.
	@ Products should be a list of .2byte decoration values preceded by an .align 2
	.macro pokemartdecoration products:req
	.byte SCR_OP_POKEMARTDECORATION
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \products
	.endm

	@ Identical to pokemartdecoration, but with slight changes to the clerk dialogue. See uses of MART_TYPE_DECOR2.
	.macro pokemartdecoration2 products:req
<<<<<<< HEAD
	.byte 0x88
=======
	.byte SCR_OP_POKEMARTDECORATION2
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \products
	.endm

	@ Starts up the slot machine minigame. id is a SLOT_MACHINE_* value that influences probabilities of certain reel outcomes.
	.macro playslotmachine id:req
<<<<<<< HEAD
	.byte 0x89
=======
	.byte SCR_OP_PLAYSLOTMACHINE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \id
	.endm

	@ Sets a berry tree's berry and growth stage. treeId is any BERRY_TREE_* constant (an index into berryTrees in SaveBlock1),
	@ berry is any ITEM_TO_BERRY(ITEM_BERRY_NAME) value, and growthStage is any BERRY_STAGE_* constant.
	.macro setberrytree treeId:req, berry:req, growthStage:req
<<<<<<< HEAD
	.byte 0x8a
=======
	.byte SCR_OP_SETBERRYTREE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \treeId
	.byte \berry
	.byte \growthStage
	.endm

	@ Opens the party menu to select a Pokemon for a contest.
	.macro choosecontestmon
<<<<<<< HEAD
	.byte 0x8b
=======
	.byte SCR_OP_CHOOSECONTESTMON
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Starts the appeals round of a contest.
	.macro startcontest
<<<<<<< HEAD
	.byte 0x8c
=======
	.byte SCR_OP_STARTCONTEST
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Shows the results screen of a contest.
	.macro showcontestresults
<<<<<<< HEAD
	.byte 0x8d
=======
	.byte SCR_OP_SHOWCONTESTRESULTS
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Starts communication to initialize a link contest.
	.macro contestlinktransfer
<<<<<<< HEAD
	.byte 0x8e
=======
	.byte SCR_OP_CONTESTLINKTRANSFER
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Stores a random integer between 0 and limit (exclusive of limit) in VAR_RESULT.
	.macro random limit:req
<<<<<<< HEAD
	.byte 0x8f
=======
	.byte SCR_OP_RANDOM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \limit
	.endm

	@ Adds value to the player's money. If adding 'value' money would exceed MAX_MONEY, the player's money is set to MAX_MONEY.
	@ If 'disable' is set to anything but 0 then this command does nothing.
	.macro addmoney value:req, disable=0
<<<<<<< HEAD
	.byte 0x90
=======
	.byte SCR_OP_ADDMONEY
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \value
	.byte \disable
	.endm

	@ Subtracts value from the player's money. If the player has less than 'value' money, their money is set to 0.
	@ If 'disable' is set to anything but 0 then this command does nothing.
	.macro removemoney value:req, disable=0
<<<<<<< HEAD
	.byte 0x91
=======
	.byte SCR_OP_REMOVEMONEY
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \value
	.byte \disable
	.endm

	@ Checks if the player has money >= value. VAR_RESULT is set to TRUE if the player has enough money, or FALSE if they do not.
	@ If 'disable' is set to anything but 0 then this command does nothing.
	.macro checkmoney value:req, disable=0
<<<<<<< HEAD
	.byte 0x92
=======
	.byte SCR_OP_CHECKMONEY
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \value
	.byte \disable
	.endm

	@ Creates a window showing how much money the player has.
	@ If 'disable' is set to anything but 0 then this command does nothing.
	.macro showmoneybox x:req, y:req, disable=0
<<<<<<< HEAD
	.byte 0x93
=======
	.byte SCR_OP_SHOWMONEYBOX
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \x
	.byte \y
	.byte \disable
	.endm

	@ Destroys the window created by showmoneybox. Consumption of the x and y arguments was dummied out.
	.macro hidemoneybox
<<<<<<< HEAD
	.byte 0x94
=======
	.byte SCR_OP_HIDEMONEYBOX
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte 0  @ \x
	.byte 0  @ \y
	.endm

	@ Updates the window created by showmoneybox. Consumption of the x and y arguments was dummied out.
	@ If 'disable' is set to anything but 0 then this command does nothing.
	.macro updatemoneybox disable=0
<<<<<<< HEAD
	.byte 0x95
=======
	.byte SCR_OP_UPDATEMONEYBOX
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte 0  @ \x
	.byte 0  @ \y
	.byte \disable
	.endm

	@ Gets whether the effects of the specified PokeNews program are active. newsKind is a POKENEWS_* constant.
	.macro getpokenewsactive newsKind:req
<<<<<<< HEAD
	.byte 0x96
=======
	.byte SCR_OP_GETPOKENEWSACTIVE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \newsKind
	.endm

	@ Fades the screen to and from black and white. Modes are FADE_(TO/FROM)_(WHITE/BLACK)
	.macro fadescreen mode:req
<<<<<<< HEAD
	.byte 0x97
=======
	.byte SCR_OP_FADESCREEN
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \mode
	.endm

	@ Fades the screen to and from black and white. Modes are FADE_(TO/FROM)_(WHITE/BLACK)
	.macro fadescreenspeed mode:req, speed:req
<<<<<<< HEAD
	.byte 0x98
=======
	.byte SCR_OP_FADESCREENSPEED
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \mode
	.byte \speed
	.endm

	@ Sets the flash level. A level of 0 is fully bright, a level of 1 is the largest flash radius, a level
	@ of 7 is the smallest flash radius, a level of 8 is fully black.
	.macro setflashlevel level:req
<<<<<<< HEAD
	.byte 0x99
=======
	.byte SCR_OP_SETFLASHLEVEL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \level
	.endm

	@ Animates the flash radius from its current size to the size it would be at the specified level.
	@ Note that this does not actually change the current flash level. It's typically used just before a setflashlevel.
	.macro animateflash level:req
<<<<<<< HEAD
	.byte 0x9a
=======
	.byte SCR_OP_ANIMATEFLASH
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \level
	.endm

	@ Automatically scrolls through the message without player input and at a fixed speed.
	.macro messageautoscroll text:req
<<<<<<< HEAD
	.byte 0x9b
=======
	.byte SCR_OP_MESSAGEAUTOSCROLL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \text
	.endm

	@ Executes the specified field effect animation (FLDEFF_*).
	.macro dofieldeffect animation:req
<<<<<<< HEAD
	.byte 0x9c
=======
	.byte SCR_OP_DOFIELDEFFECT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \animation
	.endm

	@ Sets the field effect argument at index 'argNum' to 'value.'
	.macro setfieldeffectargument argNum:req, value:req
<<<<<<< HEAD
	.byte 0x9d
=======
	.byte SCR_OP_SETFIELDEFFECTARGUMENT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \argNum
	.2byte \value
	.endm

	@ Blocks script execution until all playing field effect animations complete.
	.macro waitfieldeffect animation:req
<<<<<<< HEAD
	.byte 0x9e
=======
	.byte SCR_OP_WAITFIELDEFFECT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \animation
	.endm

	@ Sets which healing location (HEAL_LOCATION_*) the player will return to if all of the Pokemon in their party faint.
	.macro setrespawn heallocation:req
<<<<<<< HEAD
	.byte 0x9f
=======
	.byte SCR_OP_SETRESPAWN
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \heallocation
	.endm

	@ Checks the player's gender. Stores the result (MALE (0) or FEMALE (1)) in VAR_RESULT.
	.macro checkplayergender
<<<<<<< HEAD
	.byte 0xa0
=======
	.byte SCR_OP_CHECKPLAYERGENDER
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Plays the cry of the given species. Mode is any CRY_MODE_* constant.
	@ You can use waitmoncry to block script execution until the cry finishes.
	.macro playmoncry species:req, mode:req
<<<<<<< HEAD
	.byte 0xa1
=======
	.byte SCR_OP_PLAYMONCRY
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \species
	.2byte \mode
	.endm

	@ Set the metatile at (x, y) on the current map to the given metatile and impassability.
	.macro setmetatile x:req, y:req, metatileId:req, impassable:req
<<<<<<< HEAD
	.byte 0xa2
=======
	.byte SCR_OP_SETMETATILE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \x
	.2byte \y
	.2byte \metatileId
	.2byte \impassable
	.endm

	@ Queues a weather change to the default weather for the map.
	.macro resetweather
<<<<<<< HEAD
	.byte 0xa3
=======
	.byte SCR_OP_RESETWEATHER
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Queues a weather change to type weather.
	.macro setweather type:req
<<<<<<< HEAD
	.byte 0xa4
=======
	.byte SCR_OP_SETWEATHER
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \type
	.endm

	@ Executes the weather change queued with resetweather or setweather. The current weather will smoothly fade into the queued weather.
	.macro doweather
<<<<<<< HEAD
	.byte 0xa5
=======
	.byte SCR_OP_DOWEATHER
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Enables the overworld task specified by stepCbId (STEP_CB_*). Only 1 can be active at a time. See src/field_tasks.c for more.
	.macro setstepcallback stepCbId:req
<<<<<<< HEAD
	.byte 0xa6
=======
	.byte SCR_OP_SETSTEPCALLBACK
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \stepCbId
	.endm

	@ Sets the current map layout to the one specified by index (LAYOUT_*).
	@ This should be done before the layout is loaded, typically in the ON_TRANSITION map script.
	.macro setmaplayoutindex index:req
<<<<<<< HEAD
	.byte 0xa7
=======
	.byte SCR_OP_SETMAPLAYOUTINDEX
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \index
	.endm

	@ Sets the specified object's sprite's subpriority, and sets fixedPriority to TRUE.
	@ Only used to hide the player and Briney behind the boat.
	.macro setobjectsubpriority localId:req, map:req, subpriority:req
<<<<<<< HEAD
	.byte 0xa8
=======
	.byte SCR_OP_SETOBJECTSUBPRIORITY
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \localId
	map \map
	.byte \subpriority
	.endm

	@ Sets the specified object's fixedPriority to FALSE. Does not change the subpriority field.
	.macro resetobjectsubpriority localId:req, map:req
<<<<<<< HEAD
	.byte 0xa9
=======
	.byte SCR_OP_RESETOBJECTSUBPRIORITY
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \localId
	map \map
	.endm

	@ Creates a sprite with object graphics. Used when creating large groups of static NPCs that exceed
	@ the object event limit (e.g. Contest / Battle Dome audiences and Union Room group members).
	@ The specified id can be used to refer to the sprite again later with turnvobject.
	.macro createvobject graphicsId:req, id:req, x:req, y:req, elevation=3, direction=DIR_SOUTH
<<<<<<< HEAD
	.byte 0xaa
	.byte \graphicsId
=======
	.byte SCR_OP_CREATEVOBJECT
	.2byte \graphicsId
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \id
	.2byte \x
	.2byte \y
	.byte \elevation
	.byte \direction
	.endm

	@ Turns a sprite created with createvobject.
	.macro turnvobject id:req, direction:req
<<<<<<< HEAD
	.byte 0xab
=======
	.byte SCR_OP_TURNVOBJECT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \id
	.byte \direction
	.endm

	@ Opens the door metatile at (x, y) with an animation.
	.macro opendoor x:req, y:req
<<<<<<< HEAD
	.byte 0xac
=======
	.byte SCR_OP_OPENDOOR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \x
	.2byte \y
	.endm

	@ Closes the door metatile at (x, y) with an animation.
	.macro closedoor x:req, y:req
<<<<<<< HEAD
	.byte 0xad
=======
	.byte SCR_OP_CLOSEDOOR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \x
	.2byte \y
	.endm

	@ Waits for the door animation started with opendoor or closedoor to finish.
	.macro waitdooranim
<<<<<<< HEAD
	.byte 0xae
=======
	.byte SCR_OP_WAITDOORANIM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Sets the door metatile at (x, y) to be open without an animation.
	.macro setdooropen x:req, y:req
<<<<<<< HEAD
	.byte 0xaf
=======
	.byte SCR_OP_SETDOOROPEN
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \x
	.2byte \y
	.endm

	@ Sets the door metatile at (x, y) to be closed without an animation.
	.macro setdoorclosed x:req, y:req
<<<<<<< HEAD
	.byte 0xb0
=======
	.byte SCR_OP_SETDOORCLOSED
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \x
	.2byte \y
	.endm

	@ Consumes its parameters and does nothing. It is implemented but unused in Ruby/Sapphire.
	.macro addelevmenuitem a:req, b:req, c:req, d:req
<<<<<<< HEAD
	.byte 0xb1
=======
	.byte SCR_OP_ADDELEVMENUITEM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \a
	.2byte \b
	.2byte \c
	.2byte \d
	.endm

	@ Does nothing. It is implemented but unused in Ruby/Sapphire.
	.macro showelevmenu
<<<<<<< HEAD
	.byte 0xb2
=======
	.byte SCR_OP_SHOWELEVMENU
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Gets the number of coins the player has and stores it in the variable 'out'.
	.macro checkcoins out:req
<<<<<<< HEAD
	.byte 0xb3
=======
	.byte SCR_OP_CHECKCOINS
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \out
	.endm

	@ Gives 'count' coins to the player, up to a total of MAX_COINS.
	@ If the player already has MAX_COINS then VAR_RESULT is set to TRUE, otherwise it is set to FALSE.
	.macro addcoins count:req
<<<<<<< HEAD
	.byte 0xb4
=======
	.byte SCR_OP_ADDCOINS
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \count
	.endm

	@ Takes 'count' coins from the player.
	@ If the player has fewer than 'count' coins then no coins are taken and VAR_RESULT is set to TRUE.
	@ Otherwise VAR_RESULT is set to FALSE.
	.macro removecoins count:req
<<<<<<< HEAD
	.byte 0xb5
	.2byte \count
	.endm

	@ Prepares to start a wild battle against a 'species' at 'level' holding 'item'. Running this command will not affect
	@ normal wild battles. You start the prepared battle with dowildbattle.
	.macro setwildbattle species:req, level:req, item=ITEM_NONE
	.byte 0xb6
	.2byte \species
	.byte \level
	.2byte \item
	.endm

	@ Prepares to start a wild battle against a 'species' at 'level' holding 'item'. Running this command will not affect
	@ normal wild battles. You start the prepared battle with dowildbattle.
	.macro setwildbattleshiny species:req, level:req, item=ITEM_NONE
	.byte 0xec
	.2byte \species
	.byte \level
	.2byte \item
=======
	.byte SCR_OP_REMOVECOINS
	.2byte \count
	.endm

	@ Prepares to start a wild battle against a 'species' at 'level' holding 'item'.
	@ If 'species2' is something other than SPECIES_NONE, then the battle is a double battle
	@ that is also against 'species2' at 'level2' holding 'item2'.
	@ Running this command will not affect normal wild battles. You start the prepared battle with dowildbattle.
	@ If the player only has one Pokemon, a scripted double battle will be buggy.
	.macro setwildbattle species:req, level:req, item=ITEM_NONE, species2=SPECIES_NONE, level2=0, item2=ITEM_NONE
	.byte SCR_OP_SETWILDBATTLE
	.2byte \species
	.byte \level
	.2byte \item
	.2byte \species2
	.byte \level2
	.2byte \item2
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Starts a wild battle against the Pokemon generated by setwildbattle. Blocks script execution until the battle finishes.
	.macro dowildbattle
<<<<<<< HEAD
	.byte 0xb7
=======
	.byte SCR_OP_DOWILDBATTLE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Sets a relative address to be used by the other vcommands as part of a Mystery Gift script.
	.macro setvaddress pointer:req
<<<<<<< HEAD
	.byte 0xb8
=======
	.byte SCR_OP_SETVADDRESS
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \pointer
	.endm

	@ Equivalent to goto using the relative address set by setvaddress.
	.macro vgoto destination:req
<<<<<<< HEAD
	.byte 0xb9
=======
	.byte SCR_OP_VGOTO
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \destination
	.endm

	@ Equivalent to call using the relative address set by setvaddress.
	.macro vcall destination:req
<<<<<<< HEAD
	.byte 0xba
=======
	.byte SCR_OP_VCALL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \destination
	.endm

	@ Equivalent to goto_if using the relative address set by setvaddress.
	.macro vgoto_if condition:req, destination:req
<<<<<<< HEAD
	.byte 0xbb
=======
	.byte SCR_OP_VGOTO_IF
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \condition
	.4byte \destination
	.endm

	@ Equivalent to call_if using the relative address set by setvaddress.
	.macro vcall_if condition:req, destination:req
<<<<<<< HEAD
	.byte 0xbc
=======
	.byte SCR_OP_VCALL_IF
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \condition
	.4byte \destination
	.endm

	@ Equivalent to message using the relative address set by setvaddress.
	.macro vmessage text:req
<<<<<<< HEAD
	.byte 0xbd
=======
	.byte SCR_OP_VMESSAGE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \text
	.endm

	@ Expands the given text at the pointer (- the relative address set by setvaddress) into gStringVar4
	.macro vbuffermessage text:req
<<<<<<< HEAD
	.byte 0xbe
=======
	.byte SCR_OP_VBUFFERMESSAGE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \text
	.endm

	@ Equivalent to bufferstring using the relative address set by setvaddress.
	.macro vbufferstring stringVarIndex:req, text:req
<<<<<<< HEAD
	.byte 0xbf
=======
	.byte SCR_OP_VBUFFERSTRING
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	stringvar \stringVarIndex
	.4byte \text
	.endm

	@ Create a window showing how many Coins the player has.
	.macro showcoinsbox x:req, y:req
<<<<<<< HEAD
	.byte 0xc0
=======
	.byte SCR_OP_SHOWCOINSBOX
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \x
	.byte \y
	.endm

	@ Destroys the window created by showcoins. It consumes its arguments but doesn't use them.
	.macro hidecoinsbox x:req, y:req
<<<<<<< HEAD
	.byte 0xc1
=======
	.byte SCR_OP_HIDECOINSBOX
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \x
	.byte \y
	.endm

	@ Updates the window created by showcoins. It consumes its arguments but doesn't use them.
	.macro updatecoinsbox x:req, y:req
<<<<<<< HEAD
	.byte 0xc2
=======
	.byte SCR_OP_UPDATECOINSBOX
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \x
	.byte \y
	.endm

	@ Increases the value of the specified game stat by 1. The maximum value of a stat is 0xFFFFFF. See include/constants/game_stat.h
	.macro incrementgamestat stat:req
<<<<<<< HEAD
	.byte 0xc3
=======
	.byte SCR_OP_INCREMENTGAMESTAT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \stat
	.endm

	@ Sets the destination that using an Escape Rope or Dig will take the player to.
	@ Warp commands can be given either the id of which warp location to go to on the destination map
	@ or a pair of x/y coordinates to go to directly on the destination map.
	.macro setescapewarp map:req, a, b, c
<<<<<<< HEAD
	.byte 0xc4
=======
	.byte SCR_OP_SETESCAPEWARP
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	formatwarp \map, \a, \b, \c
	.endm

	@ Blocks script execution until cry finishes.
	.macro waitmoncry
<<<<<<< HEAD
	.byte 0xc5
=======
	.byte SCR_OP_WAITMONCRY
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Writes the name of the specified PC box to the specified buffer.
	.macro bufferboxname stringVarId:req, box:req
<<<<<<< HEAD
	.byte 0xc6
=======
	.byte SCR_OP_BUFFERBOXNAME
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	stringvar \stringVarId
	.2byte \box
	.endm

	@ Used only in FireRed/LeafGreen, does nothing in Emerald.
	.macro textcolor color:req
<<<<<<< HEAD
	.byte 0xc7
=======
	.byte SCR_OP_TEXTCOLOR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \color
	.endm

	@ Used only in FireRed/LeafGreen, does nothing in Emerald.
	.macro loadhelp text:req
<<<<<<< HEAD
	.byte 0xc8
=======
	.byte SCR_OP_LOADHELP
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \text
	.endm

	@ Used only in FireRed/LeafGreen, does nothing in Emerald.
	.macro unloadhelp
<<<<<<< HEAD
	.byte 0xc9
=======
	.byte SCR_OP_UNLOADHELP
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Used only in FireRed/LeafGreen, does nothing in Emerald.
	.macro signmsg
<<<<<<< HEAD
	.byte 0xca
=======
	.byte SCR_OP_SIGNMSG
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Used only in FireRed/LeafGreen, does nothing in Emerald.
	.macro normalmsg
<<<<<<< HEAD
	.byte 0xcb
=======
	.byte SCR_OP_NORMALMSG
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Used only in FireRed/LeafGreen, does nothing in Emerald.
	.macro comparehiddenvar a:req, value:req
<<<<<<< HEAD
	.byte 0xcc
=======
	.byte SCR_OP_COMPAREHIDDENVAR
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.byte \a
	.4byte \value
	.endm

	@ Sets the modernFatefulEncounter bit for the Pokemon in the specified slot of the player's party.
	.macro setmodernfatefulencounter slot:req
<<<<<<< HEAD
	.byte 0xcd
=======
	.byte SCR_OP_SETMODERNFATEFULENCOUNTER
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \slot
	.endm

	@ Checks if the modernFatefulEncounter bit is set for the Pokemon in the specified slot of the player's party. If it isn't set,
	@ VAR_RESULT is TRUE. If the bit is set (or if the specified slot is empty or invalid), VAR_RESULT is FALSE.
	.macro checkmodernfatefulencounter slot:req
<<<<<<< HEAD
	.byte 0xce
=======
	.byte SCR_OP_CHECKMODERNFATEFULENCOUNTER
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \slot
	.endm

	@ Jumps to the ram script saved from a Wonder Card. If there is no valid saved Wonder Card or if the
	@ ram script is invalid then this does nothing.
	.macro trywondercardscript
<<<<<<< HEAD
	.byte 0xcf
=======
	.byte SCR_OP_TRYWONDERCARDSCRIPT
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Used only in FireRed/LeafGreen, does nothing in Emerald.
	.macro setworldmapflag worldmapflag:req
<<<<<<< HEAD
	.byte 0xd0
=======
	.byte SCR_OP_SETWORLDMAPFLAG
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \worldmapflag
	.endm

	@ Warps the player to the specified map using a teleport effect. Effect is similar to warpteleport, but
	@ this warp has no fade out and maintains the original facing direction.
	@ Warp commands can be given either the id of which warp location to go to on the destination map
	@ or a pair of x/y coordinates to go to directly on the destination map.
	.macro warpspinenter map:req, a, b, c
<<<<<<< HEAD
	.byte 0xd1
=======
	.byte SCR_OP_WARPSPINENTER
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	formatwarp \map, \a, \b, \c
	.endm

	@ Changes the location where the player caught the Pokemon in the specified slot of their party.
	.macro setmonmetlocation slot:req, location:req
<<<<<<< HEAD
	.byte 0xd2
=======
	.byte SCR_OP_SETMONMETLOCATION
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \slot
	.byte \location
	.endm

	@ For the rotating tile puzzles in Mossdeep Gym / Trick House Room 7. Moves the objects one rotation
	@ on the colored puzzle specified by puzzleNumber.
	.macro moverotatingtileobjects puzzleNumber:req
<<<<<<< HEAD
	.byte 0xd3
=======
	.byte SCR_OP_MOVEROTATINGTILEOBJECTS
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \puzzleNumber
	.endm

	@ For the rotating tile puzzles in Mossdeep Gym / Trick House Room 7. Updates the facing direction of all objects on the puzzle tiles
	.macro turnrotatingtileobjects
<<<<<<< HEAD
	.byte 0xd4
=======
	.byte SCR_OP_TURNROTATINGTILEOBJECTS
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ For the rotating tile puzzles in Mossdeep Gym / Trick House Room 7. Allocates memory for the puzzle objects.
	@ isTrickHouse is needed to determine which of the two maps the puzzle is on, in order to know where in the tileset
	@ the puzzle tiles start (TRUE for Trick House Room, FALSE for Mossdeep Gym).
	.macro initrotatingtilepuzzle isTrickHouse:req
<<<<<<< HEAD
	.byte 0xd5
=======
	.byte SCR_OP_INITROTATINGTILEPUZZLE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.2byte \isTrickHouse
	.endm

	@ For the rotating tile puzzles in Mossdeep Gym / Trick House Room 7. Frees the memory allocated for the puzzle objects.
	.macro freerotatingtilepuzzle
<<<<<<< HEAD
	.byte 0xd6
=======
	.byte SCR_OP_FREEROTATINGTILEPUZZLE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Warp used by the teleport tiles in the Mossdeep Gym. Plays SE_WARP_IN and does a simple fade transition.
	@ Also skips reloading object events by setting SKIP_OBJECT_EVENT_LOAD.
	@ Warp commands can be given either the id of which warp location to go to on the destination map
	@ or a pair of x/y coordinates to go to directly on the destination map.
	.macro warpmossdeepgym map:req, a, b, c
<<<<<<< HEAD
	.byte 0xd7
=======
	.byte SCR_OP_WARPMOSSDEEPGYM
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	formatwarp \map, \a, \b, \c
	.endm

	@ Sets the selected object to the id of the currently approaching trainer.
	.macro selectapproachingtrainer
<<<<<<< HEAD
	.byte 0xd8
=======
	.byte SCR_OP_SELECTAPPROACHINGTRAINER
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Freezes all objects immediately except the player and the approaching trainers.
	@ The player and trainers are frozen once their movement is finished.
	.macro lockfortrainer
<<<<<<< HEAD
	.byte 0xd9
=======
	.byte SCR_OP_LOCKFORTRAINER
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Destroys the window created by braillemessage.
	.macro closebraillemessage
<<<<<<< HEAD
	.byte 0xda
=======
	.byte SCR_OP_CLOSEBRAILLEMESSAGE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Prints and draws the message all at once rather than character by character.
	@ Does not wait for player input to continue.
	.macro messageinstant text:req
<<<<<<< HEAD
	.byte 0xdb
	.4byte \text
	.endm

	@ Equivalent to fadescreen but copies gPlttBufferUnfaded to gPaletteDecompressionBuffer on the fade out
	@ and the reverse on the fade in, in effect saving gPlttBufferUnfaded to restore it.
  @ If nowait set, does not wait for the fade to complete
	.macro fadescreenswapbuffers mode:req, nowait=0
	.byte 0xdc
	.byte \mode
  .byte \nowait
=======
	.byte SCR_OP_MESSAGEINSTANT
	.4byte \text
	.endm

	@ Equivalent to fadescreen but uses a hardware fade and darken/lighten blend modes,
	@ to avoid modifying palettes at all.
	@ Useful for fade-out/fade-in without leaving the overworld or entering a new scene.
	@ If nowait set, doesn't wait for the fade to complete
	.macro fadescreenswapbuffers mode:req, nowait=0
	.byte SCR_OP_FADESCREENSWAPBUFFERS
	.byte \mode
	.byte \nowait
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

	@ Buffers the specified trainer's class name to the given string var.
	@ If the trainer id is >= TRAINERS_COUNT it will be treated as TRAINER_NONE.
	.macro buffertrainerclassname stringVarId:req, trainerId:req
<<<<<<< HEAD
	.byte 0xdd
=======
	.byte SCR_OP_BUFFERTRAINERCLASSNAME
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	stringvar \stringVarId
	.2byte \trainerId
	.endm

	@ Buffers the specified trainer's name to the given string var.
	@ If the trainer id is >= TRAINERS_COUNT it will be treated as TRAINER_NONE.
	.macro buffertrainername stringVarId:req, trainerId:req
<<<<<<< HEAD
	.byte 0xde
=======
	.byte SCR_OP_BUFFERTRAINERNAME
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	stringvar \stringVarId
	.2byte \trainerId
	.endm

	@ Starts a Pokenav call with the given text.
	.macro pokenavcall text:req
<<<<<<< HEAD
	.byte 0xdf
=======
	.byte SCR_OP_POKENAVCALL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.4byte \text
	.endm

	@ Warp with a fade to white. Used during the Sootopolis legendary fight.
	@ Warp commands can be given either the id of which warp location to go to on the destination map
	@ or a pair of x/y coordinates to go to directly on the destination map.
	.macro warpwhitefade map:req, a, b, c
<<<<<<< HEAD
	.byte 0xe0
=======
	.byte SCR_OP_WARPWHITEFADE
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	formatwarp \map, \a, \b, \c
	.endm

	@ Buffers the name of the contest category to the buffer.
	@ For example a category of CONTEST_CATEGORY_COOL will buffer the string "COOLNESS CONTEST".
	.macro buffercontestname stringVarId:req, category:req
<<<<<<< HEAD
	.byte 0xe1
=======
	.byte SCR_OP_BUFFERCONTESTNAME
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	stringvar \stringVarId
	.2byte \category
	.endm

	@ Writes the name of the specified item to the specified buffer. If 'item' is a Berry or ITEM_POKE_BALL
	@ and if the quantity is 2 or more, the buffered string will be pluralized ("IES" or "S" appended).
	@ If the specified item is >= ITEMS_COUNT then the name of ITEM_NONE ("????????") is buffered instead.
	.macro bufferitemnameplural stringVarId:req, item:req, quantity:req
<<<<<<< HEAD
	.byte 0xe2
=======
	.byte SCR_OP_BUFFERITEMNAMEPLURAL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	stringvar \stringVarId
	.2byte \item
	.2byte \quantity
	.endm

<<<<<<< HEAD
	@ Checks if the player has enough space in their PC to hold quantity more of the specified item. Sets VAR_RESULT to
	@ TRUE if there is room, or FALSE is there is no room.
	.macro checkpcspace itemId:req, quantity=1
	.byte 0xe3
	.2byte \itemId
	.2byte \quantity
	.endm

	@ Checks to see if the player has a Pokemon in their party. Result returns to VAR_RESULT
    .macro checkpartymonlevel level:req
    .byte 0xe4
    .2byte \level
    .endm

	@ re-calculates mon party
    .macro calculatemonstats
    .byte 0xe5
    .endm

	@ deletesparty
    .macro deleteparty
    .byte 0xe6
    .endm
	
	@ Like callnative, but function expects a ctx
	.macro callfunc func:req
	.byte 0xe7
	.4byte \func
=======
	.macro _dynmultichoice left:req, top:req, ignoreBPress:req, maxBeforeScroll:req, shouldSort:req, initialSelected:req, callbacks:req argv:vararg
	.byte SCR_OP_DYNMULTICHOICE
	.2byte \left
	.2byte \top
	.byte \ignoreBPress
	.byte \maxBeforeScroll
	.byte \shouldSort
	.2byte \initialSelected
	.byte \callbacks
	.byte (.Ldynmultichoice_\@_2 - .Ldynmultichoice_\@_1) / 4
.Ldynmultichoice_\@_1:
	.4byte \argv
.Ldynmultichoice_\@_2:
	.endm

	@ Displays a multichoice box from which the user can choose a selection, and blocks script execution until a selection is made.
	@ Lists of options are provided in argv.
	@ If ignoreBPress is set to a non-zero value, then the user will not be allowed to back out of the multichoice with the B button.
	@ For a simple menu supply DYN_MULTICHOICE_CB_NONE in callbacks.
	.macro dynmultichoice left:req, top:req, ignoreBPress:req, maxBeforeScroll:req, initialSelected:req, callbacks:req argv:vararg
	_dynmultichoice \left, \top, \ignoreBPress, \maxBeforeScroll, FALSE, \initialSelected, \callbacks, \argv
	.endm

	.macro dynmultipush name:req, id:req
	.byte SCR_OP_DYNMULTIPUSH
	.4byte \name
	.2byte \id
	.endm

	.macro dynmultistack left:req, top:req, ignoreBPress:req, maxBeforeScroll:req, shouldSort:req, initialSelected:req, callbacks:req
	_dynmultichoice \left, \top, \ignoreBPress, \maxBeforeScroll, \shouldSort, \initialSelected, \callbacks, NULL
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm

@ Supplementary

	.macro goto_if_unset flag:req, dest:req
	checkflag \flag
	goto_if FALSE, \dest
	.endm

	.macro goto_if_set flag:req, dest:req
	checkflag \flag
	goto_if TRUE, \dest
	.endm

	@ Allows 'compare' followed by a conditional goto/call to be combined into a single statement.
	@ The following are examples of the two acceptable formats this facilitates:
	@ compare VAR_RESULT, TRUE
	@ goto_if_eq MyScript
	@ - or -
	@ goto_if_eq VAR_RESULT, TRUE, MyScript
	@
	@ The first two arguments to this macro are the base command, e.g. 'goto_if 1' for goto_if_eq.
	@ The remaining arguments 'a, b, c' depend on the format:
	@ For a single statement, 'a' and 'b' are the values to compare and 'c' is the destination pointer.
	@ For a statement preceded by a compare, 'a' is the destination pointer and 'b/c' are not provided.
	.macro trycompare jump:req, condition:req, a:req, b, c
	.ifnb \c
		compare \a, \b
		\jump \condition, \c
	.else
		\jump \condition, \a
	.endif
	.endm

	.macro goto_if_lt a:req, b, c @ LESS THAN
	trycompare goto_if, 0, \a, \b, \c
	.endm

	.macro goto_if_eq a:req, b, c @ EQUAL
	trycompare goto_if, 1, \a, \b, \c
	.endm

	.macro goto_if_gt a:req, b, c @ GREATER THAN
	trycompare goto_if, 2, \a, \b, \c
	.endm

	.macro goto_if_le a:req, b, c @ LESS THAN OR EQUAL
	trycompare goto_if, 3, \a, \b, \c
	.endm

	.macro goto_if_ge a:req, b, c @ GREATER THAN OR EQUAL
	trycompare goto_if, 4, \a, \b, \c
	.endm

	.macro goto_if_ne a:req, b, c @ NOT EQUAL
	trycompare goto_if, 5, \a, \b, \c
	.endm

	.macro call_if_unset flag:req, dest:req
	checkflag \flag
	call_if FALSE, \dest
	.endm

	.macro call_if_set flag:req, dest:req
	checkflag \flag
	call_if TRUE, \dest
	.endm

	.macro call_if_lt a:req, b, c @ LESS THAN
	trycompare call_if, 0, \a, \b, \c
	.endm

	.macro call_if_eq a:req, b, c @ EQUAL
	trycompare call_if, 1, \a, \b, \c
	.endm

	.macro call_if_gt a:req, b, c @ GREATER THAN
	trycompare call_if, 2, \a, \b, \c
	.endm

	.macro call_if_le a:req, b, c @ LESS THAN OR EQUAL
	trycompare call_if, 3, \a, \b, \c
	.endm

	.macro call_if_ge a:req, b, c @ GREATER THAN OR EQUAL
	trycompare call_if, 4, \a, \b, \c
	.endm

	.macro call_if_ne a:req, b, c @ NOT EQUAL
	trycompare call_if, 5, \a, \b, \c
	.endm

	.macro vgoto_if_eq a:req, b, c
	trycompare vgoto_if, TRUE, \a, \b, \c
	.endm

	.macro vgoto_if_ne a:req, b, c
	trycompare vgoto_if, FALSE, \a, \b, \c
	.endm

	.macro vgoto_if_unset flag:req, dest:req
	checkflag \flag
	vgoto_if FALSE, \dest
	.endm

	.macro vgoto_if_set flag:req, dest:req
	checkflag \flag
	vgoto_if TRUE, \dest
	.endm

	.macro goto_if_defeated trainer:req, dest:req
	checktrainerflag \trainer
	goto_if TRUE, \dest
	.endm

	.macro goto_if_not_defeated trainer:req, dest:req
	checktrainerflag \trainer
	goto_if FALSE, \dest
	.endm

	.macro call_if_defeated trainer:req, dest:req
	checktrainerflag \trainer
	call_if TRUE, \dest
	.endm

	.macro call_if_not_defeated trainer:req, dest:req
	checktrainerflag \trainer
	call_if FALSE, \dest
	.endm

	.macro switch var:req
	copyvar VAR_0x8000, \var
	.endm

	.macro case condition:req, dest:req
	compare VAR_0x8000, \condition
	goto_if_eq \dest
	.endm

	@ Message box types
	MSGBOX_NPC = 2
	MSGBOX_SIGN = 3
	MSGBOX_DEFAULT = 4
	MSGBOX_YESNO = 5
	MSGBOX_AUTOCLOSE = 6
	MSGBOX_GETPOINTS = 9
	MSGBOX_POKENAV = 10

	YES = 1
	NO  = 0

	@ Buffers the given text and calls the relevant standard message script (see gStdScripts).
	.macro msgbox text:req, type=MSGBOX_DEFAULT
	loadword 0, \text
	callstd \type
	.endm

	@ Gives 'amount' of the specified 'item' to the player and prints a message with fanfare.
	@ If the player doesn't have space for all the items then as many are added as possible, the
	@ message indicates there is no room, and VAR_RESULT is set to FALSE.
	@ Otherwise VAR_RESULT is set to TRUE, and the message indicates they have received the item(s).
	.macro giveitem item:req, amount=1
	setorcopyvar VAR_0x8000, \item
	setorcopyvar VAR_0x8001, \amount
	callstd STD_OBTAIN_ITEM
	.endm

	@ For picking up items in the overworld. Similar to giveitem, but with different language and
	@ sets the flag of the last-talked to object (the item the player picked up).
	.macro finditem item:req, amount=1
	setorcopyvar VAR_0x8000, \item
	setorcopyvar VAR_0x8001, \amount
	callstd STD_FIND_ITEM
	.endm

	@ Equivalent to giveitem but for a single decoration.
	.macro givedecoration decoration:req
	setorcopyvar VAR_0x8000, \decoration
	callstd STD_OBTAIN_DECORATION
	.endm

	@ Registers the specified trainer in Match Call and plays a fanfare with a notification message.
	.macro register_matchcall trainer:req
	setvar VAR_0x8004, \trainer
	special SetMatchCallRegisteredFlag
	setorcopyvar VAR_0x8000, \trainer
	callstd STD_REGISTER_MATCH_CALL
	.endm

	@ Does a sparkle field effect (e.g. when the Trick Master is hiding) at the given coordinates.
	.macro dofieldeffectsparkle x:req, y:req, priority:req
	setfieldeffectargument 0, \x
	setfieldeffectargument 1, \y
	setfieldeffectargument 2, \priority
	dofieldeffect FLDEFF_SPARKLE
	.endm

	@ Prints a braille message, waits for an A or B press, then closes the message.
	.macro braillemsgbox text:req
	braillemessage \text
	waitbuttonpress
	closebraillemessage
	.endm

	@ Creates a Pokémon with the modernFatefulEncounter bit set for an encounter
	.macro seteventmon species:req, level:req, item=ITEM_NONE
	setvar VAR_0x8004, \species
	setvar VAR_0x8005, \level
	setvar VAR_0x8006, \item
	special CreateEnemyEventMon
	.endm

<<<<<<< HEAD
	@ Opens the bag in the specified pocket and lets the Player choose an item.
	@ This item can be used for scripting purposes and it's stored in VAR_ITEM_ID.
	.macro chooseitem pocket:req
	setvar VAR_TEMP_1, \pocket
	fadescreen FADE_TO_BLACK
	special ChooseItemFromBag
	waitstate
	.endm

	@ Adds unit system string to the respective stringvar.
	@ texttype values:
	@ UNIT_TEXT_LENGTH_SMALL_SINGLE,  UNIT_TEXT_LENGTH_SMALL_PLURAL,  UNIT_TEXT_LENGTH_SMALL_SYMBOL.
	@ UNIT_TEXT_LENGTH_MEDIUM_SINGLE, UNIT_TEXT_LENGTH_MEDIUM_PLURAL, UNIT_TEXT_LENGTH_MEDIUM_SYMBOL.
	@ UNIT_TEXT_WEIGHT_SINGLE,        UNIT_TEXT_WEIGHT_PLURAL,        UNIT_TEXT_WEIGHT_SYMBOL.
	.macro bufferunitsystemtext texttype:req, stringvarnumber=1
	setvar VAR_0x8000, \texttype
	setvar VAR_0x8001, \stringvarnumber
	special BufferUnitSystemText
	.endm

	@HnS macros ========================================================================================================================

	@HnS applymovement but doesnt remove follower. 
	.macro applymovement2 localId:req, movements:req, map
		.ifb \map
			.byte 0xe8
			.2byte \localId
			.4byte \movements
		.else
			@ Really only useful if the object has followed from one map to another (e.g. Wally during the catching event).
			.byte 0x50
			.2byte \localId
			.4byte \movements
			map \map
		.endif
	.endm

	@ Removes Pokémon from player's party. 1 = KENYA, 2 = SHUCKIE
	@ VAR_RESULT will be set to MON_GIVEN_TO_PARTY, MON_CANT_GIVE depending on the outcome.
	.macro remove5mons 
	.byte 0xeb
	.endm

	@ Gives the player a Pokémon. 1 = KENYA, 2 = SHUCKIE, 3 = EEVEE
	@ VAR_RESULT will be set to MON_GIVEN_TO_PARTY, MON_GIVEN_TO_PC, or MON_CANT_GIVE depending on the outcome.
	.macro givenamedmon number:req
	.byte 0xe9
	.2byte \number
	.endm

	@ Removes Pokémon from player's party. 1 = KENYA, 2 = SHUCKIE
	@ VAR_RESULT will be set to MON_GIVEN_TO_PARTY, MON_CANT_GIVE depending on the outcome.
	.macro removenamedmon number:req
	.byte 0xea
	.2byte \number
	.endm

	@ Removes Pokémon from player's party. If species in VAR_0x8004 matches the species passed in as number, it will remove the mon.
	@ VAR_RESULT will be set to TRUE if it works. FALSE if it doesn't.
	.macro removegenericmon number:req
	.byte 0xed
	.2byte \number
	.endm

	@ New: Check Baoba target species in party slot VAR_0x8004.
	@ Usage (script): baobacheckmon <1|2|3|4>
	@ Result: gSpecialVar_Result = TRUE if the mon at VAR_0x8004 matches the allowed
	@ species list for the given case; FALSE otherwise.
	.macro baobacheckmon number:req
	.byte 0xee
	.2byte \number
	.endm

	@ Gives the player the odd egg. If name matches, 100% shiny. If not, 14% shiny. Input parameter 1-7
	@ VAR_RESULT will be set to MON_GIVEN_TO_PARTY, or MON_CANT_GIVE depending on the outcome.
	.macro giveoddegg number:req
	.byte 0xef
	.2byte \number
	.endm

	@ Gives the player the number of BP (battle points) inputted
	.macro givebp number:req
	.byte 0xf0
	.2byte \number
=======
	.macro setdynamicaifunc func:req
	callnative ScriptSetDynamicAiFunc, requests_effects=1
	.4byte \func
	.endm

	@ Set up a totem boost for the next battle.
	@ 'battler' is the position of the mon you want to gain a boost. see B_POSITION_xx in include/constants/battle.h.
	@ The rest of the arguments are the stat change values to each stat.
	@ For example, giving the first opponent +1 to atk and -2 to speed would be: settotemboost B_POSITION_OPPONENT_LEFT, 1, 0, -2
	.macro settotemboost battler:req, atk=0,def=0,speed=0,spatk=0,spdef=0,acc=0,evas=0
	callnative ScriptSetTotemBoost, requests_effects=1
	.2byte \battler
	.2byte \atk
	.2byte \def
	.2byte \speed
	.2byte \spatk
	.2byte \spdef
	.2byte \acc
	.2byte \evas
	.endm

	@ useful totem boost macros
	.macro totemboost_atk1 battler:req
	settotemboost \battler, 1
	.endm
	.macro totemboost_def1 battler:req
	settotemboost \battler, 0, 1
	.endm
	.macro totemboost_speed1 battler:req
	settotemboost \battler, 0, 0, 1
	.endm
	.macro totemboost_spatk1 battler:req
	settotemboost \battler, 0, 0, 0, 1
	.endm
	.macro totemboost_spdef1 battler:req
	settotemboost \battler, 0, 0, 0, 0, 1
	.endm
	.macro totemboost_acc1 battler:req
	settotemboost \battler, 0, 0, 0, 0, 0, 1
	.endm
	.macro totemboost_evas1 battler:req
	settotemboost \battler, 0, 0, 0, 0, 0, 0, 1
	.endm

	.macro totemboost_atk2 battler:req
	settotemboost \battler, 2
	.endm
	.macro totemboost_def2 battler:req
	settotemboost \battler, 0, 2
	.endm
	.macro totemboost_speed2 battler:req
	settotemboost \battler, 0, 0, 2
	.endm
	.macro totemboost_spatk2 battler:req
	settotemboost \battler, 0, 0, 0, 2
	.endm
	.macro totemboost_spdef2 battler:req
	settotemboost \battler, 0, 0, 0, 0, 2
	.endm
	.macro totemboost_acc2 battler:req
	settotemboost \battler, 0, 0, 0, 0, 0, 2
	.endm
	.macro totemboost_evas2 battler:req
	settotemboost \battler, 0, 0, 0, 0, 0, 0, 2
	.endm

	@ Attempts to trigger a special evolution method in the overworld.
	@ There may be other conditions required which are coded for in GetEvolutionTargetSpecies.
	@ EX: tryspecialevo EVO_WATER_SCROLL, FALSE, FALSE triggers Kubfu's EVO_WATER_SCROLL evolution
	@ 	  method, cannot be cancelled in the evolution scene, and will only evolve one Kubfu if there
	@	  are multiple in the player's party.
	.macro tryspecialevo evoMethod:req, canStopEvo=TRUE, tryMultiple=TRUE
	setvar VAR_0x8000, \evoMethod
	setvar VAR_0x8001, \canStopEvo
	setvar VAR_0x8002, \tryMultiple
	special TrySpecialScriptEvolution
	.endm

	.macro ai_vs_ai_battle trainer1:req, trainer2:req
	setflag B_FLAG_AI_VS_AI_BATTLE
	setvar VAR_0x8004, \trainer1
	callnative CreateTrainerPartyForPlayer, requests_effects=1
	trainerbattle_no_intro \trainer2, NULL
	.endm

	@ Sets VAR_RESULT to TRUE if stat can be hyper trained, or to
	@ FALSE otherwise.
	.macro canhypertrain stat:req, slot:req
	callnative CanHyperTrain, requests_effects=1
	.byte \stat
	.2byte \slot
	.endm

	@ Hyper Trains a stat.
	.macro hypertrain stat:req, slot:req
	callnative HyperTrain, requests_effects=1
	.byte \stat
	.2byte \slot
	.endm

	@ Sets VAR_RESULT to TRUE if the Pokemon has the Gigantamax Factor,
	@ or to FALSE otherwise.
	.macro hasgigantamaxfactor slot:req
	callnative HasGigantamaxFactor, requests_effects=1
	.2byte \slot
	.endm

	@ Toggles the Gigantamax Factor for a Pokemon.
	@ Fails for Melmetal (vanilla behavior).
	@ Sets VAR_RESULT to TRUE if it succeeds, and FALSE otherwise.
	.macro togglegigantamaxfactor slot:req
	callnative ToggleGigantamaxFactor, requests_effects=1
	.2byte \slot
	.endm

	@ Sets VAR_RESULT to one of the arguments (via setorcopyvar).
	.macro randomelement element:req, elements:vararg
	.set _randomelement_n, 0
	.irp el, \element, \elements
	.set _randomelement_n, _randomelement_n + 1
	.endr
		random _randomelement_n

	.set _randomelement_n, 0
	.irp el, \element, \elements
		goto_if_ne VAR_RESULT, _randomelement_n, 1f
		setorcopyvar VAR_RESULT, \el
		goto 2f
	1:
	.set _randomelement_n, _randomelement_n + 1
	.endr
	2:
	.endm

	@ Sets VAR_RESULT to TRUE with probability 'percent', and FALSE
	@ with probability '100% - percent'.
	.macro randompercentage percent:req
		random 100
		goto_if_lt VAR_RESULT, \percent, 1f
		setvar VAR_RESULT, FALSE
		goto 2f
	1:
		setvar VAR_RESULT, TRUE
	2:
	.endm

	@ Inflicts \status1 to the Pokémon in \slot.
	@ If \slot is greater or equal than PARTY_SIZE, the status is inflicted on each of the Player's Pokémon.
	.macro setstatus1 status1:req, slot:req
	callnative Script_SetStatus1, requests_effects=1
	.2byte \status1
	.2byte \slot
	.endm

	@ Sets VAR_RESULT to the Pokémon in \slot's Tera Type
	.macro checkteratype slot:req
	callnative CheckTeraType, requests_effects=1
	.2byte \slot
	.endm

	@ Sets the Pokémon in \slot's Tera Type
	.macro setteratype type:req, slot:req
	callnative SetTeraType, requests_effects=1
	.byte \type
	.2byte \slot
	.endm

	@ Saves species and forms of Daycare Pokémon to specific vars. Saves the amount of Daycare mon to VAR_RESULT.
	.macro getdaycaregfx varSpecies1:req varSpecies2:req varForm1:req varForm2:req
	callnative GetDaycareGraphics, requests_effects=1
	.2byte \varSpecies1
	.2byte \varSpecies2
	.2byte \varForm1
	.2byte \varForm2
	.endm

	@ Plays the cry of the first alive party member.
	.macro playfirstmoncry
	callnative PlayFirstMonCry, requests_effects=1
	.endm

	@ Buffers the nickname of the first alive party member.
	.macro bufferlivemonnickname out:req
	callnative BufferFirstLiveMonNickname, requests_effects=1
	.byte \out
	.endm

	@ Executes Follower actions
	.macro getfolloweraction
	callnative GetFollowerAction
	.endm

	@ Checks if Field move is being used by the current follower.
	.macro isfollowerfieldmoveuser var:req
	callnative IsFollowerFieldMoveUser, requests_effects=1
	.2byte \var
	.endm

	@ Saves the direction from where source object event would need to turn to to face the target into the specified var.
	.macro getdirectiontoface var:req, sourceId:req, targetId:req
	callnative GetDirectionToFaceScript, requests_effects=1
	.2byte \var
	.byte \sourceId
	.byte \targetId
	.endm

	@ set the wild double battle flag
	@ can be used in conjunection with createmon to set up a wild battle with 2 player mons vs. 1 enemy mon
	.macro setwilddoubleflag
	callnative ScriptSetDoubleBattleFlag, requests_effects=1
	.endm

	@ ============================ @
	@ FAKE RTC MACROS
	@ Will only function if OW_USE_FAKE_RTC is true. If it has any additional requirements, it will be listed accordingly.
	
	@ When OW_USE_FAKE_RTC is true and OW_FLAG_PAUSE_TIME is assigned, this macro will stop the flow of time.
	.macro pausefakertc
	callnative Script_PauseFakeRtc, requests_effects=1
	.endm

	@ When OW_USE_FAKE_RTC and OW_FLAG_PAUSE_TIME is assigned, this macro will resume the flow of time.
	.macro resumefakertc
	callnative Script_ResumeFakeRtc, requests_effects=1
	.endm

	@ When OW_USE_FAKE_RTC and OW_FLAG_PAUSE_TIME is assigned, this macro will resume the flow of time if paused, and stop the flow of time otherwise.
	.macro togglefakertc
	callnative Script_ToggleFakeRtc, requests_effects=1
	.endm

	@ When OW_USE_FAKE_RTC is true, adds a specified amount of time.
	.macro addtime days:req, hours:req, minutes:req
	callnative ScrCmd_addtime, requests_effects=1
	.4byte \days
	.4byte \hours
	.4byte \minutes
	.endm

	@ When OW_USE_FAKE_RTC is true, adds a specified number of days to the time. 
	.macro adddays days:req
	callnative ScrCmd_adddays, requests_effects=1
	.4byte \days
	.endm

	@ When OW_USE_FAKE_RTC is true, adds a specified number of days, hours, and minutes to the time. 
	.macro addhours hours:req
	callnative ScrCmd_addhours, requests_effects=1
	.4byte \hours
	.endm

	@ When OW_USE_FAKE_RTC is true, adds a specified number of days, hours, and minutes to the time. 
	.macro addminutes minutes:req
	callnative ScrCmd_addminutes, requests_effects=1
	.4byte \minutes
	.endm

	@ Forwards the time to a specified hour and minute. 
	@ This causes the time to go to the next day if the time has already been past. 
	.macro fwdtime hours:req, minutes:req
	callnative ScrCmd_fwdtime, requests_effects=1
	.4byte \hours
	.4byte \minutes
	.endm

	@ Forwards the time to a specified day of the week. Uses a 0-index starting from Sunday.
	.macro fwdweekday weekday:req
	callnative ScrCmd_fwdweekday, requests_effects=1
	.4byte \weekday
	.endm

	@ ============================ @
	@ ITEM DESCRIPTION HEADER MACROS
	@ Used with OW_SHOW_ITEM_DESCRIPTIONS config
	.macro showitemdescription
	callnative ScriptShowItemDescription, requests_effects=1
	.byte 0
	.endm

	.macro showberrydescription
	callnative ScriptShowItemDescription, requests_effects=1
	.byte 1
	.endm

	.macro hideitemdescription
	callnative ScriptHideItemDescription, requests_effects=1
	.endm

	@ Remove all of specified item from the player's bag and return the number of removed items to VAR_RESULT
	.macro removeallitem itemId:req
	callnative ScrCmd_removeallitem, requests_effects=1
	.2byte \itemId
	.endm

	@ Stores the position of the given object in destX and destY. Mode CURRENT_POSITION will take the object's current position. Mode TEMPLATE_POSITION will take the object's template position.
	.macro getobjectxy localId:req, posType:req, destX:req, destY:req
	callnative ScrCmd_getobjectxy, requests_effects=1
	.2byte \localId
	.2byte \posType
	.2byte \destX
	.2byte \destY
	.endm

	.macro getobjecttemplatexy localId:req, posType = TEMPLATE_POSITION, destX:req, destY:req
	callnative ScrCmd_getobjectxy, requests_effects=1
	.2byte \localId
	.2byte \posType
	.2byte \destX
	.2byte \destY
	.endm

	.macro getobjectcurrentxy localId:req, posType = CURRENT_POSITION, destX:req, destY:req
	callnative ScrCmd_getobjectxy, requests_effects=1
	.2byte \localId
	.2byte \posType
	.2byte \destX
	.2byte \destY
	.endm

	@ Return TRUE to dest if there is an object at the position x and y.
	.macro checkobjectat x:req, y:req, dest = VAR_RESULT
	callnative ScrCmd_checkobjectat, requests_effects=1
	.2byte \x
	.2byte \y
	.2byte \dest
	.endm

	@ Returns the state of the Pokedex Seen Flag to VAR_RESULT for the Pokemon with speciesId
	.macro getseenmon species:req
	callnative Scrcmd_getsetpokedexflag, requests_effects=1
	.2byte \species
	.2byte FLAG_GET_SEEN
	.endm

	@ Returns the state of the Pokedex Caught Flag to VAR_RESULT for the Pokemon with speciesId
	.macro getcaughtmon species:req
	callnative Scrcmd_getsetpokedexflag, requests_effects=1
	.2byte \species
	.2byte FLAG_GET_CAUGHT
	.endm

	@ Sets the Pokedex Seen Flag for the Pokemon with speciesId
	.macro setseenmon species:req
	callnative Scrcmd_getsetpokedexflag, requests_effects=1
	.2byte \species
	.2byte FLAG_SET_SEEN
	.endm

	@ Sets the Pokedex Caught Flag for the Pokemon with speciesId
	.macro setcaughtmon species:req
	callnative Scrcmd_getsetpokedexflag, requests_effects=1
	.2byte \species
	.2byte FLAG_SET_CAUGHT
	.endm

	@ Check if the Player has speciesId in their party. OPEN_PARTY_SCREEN will have the player select a mon from their party. NO_PARTY_SCREEN will automatically check every mon in the player's party.
	.macro checkspecies speciesId:req, mode=NO_PARTY_SCREEN
	.if \mode == OPEN_PARTY_SCREEN
		special ChoosePartyMon
		waitstate
		callnative Scrcmd_checkspecies_choose, requests_effects=1
		.2byte \speciesId
	.else
		callnative Scrcmd_checkspecies, requests_effects=1
		.2byte \speciesId
	.endif
	.endm

	.macro checkspecies_choose speciesId:req
	checkspecies \speciesId, OPEN_PARTY_SCREEN
	.endm

	@ Gets the facing direction of a given event object and stores it in the variable dest.
	.macro getobjectfacingdirection localId:req, dest:req
	callnative Scrcmd_getobjectfacingdirection, requests_effects=1
	.2byte \localId
	.2byte \dest
	.endm

	@ Hides any follower Pokémon if present, putting them into their Poké Ball; by default waits for their movement to finish.
	.macro hidefollower wait=1
	.byte SCR_OP_HIDEFOLLOWER
	.2byte \wait
	.endm

	.macro increasedifficulty
	callnative Script_IncreaseDifficulty, requests_effects=1
	.endm

	.macro decreasedifficulty
	callnative Script_DecreaseDifficulty, requests_effects=1
	.endm

	.macro getdifficulty var:req
	callnative Script_GetDifficulty, requests_effects=1
	.endm

	.macro setdifficulty difficulty:req
	callnative Script_SetDifficulty, requests_effects=1
	.byte \difficulty
	.endm

	.macro forcesave
	callnative Script_ForceSaveGame
	waitstate
	.endm

	@ Makes the trainer unable to see the player if executed.
	@ This is a no-op if the player interacts with the trainer.
	.macro cant_see_if, condition:req
	callnative Script_EndTrainerCanSeeIf, requests_effects=1
	.byte \condition
	.endm

	.macro cant_see
	cant_see_if_unset 0 @ flag 0 is always FALSE.
	.endm

	.macro cant_see_if_unset, flag:req
	checkflag \flag
	cant_see_if FALSE
	.endm

	.macro cant_see_if_set, flag:req
	checkflag \flag
	cant_see_if TRUE
	.endm

	.macro cant_see_if_trainerflag_unset, trainer:req
	checktrainerflag \trainer
	cant_see_if FALSE
	.endm

	.macro cant_see_if_trainerflag_set, trainer:req
	checktrainerflag \trainer
	cant_see_if TRUE
	.endm

	.macro cant_see_if_lt, a:req, b:req
	compare \a, \b
	cant_see_if 0
	.endm

	.macro cant_see_if_eq, a:req, b:req
	compare \a, \b
	cant_see_if 1
	.endm

	.macro cant_see_if_gt, a:req, b:req
	compare \a, \b
	cant_see_if 2
	.endm

	.macro cant_see_if_le, a:req, b:req
	compare \a, \b
	cant_see_if 3
	.endm

	.macro cant_see_if_ge, a:req, b:req
	compare \a, \b
	cant_see_if 4
	.endm

	.macro cant_see_if_ne, a:req, b:req
	compare \a, \b
	cant_see_if 5
	.endm

@ Follower NPCs

	@ Sets an existing NPC up to follow the player.
	@ Follower flags are defined in include/constants/follower_npc.h
	@ If you want to specify a battle partner without specifying a custom script, you can set the script parameter to 0.
	.macro setfollowernpc localId:req, flags:req, script=0, battlePartner=0
	.if FNPC_ENABLE_NPC_FOLLOWERS
		checkfollowernpc
		compare VAR_RESULT, FALSE
		goto_if_ne 1f
		hidefollower
		waitmovement OBJ_EVENT_ID_FOLLOWER
		callnative ScriptSetFollowerNPC
		.if \script == 0
			.set setScript, FALSE
		.else
			.set setScript, TRUE
		.endif
		.byte \localId
		.2byte \flags
		.byte setScript
		.2byte \battlePartner
		.4byte \script
		updatefollowingmon
        1:
	.else
		.error "setfollowernpc unavailable with FNPC_ENABLE_NPC_FOLLOWERS defined as FALSE"
	.endif
	.endm

	@ Creates a new follower NPC with the specified graphics id.
	.macro createfollowernpc gfx:req, flags:req, script=0, battlePartner=0
	.if FNPC_ENABLE_NPC_FOLLOWERS
		callnative ScriptCreateFollowerNPC
		.2byte \gfx
		.2byte \flags
		.4byte \script
		.2byte \battlePartner
	.else
		.error "createfollowernpc unavailable with FNPC_ENABLE_NPC_FOLLOWERS defined as FALSE"
	.endif
	.endm

	@ Remove the follower NPC (assumes there will only ever be one).
	.macro destroyfollowernpc
	.if FNPC_ENABLE_NPC_FOLLOWERS
		callnative ScriptDestroyFollowerNPC
	.else
		.error "destroyfollowernpc unavailable with FNPC_ENABLE_NPC_FOLLOWERS defined as FALSE"
	.endif
	.endm

	@ Makes the player and follower NPC face one another.
	.macro facefollowernpc
	callnative ScriptFaceFollowerNPC
	.endm

	@ Makes the follower NPC walk into the player and get hidden.
	@ Optionally, you can set the walk speed for the movement:
	@ 0 = Slow
	@ 1 = Normal (default)
	@ 2 = Fast
	@ 3 = Faster
	.macro hidefollowernpc speed=1
	callnative ScriptHideNPCFollower
	.byte \speed
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
	callnative HideNPCFollower
	.endm

	@ Checks if you have a follower NPC. Returns the result to VAR_RESULT.
	.macro checkfollowernpc
	callnative ScriptCheckFollowerNPC
	.endm

	@ Updates Pokemon follower.
	.macro updatefollowingmon
	callnative ScriptUpdateFollowingMon
	.endm

	@ Changes the battle partner of the existing follower NPC.
	.macro changefollowerbattler battlePartner:req
	callnative ScriptChangeFollowerNPCBattlePartner
	.2byte \battlePartner
	.endm

@ VS Seeker
	.macro vsseeker_rematchid rematchId:req
	callnative NativeVsSeekerRematchId, requests_effects=1
	.2byte \rematchId
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	.endm
