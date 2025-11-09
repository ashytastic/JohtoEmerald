BerryTreeScript::
	special ObjectEventInteractionGetBerryTreeData
	switch VAR_0x8004
<<<<<<< HEAD
	case BERRY_STAGE_SPARKLING, BerryTree_EventScript_NotDoneYet
	case BERRY_STAGE_NO_BERRY, BerryTree_EventScript_NotDoneYet
	case BERRY_STAGE_PLANTED, BerryTree_EventScript_NotDoneYet
	case BERRY_STAGE_SPROUTED, BerryTree_EventScript_NotDoneYet
	case BERRY_STAGE_TALLER, BerryTree_EventScript_NotDoneYet
	case BERRY_STAGE_FLOWERING, BerryTree_EventScript_NotDoneYet
	case BERRY_STAGE_BERRIES, BerryTree_EventScript_CheckBerryFullyGrown
	end

BerryTree_EventScript_NotDoneYet::
	lock
	message ApricornTree_Text_Growing
	waitmessage
	waitbuttonpress
	release
	end

=======
	case BERRY_STAGE_SPARKLING, BerryTree_EventScript_Sparkling
	case BERRY_STAGE_NO_BERRY, BerryTree_EventScript_CheckSoil
	case BERRY_STAGE_PLANTED, BerryTree_EventScript_CheckBerryStage1
	case BERRY_STAGE_SPROUTED, BerryTree_EventScript_CheckBerryStage2
	case BERRY_STAGE_TALLER, BerryTree_EventScript_CheckBerryStage3
	case BERRY_STAGE_TRUNK, BerryTree_EventScript_CheckBerryStageTrunk
	case BERRY_STAGE_BUDDING, BerryTree_EventScript_CheckBerryStageBudding
	case BERRY_STAGE_FLOWERING, BerryTree_EventScript_CheckBerryStage4
	case BERRY_STAGE_BERRIES, BerryTree_EventScript_CheckBerryFullyGrown
	end

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
BerryTree_EventScript_Sparkling::
	lockall
	message BerryTree_Text_ExclamationPoint
	waitmessage
	waitbuttonpress
	releaseall
	end

BerryTree_EventScript_CheckSoil::
	lock
	faceplayer
	specialvar VAR_RESULT, PlayerHasBerries
<<<<<<< HEAD
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_ChooseBerryToPlant
=======
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_WantToPlant
	specialvar VAR_RESULT, PlayerHasMulch
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_WantToMulch
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	message BerryTree_Text_ItsSoftLoamySoil
	waitmessage
	waitbuttonpress
	release
	end

<<<<<<< HEAD
BerryTree_EventScript_ChooseBerryToPlant::
	message ApricornTree_Text_Growing
	waitmessage
	waitbuttonpress
=======
BerryTree_EventScript_WantToPlant::
	specialvar VAR_RESULT, PlayerHasMulch
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_WantToPlantMulch
	msgbox BerryTree_Text_WantToPlant, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_ChooseBerryToPlant
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPlanting
	end

BerryTree_EventScript_WantToMulch::
.if OW_BERRY_MULCH_USAGE == TRUE
	msgbox BerryTree_Text_WantToMulch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_ChooseMulchToUse
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPlanting
.endif
	end

BerryTree_EventScript_WantToPlantMulch::
.if OW_BERRY_MULCH_USAGE == TRUE
	message BerryTree_Text_ItsSoftLoamySoil
	waitmessage
	multichoice 0, 0, MULTI_BERRY_PLOT, FALSE
	switch VAR_RESULT
	case 0, BerryTree_EventScript_ChooseMulchToUse
	case 1, BerryTree_EventScript_ChooseBerryToPlant
	case 2, BerryTree_EventScript_CancelPlanting
	case MULTI_B_PRESSED, BerryTree_EventScript_CancelPlanting

BerryTree_EventScript_ChooseMulchToUse::
	fadescreen FADE_TO_BLACK
	closemessage
	special Bag_ChooseMulch
	waitstate
	goto_if_eq VAR_ITEM_ID, 0, BerryTree_EventScript_CancelPlanting
	removeitem VAR_ITEM_ID
	call BerryTree_EventScript_UseMulch
.endif

