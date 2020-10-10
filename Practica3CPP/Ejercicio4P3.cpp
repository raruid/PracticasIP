#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	//Declaracion de variables
	int numero = 0;
	int i = 1;

	//Explicacion/Introduccion de datos del usuario
	cout << "Introduce un numero y te sacare por pantalla el numero de divisores que tiene: ";
	cin >> numero;

	//Esquema while con una condicion, la cual la variable iteradora(i) nunca sea mayor que el numero introducido
	while(i <= numero){
		//Si la division entre el numero y la variable iteradora, su resto == 0, quiere decir que es un divisor de 'numero', lo cual ejecutara la linea 20, que sacara por pantalla 
		//el valor de la variable 'i' en esa iteracion del bucle que se correspondera a un divisor de 'numero'
		if(numero%i == 0){
			cout << "Un divisor de " << numero << " es: = " << i << endl;
		}
		//Variable iteradora aumentara +1 en cada vuelta del bucle, que correspondera a los numeros comprendidos entre 1 y el valor de 'numero'
		i++;
	}

    system("pause");
}

