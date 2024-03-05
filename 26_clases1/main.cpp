#include<iostream>
#include "Persona.h"
using namespace std;

int main(){
	cout << "hola" << endl;
	
	//crear un objeto de clase Persona
	Persona *p1 = new Persona();
	//colocar valores a algunos atributos de p1
	p1->nombre = "Gerardo";
	p1->genero = 'M';
	cout << "nombre de p1: " << p1->nombre << endl;
	cout << "edad de p1: " << p1->edad << endl;
	cout << "genero de p1: " << p1->genero << endl;
	cout << "estadoCivil de p1: " << p1->estadoCivil << endl;
	
	//un constructor devuelve una direccion
	//de memoria hacia la instancia de una clase
	//de nosotros depende si la ponemos en una variable
	//o solo la usamos en el momento que se necesite
	cout << new Persona() << endl;
	//direccion de p1:
	cout << "direccion de p1: " << p1 << endl;
	
	return 777;
}
