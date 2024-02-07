/*Hacer un programa que calcule e imprima el promedio de 3 numeros double.
Validar que los valores digitados sean numeros si es asi entonces
imprimir el promedio, de lo contrario imprimir un mensaje
indicando que alguno de los valores proporcionados no es correcto.*/
#include<iostream>

using namespace std;

int main(){
	string s1, s2, s3;
	double a,b,c;
	
	try{
		//leer los valores como string
		cout << "digitar a: ";
		getline(cin,s1);
		cout << "digitar b: ";
		getline(cin,s2);
		cout << "digitar c: ";
		getline(cin,s3);
		//tratar de convertir los valores string a double
		a = stod(s1);
		b = stod(s2);
		c = stod(s3);
		cout << "el promedio es: " << (a+b+c)/3.0 << endl;
	}catch(exception ex){
		cout << "Alguno de los valores no es numero, revise." << endl;
	}
	
	
	return 543;
}
