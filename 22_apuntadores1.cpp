#include<iostream>
using namespace std;

void sumar(int n); //suma 100 al numero enviado
void sumarUsandoApuntador(int *n);  //suma 100 a la variable enviada
int main(){
	/*Apuntador (pointer, puntero de memoria)
	Permite el pase de variables entre ambitos distintos
	(ambito = scope).
	-> un apuntador se refiere a la direccion de memoria (referencia, offset)
	   y no al valor de una variable.*/
	int x = 5;
	cout << "el valor de x es " << x << endl;
	cout << "la referencia de memoria de x es " << &x << endl;
	sumar(x);
	cout << "Valor de x despues ejecutar sumar(): " << x << endl;
	//en lo anterior: x no se ve afectada porque sumar hace un pase por valor
	//por lo tanto se saca una copia del valor de x y se envia a sumar
	
	//ahora usemos punteros:
	sumarUsandoApuntador(&x);
	cout << "Valor de x despues ejecutar sumarUsandoApuntador(): " << x << endl;
	
	return 567;
}

void sumar(int n){
	n = n+100;
}

void sumarUsandoApuntador(int *n){
	*n = *n + 100;
}
