#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	//transformar una cadena a mayusc./minusc.
	string str;
	cout << "Digitar cadena: ";
	getline(cin,str);
	//aplicar la transformacion a mayusculas
	//IMPORTANTE: transform altera la cadena original
	transform(str.begin(),str.end(),str.begin(), ::toupper);
	cout << str << endl;
	
	//si desea conservar el string original, haga una copia
	string str2, copia;
	cout << "Digitar cadena: ";
	getline(cin,str2);
	copia = str2;
	transform(copia.begin(),copia.end(),copia.begin(), ::tolower);
	cout << copia << endl;
	cout << str2 << endl;
	
	//comparar dos cadenas de texto
	string a,b;
	cout << "Digitar a: ";
	getline(cin,a);
	cout << "Digitar b: ";
	getline(cin,b);
	
	if( a == b )
		cout << "a y b son iguales." << endl;
	else
		cout << "a y b NO son iguales." << endl;
	
	return 123;
}
