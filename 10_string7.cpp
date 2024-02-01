#include<iostream>

using namespace std;

int main(){
	//arreglos de string
	string frutas[] = {"pera","manzana","uva","sandia","limon"};
	//obtener un elemento
	cout <<  frutas[2] << endl;
	//obtener un char de un elemento
	cout << frutas[3][4] << endl;
	//obtener el tamaño del string que esta en el arreglo
	cout << frutas[1].length() << endl; //manzana tiene longitud 7
	
	//imprimir los elementos del arreglo
	cout << "***************************" << endl;
	for( int i = 0; i < end(frutas)-begin(frutas); i++ ){
		cout << frutas[i] << endl;
	}
	
	//hacer un programa que imprima cada elemento del arreglo llamado frutas
	//pero colocando un asterisco entre cada caracter de cada string.
	//sin alterar los string dentro del arreglo
	for( int i = 0; i < end(frutas)-begin(frutas); i++ ){
		
	}
	
	return 654;
}
