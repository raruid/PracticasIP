#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

//Prototipo de la funcion declarada mas abajo
bool esPerfecto(int numero);

int main(){

	int numero = 0;
	bool perfecto = false;
	
	do{
		cout << "Introduce un numero positivo mayor que 0 y te dire si es perfecto: ";
		cin >> numero;
	}while(numero <= 0);

	perfecto = esPerfecto(numero);

	if(perfecto == true){
		cout << "El numero " << numero << " es perfecto" << endl;
	}else{
		cout << "El numero " << numero << " no es perfecto" << endl;
	}

    system("pause");
}

/**
@brief Funcion la cual dice si un numero es perfecto o no
@pre el numero pasado por parametros debe ser un numero positivo valido
@pos devolvera un bool {(true, si es perfecto),(false, si no es perfecto)}
@autor Raúl Ruiz Idáñez
**/

bool esPerfecto(int numero){

	bool perfecto = false;
	int suma = 0;

	for(int i = 1; i < numero; i++){
		if(numero%i == 0){
			suma += i;
		}
	}	

	if(suma == numero){
		perfecto = true;
	}

	return perfecto;
}

