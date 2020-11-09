#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	float numero1 = 0;
	float numero2 = 0;
	float numero3 = 0;

	cout << "Hola, te pedire 3 numeros y te dire cual es el mayor" << endl;

	cout << "Introduce el primer numero: ";
	cin >> numero1;

	cout << "Introduce el segundo numero: ";
	cin >> numero2;

	cout << "Introduce el tercer numero: ";
	cin >> numero3;

	if(numero1 == numero2 && numero1 == numero3){
		cout << "Los numeros son iguales" << endl;
	}else if(numero1 >= numero2 && numero1 >= numero3){
		cout << "El numero " << numero1 << " es el mayor" << endl;
	}else if(numero2 >= numero1 && numero2 >= numero3){
		cout << "El numero " << numero2 << " es el mayor" << endl;
	}else if(numero3 >= numero2 && numero3 >= numero3){
		cout << "El numero " << numero3 << " es el mayor" << endl;
	}

    system("pause");
}

