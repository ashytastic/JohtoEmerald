#ifndef GUARD_SCRIPT_POKEMON_UTIL_H
#define GUARD_SCRIPT_POKEMON_UTIL_H

<<<<<<< HEAD
u8 ScriptGiveMon(u16, u8, u16, u32, u32, u8);
u8 ScriptGiveEgg(u16);
void CreateScriptedWildMon(u16, u8, u16);
void CreateShinyScriptedMon(u16 species, u8 level, u16 item);
u32 GenerateShinyPersonalityForOtId(u32 otId); 
void ScriptSetMonMoveSlot(u8, u16, u8);
void ReducePlayerPartyToSelectedMons(void);
void HealPlayerParty(void);
=======
u32 ScriptGiveMon(u16 species, u8 level, u16 item);
u8 ScriptGiveEgg(u16 species);
void CreateScriptedWildMon(u16 species, u8 level, u16 item);
void CreateScriptedDoubleWildMon(u16 species, u8 level, u16 item, u16 species2, u8 level2, u16 item2);
void ScriptSetMonMoveSlot(u8 monIndex, u16 move, u8 slot);
void ReducePlayerPartyToSelectedMons(void);
void HealPlayerParty(void);
void Script_GetChosenMonOffensiveEVs(void);
void Script_GetChosenMonDefensiveEVs(void);
void Script_GetChosenMonOffensiveIVs(void);
void Script_GetChosenMonDefensiveIVs(void);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#endif // GUARD_SCRIPT_POKEMON_UTIL_H
