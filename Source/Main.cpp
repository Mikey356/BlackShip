#include <raylib/raylib.h>


int main()
{
    int screenWidth = 848;
    int screenHeight = 640;

    InitWindow(screenWidth, screenHeight, "BlackShip");

    SetTargetFPS(60);
    SetWindowPosition(1, 30); 
    while(!WindowShouldClose())
    {
            BeginDrawing();
                // Render objects
               ClearBackground(BLACK);

            EndDrawing();
    }

    CloseWindow();
    return 0;
}