BerryTree_EventScript_ChooseBerryToPlant::
	fadescreen FADE_TO_BLACK
	closemessage
	special Bag_ChooseBerry
	waitstate
	goto_if_eq VAR_ITEM_ID, 0, BerryTree_EventScript_CancelPlanting
	removeitem VAR_ITEM_ID
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	call BerryTree_EventScript_PlantBerry

BerryTree_EventScript_CancelPlanting::
	release
	end

BerryTree_EventScript_CheckBerryStage1::
	lockall
	special ObjectEventInteractionGetBerryCountString
<<<<<<< HEAD
	checkitem ITEM_SQUIRT_BOTTLE, 1
	compare VAR_RESULT, 0
	goto_if_eq BerryTree_EventScript_DontWater
	msgbox BerryTree_Text_BerryGrowthStage1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq BerryTree_EventScript_WaterBerry
	compare VAR_RESULT, NO
	goto_if_eq BerryTree_EventScript_DontWater
=======
	message BerryTree_Text_BerryGrowthStage1
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

BerryTree_EventScript_CheckBerryStage2::
	lockall
	special ObjectEventInteractionGetBerryName
<<<<<<< HEAD
	checkitem ITEM_SQUIRT_BOTTLE, 1
	compare VAR_RESULT, 0
	goto_if_eq BerryTree_EventScript_DontWater
	msgbox BerryTree_Text_BerryGrowthStage2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq BerryTree_EventScript_WaterBerry
	compare VAR_RESULT, NO
	goto_if_eq BerryTree_EventScript_DontWater
=======
	message BerryTree_Text_BerryGrowthStage2
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

BerryTree_EventScript_CheckBerryStage3::
	lockall
	special ObjectEventInteractionGetBerryName
<<<<<<< HEAD
	checkitem ITEM_SQUIRT_BOTTLE, 1
	compare VAR_RESULT, 0
	goto_if_eq BerryTree_EventScript_DontWater
	msgbox BerryTree_Text_BerryGrowthStage3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq BerryTree_EventScript_WaterBerry
	compare VAR_RESULT, NO
	goto_if_eq BerryTree_EventScript_DontWater
=======
	message BerryTree_Text_BerryGrowthStage3
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

BerryTree_EventScript_CheckBerryStageTrunk::
	lockall
	special ObjectEventInteractionGetBerryName
	message BerryTree_Text_BerryGrowthStageTrunk
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

BerryTree_EventScript_CheckBerryStageBudding::
	lockall
	special ObjectEventInteractionGetBerryName
	message BerryTree_Text_BerryGrowthStageBudding
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

BerryTree_EventScript_CheckBerryStage4::
	call BerryTree_EventScript_GetCareAdverb
	lockall
<<<<<<< HEAD
	checkitem ITEM_SQUIRT_BOTTLE, 1
	compare VAR_RESULT, 0
	goto_if_eq BerryTree_EventScript_DontWater
	msgbox BerryTree_Text_BerryGrowthStage4, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq BerryTree_EventScript_WaterBerry
	compare VAR_RESULT, NO
	goto_if_eq BerryTree_EventScript_DontWater
=======
	special ObjectEventInteractionGetBerryName
	message BerryTree_Text_BerryGrowthStage4
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

@ VAR_0x8005 here is the number of times watered
@ Buffered by ObjectEventInteractionGetBerryTreeData
BerryTree_EventScript_GetCareAdverb::
	goto_if_eq VAR_0x8005, 0, BerryTree_EventScript_SetAdverbPoor
	goto_if_eq VAR_0x8005, 4, BerryTree_EventScript_SetAdverbGreat
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbGood
	return

BerryTree_EventScript_SetAdverbGreat::
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbGreat
	return

BerryTree_EventScript_SetAdverbPoor::
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbPoor
	return

@ VAR_0x8006 here is the number of berries
BerryTree_EventScript_CheckBerryFullyGrown::
	buffernumberstring STR_VAR_2, VAR_0x8006
	lock
	faceplayer
<<<<<<< HEAD
	goto BerryTree_EventScript_PickBerry

BerryTree_EventScript_PickBerry::
	special ObjectEventInteractionPickBerryTree
	goto_if_eq VAR_0x8004, 0, BerryTree_EventScript_BerryPocketFull
	special IncrementDailyPickedBerries
	special ObjectEventInteractionRemoveBerryTree
	message BerryTree_Text_PickedTheBerry
	playfanfare MUS_OBTAIN_BERRY

	@ added to crystal:
	special ObjectEventInteractionPlantBerryTree
	incrementgamestat GAME_STAT_PLANTED_BERRIES
	special IncrementDailyPlantedBerries


	waitmessage
	waitfanfare
