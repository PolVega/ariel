#include "Player.hpp"

class Monigote :public Player {
public:
	Monigote() {}
	Monigote(int x, int y, int dx, int dy) :Player(x, y, dx, dy) {}
	void draw() {
		Console::SetCursorPosition(x, y);
		cout <<char(64) << endl;

		Console::SetCursorPosition(x, y+1);
		cout << char(197) << endl;
	}
	void erase() {
		Console::SetCursorPosition(x, y);
		cout << " " << endl;

		Console::SetCursorPosition(x, y+1);
		cout << " " << endl;

	}
	void set(int x) {
		this->x = x;
	}
	int getx() {
		return x;
	}
	int gety() {
		return y;
	}
	void move(char letra) {
		if (letra == 'A' || letra == char(75))dx = -1;
		if (letra == 'D' || letra == char(77))dx = 1; 

		x += dx;

	}
};