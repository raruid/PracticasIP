#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

//Prototipo de la funcion definida abajo
bool esprimo(int numero);

int main(){

	int numeroDePrimos = 0;
	int numero = 0;
	int i = 0;
	bool primo = false;

	cout << "Introduce cuantos numeros primos quieres que te muestre: ";
	cin >> numeroDePrimos;

	while(i < numeroDePrimos){
		primo = false;
		primo = esprimo(numero);
		if(primo == true){
			cout << "Numero primo: " << numero << endl;
			i++;
		}
		numero++;
	}

    system("pause");
}

/**
@brief Funcion la cual comprobara si un numero pasado por parametros es primo o no es primo
@pre el numero pasado por parametros debe ser un numero entero valido
@pos la funcion devolvera un booleano el cual sera true si el numero es primo o false si el numero no es primo
@autor
**/

bool esprimo(int numero){

	int contador = 0;
	bool primo = false;

	for(int i = 1; i <= numero; i++){
		if(numero%i == 0){
			contador++;
		}
	}

	if(contador == 2){
		primo = true;
	}else{
		primo = false;
	}

	return primo;
}