=======
	special ObjectEventInteractionGetBerryCountString
.if OW_BERRY_MUTATIONS == TRUE
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_CheckBerryFullyGrown_Mutation
.endif
	msgbox BerryTree_Text_WantToPick, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_PickBerry
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPickingBerry

.set BERRY_NORMAL_BAG_FULL, 0
.set BERRY_NORMAL_SPACE_IN_BAG, 1
.set BERRY_MUTATION_BAG_FULL, 2
.set BERRY_MUTATION_SPACE_IN_BAG, 3

BerryTree_EventScript_PickBerry::
	special ObjectEventInteractionPickBerryTree
	goto_if_eq VAR_0x8004, BERRY_NORMAL_BAG_FULL, BerryTree_EventScript_BerryPocketFull
.if OW_BERRY_MUTATIONS == TRUE
	goto_if_eq VAR_0x8004, BERRY_MUTATION_BAG_FULL, BerryTree_EventScript_BerryPocketFull_Mutation
	goto_if_eq VAR_0x8004, BERRY_MUTATION_SPACE_IN_BAG, BerryTree_EventScript_PickBerry_Mutation
.endif
	special IncrementDailyPickedBerries
	special ObjectEventInteractionRemoveBerryTree
	message BerryTree_Text_PickedTheBerry
	delay 10
	showberrydescription
	playfanfare MUS_OBTAIN_BERRY
	waitmessage
	waitfanfare
	waitbuttonpress
	message BerryTree_Text_PutAwayBerry
	waitmessage
	waitbuttonpress
	hideitemdescription
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	release
	end

BerryTree_EventScript_BerryPocketFull::
	message BerryTree_Text_BerryPocketFull
	waitmessage
	waitbuttonpress
	release
	end

<<<<<<< HEAD
=======
BerryTree_EventScript_CancelPickingBerry::
	message BerryTree_Text_BerryLeftUnpicked
	waitmessage
	waitbuttonpress
	release
	end

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
BerryTree_EventScript_ItemUsePlantBerry::
	lockall
	special ObjectEventInteractionGetBerryTreeData
	call BerryTree_EventScript_PlantBerry
	releaseall
	end

<<<<<<< HEAD
=======
BerryTree_EventScript_WantToWater::
.if OW_BERRY_PESTS == TRUE
	call BerryTree_EventScript_CheckForPests
.endif
.if OW_BERRY_WEEDS == TRUE
	call BerryTree_EventScript_CheckForWeed
.endif
	checkitem ITEM_WAILMER_PAIL
	goto_if_eq VAR_RESULT, FALSE, BerryTree_EventScript_DontWater
	specialvar VAR_RESULT, CanWaterBerryPlot
	goto_if_eq VAR_RESULT, FALSE, BerryTree_EventScript_DontWater
	special ObjectEventInteractionGetBerryName
	msgbox BerryTree_Text_WantToWater, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_WaterBerry
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_DontWater

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
BerryTree_EventScript_DontWater::
	releaseall
	end

BerryTree_EventScript_ItemUseWailmerPail::
	special ObjectEventInteractionGetBerryTreeData
	lockall
BerryTree_EventScript_WaterBerry::
<<<<<<< HEAD
	@ special ObjectEventInteractionWaterBerryTree
	@ special DoWateringBerryTreeAnim
	@ waitstate
	@ releaseall
	message ApricornTree_Text_Growing
	waitmessage
	waitbuttonpress
	end

BerryTree_EventScript_BerryTree::
	message BerryTree_Text_BerryTreeSprouted
	waitmessage
	callnative Berry_Ready
	waitbuttonpress
	release
=======
	special ObjectEventInteractionGetBerryName
	message BerryTree_Text_WateredTheBerry
	waitmessage
	special ObjectEventInteractionWaterBerryTree
	special DoWateringBerryTreeAnim
	waitstate
	message BerryTree_Text_PlantIsDelighted
	waitmessage
	waitbuttonpress
	releaseall
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	end

BerryTree_EventScript_PlantBerry::
	special ObjectEventInteractionPlantBerryTree
	incrementgamestat GAME_STAT_PLANTED_BERRIES
	special IncrementDailyPlantedBerries
<<<<<<< HEAD
	return

