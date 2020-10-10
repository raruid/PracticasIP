#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	//Declaracion de variables
	int numero = 0;
	int contador = 0; //Variable contador que me servira para contar de cuantos numeros es divisible 'numero' introducido por pantalla

	//Explicacion/Introduccion de datos por el usuario
	//Control de errores, no me dejara introducir un numero menor que 1
	while(numero <= 1){
		cout << "Introduce un numero entero mayor que 1 y te dire si es primo o no es primo: ";
		cin >> numero;
	}

	//Esquema for con la condicion de que el valor de la variable de ambito 'i' nunca sera mayor que el numero introducido
	for(int i = 1; i <= numero; i++){
		//Si el resto de la division (numero/i) da resto == 0, quiere decir que el valor de 'i' en ese momento es un divisor de 'numero', lo cual ejecutara la linea 25
		if(numero%i == 0){
			//variable contador aumentara en +1, 
			contador++;
		}
	}

	//Esquema if, que mediante condiciones, dira si el numero es primo o no
	//Recordando que un numero primo es solamente divisible entre 1 y el mismo numero (solamente 2 numeros)
	//Si contador es == 2 quiere decir que solamente tiene 2 divisores (un numero primo solo es divisible entre 2 numeros), lo cual nos querra decir es que el numero cuyo contador == 2, es primo
	//Si contador es > o < que 2, no es primo
	if(contador > 2){
		cout << "Este numero no es primo" << endl;
	}else if(contador == 2){
		cout << "Este numero si es primo" << endl;
	}else{
		cout << "Excepcion no controlada" << endl;
	}

    system("pause");
}

