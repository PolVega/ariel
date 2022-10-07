#include <iostream>
#include <vector>
using namespace std;

class Virus{
public:
	Virus() {}
	virtual void descripcion() {}
	virtual void preguntas() {}
};

class SarsCov :public Virus {

};
class MersCov :public Virus {

};
class Covid19 :public Virus {

};
class VarianteBritanico :public Virus {

};