#include "Persona.h"

class Contenedor{
private:
	Persona *vector;
	int cantidad;
	int tamano;
public:
	Contenedor(int);
	void insertaElemento(Persona&);
	void eliminaElemento();
	string imprimeElementos();
	bool Contenedor::eliminaElementoPosK(int k);
	bool Contenedor::eliminaPersonaPorId(string id);
	bool Contenedor::ordenaElementos();

};