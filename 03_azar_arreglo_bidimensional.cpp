#include<iostream>
#include<time.h>

using namespace std;

int main(){
	/*Crear un arreglo bidimensional de 8x5 de numeros
	enteros, llenar cada elemento de dicho arreglo
	con un numero al azar entre 13 y 211. No importa que se repitan.
	Imprimir el arreglo en forma tabular.*/
	
	int arreglo[8][5];
	int filas = end(arreglo)-begin(arreglo);
	int columnas = end(arreglo[0])-begin(arreglo[0]);
	
	//inicializar el generador de numeros aleatorios
	srand( time(NULL) );
	
	//llenar el arreglo e imprimirlo
	for( int i = 0; i < filas; i++ ){
		for( int j = 0; j < columnas; j++ ){
			arreglo[i][j] = rand()%(211-13+1)+13;
			cout << arreglo[i][j] << "\t";
		}
		cout << endl;
	}
	
	
	return 3792;
}
