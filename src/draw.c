#include "tictactoe.h"






void drawTitleScreen(Texture2D titleScreenImages[]) {

    Rectangle rect = {screenWidth/2, screenHeight/2, 100, 25};

    ClearBackground(RAYWHITE);
    DrawTextureEx(titleScreenImages[0], (Vector2){screenWidth/2 - titleScreenImages[0].width/4, 80} , 0.0f, 0.5f, WHITE);
    
    
}