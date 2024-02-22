#include<iostream>
#include<cmath>
using namespace std;

void elevar(double *base, double exponente);
void mitad(float *numero);

int main(){
	double x = 5;
	cout << "x antes de elevar " << x << endl;
	elevar(&x,3);
	cout << "x despues de elevar " << x << endl;
	
	float z = 7;
	mitad(&z);
	cout << z << endl;
	
	return 777;
}

/*Hacer un programa que mediante el uso de apuntadores
tenga una funcion void que eleve a determinada potencia
el valor de la variable que le enviemos.
La funcion debe afectar a la variable enviada en su
ambito de origen.
La funcion recibira dos numeros: exponente y base.
Se recomienda usar double. Pueden usar pow.*/
void elevar(double *base, double exponente){
	*base = pow(*base, exponente);
}

/*Hacer una funcion void que mediante
apuntadores divida a la mitad el numero
que le enviemos como parametro.
Dicha funcion debe soportar solo float.*/
void mitad(float *numero){
	*numero = *numero/2;
}


