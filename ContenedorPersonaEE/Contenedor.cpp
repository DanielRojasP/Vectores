#include "Contenedor.h"

Contenedor::Contenedor(){
	cantidad = 0;
	tamano = 20;
	//el vector de personas ya fue 
	//creado en tiempo de compilacion
}

void Contenedor::insertaElemento(Persona& p){
	vector[cantidad] = p;
	cantidad++;
}

void Contenedor::eliminaElemento(){
	cantidad--;
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
		if (vector[i].getId().compare(id) == 0) {
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
		s<<vector[i].toString();
	}
	return s.str();
}

