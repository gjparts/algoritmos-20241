#include<iostream>

using namespace std;

int main(){
	//Caza de errores
	/*Hacer un programa que pregunte un numero entero; pero guardarlo
	en una variable string. Posteriormente depositar este valor
	en una variable int a partir de la conversion del string capturado.
	En caso de suceder un error de conversion mostrar un texto
	indicando que no se puede convertir lo que ha digitado.
	*/
	string str;
	cout << "Digitar un numero: ";
	getline(cin,str);
	
	try{
		//codigo propenso a fallar
		int entero = stoi(str);
	}catch(exception ex){
		//lo que sucede en caso de falla
		cout << "No se puede convertir a numero." << endl;
	}
	
	cout << "Hasta pronto." << endl;
	
	return 345;
}
