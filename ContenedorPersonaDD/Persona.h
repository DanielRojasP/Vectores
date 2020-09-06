#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

class Persona{
private:
	string id;
	string nombre;
	int edad;
public:
	Persona();
	Persona(string,string,int);
	void setId(string);
	void setNombre(string);
	void setEdad(int);
	string getId();
	string getNombre();
	int getEdad();
	~Persona();
	string toString();
};