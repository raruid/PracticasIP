#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	//Declaracion de variables
	int numero = 0;
	int resultado = 1;
	int i = 1;

	//Explicacion del programa al usuario y pedida de datos
	cout << "Buenas este programa te pedira un numero y te sacara por pantalla el calculo de su factorial" << endl;
	cout << "Introduce el numero: ";
	cin >> numero;

	//Esquema do-while el cual ira del 1 hasta el numero introducido multiplicando esta sucesion de numeros, para lograr calcular el factorial del numero introducido

	do{
		resultado *= i;
		i++;
	}while(i <= numero);	

	cout << "El factorial de " << numero << " es igual a: " << resultado << endl;

    system("pause");
}

