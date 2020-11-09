#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	double numero1 = 0;
	double numero2 = 0;
	double auxiliar = 0;

	cout << "Hola, este programa te pedira 2 numeros por pantalla que se correspondera con variables (x, y), independientemente del orden de introduccion siempre sera impreso en la y el numero menor introducido." << endl;
	cout << "Introduce el primer valor: ";
	cin >> numero1;

	cout << "Introduce el segundo valor: ";
	cin >> numero2;

	if(numero1 == numero2){
		cout << "Los numeros deben ser diferentes para que el programa funcione " << endl;
	}else if(numero1 < numero2){
		auxiliar = numero1;
		numero1 = numero2;
		numero2 = auxiliar;
		cout << "El valor de x corresponde a " << numero1 << " y el valor de y corresponde a " << numero2 << endl; 
	}else{
		cout << "El valor de x corresponde a " << numero1 << " y el valor de y corresponde a " << numero2 << endl; 
	}

    system("pause");
}

