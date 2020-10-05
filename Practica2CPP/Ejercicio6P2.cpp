#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	//Declaracion de variables
	int numero = 0;


	//Explicacion/Introduccion de datos del usuario
	cout << "Introduce un numero y te sacare por pantalla el numero de divisores que tiene: ";
	cin >> numero;
	int i = numero;

	//Esquema while con una condicion, la cual la variable iteradora(i) nunca sea menor que 0
	while(i > 0){
		//Si la division entre el numero y la variable iteradora, su resto == 0, quiere decir que es un divisor de 'numero', lo cual ejecutara la linea 20, que sacara por pantalla 
		//el valor de la variable 'i' en esa iteracion del bucle que se correspondera a un divisor de 'numero'
		if(numero%i == 0){
			cout << "Un divisor de " << numero << " es: = " << i << endl;
		}
		//Variable iteradora disminuira -1 en cada vuelta del bucle, que correspondera a los numeros comprendidos entre el valor de 'numero' y 1
		i--;
	}

    system("pause");
}

