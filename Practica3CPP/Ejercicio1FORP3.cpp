#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	//Declaracion de variables
	double numero = 0;
	double menor = 0;

	//Explicacion del programa al usuario
	cout << "Hola!, este programa pedirá 15 numeros por pantalla, al final de la ejecucion se imprimira el menor" << endl;
	
	//Esquema for necesario para la realizacion del programa. Este bucle se ejecutara mientras la variable de ambito 'i' sea menor que 15
	for(int i = 0; i < 15; i++){
		//Pedida e introduccion del numero correspondiente
		cout << "Introduce el numero " << i + 1 << ": ";
		cin >> numero;
			//Esquema if cuya condicion es que si el numero introducido en la nueva iteracion es menor que la variable 'menor', lo cual querra decir que el numero introducido es menor y
			//al ejecutarse la variable menor se sobreescribira con el numero numero
			if(numero < menor){
				menor = numero;
			}
	}

	//salida de datos por pantalla
	cout << "El numero menor introducido es: " << menor << endl;

    system("pause");
}

