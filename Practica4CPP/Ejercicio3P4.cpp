#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

//int factorial(int numero);

int factorial(int numero){

	int resultadoFactorial = 1;

	for(int i = 1; i <= numero; i++){
		//resultadoFactorial *= i;
		resultadoFactorial = resultadoFactorial * i;
	}

	return resultadoFactorial;
}

int main(){

	//Declaracion de variables
	int numero = 0;
	int resultadoFactorial = 0;

	//Control de errores que controla que no introduzcas un numero menor que 1
	cout << "Introduce un numero y te calculare su factorial, el numero debe ser positivo mayor que 1" << endl;
	do{
		cout << "Introduce el numero valido: ";
		cin >> numero;
	}while(numero < 1);

	//Asigna la variable resultadoFactorial a la funcion factorial, que devuelve el numero factorial del numero pasado por parametros
	resultadoFactorial = factorial(numero);

	cout << "El factorial de " << numero << " es: " << resultadoFactorial << endl;

    system("pause");
}

/**
@brief Funcion que calcula el factorial de un numero
@pre el numero pasado por parametros debe ser un numero entero mayor que 1
@pos la funcion devolvera un numero correspondiente con el factorial del numero pasado por parametros
@autor Raúl Ruiz Idáñez
**/

/*
int factorial(int numero){

	int resultadoFactorial = 1;

	for(int i = 1; i <= numero; i++){
		resultadoFactorial *= i;
	}

	return resultadoFactorial;
}
*/