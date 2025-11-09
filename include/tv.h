#ifndef GUARD_TV_H
#define GUARD_TV_H

extern u8 *const gTVStringVarPtrs[3];

void ClearTVShowData(void);
void TryPutBreakingNewsOnAir(void);
<<<<<<< HEAD
void TryPutBattleSeminarOnAir(u16 foeSpecies, u16 species, u8 moveIdx, const u16 *movePtr, u16 betterMove);
void TryPutFrontierTVShowOnAir(u16 winStreak, u8 facility);
=======
void TryPutBattleSeminarOnAir(u16 foeSpecies, u16 species, u8 moveIndex, const u16 *movePtr, u16 betterMove);
void TryPutFrontierTVShowOnAir(u16 winStreak, u8 facilityAndMode);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void DoTVShow(void);
void DoTVShowInSearchOfTrainers(void);
void TryPutTreasureInvestigatorsOnAir(void);
void TryPutLotteryWinnerReportOnAir(void);
void TryPutTrainerFanClubOnAir(void);
void IncrementDailyPlantedBerries(void);
void IncrementDailyPickedBerries(void);
void IncrementDailyBattlePoints(u16 delta);
void HideBattleTowerReporter(void);
<<<<<<< HEAD
void ReceiveTvShowsData(void *src, u32 size, u8 masterIdx);
=======
void ReceiveTvShowsData(void *src, u32 size, u8 playersLinkId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void TryPutSpotTheCutiesOnAir(struct Pokemon *pokemon, u8 ribbonMonDataIdx);
u32 GetPlayerIDAsU32(void);
bool8 IsPokeNewsActive(u8 newsKind);
void SanitizeTVShowLocationsForRuby(TVShow *shows);
size_t CountDigits(int value);
u8 GetRibbonCount(struct Pokemon *pokemon);
void AlertTVThatPlayerPlayedSlotMachine(u16 nCoinsSpent);
void AlertTVThatPlayerPlayedRoulette(u16 nCoinsSpent);
void TryPutFindThatGamerOnAir(u16 nCoinsPaidOut);
void TryPutSecretBaseSecretsOnAir(void);
void TryPutTodaysRivalTrainerOnAir(void);
void TryPutTrendWatcherOnAir(const u16 *words);
<<<<<<< HEAD
void ReceivePokeNewsData(void *src, u32 size, u8 masterIdx);
=======
void ReceivePokeNewsData(void *src, u32 size, u8 playersLinkId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void DeactivateAllNormalTVShows(void);
void RecordFishingAttemptForTV(bool8 caughtFish);
void IncrementDailySlotsUses(void);
void IncrementDailyRouletteUses(void);
void IncrementDailyWildBattles(void);
void IncrementDailyBerryBlender(void);
void SanitizeTVShowsForRuby(TVShow *shows);
<<<<<<< HEAD
void TryPutSafariFanClubOnAir(u8 nMonsCaught, u8 nPkblkUsed);
bool8 Put3CheersForPokeblocksOnTheAir(const u8 *partnersName, u8 flavor, u8 unused, u8 sheen, u8 language);
=======
void TryPutSafariFanClubOnAir(u8 monsCaught, u8 pokeblocksUsed);
bool8 Put3CheersForPokeblocksOnTheAir(const u8 *partnersName, u8 flavor, u8 color, u8 sheen, u8 language);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void SetPokemonAnglerSpecies(u16 species);
void UpdateTVShowsPerDay(u16 days);
void TryPutPokemonTodayOnAir(void);
void TryPutSecretBaseVisitOnAir(void);
void PutBattleUpdateOnTheAir(u8 opponentLinkPlayerId, u16 move, u16 speciesPlayer, u16 speciesOpponent);
void BravoTrainerPokemonProfile_BeforeInterview1(u16 move);
void InterviewBefore(void);
void InterviewAfter(void);
<<<<<<< HEAD
void UpdateTVScreensOnMap(int, int);
=======
void UpdateTVScreensOnMap(int width, int height);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void ConvertIntToDecimalString(u8 varIdx, int value);
void TryPutSmartShopperOnAir(void);
bool8 ShouldAirFrontierTVShow(void);
void BravoTrainerPokemonProfile_BeforeInterview2(u8 contestStandingPlace);
void ContestLiveUpdates_Init(u8 round1Placing);
void ContestLiveUpdates_SetRound2Placing(u8 round2Placing);
void ContestLiveUpdates_SetWinnerAppealFlag(u8 flag);
void ContestLiveUpdates_SetWinnerMoveUsed(u16 move);
void ContestLiveUpdates_SetLoserData(u8 flag, u8 loser);
void ResetGabbyAndTy(void);
u8 CheckForPlayersHouseNews(void);
bool8 IsGabbyAndTyShowOnTheAir(void);
void TryPutTrainerFanClubOnAir(void);

#endif //GUARD_TV_H
