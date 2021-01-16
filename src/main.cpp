#include "raylib.h"
#include "ui.hpp"
#include "screens.hpp"

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    
    int SCREEN = 1; 

    /*INIT*/
    switch (SCREEN)
    {
    case 0:
        /* code */
        break;
    
    default:
        Error();
        break;
    }
    SetTargetFPS(30);               // Set our game to run at 30 frames-per-second
    //--------------------------------------------------------------------------------------
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        /*UPDATE*/
        switch (SCREEN)
        {
        case 0:
            /* code */
            break;
        
        default:
            Error();
            break;
    }

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);
        /*DRAW*/
        switch (SCREEN)
        {
        case 0:
            /* code */
            break;
        
        default:
            Error();
            break;
        }

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
