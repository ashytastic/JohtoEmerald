#ifndef GUARD_INTRO_H
#define GUARD_INTRO_H

// Exported type declarations

// Exported RAM declarations

// Exported ROM declarations
void CB2_InitCopyrightScreenAfterBootup(void);
void CB2_InitCopyrightScreenAfterTitleScreen(void);
<<<<<<< HEAD
void CB2_CopyrightScreen(void);
void PanFadeAndZoomScreen(u16, u16, u16, u16);
void c2_copyright_1(void);
=======
void PanFadeAndZoomScreen(u16 screenX, u16 screenY, u16 zoom, u16 alpha);
void MainCB2_Intro(void);
void Task_Scene1_Load(u8);

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#endif // GUARD_INTRO_H
