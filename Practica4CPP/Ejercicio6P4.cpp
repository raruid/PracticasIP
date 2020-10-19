#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int factorial(int numero);
int combinaciones(int n, int k);

int main(){

	//Declaracion de variables
	int n = 0;
	int k = 0;
	long long int resultadoCombinatoria = 0;

	//Control de errores que controla que no introduzcas un numero menor que 1
	cout << "Introduce dos numeros y te calculare su combinatoria (n sobre k)" << endl;

	cout << "Introduce el primer numero(n): ";
	cin >> n;

	cout << "Introduce el segundo numero(k): ";
	cin >> k;


	//Asigna la variable resultadoFactorial a la funcion factorial, que devuelve el numero factorial del numero pasado por parametros
	resultadoCombinatoria = combinaciones(n, k);

	cout << "La combinatoria de " << n << " sobre " << k << " es: " << resultadoCombinatoria << endl;

    system("pause");
}

/**
@brief Funcion que calcula el combinatorio de n sobre k
@pre las variables n y k deberan de ser numeros enteros validos
@pos la funcion devolvera el valor de la combinatoria de n entre k
@autor Raúl Ruiz Idáñez
**/

int combinaciones(int n, int k){

	long long int resultArriba = 0;
	long long int resultAbajo = 0;
	long long int resultadoCombinatoria = 0;

	if(k != 0){
		
		resultArriba = factorial(n);
		cout << resultArriba << endl;
		resultAbajo = factorial(k) * factorial(n - k);
		cout << resultAbajo << endl;

		//Se calcula el resultado de la combinatoria
		resultadoCombinatoria = resultArriba / resultAbajo;
	}else{
		//La combinatoria de un numero sobre 0 es = 1
		resultadoCombinatoria = 1;
	}

	return resultadoCombinatoria;
}

/**
@brief Funcion que calcula el factorial de un numero
@pre el numero pasado por parametros debe ser un numero entero mayor que 1
@pos la funcion devolvera un numero correspondiente con el factorial del numero pasado por parametros
@autor Raúl Ruiz Idáñez
**/

int factorial(int numero){

	long long int resultadoFactorial = 1;

	for(int i = 1; i <= numero; i++){
		resultadoFactorial *= i;
	}

	return resultadoFactorial;
}
