#include "Contenedor.h"

class Control{
public:
	void controlPrincipal();
	string imprimaElementos(Contenedor * con);
	bool insertaPersona(Contenedor*);
	bool ordenaElementos(Contenedor*);
	bool eliminaPersonaPosicionK(Contenedor *con);
	bool eliminaPersonaPorId(Contenedor *con);
};