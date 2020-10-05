#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	int numero = 0;
	int i = 1;
	int contador = 0;

	do{
		cout << "Introduce un numero entero mayor que 1 y te dire si es primo o no es primo: ";
		cin >> numero;
	}while(numero <= 1);

	while(i <= numero){
		if(numero%i == 0){
			contador++;
		}
		i++;
	}

	if(contador > 2){
		cout << "Este numero no es primo" << endl;
	}else if(contador == 2){
		cout << "Este numero si es primo" << endl;
	}else{
		cout << "Excepcion no controlada" << endl;
	}

    system("pause");
}

