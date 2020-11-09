#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	int numero = 0;

	cout << "Introduce un numero entero y te dire si es mayor, menor o igual que cero: ";
	cin >> numero;

	if(numero == 0){
		cout << "Su numero es igual que cero" << endl;
	}else if(numero > 0){
		cout << "Su numero es mayor que cero" << endl;
	}else if(numero < 0){
		cout << "Su numero es menor que cero" << endl;
	}

    system("pause");
}

