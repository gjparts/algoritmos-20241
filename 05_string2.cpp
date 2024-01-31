#include <iostream>
using namespace std;

int main(){
	string str;
	cout << "Digitar cadena de texto:";
	getline(cin,str);
	cout << "Cadena leida: " << str << endl;
	
	/*leer una cadena de texto y posteriormente
	imprimirla dejando tres espacios en blanco
	entre cada caracter. Ejemplo:
	Digitar cadena: UNAH
	resultado:
	U   N   A   H   
	*/
	string cadena;
	cout << "Digitar cadena: ";
	getline(cin,cadena);
	for(int i = 0; i < cadena.length(); i++){
		cout << cadena[i] << "   ";
	}
	cout << endl;
	
	/*leer una cadena de texto y posteriormente
	generar una nueva cadena en base a la leida pero
	dejando tres espacios en blanco entre cada caracter.
	Imprimir la nueva cadena.
	Ejemplo:
	Digitar cadena: UNAH
	resultado:
	U   N   A   H   
	*/
	string a, b = "";
	cout << "Digitar cadena: ";
	getline(cin,a);
	for(int i = 0; i < a.length(); i++){
		b = b+a[i]+"   ";
	}
	cout << b << endl;
	
	return 543;
}
