#include <cstdio>
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	//Declaracion de variables
	string sucesion;
	int numero1 = 0;
	int numero2 = 1;
	int numeroAuxiliar = 0;
	int contador = 0;
	int numeroFinal = 0;
	int suma = 0;

	cout << "Hola, este programa te calculara la sucesion de Fibonacci " << endl;
	cout << "Cuantos numeros te gustaria ver de esta sucesion(sin contar el 0): ";
	cin >> numeroFinal;

	while(contador < numeroFinal){

		sucesion += to_string(numero1) + ",";
		suma = numero1 + numero2;
		
		numeroAuxiliar = numero2;
		numero2 = suma;
		numero1 = numeroAuxiliar;

		contador++;
	}

		sucesion += to_string(numero1);

		cout << "Resultado de la sucesion de Fibonacci: " << sucesion << endl;

    system("pause");
}

