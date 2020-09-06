#include "Contenedor.h"

Contenedor::Contenedor(int n){
	cantidad = 0;
	tamano = n;
	//Se define el tamaño del vector
	//en tiempo de ejecución.
	vector = new Persona*[n];
	for (int i=0;i<n;i++)
		vector[i] = new Persona;
}

bool Contenedor::insertaElemento(Persona* p){
	if (cantidad < tamano){
		vector[cantidad] = p;
		cantidad++;
		return true;
	}
	return false;
}

bool Contenedor::eliminaElementoPosK(int k){
	if(k < cantidad){
		for(int i=k; i<cantidad-1; i++)
			vector[i] = vector[i+1];
		cantidad--;
		return true;
	}else
		return false;
}


bool Contenedor::eliminaPersonaPorId(string id){
	bool band = false;
		for(int i=0; i<cantidad; i++){
			if(vector[i]->getId().compare(id)==0){
				vector[i] = vector[i+1];
				cantidad--;
				band=true;
			}
		}
		if(band){
			return true;
		}
		return false;
}


bool Contenedor::ordenaElementos(){
	Persona *aux;
	//Metodo de la burbuja
	for(int i=0;i<=cantidad;i++){
		for(int j=0;j<cantidad-1;j++){
			if(vector[j]->getNombre()>vector[j+1]->getNombre()){
				aux=vector[j];
				vector[j]=vector[j+1];
				vector[j+1]=aux;
			}
		} 
	}
	return true;
}


Contenedor::~Contenedor(){
	 cantidad = 0;
	 for (int i=0; i<cantidad; i++)
		 delete vector[i];
}

string Contenedor::imprimeElementos(){
	stringstream s;
	for (int i=0; i<cantidad; i++){
		s<<"Elemento "<<i+1<<endl;
		s<<vector[i]->toString();
	}
	return s.str();
}

