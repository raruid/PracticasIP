#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	//Declaracion de variables
	int numero = 0;
	int i = 1;
	int suma = 0;

	//Explicacion del programa e introduccion de datos por pantalla
	cout << "Buenas, este programa te pedira un numero por pantalla y te calculara la suma desde 1 hasta tu numero introducido" << endl;
	cout << "Introduce un numero: ";
	cin >> numero;
		
	//Esquema de control do-while el cual sumará los numeros (empezando desde el 1) hasta el numero introducido
	//ayudandonos de una variable iteradora (i) la cual aumentara en 1 en cada iteracion del bucle, contemplando asi
	//todos los numeros desde el 1 hasta el numero introducido, mediante la condicion del bucle while
	do{
		suma += i;
		i++;
	}while(i <= numero);

	cout << "La suma desde 1 hasta " << numero << " es: " << suma << endl;

    system("pause");
}

