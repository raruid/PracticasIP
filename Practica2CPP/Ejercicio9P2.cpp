#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	//Declaracion de variables
	int numero = 0;
	int i = 1;
	int suma = 0;

	//Explicacion del programa al usuario e introduccion de datos
	cout << "Hola, este programa te pedira un numero y te sacara por pantalla la suma de los numeros divisibles entre 2 y 3 que haya comprendidos en el intervalo de 1 - (numero introducido)" << endl;
	
	//Control de errores el cual no me dejara introducir numeros menores o iguales que 0
	do{
		cout << "Introduce el numero positivo mayor que 0: ";
		cin >> numero;
	}while(numero <= 0);

	//Esquema do-while el cual cada iteracion comprobara si la variable 'i' la cual ira de 1 hasta (numero) es divisible entre 2 y 3, si lo es, se ejecutara la linea 27 que suma estos numeros
	do{
		//Si se cumple esta condicion quiere decir que es un numero divisible entre 2 o 3
		if(i%2 == 0 || i%3 == 0){
			//Suma de los divisores de 2 o 3
			suma += i;
		}
		//Variable iteradora, suma +1 cada vuelta del bucle(iteracion)
		i++;
	}while(i <= numero);

	//Salida por pantalla de la suma de numeros divisibles entre 2 y divisibles entre 3
	cout << "La suma de los numeros divisibles entre 2 y 3 comprendidos entre 1 y " << numero << " es: " << suma << endl;

    system("pause");
}

