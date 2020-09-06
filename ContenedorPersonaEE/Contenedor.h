#include "Persona.h"

class Contenedor{
private:
	Persona vector[20];
	int cantidad;
	int tamano;
public:
	Contenedor();
	void insertaElemento(Persona&);
	void eliminaElemento();
	bool eliminaElementoPosK(int k);
	bool eliminaPersonaPorId(string id);
	string imprimeElementos();
};