#include "raylib.h"

int main(void)
{
    InitWindow(250, 20, "Window");
    SetTargetFPS(60);
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, World!", 0, 0, 20, BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}