#include "raylib.h"
#include "../include/ui.hpp"

struct Window {
    const char* header;
    int x, y, width, height, TextSize;
    Color edge_color, bg_color, text_color;
    Button close, bar;
    
    Window(){
        TextSize = 20;
        
        close.text = " x  ";
        close.TextSize = 5;
        close.x = 0;
        close.y = 0;
        close.width = 0;
        close.height = 0;
        close.thickness = 2;
        close.color = RED;
        
        bar.text = "";
        bar.TextSize = 0;
        bar.x = 0;
        bar.y = 0;
        bar.width = 0;
        bar.height = 0;
        bar.thickness = 2;
        bar.color = BLACK;
    }
};

void DrawWindow(Window window){
    DrawRectangle(window.x, window.y, window.width, window.height, window.bg_color);
    DrawRectangleLinesEx(Rectangle{window.x, window.y, window.width, window.height}, 5, window.edge_color);
    DrawRectangle(window.x, window.y, window.width, 20, window.edge_color);
    DrawText(window.header, window.x + 5, window.y + 1, window.TextSize, window.text_color);
    //Buttons
    window.close.x = window.x + window.width - 20;
    window.close.y = window.y;
    window.close.width = 20;
    window.close.height = 20;
    window.bar.x = window.x;
    window.bar.y = window.y;
    window.bar.width = window.width - 20;
    window.bar.height = 20;
    DrawButton(window.bar);
    DrawButton(window.close);
}