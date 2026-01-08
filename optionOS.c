#include <raylib.h>
#include <option/headers/topbar.h>

int main(){
	InitWindow(800, 600, "OptionOS Emulator");
	SetTargetFPS(20); // 20 FPS

	while (!WindowShouldClose()){
		BeginDrawing();

		ClearBackground({0, 0, 255, 255});
		CreateTopbar();
		
		EndDrawing();
	}
}
