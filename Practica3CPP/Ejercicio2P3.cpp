#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	//Declaracion de variables
	double numero = 0;
	double mayor = 0;
	double i = 0;

	cout << "Hola!, este programa te pedira numeros hasta que le introduzcas un numero menor que 0, al terminar te imprimira el numero mayor introducido" << endl;
	cout << "Introduceme numeros venga, estoy preparado: " << endl;	
	cin >> numero;

	if(numero > 0){

		while(numero >= 0){
			cin >> numero;
		
			if(numero > mayor){
				mayor = numero;
			}
		}

		cout << "El numero mayor introducido es: " << mayor << endl;		

	}else{
		cout << "Usted no ha introducido ningun numero, gracias por usar mi programa" << endl;
	}

    system("pause");
}

