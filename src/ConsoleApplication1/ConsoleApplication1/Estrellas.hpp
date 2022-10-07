#include "Player.hpp"
class Estrellas :public Player {
public:
	Estrellas(int x, int y, int dx, int dy) :Player(x, y, dx, dy) {}
	void move() {
		y += dy;
	}
	void draw() {
		Console::SetCursorPosition(x, y);
		cout << "*";
	}
	void erase() {
		Console::SetCursorPosition(x, y);
		cout << " ";

	}
	int gety() {
		return y;
	}
};