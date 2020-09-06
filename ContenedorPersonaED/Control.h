#include "Contenedor.h"

class Control{
public:
	void controlPrincipal();
	void insertaPersona(Contenedor*);
	string imprimaElementos(Contenedor*);
	bool eliminaPersonaPosicionK(Contenedor *);
	bool eliminaPersonaPorId(Contenedor *);
};