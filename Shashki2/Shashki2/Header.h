#pragma once

class Snake {
public:
	struct Part {
		int x, y;
		Part* next;
	};
	Part* body, * tale;
	int x, y, vx, vy, size, speed;
	void MoveSnake();
	void AddPart();
	void RemovePart();
	void DeleteBody();
} snake;

void StartMenu();
void Init();
void KeySwitch();
void GameOver();
void GenerateFood();
void GenerateField();
void DrawField();
void Name();
void File();

const int m = 10, n = 20;