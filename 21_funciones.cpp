#include<iostream>
#include<cmath>
using namespace std;

//prototipo de funcion
int elevar(int base, int potencia);
double hipotenusa(double opuesto, double adyacente);

int main(){
	cout << elevar(2,8) << endl;
	cout << elevar(3,1) << endl;
	cout << elevar(3,0) << endl;
	cout << hipotenusa(4,6) << endl;
	cout << hipotenusa(3,4) << endl;
	
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







