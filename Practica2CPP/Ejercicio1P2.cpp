#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	//Declaracion de variables
	double nota = 0;
	double numeroNotas = 0;
	double suma = 0;
	double media = 0;
	
	cout << "\nHola!, este es un programa para calcular la media de las notas\n" << endl;
	cout << "Usted tendra que ir introduciendo notas mayores que 0, en caso de que sea menor que 0, el programa dejara de pedir notasy calculara la nota\n" << endl;

	do{
		cout << "Introduce la nota del alumno " << numeroNotas + 1 << ": ";
		cin >> nota;
		if(nota >= 0){
			numeroNotas++;
			suma += nota;
		}
	}while(nota >= 0);

	media = suma / numeroNotas;

	cout << "La media de las notas es: " << media << endl;

    system("pause");
}

