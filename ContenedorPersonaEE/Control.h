#include "Contenedor.h"

class Control{
public:
	void controlPrincipal();
	string imprimeElemantos(Contenedor&);
	void insertaPersona(Contenedor &);
	bool eliminaPersonaPosicionK(Contenedor &);
	bool eliminaPersonaPorId(Contenedor &);
};