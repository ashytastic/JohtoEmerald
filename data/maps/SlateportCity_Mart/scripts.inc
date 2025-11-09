SlateportCity_Mart_MapScripts::
	.byte 0

SlateportCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
<<<<<<< HEAD
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

SlateportCity_Mart_EventScript_Clerk2::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_unset FLAG_RECEIVED_EXP_SHARE, SlateportCity_Mart_EventScript_ClerkNoExp
=======
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	pokemart SlateportCity_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_Mart_Pokemart:
<<<<<<< HEAD
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_EXP_SHARE_SMALL
	.2byte ITEM_NONE
	release
	end

SlateportCity_Mart_EventScript_ClerkNoExp::
	pokemart SlateportCity_Mart_PokemartNoExp
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_Mart_PokemartNoExp:
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_NONE
	release
	end
=======
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_HARBOR_MAIL
	pokemartlistend
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

SlateportCity_Mart_EventScript_BlackBelt::
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
	end

SlateportCity_Mart_EventScript_Man::
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
	end

SlateportCity_Mart_Text_SomeItemsOnlyAtMart:
	.string "The MARKET does have some interesting\n"
	.string "merchandise.\p"
	.string "But there are some items you can only\n"
	.string "get at a POKéMON MART.$"

SlateportCity_Mart_Text_GreatBallIsBetter:
	.string "A GREAT BALL is better than a POKé BALL\n"
	.string "at catching POKéMON.\p"
	.string "With this, I should be able to get that\n"
	.string "elusive POKéMON…$"

