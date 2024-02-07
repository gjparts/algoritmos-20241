#include<iostream>
#include<fstream>

using namespace std;

int main(){
	//Lectura de un archivo de texto
	fstream archivo; //estructura de datos para leer archivos
	
	//tratar de abrir el archivo en modo de lectura (ios::in)
	archivo.open("ejemplo_24mil.txt", ios::in );
	//si el archivo estuviera en el folder llamado cosas
	//deberia ponerlo asi:
	//archivo.open("cosas\\ejemplo_24mil.txt", ios::in );
	
	//validar si se pudo abrir el archivo
	if( archivo.is_open() ){
		cout << "archivo abierto correctamente" << endl;
		string linea;
		int n = 0; //contador de lineas
		//mientras no llegue al final del archivo (end of file)
		while( !archivo.eof() ){
			getline(archivo,linea); //leer linea por linea
			n++;	//sumar 1 al contador de lineas
			cout << linea << endl; //imprimir cada linea (reduce rendimiento)
		}
		cout << "Se ha recorrido el archivo" << endl;
		cout << "numero de lineas: " << n << endl;
		archivo.close(); //cerrar el archivo (buena practica)
	}
	else
		cout << "Archivo no se pudo leer o no existe." << endl;
	
	return 777;
}
