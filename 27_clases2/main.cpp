#include<iostream>
#include<stdexcept>
#include "CuentaAhorro.h"

using namespace std;

int main(){
	CuentaAhorro *c1 = new CuentaAhorro("Filomeno Colinas");
	/*cout << c1->cliente << endl;
	cout << "Saldo de c1: " << c1->getSaldo() << endl;
	c1->depositar(800);
	cout << "Saldo de c1: " << c1->getSaldo() << endl;
	c1->depositar(1000);
	cout << "Saldo de c1: " << c1->getSaldo() << endl;
	c1->retirar(300);
	cout << "Saldo de c1: " << c1->getSaldo() << endl;*/
	
	int opcion;
	
	do{
		system("cls");
		cout << "1) Consultar Saldo" << endl;
		cout << "2) Depositar" << endl;
		cout << "3) Retirar" << endl;
		cout << "4) Salir" << endl;
		cout << "Digitar numero de opcion: ";
		cin >> opcion;
		float monto;
		switch(opcion){
			case 1:
				cout << "Saldo de la cuenta: " << c1->getSaldo() << endl;
			break;
			case 2:
				cout << "Digite el monto a depositar: ";
				cin >> monto;
				try{
					c1->depositar( monto );
				}catch(exception &ex){
					cout << ex.what() << endl;
				}
			break;
			case 3:
				cout << "Digite el monto a retirar: ";
				cin >> monto;
				try{
					c1->retirar( monto );
				}catch(exception &ex){
					cout << ex.what() << endl;
				}
			break;
			case 4:
				cout << "Adios" << endl;
			break;
			default:
				cout << "Opcion no valida" << endl;
		}
		system("pause");
	}while(opcion != 4);
	
	return 123;
}
