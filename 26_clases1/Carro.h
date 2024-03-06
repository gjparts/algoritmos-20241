#ifndef CARRO_H
#define CARRO_H

#include<iostream>
using namespace std;

class Carro{
	private:
	public:
		//atributos
		string marca;
		string modelo;
		string color;
		int anio;
		//constructores
		Carro(string marca, string modelo, string color, int anio){
			this->marca = marca;
			this->modelo = modelo;
			this->color = color;
			this->anio = anio;
		}
};

#endif
