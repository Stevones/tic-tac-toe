#include "tictactoe.h"


int screenWidth = 800;
int screenHeight = 800;


int main() {




    InitWindow(screenWidth, screenHeight, "Tic Tac Toe");

    Texture2D title = loadImage("resources/title.png");
    Texture2D titleScreenImages[] = {title};


    SetTargetFPS(60);


    while (!WindowShouldClose()) {
    
        BeginDrawing();

        ClearBackground(BLACK);
        drawTitleScreen(titleScreenImages);
        
        EndDrawing();


    }

    
       
    CloseWindow();


    return 0;
}