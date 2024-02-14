#include<iostream>
#define _USE_MATH_DEFINES
#include<cmath>
#include<iomanip>

using namespace std;

//prototipo de funcion
int elevar(int base, int potencia);
double hipotenusa(double opuesto, double adyacente);
bool esMultiplo(int dividendo, int divisor);
void imprimirRectangulo(int largo, int ancho, char caracter);
double areaCirculo(double radio);
float  areaCirculo(float radio);

int main(){
	cout << elevar(2,8) << endl;
	cout << elevar(3,1) << endl;
	cout << elevar(3,0) << endl;
	cout << hipotenusa(4,6) << endl;
	cout << hipotenusa(3,4) << endl;
	cout << esMultiplo(5,2) << endl;
	cout << esMultiplo(8,4) << endl;
	imprimirRectangulo(6,8,'x');
	//las funciones void no retornan nada, por lo tanto no
	//devuelven un valor que se pueda usar:
	//cout << imprimirRectangulo(6,8,'x');
	double r1 = 2.4523324234;
	float r2 = 4.567565456456456;
	cout << r1 << endl;	
	cout << setprecision(30) << areaCirculo(r1) << endl;
	cout << setprecision(8) << areaCirculo(r2) << endl;
	
	return 456;
}

/*1. Escriba una funcion llamada elevar que reciba dos numeros enteros,
uno para la base y otro para la potencia, la funcion debe retornar un entero
resultado de elevar el numero base a la potencia sin utilizar la funcion pow.*/
int elevar(int base, int potencia){
	int tmp = 1;
	
	for( int i = 1; i <= potencia; i++ ){
		tmp = tmp * base;
	}
	
	return tmp;
}

/*2. Defina una funcion llamada hipotenusa que retorne
la longitud de la hipotenusa de un triángulo rectángulo,
la funcion recibira los lados de dicho trinagulo.
La funcion debera funcionar con numeros double.*/
double hipotenusa(double opuesto, double adyacente){
	return sqrt( pow(opuesto,2)+pow(adyacente,2) );
}

/*3. Escriba una funcion que reciba dos numeros enteros y retorne true
si el primer numero es multiplo del segundo o false en caso contrario.*/
bool esMultiplo(int dividendo, int divisor){
	if( dividendo%divisor == 0 )
		return true;
	else
		return false;
	//return ( dividendo%divisor == 0 ? true : false ); //usando operador ternario
}

/*4. Escriba una funcion que imprima un rectagulo de caracteres,
dicha funcion recibira como parametros el ancho y largo del mismo
asi como otro parametro con el caracter a usar para dibujar
dicho rectangulo.*/
void imprimirRectangulo(int largo, int ancho, char caracter){
	for( int i = 0; i < largo; i++ ){
		for(int j = 0; j < ancho; j++)
			cout << caracter;
		
		cout << endl;
	}
}

/*5. Hacer un funcion que retorne el area de un circulo,
dicha funcion debera recibir el radio como parametro.
Usando sobrecarga de funciones haga que la funcion pueda
trabajar con numeros double o con numeros float.*/
double areaCirculo(double radio){
	return M_PI*pow(radio,2);
}
float  areaCirculo(float radio){
	return M_PI*pow(radio,2);
}

/*6. Escriba una función llamada minimo que retorne
el menor de tres números, dicha funcion debera poder
funcionar con tres numeros enteros,
tres numeros double o tres numeros float.*/






