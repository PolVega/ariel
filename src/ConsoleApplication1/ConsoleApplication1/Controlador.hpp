#include "Estrellas.hpp"
#include "Monigote.hpp"
#include <vector>
#include <time.h>
#include <conio.h>
class Controladora {
private:
	Monigote obj;
	vector<Estrellas*> estrellitas;
	int contador;
	int segundos;
public:
	Controladora() {
		srand(time(NULL));
		obj = Monigote(75, 33, 10, 3);
		contador = 0;
		for (int i = 0; i < 20; i++) {
			estrellitas.push_back(new Estrellas(1 + rand() % 140, 0, 0, 1 + rand() % 3));
		}
	}
	void colisiones() {
		for (int i = 0; i < estrellitas.size(); i++) {
			if (estrellitas[i]->getx() == obj.getx() && (estrellitas[i]->gety() == obj.gety() || estrellitas[i]->gety() == obj.gety() + 1)) {
				contador++;
				estrellitas.erase(estrellitas.begin() + i);
			}
		}
			
	}
	void drawall() {
		char tecla=-1;
		bool loop = true;
		for (int i = 0; i < estrellitas.size(); i++) {
			estrellitas[i]->draw();
		}
		while (loop) {

			estrellitas.push_back(new Estrellas(1 + rand() % 140, 0, 0, 1 + rand() % 4));
			estrellitas.push_back(new Estrellas(1 + rand() % 140, 0, 0, 1 + rand() % 4));
			estrellitas.push_back(new Estrellas(1 + rand() % 140, 0, 0, 1 + rand() % 4));
			estrellitas.push_back(new Estrellas(1 + rand() % 140, 0, 0, 1 + rand() % 4));
			
			obj.draw();
			colisiones();
			for (int i = 0; i < estrellitas.size(); i++) {
				estrellitas[i]->erase();
			}
			obj.draw();
			for (int i = 0; i < estrellitas.size(); i++) {
				estrellitas[i]->move();
				if (estrellitas[i]->gety() > 33)estrellitas.erase(estrellitas.begin() + i);
			}
			if (_kbhit()) {
				tecla = getch();
				tecla = toupper(tecla);
				obj.erase();
				obj.move(tecla);
				obj.draw();
			}
			for (int i = 0; i < estrellitas.size(); i++) {
				estrellitas[i]->move();
				if (estrellitas[i]->gety() > 33)estrellitas.erase(estrellitas.begin() + i);
			}
			for (int i = 0; i < estrellitas.size(); i++) {
				estrellitas[i]->draw();
			}
			if (contador == 10)loop = false;
		}

	}
};