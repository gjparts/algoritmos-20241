#include<iostream>
#include<fstream>

using namespace std;

int main(){
	/*hacer un programa que abra el archivo ejemplo_24mil.txt, lo recorra
	y muestre cuantas lineas tiene, cual es la suma de todos sus numeros,
	cuantos numeros son pares, cuantos numeros son impares, y
	el promedio de todos sus numeros.
	Importante: No imprimir cada linea.*/
	fstream archivo;
	
	archivo.open("ejemplo_24mil.txt", ios::in );
	
	//validar si se puede acceder al archivo
	if( archivo.is_open() ){
		string linea; //variable para leer lineas
		int lineas = 0; //variables acumulador
		int suma = 0;
		int pares = 0, impares = 0;
		
		//mientras no llegue al final de archivo
		while( !archivo.eof() ){
			//volcar (dump) la linea leida del archivo hacia la variable
			getline(archivo, linea);
			lineas++; //sumar 1 al contador de lineas
			
			try{
				suma += stoi(linea);
				
				//contar pares o impares
				if( stoi(linea)%2 == 0 )
					pares++;
				else
					impares++;
			}
			catch(exception ex){ /*no mostrar mensaje de error*/ }
		}
		//imprimir los resultados
		cout << "Numero de lineas: " << lineas << endl;
		cout << "Suma de los numeros leidos: " << suma << endl;
		cout << "Numeros pares leidos: " << pares << endl;
		cout << "Numeros impares leidos: " << impares << endl;
		cout << "Promedio de los numeros leidos: " << suma/(pares+impares) << endl;
	}
	else
		cout << "No se puede leer el archivo o no existe." << endl;
	
	return 123;
}
