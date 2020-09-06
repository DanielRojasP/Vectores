#include "Control.h"

void Control::controlPrincipal() {	
	int n;
	cout<<"Digite el tamaño del arreglo: ";
	cin>>n;
	Contenedor *c = new Contenedor(n);
	char opc;
	int valor = 0;
	do{
		system("cls");
		cout<<"*********************"<<endl;
		cout<<"*    MENU PRINCIAL  *"<<endl;
		cout<<"*********************"<<endl;
		cout<<" 1- Inserta Persona "<<endl;
		cout<<" 2- Elimina Persona en la posicion k "<<endl; //DESARROLLAR METODO
		cout<<" 3- Elimina Persona por id "<<endl;           //DESARROLLAR METODO
		cout<<" 4- Imprime Personas "<<endl;
		cout<<" 5- Ordenar Contenedor de personas"<<endl;
		cout<<" 6- Salir "<<endl;
		cout<<"Digite la opcion que desea realizar: ";
		cin>>opc;
		switch  (opc){
			case '1':  
				system("cls");
				if (insertaPersona(c))
					cout<<"\nPersona incluida";
				else
					cout<<"\nVector lleno, no se puede incluir una nueva persona";
				system("pause");
				break;
			case '2': 
				system("cls");
				//metodo eliminaPersona posicion k
				if (eliminaPersonaPosicionK(c)) {
					cout << "Eliminado de la lista";
				}
				else {
					cout << "No lo encontro";
				}
				system("pause");
				break;
			case '3': 
				system("cls");
				//metodo eliminaPersona por id
				if(eliminaPersonaPorId(c)){
					cout<<"Eliminado de la lista";
				}
				else{
					cout<<"No lo encontro";
				}
				system("pause");
				continue;
			case '4': 
				system("cls");
				cout<<imprimaElementos(c)<<endl;
				system("pause");
				break;
			case '5': 
				system("cls");
				if(ordenaElementos(c)){
					cout<<"Ordenado"<<endl;
				}else{
					cout<<"No se pudo ordenar el vector"<<endl;
				}
				
				system("pause");
				break;
			default:  			
				break;
		}
	}while (opc!='6');
	delete c;
}

string Control::imprimaElementos(Contenedor *con){
	return con->imprimeElementos();
}

bool Control::ordenaElementos(Contenedor *con){
	return con->ordenaElementos();
}


bool Control::eliminaPersonaPosicionK(Contenedor *con){
	char posicion=' ';
	do{
	cin.clear();
	cin.ignore(100000, '\n');
	posicion=-1;
	cout<<"\nDigite la posicion: ";
	cin>>posicion;
	}while(isdigit(posicion) == false);
	return con->eliminaElementoPosK(posicion - '0' );
}


bool Control::eliminaPersonaPorId(Contenedor *con){
	string id;
	cout<<"\nDigite el id que desea eliminar: ";
	cin>>id;
	return con->eliminaPersonaPorId(id);
}



bool Control::insertaPersona(Contenedor *con){
	string id, nombre;
	int edad;
	cout<<"\nDigite id: ";
	cin>>id;
	cout<<"\nDigite nombre: ";
	cin>>nombre;
	cout<<"\nDigite edad: ";
	cin>>edad;
	Persona *p = new Persona(id,nombre,edad);
	if (con->insertaElemento(p))
		return true;
	else
		return false;
}
