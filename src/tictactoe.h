#ifndef __TICTACTOE__
#define __TICTACTOE__
#include "raylib.h"
#include <stdio.h>


Texture2D loadImage(char* imagePath);
void drawTitleScreen();
void loadTitleResources();
int buttonHover();





extern int screenWidth;
extern int screenHeight;

typedef struct {

	int x;
	int y;
	int isButtonClicked;
	Texture2D image;
	Texture2D scaledImage;
	Vector2 center;
	int isHovering;

} Button;





#endif

