#include<iostream>
#include<iomanip> //para poder usar setprecision

using namespace std;

int main(){
	//Conversiones
	//de entero a string
	string str = "1x4x333333.9";
	int entero1 = stoi(str);
	cout << "string: " << str << endl;
	cout << "entero: " << entero1 << endl;
	
	//de float a string
	str = "3.1416x22";
	float float1 = stof(str);
	cout << "string: " << str << endl;
	cout << "float: " << float1 << endl;
	
	//de double a string
	str = "22.7987987987";
	double doble1 = stod(str);
	cout << "string: " << str << endl;
	cout << "double: " << setprecision(50) << doble1 << endl;
	
	//de numero a string
	int entero2 = 45;
	float float2 = 2.5556;
	double doble2 = 4.898989898;
	string str2 = to_string(entero2), str3 = to_string(float2),
			str4 = to_string(doble2);
	cout << entero2 << " " << str2 << endl;
	cout << float2 << " " << str3 << endl;
	cout << doble2 << " " << str4 << endl;
	
	return 12345;
}
