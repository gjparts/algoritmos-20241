#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include<iostream>
#include "Nodo.h"
using namespace std;

class ListaSimple{
	private:
		//atributos
		Nodo *first;
		Nodo *last;
		int length;
	public:
		//constructor
		ListaSimple(){
			//cuando una ListaSimple es nueva, no tiene Nodos
			//por lo tant primer y ultimo Nodo apuntan a NULL
			//y la longitud de la lista es CERO.
			this->first = NULL;
			this->last = NULL;
			this->length = 0;
		}
		//metodos
		Nodo *getFirst(){
			return this->first;
		}
		Nodo *getLast(){
			return this->last;
		}
		int getLength(){
			return this->length;
		}
		//metodo push: agrega un nuevo Nodo al final de la lista
		void push( int value ){
			//primero crear un nuevo Nodo
			Nodo *nuevo = new Nodo(value);
			/*al hacer push se dan dos escenarios:
			* no hay nodos
			* hay nodos*/
			if( this->length == 0 ){
				//no hay Nodos: primer y ultimo Nodo apuntan al nuevo nodo
				this->first = nuevo;
				this->last = nuevo;
				this->length++; //aumentar en 1 la longitud de la lista
			}
			else{
				//hay Nodos
				//el siguiente Nodo del Ultimo Nodo ahora apunta al nuevo Nodo
				this->last->next = nuevo;
				//ahora el ultimo Nodo es el nuevo Nodo
				this->last = nuevo;
				this->length++; //aumentar en 1 la longitud de la lista
			}
		}
};

#endif
