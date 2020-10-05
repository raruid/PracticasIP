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
	cout << "Hola, este programa te pedira un numero y te sacara por pantalla la suma de los numeros impares que haya comprendidos en el intervalo de 1 - (numero introducido)" << endl;
	
	//Control de errores el cual no me dejara introducir numeros menores o iguales que 0
	do{
		cout << "Introduce el numero positivo mayor que 0: ";
		cin >> numero;
	}while(numero <= 0);

	//Esquema do-while el cual cada iteracion comprobara si la variable 'i' la cual ira de 1 hasta (numero) es divisible entre 2, si lo es, es par, no nos interesa
	//pero si no lo es, se ejecutara la linea 26 que realizara la suma de estos numeros impares
	do{
		if(i%2 != 0){
			suma += i;
		}
		i++;
	}while(i <= numero);

	//Salida por pantalla de la suma de los impares
	cout << "La suma de los numeros impares comprendidos entre 1 y " << numero << " es: " << suma << endl;

    system("pause");
}

