#include "Player.hpp"

class Monigote :public Player {
public:
	Monigote(int x, int y, int dx, int dy) :Player(x, y, dx, dy) {}
	void draw() {
		Console::SetCursorPosition(x, y);
		cout <<char(64) << endl;
		cout << char(197) << endl;
	}
	void erase() {
		Console::SetCursorPosition(x, y);
		cout << " " << endl;
		cout << " " << endl;

	}
	void move(char letra) {
		switch (letra) {
		case 'A':
			dx=-1;
		case 'D':
			dx=1;
		}

		x += dx;

	}
};