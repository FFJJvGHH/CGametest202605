#include <iostream>
#include <raylib.h>
#include <imgui.h>
#include <rlImGui.h>

int main()
{
	std::cout << "Hello\n";
	std::cout << "new test" << std::endl;
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(1080, 640, "game");
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLACK);
		DrawText("OPEN Window", 190, 200, 20, RED);

		EndDrawing();
	}

	return 0;
}