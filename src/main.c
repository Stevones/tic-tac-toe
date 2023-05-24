#include "tictactoe.h"

int main() {


    int screenWidth = 800;
    int screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "Tic Tac Toe");
    
    SetTargetFPS(60);


    while (!WindowShouldClose()) {
    
        BeginDrawing();

        ClearBackground(RAYWHITE);

        EndDrawing();


    }

    
       
    CloseWindow();


    return 0;
}