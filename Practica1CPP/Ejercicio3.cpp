#include <iostream>
#include <cmath>
using namespace std;

int main(){

	float numero = 0;
	float raiz = 0;
	
	cout << "Introduce un numero y te hare su cuadrada: ";
	cin >> numero;

	raiz = sqrt(numero);

	cout << "La raiz cuadrada de " << numero << " es: " << raiz << endl;

    system("pause");
}

