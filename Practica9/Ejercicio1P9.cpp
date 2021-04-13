#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv){

	if(argc == 2){

		string numeroS = argv[1];
		float numero = stof(numeroS);
		if(numero > 1){
			float resultado = sqrt(numero);
			
			cout << "El resultado de la raiz cuadrada de " << numero << " es: " << resultado << endl;
		}else{
			cout << "Introduce un valor positivo" << endl;
		}

	}else{
		cout << "Introduce un valor valido" << endl;
	}

    system("pause");
}

