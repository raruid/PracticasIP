#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	int opcion = 0;

	cout << "Introduce un numero entero entre el 1 y el 7, y te dire a que dia de la semana pertenece: ";
	cin >>  opcion;

	switch(opcion){
		
		case 1:
			cout << "Su dia se corresponde con el Lunes " << endl;break;
		case 2:
			cout << "Su dia se corresponde con el Martes " << endl;break;
		case 3:
			cout << "Su dia se corresponde con el Miercoles " << endl;break;
		case 4:
			cout << "Su dia se corresponde con el Jueves " << endl;break;
		case 5:
			cout << "Su dia se corresponde con el Viernes " << endl;break;
		case 6:
			cout << "Su dia se corresponde con el Sabado " << endl;break;
		case 7:
			cout << "Su dia se corresponde con el Domingo " << endl;break;
		default:
			cerr << "Su numero no se corresponde con ningun dia " << endl;break;
	}

    system("pause");
}

