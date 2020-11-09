#include <cstdio>	
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	int numero = 0;
	//Provisional
	int modulo = 0;	
	int division = 0;

	cout << "Hola, introduce un numero y te dire si es par o impar: ";
	cin >> numero;

	if(numero%2 == 0){
		cout << "El numero introducido es par" << endl;
	}else{
		cout << "El numero introducido es impar" << endl;
	}

    system("pause");
}

