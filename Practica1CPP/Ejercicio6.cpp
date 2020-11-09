#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	float numero1 = 0;
	float numero2 = 0;
	float numero3 = 0;
	float numero4 = 0;
	float media = 0;

	cout << "Hola, te voy a pedir que introduzcas 4 numeros, y de esos numeros te hare una media" << endl;
	cout << "Introduce el primer numero: ";
	cin >> numero1;
	cout << "Introduce el segundo numero: ";
	cin >> numero2;
	cout << "Introduce el tercer numero: ";
	cin >> numero3;
	cout << "Introduce el cuarto numero: ";
	cin >> numero4;

	media = (numero1 + numero2 + numero3 + numero4) / 4;

	cout << "La media de los numeros introducidos es de: " << media << endl;

    system("pause");
}

