#include<iostream>

using namespace std;

int main(){
	int arreglo[4][5] = {
		{5,7,8,9,0},
		{3,9,10,-7,88},
		{67,788,89,90,808},
		{1,2,5,7,13}
	};
	cout << arreglo[1][3] << endl;
	
	int filas = end(arreglo)-begin(arreglo);
	cout << "filas: " << filas << endl;
	int columnas = end(arreglo[0])-begin(arreglo[0]);
	cout << "columnas: " << columnas << endl;
	
	//un arreglo bidimensional es una coleccion de apuntadores
	//hacia otros arreglos secundarios
	cout << arreglo << endl;
	cout << arreglo[0] << endl;
	cout << arreglo[1] << endl;
	cout << arreglo[2] << endl;
	cout << arreglo[3] << endl;
	
	//imprimir el arreglo bidimensional en forma tabular
	for( int i = 0; i < filas; i++ ){
		for( int j = 0; j < columnas; j++ ){
			cout << arreglo[i][j] << "\t";
		}
		cout << endl;
	}
	
	
	return 777;
}
