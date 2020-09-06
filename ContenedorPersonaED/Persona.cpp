#include "Persona.h"

Persona::Persona(){
	id = "";
	nombre = "";
	edad = 0;
}

Persona::Persona(string pId, string pNombre, int pEdad){
	id = pId;
	nombre = pNombre;
	edad = pEdad;
}

Persona::~Persona(){
}

void Persona::setId(string pId){
	id = pId;
}

void Persona::setNombre(string pNombre){
	nombre = pNombre;
}

void Persona::setEdad(int pEdad){
	edad = pEdad;
}

string Persona::getId(){
	return id;
}

string Persona::getNombre(){
	return nombre;
}

int Persona::getEdad(){
	return edad;
}

string Persona::toString(){
	stringstream s;
	s<<"Id :"<<id<<endl;
	s<<"Nombre :"<<nombre<<endl;
	s<<"Edad :"<<edad<<endl;
	return s.str();
}

