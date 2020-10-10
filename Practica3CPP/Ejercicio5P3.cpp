#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	//Declaracion de variables
	double numero = 0;
	double sumaNumeros = 0;
	double totalNumeros = 0;
	double media = 0;

	cout << "Hola, este programa te pedira numeros, finalizara si la media de todos los numeros introducidos es mayor que 30" << endl;
	
	cout << "Introduce numeros: " << endl;

	do{
		cin >> numero;
		sumaNumeros += numero;
		totalNumeros++;
		media = sumaNumeros / totalNumeros;

		cout << "Tu media actual es: " << media << endl;

	}while(media <= 30);

	cout << "\nTu media ha superado el valor 30" << endl;
	cout << "Tu media final conseguida es de: " << media << endl;

    system("pause");
}

