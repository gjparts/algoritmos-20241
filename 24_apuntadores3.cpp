#include<iostream>
#include<ctime>
using namespace std;

//prototipo
void dividirValoresEntreDos( float *arreglo, int tamano );
void arregloAlCuadrado(double *arreglo, int tamano);
void llenarArreglo(int *arreglo, int tamano);

int main(){
	/*Uso de apuntadores en arreglos, considerar:
	1) no es posible calcular el calcular el tamaño de un arreglo
	   desde un ambito externo.
	2) cada elemento del arreglo es un apuntador y por lo tanto
	   es necesario colocar el simobolo de asterisco cuando hacemos
	   referencia al arreglo desde un ambito externo
	3) cuando colocamos un arreglo apuntado como parametro de una
	   funcion no se coloca los brackets []
	4) cuando un parametro de una funcion es un arreglo apuntado
	   desde el ambito de origen no se envia el simbolo de & porque
	   el arreglo en si ya es un apuntador de memoria.*/
	int a = 5;
	cout << "valor de a: " << a << endl;
	cout << "direccion de a: " << &a << endl;
	
	float arreglo[] = {3.5, 2.4, 6, 8.2, 9.1244};
	cout << "valor de arreglo: " << arreglo << endl;
	cout << "direccion de arreglo: " << &arreglo << endl;
	
	cout << "*********************" << endl;
	dividirValoresEntreDos(arreglo, end(arreglo)-begin(arreglo));
	for( int i = 0; i < end(arreglo)-begin(arreglo); i++ )
		cout << arreglo[i] << endl;
	
	double arreglo2[] = {2.5, 6, 45, 8, 1.6, 3.1416};
	cout << "************ANTES: " << endl;
	for( int i = 0; i < end(arreglo2)-begin(arreglo2); i++ )
		cout << arreglo2[i] << endl;
	
	cout << "************DESPUES: " << endl;	
	arregloAlCuadrado(arreglo2, end(arreglo2)-begin(arreglo2));
	for( int i = 0; i < end(arreglo2)-begin(arreglo2); i++ )
		cout << arreglo2[i] << endl;
	
	int arreglo3[5];
	cout << "***********************" << endl;
	llenarArreglo(arreglo3, end(arreglo3)-begin(arreglo3));
	for( int i = 0; i < end(arreglo3)-begin(arreglo3); i++ )
		cout << arreglo3[i] << endl;
	
	return 123;
}

/*hacer una funcion void que llene todos los elementos de
un arreglo apuntado de numeros enteros con numeros
al azar entre 1 y 99*/
void llenarArreglo(int *arreglo, int tamano){
	srand(time(NULL)); //srand va antes y fuera de la estructura de repeticion
	for( int i = 0; i < tamano; i++ )
		arreglo[i] = rand()%(99-1+1)+1;
}

/*hacer una funcion void que reciba un arreglo de numeros float como apuntador
y que divida todos sus elementos entre 2 alterando al arreglo original*/
void dividirValoresEntreDos( float *arreglo, int tamano ){
	for( int i = 0; i < tamano; i++ )
		arreglo[i] = arreglo[i]/2;
}

/*Hacer una funcion void que le enviemos un arreglo apuntado
de numeros double y que le altere todos sus elementos
elevando cada uno de ellos al cuadrado.
desde el main: imprimir el arreglo antes y despues
de aplicarle la funcion*/
void arregloAlCuadrado(double *arreglo, int tamano){
	for( int i = 0; i < tamano; i++ )
		arreglo[i] = arreglo[i]*arreglo[i];
}











