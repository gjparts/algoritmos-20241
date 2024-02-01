#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	/*Hacer un programa que pida al usuario digitar
	dos cadenas de texto y diga
	si son iguales ignorando mayusculas y minusculas.
	sin alterar las cadenas capturadas.*/
	string a,b;
	cout << "Digite cadena 1: ";
	getline(cin,a);
	cout << "Digite cadena 2: ";
	getline(cin,b);
	
	//para no alterar las cadenas originales sacamos copias y trabajamos sobre ellas
	string ca = a, cb = b;
	
	//convertir las copias al mismo character casing
	transform(ca.begin(),ca.end(),ca.begin(),::toupper);
	transform(cb.begin(),cb.end(),cb.begin(),::toupper);
	
	if( ca == cb )
		cout << "Las cadenas son iguales.";
	else
		cout << "Las cadenas no son iguales";
	
	cout << endl;
	
	return 123;
}
