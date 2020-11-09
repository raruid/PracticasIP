#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	float angulo = 0;
	float anguloEnRads = 0;

	cout << "Hola, introduzca un angulo en grados: ";
	cin >> angulo;

	anguloEnRads = (angulo * 3.1415) / 180;

	cout << "Su angulo mide " << anguloEnRads << " radianes" << endl;

    system("pause");
}

