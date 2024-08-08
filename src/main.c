#include "tictactoe.h"


int screenWidth = 800;
int screenHeight = 800;


int main() {

    InitWindow(screenWidth, screenHeight, "Tic-Tac-Toe");

    SetTargetFPS(60);

    Image icon = LoadImage("resources/icon.png");
    SetWindowIcon(icon);
    //UnloadImage(icon);

    loadTitleResources();

    while (!WindowShouldClose()) {
    
        BeginDrawing();
        
        drawTitleScreen();
        
        EndDrawing();

    }
       
    CloseWindow();

    return 0;

}