#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	//Declaracion de variables
	double numero = 0;
	double menor = 0;
	int i = 0;

	//Explicacion del programa al usuario
	cout << "Hola!, este programa pedirá 15 numeros por pantalla, al final de la ejecucion se imprimira el menor" << endl;
	
	while(i < 15){
		cout << "Introduce el numero " << i + 1 << ": ";
		cin >> numero;
			if(numero < menor){
				menor = numero;
			}
		i++;
	}

	cout << "El numero menor introducido es: " << menor << endl;

    system("pause");
}

