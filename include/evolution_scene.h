#ifndef GUARD_EVOLUTION_SCENE_H
#define GUARD_EVOLUTION_SCENE_H

<<<<<<< HEAD
void BeginEvolutionScene(struct Pokemon *mon, u16 speciesToEvolve, bool8 canStopEvo, u8 partyID);
void EvolutionScene(struct Pokemon *mon, u16 speciesToEvolve, bool8 canStopEvo, u8 partyID);
void TradeEvolutionScene(struct Pokemon *mon, u16 speciesToEvolve, u8 preEvoSpriteID, u8 partyID);
=======
void BeginEvolutionScene(struct Pokemon *mon, u16 postEvoSpecies, bool8 canStopEvo, u8 partyId);
void EvolutionScene(struct Pokemon *mon, u16 postEvoSpecies, bool8 canStopEvo, u8 partyId);
void TradeEvolutionScene(struct Pokemon *mon, u16 postEvoSpecies, u8 preEvoSpriteId, u8 partyId);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

extern void (*gCB2_AfterEvolution)(void);

#endif // GUARD_EVOLUTION_SCENE_H
