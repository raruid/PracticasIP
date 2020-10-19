#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

//Prototipo del procedimiento declarado mas abajo
int Ndivisores(int numero);

int main(){

	int numero = 0;
	int numeroDivisores = 0;

	cout << "Introduce un numero y te dire cuantos divisores tiene: ";
	cin >> numero;

	numeroDivisores = Ndivisores(numero);

	cout << "El numero " << numero << " tiene " << numeroDivisores << " divisores" << endl;

    system("pause");
}

/**
@brief Funcion el cual devuelve el numero de divisores de un numero pasado por parametros
@pre el numero pasado por parametros debe ser un numero entero valido
@pos devolvera el numero de divisores que tiene el numero pasado por parametros
@autor Raúl Ruiz Idáñez
**/

int Ndivisores(int numero){

	int contador = 0;

	for(int i = 1; i <= numero; i++){
		if(numero%i == 0){
			contador++;
		}
	}	

	return contador;
}

