#include<iostream>
#define _USE_MATH_DEFINES
#include<cmath>
#include<iomanip>
#include<time.h>

using namespace std;

//prototipo de funcion
int elevar(int base, int potencia);
double hipotenusa(double opuesto, double adyacente);
bool esMultiplo(int dividendo, int divisor);
void imprimirRectangulo(int largo, int ancho, char caracter);
double areaCirculo(double radio);
float  areaCirculo(float radio);
int minimo(int a, int b, int c);
double minimo(double a, double b, double c);
float minimo(float a, float b, float c);
int aleatorio(int minimo, int maximo);

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
	
	int n1 = 8, n2 = 9, n3 = 1;
	cout << minimo(n1,n2,n3) << endl;
	float c1 = 4.6546456565656, c2 = 3.543654353, c3 = 8.9882623636;
	cout << minimo(c1,c2,c3) << endl;
	double x1 = M_PI*100, x2 = M_PI*10, x3 = M_PI*1.5;
	cout << minimo(x1,x2,x3) << endl;
	
	cout << minimo(45.4, 5.6, 9.7) << endl;
	//importante:
	srand(time(NULL));
	
	for( int i = 1; i < 10; i++ )
		cout << "numero al azar entre 6 y 90: " << aleatorio(6,90) << endl;
	
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
//sobrecarga de funciones y aplicar Don't Repeat Yourself
int minimo(int a, int b, int c){
	//cout << "minimo con int" << endl;
	double x = a, y = b, z = c;
	//mandar a llamar la funcion con mayor precision
	return minimo(x,y,z);
}
double minimo(double a, double b, double c){
	//cout << "minimo con double" << endl;
	if( a <= b && a <= c ) return a;
	if( b <= a && b <= c ) return b;
	if( c <= b && c <= a ) return c;
}
float minimo(float a, float b, float c){
	//cout << "minimo con float" << endl;
	double x = a, y = b, z = c;
	//mandar a llamar la funcion con mayor precision
	return minimo(x,y,z);
}

/*7. Escriba una funcion que reciba dos numeros enteros
como parametros, uno sera el minimo y el otro el maximo,
la funcion debera retornar un numero aleatorio entero que
se encuentre entre dichos numeros.*/
int aleatorio(int minimo, int maximo){
	return rand()%(maximo-minimo+1)+minimo;
}

/*8. Escriba una funcion que devuelva true si una cadena
de texto esta escrita toda en mayusculas y false si no es así.*/













