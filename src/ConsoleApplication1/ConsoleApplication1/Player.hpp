#pragma once
#include <iostream>
using namespace System;
using namespace std;
 class Player {
protected:
	int x;
	int y;
	int dx;
	int dy;
	char caracter;
public:
	Player(int x,int y,int dx,int dy):x(x), y(y), dx(dx), dy(dy) {}

	virtual void draw() {}
	virtual void erase() {}
	virtual void move() {}
};

 