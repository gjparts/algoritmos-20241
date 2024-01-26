#include<iostream>
#include<time.h>

using namespace std;

int main(){
	//generar un numero al azar
	//inicializar el generador de numeros aleatorios
	//siendo la hora de la CPU el seed para srand
	srand( time(NULL) );
	
	//imprimir un numero al azar entre 5 y 65
	int numero;
	numero = rand()%(65-5+1)+5;
	
	cout << numero << endl;
	
	//imprimir 25 numeros al azar entre 12 y 23
	cout << "*********************" << endl;
	for( int i = 1; i <= 25; i++ )
	{
		numero = rand()%(23-12+1)+12;
		cout << numero << endl;
	}
	
	return 777;
}
