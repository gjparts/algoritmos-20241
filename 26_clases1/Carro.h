#ifndef CARRO_H
#define CARRO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class Carro{
	private:
		int anio;
	public:
		//atributos
		string marca;
		string modelo;
		string color;
		
		//constructores
		Carro(string marca, string modelo, string color, int anio){
			this->marca = marca;
			this->modelo = modelo;
			this->color = color;
			this->setAnio(anio); //desde el constructor aplicamos la reglas
								//para anio utilizando el set
		}
		//metodos
		void imprimir(){
			cout << "********** CARRO **********" << endl;
			cout << "Marca: " << this->marca << endl;
			cout << "Modelo: " << this->modelo << endl;
			cout << "Color: " << this->color << endl;
			cout << "Anio: " << this->anio << endl;
			//ponemos utilizar metodos de la clase desde otro metodos de la clase:
			cout << "Aplica a eco Tasa? ";
			if( this->ecoTasa() == true )
				cout << "Si";
			else
				cout << "No";
			cout << endl;
		}
		bool ecoTasa(){
			if( this->anio >= 2012 )
				return true;
			else
				return false;
		}
		//metodo set: establecer el año del Carro
		void setAnio(int anio){
			//solo aceptamos el año si es >= a 1970
			if( anio >= 1970 )
				this->anio = anio; //se acepta y se escribe en el atributo
			else
				throw invalid_argument("Anio debe ser >= 1970"); //stdexcept
		}
		//metodo get: leer el anio
		int getAnio(){
			return this->anio;
		}
};

#endif
