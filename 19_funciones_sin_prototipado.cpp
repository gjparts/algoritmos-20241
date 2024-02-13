#include<iostream>
using namespace std;

//sin usar PROTOTIPADO DE FUNCIONES
int sumar(int a, int b){
	return a+b;
}
double sumar(double a, double b){
	return a+b;
}

int sumar(int a, int b, int c){
	return a+b+c;
}

int main(){
	cout << sumar(2,3) << endl;
	cout << sumar(5,8) << endl;
	cout << sumar(5.5,2.4) << endl;
	cout << sumar(4,5,6) << endl;
	
	return 765;
}

