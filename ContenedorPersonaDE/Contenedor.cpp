#include "Contenedor.h"

Contenedor::Contenedor(int n){
	cantidad = 0;
	tamano = n;
	//Se crea en tiempo de ejecución el vector
	vector = new Persona[n];
}

void Contenedor::insertaElemento(Persona& p){
	vector[cantidad] = p;
	cantidad++;
}

void Contenedor::eliminaElemento(){
	cantidad--;
}

string Contenedor::imprimeElementos(){
	stringstream s;
	for (int i=0; i<cantidad; i++){
		s<<"Elemento "<<i+1<<endl;
		s<<vector[i].toString();
	}
	return s.str();
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


bool Contenedor::ordenaElementos() {
	Persona aux;
	//Metodo de la burbuja
	for (int i = 0; i <= cantidad; i++) {
		for (int j = 0; j < cantidad - 1; j++) {
			if (vector[j].getNombre() > vector[j + 1].getNombre()) {
				aux = vector[j];
				vector[j] = vector[j + 1];
				vector[j + 1] = aux;
			}
		}
	}
	return true;
}
