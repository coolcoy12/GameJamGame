#include "raylib.h"
#include "../include/ui.hpp"
#include "screen_broke.cpp"
#include "screen_gameplay.cpp"
#include "window_email.cpp"

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    
    int SCREEN = 0; 

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
    
    
    Button e_icon;
    e_icon.text = " E  ";
    e_icon.TextSize = 10;
    e_icon.x = 50;
    e_icon.y = 50;
    e_icon.width = 30;
    e_icon.height = 30;
    e_icon.thickness = 2;
    e_icon.color = BLUE;
    Button c_icon;
    c_icon.text = " C  ";
    c_icon.TextSize = 10;
    c_icon.x = 50;
    c_icon.y = 100;
    c_icon.width = 30;
    c_icon.height = 30;
    c_icon.thickness = 2;
    c_icon.color = BLUE;
    
    Window email;
    email.header = "INBOX";
    email.x = 100;
    email.y = 50;
    email.width = 600;
    email.height = 300;
    email.TextSize = 20;
    email.edge_color = DARKBLUE;
    email.bg_color = LIGHTGRAY;
    email.text_color = WHITE;
    
    bool isWindowOpen = false;
    
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
        
        if(isWindowOpen){
            DrawWindow(email);
        }
        DrawButton(e_icon);
        if(CheckButtonUp(e_icon)){
            e_icon.color = BLACK;
        }
        else{
            e_icon.color = BLUE;
        }
        if(CheckButtonPress(e_icon)){
            isWindowOpen = true;
        }
        if(CheckButtonPress(email.close)){//THIS ISN'T WORKING DON'T KNOW WHY
            isWindowOpen = false;
        }
        
        DrawButton(c_icon);
        if(CheckButtonUp(c_icon)){
            c_icon.color = BLACK;
        }
        else{
            c_icon.color = BLUE;
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