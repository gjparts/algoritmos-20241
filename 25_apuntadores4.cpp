#include<iostream>
#include<algorithm>
using namespace std;

//prototipo
void mayusculas(string *str);
void sustituirEspacios(string *str);

int main(){
	/*Apuntadores cuando usamos objetos o estructuras
	1) en la declaracion de la funcion se coloca el simbolo de apuntador *
	   en el parametro como lo haciamos con los tipos de dato primitivos.
	2) cuando usamos la variable en el ambito externo usamos el apuntador *
	   para referirnos a ella, como lo haciamos con los tipos de dato primitivos.
	3) no es posible tener acceso a los miembros del objeto o estructura desde
	   el ambito externo; pero se puede un bypass o paso del objeto
	   declarando una variable local e igualarla a la variable apuntada.
	4) cuando se manda a utilizar la funcion y envia la variable apuntada
	   esta se envia usando & como lo haciamos con los tipos de dato primitivos.*/
	string n = "honduras";
	cout << "antes: " << n << endl;
	cout << "offset antes: " << &n << endl;
	mayusculas(&n);
	cout << "despues: " << n << endl;
	cout << "offset despues: " << &n << endl;
	
	string z = "Hoy son la elecciones estudiantiles 2024";
	cout << "antes: " << z << endl;
	sustituirEspacios(&z);
	cout << "despues: " << z << endl;
	
	return 321;
}

//hacer una funcion void que reciba un string apuntado y le sustituya los espacios
//en blanco por guiones bajos
void sustituirEspacios(string *str){
	string copia = *str;
	for( int i = 0; i < copia.length(); i++ ){
		if( copia[i] == ' ' ) copia[i] = '_';
	}
	*str = copia;
}

//funcion void que convierte a mayusculas el string apuntado que le enviemos
void mayusculas(string *str){
	//hacer una copia local con el valor del apuntador
	string copia = *str;
	//pasar la copia local a mayusculas
	transform(copia.begin(),copia.end(),copia.begin(), ::toupper);
	//una vez alterada la copia, sobreescrimos el valor de la variable apuntada
	//la cual va a conservar su direccion de memoria
	*str = copia;
}
