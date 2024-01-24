#include<iostream>
using namespace std;

int main(){
	/*
	Arreglo
	Estructura de datos estatica, secuencial y homogenea.
	-> los arreglos se numeran de 0 a N-1 (Zero indexing)
	
	si el arreglo no encuentra todas las posiciones
	disponibles de forma secuencial entonces hace crash
	*/
	//int arreglo1[50000000];
	
	//declarar de arreglos
	//forma 1: declarar arreglo sin inicializar sus valores
	int arreglo1[6];
	//que valores tiene este arreglo?
	for( int i = 0; i < 6; i++ )
		cout << arreglo1[i] << endl;	
		
	int arreglo2[5];
	arreglo2[0] = 3;
	arreglo2[1] = 56;
	arreglo2[2] = 7;
	arreglo2[3] = 9;
	arreglo2[4] = -5;
	//que valores tiene este arreglo?
	cout << "****************" << endl;
	for( int i = 0; i < 5; i++ )
		cout << arreglo2[i] << endl;
	
	//forma 2: declarar el arreglo prellenado
	int arreglo3[] = { 7, 8, 56, 34, 123, -8, 900, 5 };
	//que valores tiene este arreglo?
	cout << "****************" << endl;
	for( int i = 0; i < 8; i++ )
		cout << arreglo3[i] << endl;
		
	//saber el tamano de un arreglo
	cout << "Posiciones del Arreglo 3: " << end(arreglo3)-begin(arreglo3) << endl;
	cout << "Arreglo3 inicia en: " << begin(arreglo3) << endl;
	cout << "Arreglo3 termina en: " << end(arreglo3) << endl;
	
	double arreglo4[] = {2.5, 3.1416, 9.86, 4.567};
	//que valores tiene este arreglo?
	cout << "****************" << endl;
	for( int i = 0; i < end(arreglo4)-begin(arreglo4); i++ )
		cout << arreglo4[i] << endl;
	
	int t4 = end(arreglo4)-begin(arreglo4);
	//que valores tiene este arreglo?
	cout << "****************" << endl;
	for( int i = 0; i < t4; i++ )
		cout << arreglo4[i] << endl;
	
	return 321;
}
