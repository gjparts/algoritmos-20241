#include<iostream>

using namespace std;

int main(){
	//BUG que ocurre cuando venimos de leer un numero y luego queremos leer un string
	//en la consola del sistema
	int x;
	string str;
	
	cout << "Digitar un numero entero para x: ";
	cin >> x;
	
	cout << "Digite un string para str: ";
	//vaciar el buffer de entrada
	cin.ignore();
	getline(cin,str);
	
	cout << "Gracias, adios." << endl;
	
	return 456;
}
