#include "Persona.h"

class Contenedor{
private:
	Persona **vector;
	int cantidad;
	int tamano;
public:
	Contenedor(int);
    ~Contenedor();
	bool insertaElemento(Persona*);
	bool eliminaElementoPosK(int);
	bool eliminaPersonaPorId(string );
	string imprimeElementos();
	bool ordenaElementos();
};