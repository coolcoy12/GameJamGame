#pragma once
#include "raylib.h"

/*
Button Elements:
Text
outline 
click output
*/
/*
Button Code Elements:
Text
Text Size 
x, y
color
*/
struct Button
{
    const char* text;
    int TextSize, x, y, width, height, thickness;
    Color color;
};

bool CheckButtonPress(Button button)
{
    //bool collision = false;
    //if(CheckCollisionPointRec(GetMousePosition(), Rectangle{(float)button.x, (float) button.y, (int)TextLength(button.text)*(float)button.TextSize/1.5f, (float)button.TextSize*3}) && IsMouseButtonPressed(0))
    //    collision = true;
    //return collision;
    bool collision = false;
    if(CheckCollisionPointRec(GetMousePosition(), Rectangle{(float)button.x, (float) button.y, (int)button.width, (float)button.height}) && IsMouseButtonPressed(0))
        collision = true;
    return collision;
}
bool CheckButtonHeld(Button button)
{
    //bool collision = false;
    //if(CheckCollisionPointRec(GetMousePosition(), Rectangle{(float)button.x, (float) button.y, (int)TextLength(button.text)*(float)button.TextSize/1.5f, (float)button.TextSize*3}) && IsMouseButtonDown(0))
    //    collision = true;
    //return collision;
    bool collision = false;
    if(CheckCollisionPointRec(GetMousePosition(), Rectangle{(float)button.x, (float) button.y, (int)button.width, (float)button.height}) && IsMouseButtonDown(0))
        collision = true;
    return collision;
}
bool CheckButtonReleased(Button button)
{
    //bool collision = false;
    //if(CheckCollisionPointRec(GetMousePosition(), Rectangle{(float)button.x, (float) button.y, (int)TextLength(button.text)*(float)button.TextSize/1.5f, (float)button.TextSize*3}) && IsMouseButtonReleased(0))
    //    collision = true;
    //return collision;
    bool collision = false;
    if(CheckCollisionPointRec(GetMousePosition(), Rectangle{(float)button.x, (float) button.y, (int)button.width, (float)button.height}) && IsMouseButtonReleased(0))
        collision = true;
    return collision;
}
bool CheckButtonUp(Button button)
{
    //bool collision = false;
    //if(CheckCollisionPointRec(GetMousePosition(), Rectangle{(float)button.x, (float) button.y, (int)TextLength(button.text)*(float)button.TextSize/1.5f, (float)button.TextSize*3}) && IsMouseButtonUp(0))
    //    collision = true;
    //return collision;
    bool collision = false;
    if(CheckCollisionPointRec(GetMousePosition(), Rectangle{(float)button.x, (float) button.y, (int)button.width, (float)button.height}) && IsMouseButtonUp(0))
        collision = true;
    return collision;
}
void DrawButton (Button button)
{
    //DrawRectangleLines(button.x, button.y, TextLength(button.text)*button.TextSize/1.5f, (button.TextSize*3), button.color);
    //DrawRectangleLinesEx(Rectangle{button.x, button.y, TextLength(button.text)*button.TextSize/1.5f, (button.TextSize*3)}, 2, button.color);
    DrawRectangleLinesEx(Rectangle{button.x, button.y, button.width, button.height}, button.thickness, button.color);
    DrawText(button.text, button.x + button.TextSize/3, button.y + button.TextSize, button.TextSize, button.color);
}
