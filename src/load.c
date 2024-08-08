#include "tictactoe.h"


Texture2D loadImage(char* imagePath) {
	Image image = LoadImage(imagePath);
    Texture2D texture = LoadTextureFromImage(image);
    UnloadImage(image);

    return texture;
}

