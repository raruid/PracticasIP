#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	int numero = 0;

	cout << "Introduce un numero del 1 al 7 para ver que día de la semana te ha tocado: ";
	cin >> numero;

	if(numero <= 0 || numero > 7){
		cout << "Lo siento, su numero no se corresponde con ningun día de la semana, gracias" << endl;
	}else if(numero == 1){
		cout << "A usted le corresponde el lunes!, gracias y disfrute su dia" << endl;
	}else if(numero == 2){
		cout << "A usted le corresponde el martes!, gracias y disfrute su dia" << endl;
	}else if(numero == 3){
		cout << "A usted le corresponde el miercoles!, gracias y disfrute su dia" << endl;
	}else if(numero == 4){
		cout << "A usted le corresponde el jueves!, gracias y disfrute su dia" << endl;
	}else if(numero == 5){
		cout << "A usted le corresponde el viernes!, gracias y disfrute su dia" << endl;
	}else if(numero == 6){
		cout << "A usted le corresponde el sabado!, gracias y disfrute su dia" << endl;
	}else if(numero == 7){
		cout << "A usted le corresponde el domingo!, gracias y disfrute su dia" << endl;
	}

    system("pause");
}

