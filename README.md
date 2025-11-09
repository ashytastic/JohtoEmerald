<<<<<<< HEAD
![HnS Logo](HnS_Logo.png)

# Pokémon Heart & Soul
Pokémon Heart & Soul brings the classic Johto Region and its iconic story to the world of modern GBA decomp hacking. Built on the Modern Emerald decomp, this project offers a fresh take on the GSC/HGSS experience, blending key aspects of the Gen 2 and Gen 4 games, while incorporating many modern QoL features, as well as some familiar Gen 3 mechanics. Not only is Heart & Soul (HnS) a first-of-its-kind, fully completed, playtested, and largely faithful GSC remake / HGSS demake, it's also completely open source, and is intended to be a base for a new generation of Johto rom hacks.

![HnS Collage](HnS_Collage_YourAdventure.png)

## Developer's Note: 
Development for this project was primarily (95%) a solo-effort that consumed almost all of my free time for the last year. I am not a professional programmer, but I did my best to make the game that I wanted to play. If you'd like to improve, expand upon, or make your own version of HnS, feel free to take advantage of the open source! Please direct any questions to the [Heart & Soul Discord](https://discord.gg/KmuvXJrS9M). Also, the github link in the download section of this post is the ONLY place you will EVER find an official download of this project, and our devs do NOT accept donations. I hope you enjoy!

## About the game: 
### Features
- Generation 1-3 Pokémon, plus their later gen evolutions (excluding the Regis and Jirachi)
- Full Johto story and Kanto postgame from HGSS, including the Kimono Girls and Eusine
- Following Pokémon
- Overworld background Pokémon allow you to easily see the notable encounters on each route
- Overworld background Pokémon in cities, towns, or areas with no encounters are just for the vibes
- Day/Night System with variable encounters 
- Dynamic overworld palettes
- HGSS Music
- Highly varied trainer teams and encounters, based on Crystal Legacy
- HMs do not need to be taught to a Pokémon in order for it to be used
- Apricons replaced with berries, Kurt will use them to make unique Pokéballs
- Timekeeping does not track days of the week, Everything is progression based
- 16 Gym leader rematches
- Two Safari Zones
- Unique surfing Pokémon sprites
- Customizable shiny rate
- Physical/special split is toggleable
- Fairy type is toggleable
- AutoRun and FastSurf are toggleable
- Quick run from wild battles using button combination
- Ball prompts for quick catching 
- ... and much more!

