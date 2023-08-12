#include "tictactoe.h"





void drawTitleScreen(Texture2D titleScreenImages[]) {
    ClearBackground(RAYWHITE);
    DrawTextureEx(titleScreenImages[0], (Vector2){screenWidth/2 - titleScreenImages[0].width/4, 80} , 0.0f, 0.5f, WHITE);
    
}