#include <raylib.h>
#include "gameMain.h"

bool initGame() {
	return true;
}

bool updateGame() {
	DrawText("OPEN Window", 190, 200, 20, RED);

	DrawRectangle(300, 150, 100, 100, BLUE);
	return true;
}

void closeGame() {

}