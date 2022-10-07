#include "Virus.hpp"
class Persona {
private:
	string nombre;
	int edad;
	Virus o1;
public:
	Persona(string nombre, int edad) :nombre(nombre), edad(edad) { }
	int getedad() {
		return edad;
	}
};