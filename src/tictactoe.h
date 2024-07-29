#ifndef __TICTACTOE__
#define __TICTACTOE__
#include "raylib.h"


Texture2D loadImage(char* imagePath);
void drawTitleScreen(Texture2D titleScreenImages[]);

extern Texture2D title;
extern Texture2D background;
extern int screenWidth;
extern int screenHeight;





#endif

