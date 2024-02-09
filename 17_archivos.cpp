/*Hacer un programa que muestre un menu:
DIARIO
1) Agregar entrada al diario
2) Mostrar todo el diario
3) Salir
Digitar la opcion deseada: 

* el menu se volverá a mostrar hasta que el usuario
  seleccione la opcion de salir
* en la opcion 1:	  la entrada se escribirá al final del diario
* en la opcion 2 al imprimir el diario hacer una pausa cada 10 lineas*/
#include<iostream>
#include<fstream>

using namespace std;

int main(){
	int opcion;
	
	do{
		system("cls");
		cout << "DIARIO" << endl;
		cout << "1) Agregar entrada al diario" << endl;
		cout << "2) Mostrar todo el diario" << endl;
		cout << "3) Salir" << endl;
		cout << "Digitar la opcion deseada: ";
		cin >> opcion;
		if( opcion == 1 ){
			cout << "********* AGREGAR ENTRADA *********" << endl;
			string linea;
			cout << "Digitar texto: ";
			cin.ignore(); //flush al buffer
			getline(cin,linea);
			//abrir el archivo y escribir la linea
			fstream archivo;
			archivo.open("diario.txt", ios::app);
			if( archivo.is_open() ){
				archivo << linea << endl;
				archivo.close(); //cerrar archivo
			}
			else
				cout << "Archivo no se puede escribir" << endl;
		}
		
		system("pause");
	}while(opcion != 3);
	
	
	return 567;
}
