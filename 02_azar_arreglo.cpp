#include<iostream>
#include<time.h>

using namespace std;

int main(){
	/*EJERCICIO: hacer un programa que tenga un
	arreglo de enteros de 50 posiciones, llenenlo con
	numeros al azar entre 10 y 90 (se puede repetir numeros)
	y por ultimo imprimir el arreglo.*/
	int arreglo[50];
	srand( time(NULL));
	
	for( int i = 0; i < end(arreglo)-begin(arreglo); i++ ){
		arreglo[i] = rand()%(90-10+1)+10;
		cout << arreglo[i] << endl;
	}
	
	return 543;
}
