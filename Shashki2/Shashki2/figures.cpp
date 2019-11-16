#include <iostream>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <fstream>
#include "Header.h"
using namespace std;

bool stop = 0;
bool lite = 1;
bool food = 0;
bool boostspeed = 1;
int speed = 2; //1-slow, 2-normal, 3-fast
int framecount = 0;
int food_x, food_y;
char field[m][n];



int main() {
	Name();
	StartMenu();
	while (!stop) {
		for (int i = 0; i < 2; ++i) {
			if (_kbhit() == true)
				KeySwitch();
			Sleep(100 / snake.speed);
		}

		GenerateField();
		DrawField();
	}
}
void Name()
{
	cout << "                           ~####~~##~~##~~####~~##~~##~#####" << endl;
    cout << "                           ##~~~~~##~~##~##~~##~##~##~~##" << endl;
	cout << "                           ~####~~######~######~####~~~####" << endl;
	cout << "                           ~~~~##~##~~##~##~~##~##~##~~##" << endl;
	cout<<  "                           ~####~~##~~##~##~~##~##~~##~#####" << endl;
}

void Snake::MoveSnake() {
	Part* bodycheck = body;
	while (bodycheck) {
		if (bodycheck->x == snake.x && bodycheck->y == snake.y) {
			GameOver();
			break;
		}
		bodycheck = bodycheck->next;
	}    //check collision
	if (!lite && (snake.x == 0 || snake.x == n - 1 || snake.y == 0 || snake.y == m - 1)) {
		GameOver();
	}    //hard mode
	else {
		if (snake.x == 0 || snake.x == n - 1) {
			snake.vx = snake.x == 0 ? -1 : 1;
			snake.vy = 0;
			snake.x = n - 1 - snake.x;
		}
		if (snake.y == 0 || snake.y == m - 1) {
			snake.vy = snake.y == 0 ? -1 : 1;
			snake.vx = 0;
			snake.y = m - 1 - snake.y;
		}
	}    //lite mode
	if (snake.x == food_x && snake.y == food_y) {
		food = 0;
		++snake.size;
		AddPart();
		if (boostspeed)
			++snake.speed;
	}
	else if (body) {
		AddPart();
		RemovePart();
	}
	snake.x += snake.vx;
	snake.y += snake.vy;
}
void Snake::AddPart() {
	Part* NewPart = new Part;
	if (!body) {
		body = NewPart;
		tale = NewPart;
	}
	else {
		tale->next = NewPart;
		tale = NewPart;
	}
	NewPart->next = 0;
	NewPart->x = snake.x;
	NewPart->y = snake.y;
}
void Snake::RemovePart() {
	Part* Item = body;
	body = Item->next;
	delete Item;
}
void Snake::DeleteBody() {
	Part* del = body;
	while (del) {
		body = del->next;
		delete del;
		del = body;
	}
}
void Init() {
	snake.x = 1;
	snake.y = 1;
	snake.vx = 1;
	snake.vy = 0;
	snake.size = 0;
	snake.body = 0;
	snake.tale = 0;
	snake.speed = speed;
	GenerateField();
}
void StartMenu() {
	cout << "Lite mode? Press 1.\nHard mode? Press 2.\nEsc for exit";
	char c = 0;
	while (c != 27) {
		c = _getch();
		switch (c) {
		case '1':
			lite = 1;
			c = 27;
			break;
		case '2':
			lite = 0;
			c = 27;
			break;
		case 27: //ESC
			stop = 1;
			break;
		}
	}
	Init();
}
void GameOver() {
	snake.DeleteBody();
	system("cls");
	cout << "Your score is " << snake.size << "\n Again?\n";
	StartMenu();
}
void File()
{
	ofstream fileO;
	fileO.open("Data.txt", ios_base::out);
	fileO << " 12133" << endl;
	fileO << "You score" << snake.size << endl;
	fileO.close();
	ifstream fileI;
	fileI.open("Data.txt", ios_base::in);
	char str[255];
	while (!fileI.eof())
	{
		fileI.getline(str, 255);


		cout << str << "!" << endl;
	}
	system("pause");

	fileI.close();

}
void KeySwitch() {
	char c = _getch();
	switch (c) {
	case 27: stop = 1; snake.DeleteBody(); break; //ESC
	case 72: if (snake.vx) { snake.vx = 0; snake.vy = -1; } break; //up
	case 80: if (snake.vx) { snake.vx = 0; snake.vy = 1; } break; //down
	case 75: if (snake.vy) { snake.vx = -1; snake.vy = 0; } break; //left
	case 77: if (snake.vy) { snake.vx = 1; snake.vy = 0; } break; //right
	default: break;
	}
}
void GenerateFood() {
	bool error = 1;
	while (error) {
		srand(time(NULL));
		food_x = 1 + rand() % (n - 1);
		food_y = 1 + rand() % (m - 1);
		if (field[food_y][food_x] == ' ') {
			error = 0;
		}
	}
	food = 1;
}
void GenerateField() {
	snake.MoveSnake();
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
				field[i][j] = '*';
			}
			else if (i == snake.y && j == snake.x) {
				field[i][j] = '@';
			}
			else {
				field[i][j] = ' ';
			}
			if (food)
				field[food_y][food_x] = '$';
		}
	}
	Snake::Part* bodycheck = snake.body;
	while (bodycheck) {
		field[bodycheck->y][bodycheck->x] = '#';
		bodycheck = bodycheck->next;
	}
	if (!food) {
		GenerateFood();
	}
}
void DrawField() {
	system("cls");
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << field[i][j];
		}
		cout << "\n";
	}
}
