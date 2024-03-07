#ifndef EMPLEADO_H
#define EMPLEADO_H

#include<iostream>
using namespace std;

class Empleado{
	private:
	public:
		//atributos
		string nombre;
		int edad;
		char genero;
		float salario;
		char contrato;
		//constructores
		//sin parametros
		Empleado(){
			this->nombre = "sin definir";
			this->edad = 0;
			this->genero = 'X';
			this->salario = 0.00;
			this->contrato = 'P';
		}
		//con tres parametros
		Empleado(string nombre, int edad, char genero){
			this->nombre = nombre;
			this->edad = edad;
			this->genero = genero;
			this->salario = 0.00;
			this->contrato = 'P';
		}
		//con cinco parametros
		Empleado(string nombre, int edad, char genero, float salario, char contrato){
			this->nombre = nombre;
			this->edad = edad;
			this->genero = genero;
			this->salario = salario;
			this->contrato = contrato;
		}
		//metodos
		void imprimir(){
			cout << "****** PERFIL DE EMPLEADO ******" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Edad: " << this->edad << endl;
			cout << "Genero: " << this->genero << endl;
			cout << "Salario: " << this->salario << endl;
			cout << "Tipo de Contrato: " << this->contrato << endl;
		}
		void saludar(bool enIngles){
			if( enIngles == true )
				cout << "Hi my name is " << this->nombre << ", nice to meet you." << endl;
			else
				cout << "Hola mi nombre es " << this->nombre << ", gusto de conocerte." << endl;
		}
};

#endif