ApricornTree_Text_Growing:
	.string "It's a berry tree!\n"
	.string "These berries aren't ripe yet.$"

BerryTree_Text_ItsSoftLoamySoil:
	.string "It's soft, loamy soil.$"

BerryTree_Text_BerryGrowthStage1:
	.string "One {STR_VAR_1} was planted here.\n"
	.string "Want to water it with the WAILMER PAIL?$"

BerryTree_Text_BerryGrowthStage2:
	.string "{STR_VAR_1} has sprouted.\n"
	.string "Want to water it with the WAILMER PAIL?$"

BerryTree_Text_BerryGrowthStage3:
	.string "This {STR_VAR_1} plant is growing taller.\n"
	.string "Want to water it with the WAILMER PAIL?$"

BerryTree_Text_BerryGrowthStage4:
	.string "These {STR_VAR_1} flowers are\n"
	.string "blooming {STR_VAR_2}. Want to water them?$"
=======
	special ObjectEventInteractionGetBerryCountString
	message BerryTree_Text_PlantedOneBerry
	waitmessage
	waitbuttonpress
	return

BerryTree_Text_ItsSoftLoamySoil:
	.string "It's soft, loamy soil.$"

BerryTree_Text_WantToPlant:
	.string "It's soft, loamy soil.\n"
	.string "Want to plant a BERRY?$"

BerryTree_Text_PlantedOneBerry:
	.string "{PLAYER} planted one {STR_VAR_1} in\n"
	.string "the soft, loamy soil.$"

BerryTree_Text_BerryGrowthStage1:
.if OW_BERRY_SIX_STAGES == TRUE
	.string "This is where you planted the\n{STR_VAR_1}!$"
.else
	.string "One {STR_VAR_1} was planted here.$"
.endif

BerryTree_Text_BerryGrowthStage2:
.if OW_BERRY_SIX_STAGES == TRUE
	.string "The {STR_VAR_1} is sprouting!$"
.else
	.string "{STR_VAR_1} has sprouted.$"
.endif

BerryTree_Text_BerryGrowthStage3:
.if OW_BERRY_SIX_STAGES == TRUE
	.string "The {STR_VAR_1}'s seedling is growing well!$"
.else
	.string "This {STR_VAR_1} plant is growing taller.$"
.endif

BerryTree_Text_BerryGrowthStageTrunk:
	.string "The {STR_VAR_1}'s trunk is getting bigger!$"

BerryTree_Text_BerryGrowthStageBudding:
	.string "The {STR_VAR_1} tree has buds!$"

BerryTree_Text_BerryGrowthStage4:
.if OW_BERRY_SIX_STAGES == TRUE
	.string "The {STR_VAR_1} tree is in bloom!$"
.else
	.string "These {STR_VAR_1} flowers are blooming\n"
	.string "{STR_VAR_2}.$"
.endif
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

BerryTree_Text_CareAdverbGreat:
	.string "very beautifully$"

BerryTree_Text_CareAdverbPoor:
	.string "cutely$"

BerryTree_Text_CareAdverbGood:
	.string "prettily$"

<<<<<<< HEAD
BerryTree_Text_PickedTheBerry:
	.string "{PLAYER} picked the {STR_VAR_2} {STR_VAR_1}.$"

=======
BerryTree_Text_WantToPick:
	.string "You found {STR_VAR_2} {STR_VAR_1}!\p"
	.string "Do you want to pick the\n"
	.string "{STR_VAR_1}?$"

BerryTree_Text_PickedTheBerry:
	.string "{PLAYER} picked the {STR_VAR_2} {STR_VAR_1}.$"

BerryTree_Text_PutAwayBerry:
	.string "{PLAYER} put away the {STR_VAR_1}\n"
	.string "in the BAG's BERRIES POCKET.\p"
	.string "The soil returned to its soft and\n"
	.string "loamy state.$"

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
BerryTree_Text_BerryPocketFull:
	.string "The BAG's BERRIES POCKET is full.\p"
	.string "The {STR_VAR_1} couldn't be taken.$"

<<<<<<< HEAD
BerryTree_Text_ExclamationPoint:
	.string "!$"

BerryTree_Text_BerryTreeSprouted:
	.string "The berry tree suddenly sprouted!$"
=======
BerryTree_Text_BerryLeftUnpicked:
	.string "{PLAYER} left the {STR_VAR_1}\n"
	.string "unpicked.$"

