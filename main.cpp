#include "source/include/Game.hpp"

int main()
{
    InitWindow(1280, 720, "Game Test");
    SetTargetFPS(60);
    Game game;

    while(!WindowShouldClose())
    {
        BeginDrawing();
        game.Draw();
        ClearBackground(LIGHTGRAY);
        game.Update();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}