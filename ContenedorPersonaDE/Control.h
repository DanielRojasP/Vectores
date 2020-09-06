#include "Contenedor.h"

class Control{
public:
	Control();
	void controlPrincipal();
	void insertaPersona(Contenedor&);
	string imprimaElementos(Contenedor&);
	bool Control::eliminaPersonaPosicionK(Contenedor &);
	bool Control::eliminaPersonaPorId(Contenedor &);
};