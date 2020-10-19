#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

//Prototipo de la funcion definida abajo
bool esprimo(int numero);

int main(){

	int numero = 0;
	bool primo = false;

	cout << "Introduce un numero y te dire si es primo o no: ";
	cin >> numero;

	//Asignacion del booleano primo, ya que la funcion esprimo devuelve un booleano
	primo = esprimo(numero);

	//Si el booleano primo es true, sacara por pantalla que es primo, si es false, sacara por pantalla que no es primo
	if(primo == true){
		cout << "El numero " << numero << " es primo" << endl;
	}else{
		cout << "El numero " << numero << " no es primo" << endl;
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

