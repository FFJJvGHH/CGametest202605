#include <iostream>
#include <raylib.h>
#include <imgui.h>
#include <rlImGui.h>

#include <gameMain.h>

int main()
{

#if PRODUCTION_BUILD==1
	SetTraceLogLevel(LOG_NONE);
#endif // PRODUCTION_BUILD==1


	std::cout << "Hello\n";
	std::cout << "new test" << std::endl;
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(1080, 640, "game");
	SetExitKey(KEY_NULL);
	SetTargetFPS(240);

	rlImGuiSetup(true);
	ImGuiIO& io = ImGui::GetIO();
	io.FontGlobalScale = 2;

	if (!initGame()) {
		return 0;
	}

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		

		rlImGuiBegin();


		ImGui::Begin("test");
		ImGui::Text("Hello");
		if (ImGui::Button("Button")) {
			std::cout << "button pressed" << std::endl;
		}
		ImGui::End();

		if (!updateGame()) {
			CloseWindow();
		}

		rlImGuiEnd();
		EndDrawing();
	}

	
	CloseWindow();
	closeGame();

	rlImGuiShutdown();
	
	return 0;
}