#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	int numero = 0;

	cout << "Hola, introduce un numero del 1 al 12, correspondiendose cada numero con un mes del año, y te dire los dias que tiene el mes que ha seleccionado" << endl;

	cout << "Introduce el numero: ";
	cin >> numero;

	if(numero <= 0 || numero > 12){
		cout << "El numero introducido no se corresponde con ningun mes" << endl;
	}else if(numero == 1){
		cout << "El mes de Enero tiene 31 dias" << endl;
	}else if(numero == 2){
		cout << "El mes de Febrero tiene 28 dias" << endl;
	}else if(numero == 3){
		cout << "El mes de Marzo tiene 31 dias" << endl;
	}else if(numero == 4){
		cout << "El mes de Abril tiene 30 dias" << endl;
	}else if(numero == 5){
		cout << "El mes de Mayo tiene 31 dias" << endl;
	}else if(numero == 6){
		cout << "El mes de Junio tiene 30 dias" << endl;
	}else if(numero == 7){
		cout << "El mes de Julio tiene 31 dias" << endl;
	}else if(numero == 8){
		cout << "El mes de Agosto tiene 31 dias" << endl;
	}else if(numero == 9){
		cout << "El mes de Septiembre tiene 30 dias" << endl;
	}else if(numero == 10){
		cout << "El mes de Octubre tiene 31 dias" << endl;
	}else if(numero == 11){
		cout << "El mes de Noviembre tiene 30 dias" << endl;
	}else if(numero == 12){
		cout << "El mes de Diciembre tiene 31 dias" << endl;
	}

    system("pause");
}

