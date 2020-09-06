#include "Control.h"

void Control::controlPrincipal() {	
	Contenedor c;
	int opc;
	int valor = 0;
	do{
		system("cls");
		cout<<"*********************"<<endl;
		cout<<"*    MENU PRINCIAL  *"<<endl;
		cout<<"*********************"<<endl;
		cout << " 1- Inserta Persona " << endl;
		cout << " 2- Elimina Persona en la posicion k " << endl; //DESARROLLAR METODO
		cout << " 3- Elimina Persona por id " << endl;           //DESARROLLAR METODO
		cout << " 4- Imprime Personas " << endl;
		cout << " 5- Salir " << endl;
		cout<<"Digite la opcion que desea realizar: ";
		cin>>opc;
		switch  (opc){
			case 1:  
				system("cls");
				//metodo insertaPersona
				insertaPersona(c);
				system("pause");
				break;
			case 2: 
				system("cls");
				//metodo eliminaPersona
				if (eliminaPersonaPosicionK(c)) {
					cout << "Eliminado de la lista";
				}
				else {
					cout << "No lo encontro";
				}
				system("pause");
				break;
			case 3:
				system("cls");
				//metodo eliminaPersona por id
				if (eliminaPersonaPorId(c)) {
					cout << "Eliminado de la lista";
				}
				else {
					cout << "No lo encontro";
				}
				break;
			case 4: 
				system("cls");
				cout<<imprimeElemantos(c)<<endl;
				system("pause");
				break;
			default:  			
				break;
		}
	}while (opc!=5);
}

string Control::imprimeElemantos(Contenedor &con){
	return con.imprimeElementos();
}

void Control::insertaPersona(Contenedor &con) {
	string id, nombre;
	int edad;
	cout << "\nDigite id: ";
	cin >> id;
	cout << "\nDigite nombre: ";
	cin >> nombre;
	cout << "\nDigite edad: ";
	cin >> edad;
	Persona p(id, nombre, edad);
	con.insertaElemento(p);
}

bool Control::eliminaPersonaPosicionK(Contenedor &con) {
	char posicion = ' ';
	do {
		cin.clear();
		cin.ignore(100000, '\n');
		posicion = -1;
		cout << "\nDigite la posicion: ";
		cin >> posicion;
	} while (isdigit(posicion) == false);
	return con.eliminaElementoPosK(posicion - '0');
}


bool Control::eliminaPersonaPorId(Contenedor &con) {
	string id;
	cout << "\nDigite el id que desea eliminar: ";
	cin >> id;
	return con.eliminaPersonaPorId(id);
}