#include "Persona.h"

class Contenedor{
private:
	Persona* vector[20]; //vector estatico 
	                     //de objetos dinámicos.
	int cantidad;
	int tamano;
public:
	Contenedor();
   ~Contenedor();
	void insertaElemento(Persona*);
	string imprimeElementos();
	bool Contenedor::eliminaPersonaPorId(string id);
	bool Contenedor::eliminaElementoPosK(int k);
};