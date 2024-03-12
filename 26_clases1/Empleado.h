#ifndef EMPLEADO_H
#define EMPLEADO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class Empleado{
	private:
		//atributos
		int edad;
		char genero;
		float salario;
		char contrato;
	public:
		//atributos
		string nombre;
		//constructores
		//sin parametros
		Empleado(){
			this->nombre = "sin definir";
			//escribir usando las reglas:
			this->setEdad(18); 
			this->setGenero('X');
			this->setSalario(0.00);
			this->setContrato('P');
		}
		//con tres parametros
		Empleado(string nombre, int edad, char genero){
			this->nombre = nombre;
			//escribir usando las reglas:
			this->setEdad(edad);
			this->setGenero(genero);
			this->setSalario(0.00);
			this->setContrato('T');
		}
		//con cinco parametros
		Empleado(string nombre, int edad, char genero, float salario, char contrato){
			this->nombre = nombre;
			//escribir usando las reglas:
			this->setEdad(edad);
			this->setGenero(genero);
			this->setSalario(salario);
			this->setContrato(contrato);
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
		//metodos get y set
		void setEdad(int edad){
			if( edad >= 18 && edad <= 70 )
				this->edad = edad; //se acepta
			else
				throw invalid_argument("La edad debe ser >= 18 y <= 70");
		}
		int getEdad(){
			return this->edad;
		}
		void setGenero(char genero){
			if( genero == 'M' || genero == 'F' || genero == 'X' )
				this->genero = genero; //se acepta
			else
				throw invalid_argument("Genero debe ser M F X");
		}
		char getGenero(){
			return this->genero;
		}
		void setSalario(float salario){
			if( salario >= 0 )
				this->salario = salario; //se acepta
			else
				throw invalid_argument("Salario debe ser >= 0");
		}
		float getSalario(){
			return this->salario;
		}
		void setContrato(char contrato){
			if( contrato == 'P' || contrato == 'T' )
				this->contrato = contrato; //se acepta
			else
				throw invalid_argument("Contrato debe ser T P");
		}
		char getContrato(){
			return this->contrato;
		}
};

#endif
