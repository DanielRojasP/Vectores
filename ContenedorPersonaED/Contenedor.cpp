#include "Contenedor.h"

Contenedor::Contenedor(){
	cantidad = 0;
	tamano = 20;
	for (int i=0; i<tamano; i++)
		vector[i] = new Persona;
}

Contenedor::~Contenedor(){
	 cantidad = 0;
	 for (int i=0; i<cantidad; i++)
		 delete vector[i];
}

void Contenedor::insertaElemento(Persona* p){
	vector[cantidad] = p;
	cantidad++;
}

bool Contenedor::eliminaElementoPosK(int k) {
	if (k < cantidad) {
		for (int i = k; i < cantidad - 1; i++)
			vector[i] = vector[i + 1];
		cantidad--;
		return true;
	}
	else
		return false;
}


bool Contenedor::eliminaPersonaPorId(string id) {
	bool band = false;
	for (int i = 0; i < cantidad; i++) {
		if (vector[i]->getId().compare(id) == 0) {
			vector[i] = vector[i + 1];
			cantidad--;
			band = true;
		}
	}
	if (band) {
		return true;
	}
	return false;
}

string Contenedor::imprimeElementos(){
	stringstream s;
	for (int i=0; i<cantidad; i++){
		s<<"Elemento "<<i+1<<endl;
		s<<vector[i]->toString();
	}
	return s.str();
}


