#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

//Prototipo del procedimiento declarado mas abajo
void divisores(int numero);

int main(){

	int numero = 0;

	cout << "Introduce un numero y te sacare por pantalla todos sus divisores: ";
	cin >> numero;

	divisores(numero);

    system("pause");
}

/**
@brief Procedimiento el cual imprime por pantalla los divisores de un numero pasado por parametros
@pre el numero pasado por parametros debe ser un numero entero valido
@autor Raúl Ruiz Idáñez
**/

void divisores(int numero){

	for(int i = 1; i <= numero; i++){
		if(numero%i == 0){
			cout << "Un divisor de " << numero << " es: " << i << endl;
		}
	}	

}

