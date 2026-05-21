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

	rlImGuiSetup(true);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("OPEN Window", 190, 200, 20, RED);

		rlImGuiBegin();


		ImGui::Begin("test");
		ImGui::Text("Hello");
		ImGui::End();

		rlImGuiEnd();
		EndDrawing();
	}

	rlImGuiShutdown();
	CloseWindow();
	
	return 0;
}