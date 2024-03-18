#ifndef CUENTAAHORRO_H
#define CUENTAAHORRO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class CuentaAhorro{
	private:
		//atributos
		float saldo;
	public:
		//atributos
		string cliente;
		//constructor
		CuentaAhorro(string cliente){
			this->cliente = cliente;
			this->saldo = 0.00; //saldo siempre inicia en cero
		}
		//metodos
		float getSaldo(){
			return this->saldo;
		}
		void depositar(float monto){
			if( monto < 0 )
				throw invalid_argument("monto no puede ser negativo.");
			else
				this->saldo += monto; //se acepta
		}
		void retirar(float monto){
			if( monto < 0 )
				throw invalid_argument("monto no puede ser negativo.");
			else
				if( monto > saldo )
					throw invalid_argument("monto no puede superar al saldo.");
				else
					this->saldo -= monto; //se acepta
		}
};

#endif
