#include<iostream>
#include "Persona.h"
#include "Carro.h"
#include "Empleado.h"
using namespace std;

int main(){
	cout << "hola" << endl;
	
	//crear un objeto de clase Persona
	Persona *p1 = new Persona();
	cout << "antes de cambio: " << endl;
	
	cout << "nombre de p1: " << p1->nombre << endl;
	cout << "edad de p1: " << p1->edad << endl;
	cout << "genero de p1: " << p1->genero << endl;
	cout << "estadoCivil de p1: " << p1->estadoCivil << endl;
	
	cout << "***************" << endl;
	cout << "despues de cambio: " << endl;
	
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
	
	//construir varias personas
	Persona *p2 = new Persona("Irene",40,'F','C');
	cout << "***************" << endl;
	cout << "nombre de p2: " << p2->nombre << endl;
	cout << "edad de p2: " << p2->edad << endl;
	cout << "genero de p2: " << p2->genero << endl;
	cout << "estadoCivil de p2: " << p2->estadoCivil << endl;
	
	Persona *p3 = new Persona();
	cout << "***************" << endl;
	cout << "nombre de p3: " << p3->nombre << endl;
	cout << "edad de p3: " << p3->edad << endl;
	cout << "genero de p3: " << p3->genero << endl;
	cout << "estadoCivil de p3: " << p3->estadoCivil << endl;
	
	Persona *p4 = new Persona("Josue",11,'M','S');
	cout << "***************" << endl;
	cout << "nombre de p4: " << p4->nombre << endl;
	cout << "edad de p4: " << p4->edad << endl;
	cout << "genero de p4: " << p4->genero << endl;
	cout << "estadoCivil de p4: " << p4->estadoCivil << endl;
	
	Persona *p5 = new Persona("Viena",'F');
	cout << "***************" << endl;
	cout << "nombre de p5: " << p5->nombre << endl;
	cout << "edad de p5: " << p5->edad << endl;
	cout << "genero de p5: " << p5->genero << endl;
	cout << "estadoCivil de p5: " << p5->estadoCivil << endl;
	
	//si la clase solo define un constructor con parametros
	//entonces no existira un constructor sin parametros
	//a menos que Usted lo defina:
	//Carro *c0 = new Carro();
	Carro *c1 = new Carro("Nissan","Sentra","Blanco",2005);
	Carro *c2 = new Carro("Honda","Civic","Negro",2004);
	Carro *c3 = new Carro("Pontiac","Vibe","Azul",2007);
	
	Empleado *e1 = new Empleado();
	e1->imprimir();
	Empleado *e2 = new Empleado("Gerardo Portillo",42,'M');
	e2->imprimir();
	e2->saludar(false);
	Empleado *e3 = new Empleado("Josue Antonio",11,'M',0.00,'T');
	e3->imprimir();
	e3->saludar(true);
	
	
	
	return 777;
}
