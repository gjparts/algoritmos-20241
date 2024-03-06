#ifndef PERSONA_H
#define PERSONA_H

#include<iostream>
using namespace std;

class Persona{
	private:
		//aqui va todo lo que es privado
	public:
		//aqui va todo lo que es publico
		//atributos publicos
		string nombre;
		int edad;
		char genero;
		char estadoCivil;
		//constructores
		//constructor sin parametros:
		Persona(){ //es un metodo, se llama igual que la clase, no se le define tipo
			//normalmente los atributos se recomienda inicializarlos desde el constructor
			this->nombre = "no definido";
			this->edad = 0;
			this->genero = 'X';
			this->estadoCivil = 'S';
		}
		//constructor con cuatro parametros
		Persona(string nombre, int edad, char genero, char estadoCivil){
			//si los parametros se llaman igual que los atributos
			//entonces al asignarlos hay que diferenciarlos usando this
			this->nombre = nombre;
			this->edad = edad;
			this->genero = genero;
			this->estadoCivil = estadoCivil;
		}
		//constructor con dos parametros
		Persona(string nombre, char genero){
			this->nombre = nombre;
			this->genero = genero;
			this->edad = 0;
			this->estadoCivil = 'S';
		}
};

#endif
