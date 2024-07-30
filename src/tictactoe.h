#ifndef __TICTACTOE__
#define __TICTACTOE__
#include "raylib.h"


Texture2D loadImage(char* imagePath);
void drawTitleScreen();
void loadTitleResources();





extern int screenWidth;
extern int screenHeight;

typedef struct {

	Rectangle rect;
	int isButtonClicked;
	Texture2D image;

} Button;





#endif

