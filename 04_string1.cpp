#include<iostream>

using namespace std;

int main(){
	//cadenas de texto
	string nombre = "Gerardo";
	char x = 's';
	
	//imprimir el valor:
	cout << nombre << endl;
	//imprimir la referencia (direccion de memoria)
	cout << &nombre << endl;
	
	cout << x << endl;
	cout << &x << endl;
	
	int r = 3;
	cout << &r << endl;
	
	//acceder a los elementos de un string
	cout << nombre[3] << endl;
	cout << nombre[0] << endl;
	
	//saber el tamaño de un string
	cout << "el string nombre tiene " << nombre.length() << " caracteres." << endl;
	
	//imprimir el string mostrando un caracter linea por linea
	for( int i = 0; i < nombre.length(); i++ )
		cout << nombre[i] << endl;
	
	//reemplazar el char en un string
	nombre[1] = '3';
	cout << nombre << endl;
	
	//concatenar un string a otro string
	nombre = nombre + " Portillo";
	cout << nombre << endl;
	
	//concatenar otro char
	nombre = nombre + 'X';
	cout << nombre << endl;
	
	return 12345;
}
