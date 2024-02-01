#include<iostream>

using namespace std;

int main(){
	//buscar un string dentro de otro string
	string str = "El veloz murcielago hindu comia cardillo y kiwi.";
	cout << str << endl;
	
	string buscar;
	cout << "Digite el texto que desea buscar: ";
	getline(cin,buscar);
	
	//para buscar en una string utilizamos find
	//find nos devuelve -1 si no encontro nada, de lo contrario
	//nos va a devolver la posicion donde encontro lo buscado.
	int posicion = str.find( buscar, 0 );
	/*donde:
	str		es el string dentro del cual vamos a buscar
	buscar	es el string a buscar
	0		es la posicion desde donde vamos a comenzar a buscar
			CERO quiere decir que se comienza a buscar desde el primer char.*/
	if( posicion == -1 )
		cout << "No se encontro" << endl;
	else
		cout << "Encontrado en la posicion " << posicion << endl;
	
	return 111;
}
