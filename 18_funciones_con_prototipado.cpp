#include<iostream>
using namespace std;

//usando PROTOTIPADO DE FUNCIONES
//prototipos
int sumar(int a, int b);
int sumar(int a, int b, int c);
double sumar(double a, double b);

int main(){
	cout << sumar(2,3) << endl;
	cout << sumar(5,8) << endl;
	cout << sumar(5.5,2.4) << endl;
	cout << sumar(4,5,6) << endl;
	
	return 765;
}

//implementacion
int sumar(int a, int b){
	return a+b;
}
double sumar(double a, double b){
	return a+b;
}

int sumar(int a, int b, int c){
	return a+b+c;
}