### Setting Expectations:
- Heart & Soul was designed as a traditional Pokémon experience, akin to the main-series games. It is not a difficulty hack, and does not have built-in features for non-traditional playstyles. Do not expect to see features like infinite rare candies, or built-in randomization or nuzlocking rules. 
- Heart & Soul stands on the shoulders of giants. I am not an artist or a professional programmer, so much of the art and some of the code for this project was drawn from open source assets. I did my best to credit all sources below and in the game credits, but if you find any that I missed, please let me know in the [Heart & Soul Discord](https://discord.gg/KmuvXJrS9M).
- Heart & Soul has been rigorously playtested, (shoutout to the playtesters) but there still may be some small bugs. If you find any, please report them to the [Heart & Soul Discord](https://discord.gg/KmuvXJrS9M).
- There are a few GSC/HGSS features that were too complex or time consuming for me to implement in this project. See differences section below.

### Differences from GSC/HGSS:
- Radio is a standalone Key Item with limited functionality instead of a menu in the Pokégear
- Trainers will not offer their phone numbers, no way to rematch them
- Level curve is greatly improved
- Apricorns replaced with berries, berry ball catch boost is based on Type
- Strength boulder-in-hole puzzles replaced with Emerald Mach Bike puzzles
- No itemfinder and no hidden items
- Only 50 TMs (The ones from emerald)
- Swarms are replaced with a 5% Hoenn encounter on each route in Kanto
- Mom does not take your money
- No unique Kanto battle music for trainers and gym leaders, only Johto
- Ruins of alph back room requirements are slightly altered
- No pokéathalon dome
- No Battle Frontier
- Yes Battle Tower (ported straight from emerald, not extensively tested so be careful)
- No trades in Kanto

## Download
### Download the .ups patch file in the (Releases) Section.
- pokemonHnS_v1.0.ups  (to be patched onto a Pokemon - Emerald Version (U) ROM)

## Patching your ROM
Use [Rom Patcher JS](https://www.marcrobledo.com/RomPatcher.js/legacy/) to patch the files.
**You will need to provide your own **legally obtained** copy of Pokemon - Emerald Version (U).**
- Upload the Pokemon - Emerald Version (U).gba file to the "ROM file" section
- Upload the HnS patch file to the "Patch file" section
- Look for a green checkmark and hit apply patch. 
This will automatically download your new Heart & Soul GBA ROM (pokemonHnS v1.0.gba) for you to play!

## Recommended Emulators
- For PC/Mac: mGBA
- For Android: pizzaboy, Lemuroid, Retroarch w/ mGBA core.
- For IOS: Delta, Retroarch w/ mGBA core, Ignited.
- For Linux Handheld Devices: Retroarch w/ mGBA core.
  
## Support
For further assistance, join the [discord](https://discord.gg/KmuvXJrS9M)!

## Future Plans
I plan to take a step back from this project once the initial wave of inevitable post-release bugs are fixed. Over the course of the playtest, the dev team has grown from 1 to 6, and an effort to port the whole project to pokeemerald expansion is underway. For more concrete plants, join the [discord](https://discord.gg/KmuvXJrS9M)!

## Credits
<small>Special thanks to the playtesters and devs who joined me late in development. Their work greatly improved the stability and quality of HnS. They inspired me to add new features for all of you to enjoy, and they made the whole process way more fun. HnS would be a mess without them.</small>

#### Lead Developer / Game Director
- **Lil Dill**

#### Developers
- **TixoRebel**
- **InfiniteBacon42**
- **Exclsior**
- **Phantonomy**
- **DaniRainbow**

### Open Source Assets Used:

#### Engine & Codebase
- **pokeemerald - pret** 
- **Modern Emerald — Resetes12**
- **pokeemerald-expansion**

#### Art — Sprites
- **Crystal Dust — Sierraffinity**
- **AveonTrainer**
- **PurpleZaffre**
- **BatimaTheBat**

#### Art — Tilesets
- **Crystal Advance — Kertra**
- **Ekat99**
- **TheDeadHeroAlistair**
- **Johto Redrawn Team**

#### Maps / Mapping References
- **Crystal Advance — Kertra**
- **Fire Gold — blackfragrant**
- **SkidMarc25**

#### Gameplay
- **Crystal Legacy — TSP (TheSmithPlays)**

#### Special Systems / Visuals
- **Surfing Pokémon overworlds - slawter666, wally-217**

### Playtesters
**MearaTheDigger · Kingofrocks · Ferropexola · Scarred-Healer13 · ShigyNinja · Liquid Justice · aktatertot · Faintful · piobrando · Shortino · Chronotakular · NoVa x CerberuS · Czarwardy · Phantonomy · TeggyDave · HenryChess · Inner Rhymes · Astralaria · GPie · BillyNaing · Penkachu · Emma M · Casper · Marzi · leob0505 · Sayu · RavePossum · Brick · KinoKuma · BlackBelt Jiraiya**


# For Developers
If you are a developer interested in forking this repository and making your own modifications to Heart & Soul, you may want to read up on the base that was used, Modern Emerald. Information on that project, and pret's Pokéemerald decompilation project, continue reading below!
- Note: This project is not yet compatible with Porymap 6. Use Porymap 5 instead.
- Also Note: devkitARM version 65 or older is required.

---

## Pokémon Modern Emerald 

This project is based on the decompilation of Pokémon Emerald, edited to be "Pokémon Modern Emerald".
You can get more information about Modern Emerald by resetes12 at [Pokécommunity](https://www.Pokécommunity.com/showthread.php?t=494005) and at [Github](https://github.com/resetes12/Pokéemerald).

## If you want to compile:

Please follow [Pret's guide on how to build the rom](https://github.com/pret/Pokéemerald/blob/master/INSTALL.md) but using this branch instead of theirs. 
When you compile, use the modern compiler with "make modern". Compiling using the old compiler won't work.

## Modern Emerald Features: (not all present in Hns)

**Selectable options (at the start of the game):**

**Gamemode**
* Choose between a "Classic" or "Modern" preset, or customize it to your liking.
* Modern Spawns: You can now capture the 423 new Pokémon available. Only changes wild Pokémon, not trainers. Modern Spawns have also a Night encounter version for each route, making certain Pokémon night exclusive.
* Modern Typings: Some Pokémon have their types changed to buff them.
* Add Fairy Type: Adds Fairy Type to Pokémon that had it added in Generation 6.
* Better Stats: Some Pokémon have their stats changed to buff them.
* Extra Legendaries: Adds new legendaries that weren't available in vanilla Emerald.
* Legendary abilities: Buffs some legendaries giving them a better ability than "Pressure".
* Modern Movepool: Adds 15 new moves, and modifies all Pokémon movepool to add them.
* Nature mints: Adds nature mints to the game, available after the 4th gym.
* Synchronize: Choose if this ability works like in modern games or like in Gen 3.
* Sturdy: Choose if this ability works like in modern games or like in Gen 3.
* Reusable TMs: Choose between a faithful usage of TMs or a simplistic option that makes TMs infinite. All TMs can be bought in the Battlefrontier PokéMart only if you have Reusable TMs off, and makes Move Tutors one time only just like in the original (Move tutors are infinite if you enable Reusable TMs).
* Citrus berry: Choose if it works like Gen 3 or like Gen 4+.
* Survive Poison: If enabled, your Pokémon will survive poison damage with 1hp when outside of battle.
* Features
* RTC Type: Choose between using a real clock, or using a fake clock. Fake clock rate is 1h irl, 1 day ingame.
* Shiny Chance: 8192 (Emerald default) - 4096 (Gen VI+) - 2048 - 1024 - 512.
* Item Drops: Items held by wild Pokémon, when defeated, will be dropped and obtained by the player. Forget about catching it or using Thief!
* Pokémon Faint: Your Pokémon will stay in the FAINTED status, meaning that you can't use them again. CAREFUL as it could end your adventure if you lose all your Pokémon (Previously known as Perma Faint).
* Uncaped wondertrade.
* Easier Feebas: If enabled, Feebas have a 5% chance to appear around all Route 119.

**Randomizer: (not implemented in HnS)**
* Includes every option that any randomizer can have, and it's completely modular. 

**Nuzlocke: (not implemented in HnS)**
* Any option that any Nuzlocker would want to use. (not implemented in HnS)

**Difficulty:**
* Lock difficulty: locks the current select option that was selected during Birch's Speech and can't be changed ingame. Hard sets "Battle Style" to "Set" always. Beating the game disables the lock.
* Number of Party Members limit: From 1 to 5
* Level caps
* Exp. Multipliers
* Player items
* Trainer items
* Player IVs: Sets all IVs from wild Pokémon to 31, or if you choose "No (HP) , between 30 and 31 to allow for different Hidden Powers.
* Trainer IVs: If hard is selected together with "Player IVs", you'll completely remove IVs from the game.
* Player EVs
* Trainer EVs
* Play without Pokémon Centers

**Challenges: (not in HnS)**
* PC doesn't heal
* Evolution limits
* One type only challenges
* Stat equalizers
* Mirror Mode
* Mirror Mode Thief

**Story related: (not in HnS)**
* Gym rematches are easier to trigger. After 10 wild battles won, or 5 trainer battles won, there is a 50% chance of getting a rematch.
* The Elite Four can be rematched after battling with Steven, and they are double battles.
* After completing the Elite Four Rematch, a rematch with Steven will be available. You will get a unique, special prize.
* The Sealed Chambers puzzles have changed slightly. Learn braille and find out what changed!
* Also, there are 6 Regis. Try to discover where are the new 3!
* All the trainer rematches scale up a lot more than in the original game, and their parties have been changed.
* All the trainers in the Battle Frontier have new Pokémon in their teams and have been buffed or modified.
* All the gym leaders, Elite Four, the 2 champions, Wally, Magma / Aqua leaders, and Red and Leaf will appear during the Battle Frontier challenges.


**Pokémon related:**
* Following Pokémon (Optional, with a second option to enable or not Big Followers like Rayquaza).
* 40 new Pokémon species, mostly from Gen. IV and 3 from Gen 9 (Annihilape, Dudunsparce, Farigiraf, Ursaluna).
* 1 new box space since 2.0.
* Day/Night encounters. Some Pokémon only appear during day or night.
* (Not in HnS) All the buffs from later generations are in (optional). 
* (Not in HnS) Extra buffs for other Pokémon are in. Includes stats, abilities and/or typings. (Ex. Arbok is now POISON / DARK and Meganium is now GRASS / FAIRY). You can have a look at them in my personal document, on the "3. Pokémon changes" tab. 
* All the move buffs AND nerfs from later generations are in, with small changes to make them work in a 3rd gen game (optional).
* All Egg moves and tutor moves have been improved with data from later generations.
* New evolution methods.
* Pokémon inherit 5 IV's from their parents, no item needed.
* Everstone works on male or female Pokémon and guarantees nature.
* Gen. VIII Synchronize (optional).
* Shuckle can make berry juice just like in Gen. II!! Yay?
* Nature Mints are available to buy in the Flower Shop after the 4th Gym (optional).
* Deoxys forms can be changed.
* Custom Shiny forms for some Pokémon.


**Battle related:**
* (Not in HnS) Modern Battle Frontier, Battle Tents and Trainer Hill. Your Pokémon will be limited to level 50 when playing in those battle facilities, even if your level is 100. 
* 15 new moves from Gen IV to buff typings that didn't have a certain Physical / Special move. (Ex. Dark Pulse, as Dark type didn't have a Special Dark type move). (Now optional).
* Fairy type introduced.
* (Not in HnS) 3 New abilities for Regidrago, Regieleki and Arceus.
* (HnS EXP SHARE is different) Gen. VI EXP. SHARE and Gen III EXP. SHARE in the same game. "EXP. SHARE S" can be obtained at the Slateport Mart after obtaining the "EXP. SHARE" at Devon Corp.
* (Not in HnS) HM01 Cut is now Grass type, NightShade does 50 static damage, Hidden power is now 60 always, and shows the type in the summary screen and in battle, Charge now ups Sp. Def.
* (Saffron in HnS) EV Training available in Lilycove.
* (Not in HnS) IV Maximizer available in Lylicove, after beating the game. Needs a lvl.100 Pokémon.
* (Not in HnS) A nurse NPC is available after beating the game to farm EXP in Lilycove.
* Faster battle intros. Enable "Fast Intros" option in the options menu.
* Faster-paced battles. Enable "Fast Battles" option in the options menu.
* 3 beeps when low-health, then it stops.
* Press START while selecting a move to open a new Submenu with information about the selected move.
* Trainer class-based Pokéballs.
* Catching EXP.
* Macho Brace multiplies EV gain * 5.
* Gen. IV Sitrus Berry (optional).


**UI related:**
* New Pokédex! You can now see important information on the new "Stats" page. It's very, VERY useful and it's like having the game documentation in-game.
* Faster battle transitions ported from Fire Red.
* Hold L+R, then A when entering a Wild Battle to instantly run.
* You can now register 2 key items: Pressing (as usual) and holding SELECT!
* Swap Pokémon pressing SELECT.
* Colored Stats (red = good, blue = bad).
* Pressing L in the stats section of a Pokémon will bring the EVs, pressing R will bring the IVs, and pressing START will bring the default stats.
* HM moves don't need to be taught anymore. If you have a Pokémon that can use a certain HM, if you have the correct HM in the bag, and if you have the required badge, you will be able to perform an HM move.
* HM moves can be deleted since they are not that important anymore.
* TM had their price changed, especially if you are not using Infinite TMs.
* The bag now holds up to 90 items, and item capacity has been upgraded to x999.
* When the bag is full, items go to the PC.
* You can change the ball your Pokémon is in using a different ball from the bag.
* Reusable repel prompt.
* The time on the clock can be changed.
* Two pages with additional options in the options menu.
* Debug menu can be enabled by everybody so you can cheat or modify whatever you want. To enable it, just hold "SELECT" then press "START" inside the options menu and you'll hear a noise. Pressing "START" to open the menu from that moment will show a "DEBUG" option at the bottom. It can also be opened with "R" + "START". Be careful, using certain options can break your save so I'm not responsible for any misuse.


**Gameplay related: (Not in HnS)** 
* Wonder-trade on the second floor of the Pokémon Center, available after the 5th badge (unless you are doing a randomizer, which makes it available from the start, or a challenge, which enables WT after beating the game). Can be uncapped now.
* 3 difficulty modes (EASY, NORMAL and HARD). Selected at the start of the game, can be changed anytime from the options menu.
    EASY mode: Makes the game quite a lot easier by scaling levels down, and obtaining more EXP (+20%).
    - Trainer Pokémon and Wild Pokémon scale down to 10 levels compared to the original game. More badges, less level.
    - There are no restrictions on the Battle Frontier.

    NORMAL mode: Vanilla.
    - No changes, except rematches and small things (also on EASY mode).

    HARD mode: Makes the game a bit more difficult by scaling levels up, and obtaining less EXP (-40%). This mode does not intent do be a "super difficult" hack-rom. It only tries to be a bit more difficult than vanilla.
    - Trainer Pokémon and Wild Pokémon scale up to 10 levels compared to the original game. More badges, more level.
    - Certain ace Pokémon have had their abilities or items changed to make everything a bit more difficult. This mode does not change anything else in trainer parties, or their strategies.
    - SET MODE is automatically selected and can't be disabled if you lock the difficulty.
    - There are more restrictions on the Battle Frontier.
    - The GEN VI Exp. Share will give less Exp. to the battling Pokémon.
    - Legendaries will have higher stats WHILE battling, to make it more challenging.
    - (OPTIONAL but recommended) Use in combination with scaling IV/EV trainers from the Challenge Menu at the start of the game for an interesting challenge. You can also lock the difficulty in the Challenges menu at the start of the game.
* Optional and recommended PHYSICAL / SPECIAL MOVE split from Gen. IV. Selected in the options menu, second page.
* New Challenge Menu at the start of the game.
* Bag capacity increased to 90,
* Day / Night System with Day / Night encounters. Now Daytime is from 6AM to 20PM. Night-time is from 20PM to 6AM. For (2 new) evolutions, Morning is from 6AM to 9AM. Also includes cool lighting at night!
* Run everywhere.
* Autorun (in the options menu).
* HM moves text and interaction is way faster.
* Link with Fire Red / Leaf Green available from the start.
* One-time tutors are infinite, but you have to pay now (only if Infinite TMs is on).
* Trainer HIll prizes are the berries that were not available in the GBA games.
* Match and Acro Bike are now one. Change between them by pressing "R".
* Chain fishing has been added.
* Easier fishing has been added to the options menu (FR/LG fishing).
* All tickets are available to buy, together with its events.
* Faster nurse Joy healing, and now with an even faster version in options.
* Daily money event with Meowth (post-game).
* You can check the Soot Sack to know how much ash you have.
* Interacting with berry trees is faster, berry trees that are in rainy routes don't need to be watered, and berry trees don't decay.
* Higher berry yield (6 max, 4 min).
* A new "Growth Mulch" item which makes berries instantly grow.
* New Self-trader to force trade evolutions (trading with another game still works).
* PokéMarts items change with every badge.
* AI improvements.
* Amulet coin works always, doesn't matter who has it.

**Map related: (not in HnS)**
* Altering cave is now an Unown cave.
* A few new maps to introduce the new Regis and the legendary events.
* Mirage Island can be forced with a certain Pokémon in the party, apart from its unusual rate.
=======
# About `pokeemerald-expansion`

![Gif that shows debugging functionality that is unique to pokeemerald-expansion such as rerolling Trainer ID, Cheat Start, PC from Debug Menu, Debug PC Fill, Pokémon Sprite Visualizer, Debug Warp to Map, and Battle Debug Menu](https://github.com/user-attachments/assets/cf9dfbee-4c6b-4bca-8e0a-07f116ef891c) ![Gif that shows overworld functionality that is unique to pokeemerald-expansion such as indoor running, BW2 style map popups, overworld followers, DNA Splicers, Gen 1 style fishing, OW Item descriptions, Quick Run from Battle, Use Last Ball, Wild Double Battles, and Catch from EXP](https://github.com/user-attachments/assets/383af243-0904-4d41-bced-721492fbc48e) ![Gif that shows off a number of modern Pokémon battle mechanics happening in the pokeemerald-expansion engine: 2 vs 1 battles, modern Pokémon, items, moves, abilities, fully customizable opponents and partners, Trainer Slides, and generational gimmicks](https://github.com/user-attachments/assets/50c576bc-415e-4d66-a38f-ad712f3316be)

<!-- If you want to re-record or change these gifs, here are some notes that I used: https://files.catbox.moe/05001g.md -->

**`pokeemerald-expansion`** is a GBA ROM hack base that equips developers with a comprehensive toolkit for creating Pokémon ROM hacks. **`pokeemerald-expansion`** is built on top of [pret's `pokeemerald`](https://github.com/pret/pokeemerald) decompilation project. **It is not a playable Pokémon game on its own.** 

# [Features](FEATURES.md)

**`pokeemerald-expansion`** offers hundreds of features from various [core series Pokémon games](https://bulbapedia.bulbagarden.net/wiki/Core_series), along with popular quality-of-life enhancements designed to streamline development and improve the player experience. A full list of those features can be found in [`FEATURES.md`](FEATURES.md).

# [Credits](CREDITS.md)

 [![](https://img.shields.io/github/all-contributors/rh-hideout/pokeemerald-expansion/upcoming)](CREDITS.md)

If you use **`pokeemerald-expansion`**, please credit **RHH (Rom Hacking Hideout)**. Optionally, include the version number for clarity.

```
Based off RHH's pokeemerald-expansion 1.13.3 https://github.com/rh-hideout/pokeemerald-expansion/
```

Please consider [crediting all contributors](CREDITS.md) involved in the project!

# Choosing `pokeemerald` or **`pokeemerald-expansion`**

- **`pokeemerald-expansion`** supports multiplayer functionality with other games built on **`pokeemerald-expansion`**. It is not compatible with official Pokémon games.
- If compatibility with official games is important, use [`pokeemerald`](https://github.com/pret/pokeemerald). Otherwise, we recommend using **`pokeemerald-expansion`**.
- **`pokeemerald-expansion`** incorporates regular updates from `pokeemerald`, including bug fixes and documentation improvements.

# [Getting Started](INSTALL.md)

❗❗ **Important**: Do not use GitHub's "Download Zip" option as it will not include commit history. This is necessary if you want to update or merge other feature branches. 

If you're new to git and GitHub, [Team Aqua's Asset Repo](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/) has a [guide to forking and cloning the repository](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/The-Basics-of-GitHub). Then you can follow one of the following guides:

## 📥 [Installing **`pokeemerald-expansion`**](INSTALL.md)
## 🏗️ [Building **`pokeemerald-expansion`**](INSTALL.md#Building-pokeemerald-expansion)
## 🚚 [Migrating from **`pokeemerald`**](INSTALL.md#Migrating-from-pokeemerald)
## 🚀 [Updating **`pokeemerald-expansion`**](INSTALL.md#Updating-pokeemerald-expansion)

# [Documentation](https://rh-hideout.github.io/pokeemerald-expansion/)

For detailed documentation, visit the [pokeemerald-expansion documentation page](https://rh-hideout.github.io/pokeemerald-expansion/).

# [Contributions](CONTRIBUTING.md)
If you are looking to [report a bug](CONTRIBUTING.md#Bug-Report), [open a pull request](CONTRIBUTING.md#Pull-Requests), or [request a feature](CONTRIBUTING.md#Feature-Request), our [`CONTRIBUTING.md`](CONTRIBUTING.md) has guides for each.

# [Community](https://discord.gg/6CzjAG6GZk)

[![](https://dcbadge.limes.pink/api/server/6CzjAG6GZk)](https://discord.gg/6CzjAG6GZk)

Our community uses the [ROM Hacking Hideout (RHH) Discord server](https://discord.gg/6CzjAG6GZk) to communicate and organize. Most of our discussions take place there, and we welcome anybody to join us!
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
