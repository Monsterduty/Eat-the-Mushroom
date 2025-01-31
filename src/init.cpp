/******************************************
*          Eat The Mushroom
*               MIT
*******************************************
*   (c) Kaissou || All right reserved!
*              init.cpp
*******************************************
*             03/06/2023
*******************************************/

#include "init.hpp"

void InitWindowClass::InitWindowFunctions(){
    InitWindow(800, 600, "Eat-The-Mushroom");
    SetTraceLogLevel(LOG_NONE);
}

void InitClass::TitleScreen(){
    DrawText("Press Start To Play!", 50, 500, 64, WHITE);
    if(IsKeyPressed(KEY_SPACE)){
        GameStarted = true;
        fmt::print("space test");
        ClearBackground(WHITE);
    }
}