BerryTree_Text_WantToWater:
	.string "Want to water the {STR_VAR_1} with the\n"
	.string "WAILMER PAIL?$"

BerryTree_Text_WateredTheBerry:
	.string "{PLAYER} watered the {STR_VAR_1}.$"

BerryTree_Text_PlantIsDelighted:
	.string "The plant seems to be delighted.$"

BerryTree_Text_ExclamationPoint:
	.string "!$"

.if OW_BERRY_MUTATIONS == TRUE
BerryTree_EventScript_CheckBerryFullyGrown_Mutation:
	msgbox BerryTree_Text_WantToPick_Mutation, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_PickBerry
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPickingBerry_Mutation

BerryTree_EventScript_CancelPickingBerry_Mutation::
	message BerryTree_Text_BerryLeftUnpicked_Mutation
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_BerryPocketFull_Mutation::
	message BerryTree_Text_BerryPocketFull_Mutation
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_PickBerry_Mutation::
	special IncrementDailyPickedBerries
	special ObjectEventInteractionRemoveBerryTree
	message BerryTree_Text_PickedTheBerry_Mutation
	playfanfare MUS_OBTAIN_BERRY
	waitmessage
	waitfanfare
	waitbuttonpress
	message BerryTree_Text_PutAwayBerry_Mutation
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_Text_WantToPick_Mutation:
	.string "You found {STR_VAR_2} {STR_VAR_1}\n"
	.string "and 1 {STR_VAR_3}!\p"
	.string "Do you want to pick them?$"

BerryTree_Text_BerryLeftUnpicked_Mutation:
	.string "{PLAYER} left the {STR_VAR_1}\n"
	.string "and the {STR_VAR_3} unpicked.$"

BerryTree_Text_BerryPocketFull_Mutation:
	.string "The BAG's BERRIES POCKET is full.\p"
	.string "The {STR_VAR_1} and the\n"
	.string "{STR_VAR_3} couldn't be taken.$"

BerryTree_Text_PickedTheBerry_Mutation:
	.string "{PLAYER} picked the {STR_VAR_2} {STR_VAR_1}\n"
	.string "and the {STR_VAR_3}.$"

BerryTree_Text_PutAwayBerry_Mutation:
	.string "{PLAYER} put away the {STR_VAR_1}\n"
	.string "and the {STR_VAR_3} in the BAG's\l"
	.string "BERRIES POCKET.\p"
	.string "The soil returned to its soft and\n"
	.string "loamy state.$"
.endif

.if OW_BERRY_MULCH_USAGE == TRUE
BerryTree_EventScript_UseMulch::
	special ObjectEventInteractionApplyMulch
	message BerryTree_Text_ScatteredMulch
	waitmessage
	waitbuttonpress
	return

BerryTree_Text_WantToMulch:
	.string "It's soft, loamy soil.\n"
	.string "Put down some fertilizer?$"

BerryTree_Text_ScatteredMulch:
	.string "{PLAYER} scattered the {STR_VAR_1}\n"
	.string "on the soft, loamy soil.$"
.endif

.if OW_BERRY_WEEDS == TRUE
BerryTree_EventScript_CheckForWeed::
	specialvar VAR_RESULT, ObjectEventInteractionBerryHasWeed
	call_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_WeedIsGrowing
	return

BerryTree_EventScript_WeedIsGrowing::
	msgbox BerryTree_Text_WeedIsGrowing, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_PullOutWeed
	return

BerryTree_EventScript_PullOutWeed::
	special ObjectEventInteractionPullBerryWeed
	message BerryTree_Text_PulledOutTheWeed
	waitmessage
	waitbuttonpress
	return

BerryTree_Text_WeedIsGrowing:
	.string "A weed is growing here.\n"
	.string "Do you want to pull it out?$"

BerryTree_Text_PulledOutTheWeed:
	.string "{PLAYER} pulled out the weed!$"
.endif

.if OW_BERRY_PESTS == TRUE
BerryTree_EventScript_CheckForPests::
	specialvar VAR_RESULT, ObjectEventInteractionBerryHasPests
	call_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_EncounterPests
	return

BerryTree_EventScript_EncounterPests::
	message BerryTree_Text_APokemonAppeared
	waitmessage
	waitbuttonpress
	dowildbattle
	return

BerryTree_Text_APokemonAppeared:
	.string "A Pokémon appeared!$"
.endif
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
