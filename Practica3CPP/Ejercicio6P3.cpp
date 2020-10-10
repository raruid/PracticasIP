#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	//Generacion del numero aleatorio
	srand(time(0));
	int secreto = rand() % 100;

	int numero = 0;
	int intentos = 0;

	//Explicacion del programa e introduccion del primer intento
	cout << "Hola, este programa acaba de generar un numero aleatorio del 0 al 100, tu objetivo es adivinarlo, comencemos " << endl;
	cout << "Venga a ver si lo aciertas a la primera: ";
	cin >> numero;
	//Variable extra para mejor experiencia de usuario, suma los intentos probados
	intentos++;

	//Esquema if el cual si aciertas a la primera, te felicita, si no aciertas, sigue probando suerte
	if(numero == secreto){
		cout << "Increible, no te lo crees ni tu, has acertado, el numero era: " << secreto << endl;
	}else{
		//Do-while que no terminara hasta que no aciertes el numero secreto
		do{
			//Si tu numero introducido es mayor que el numero secreto, te dira que el numero secreto es menor que el introducido
			if(numero > secreto){
				cout << "No ha habido suerte, el numero es MENOR, sigue intentandolo: ";
				cin >> numero;
			//Si tu numero introducido es menor que el numero secreto, te dira que el numero secreto es mayor que el introducido
			}else if(numero < secreto){
				cout << "No ha habido suerte, el numero es MAYOR, sigue intentandolo: ";
				cin >> numero;
			}
			intentos++;
		}while(numero != secreto);

		cout << "\nCorrecto, tu numero secreto era: " << secreto << endl;
		cout << "Has necesitado " << intentos << " intentos" << endl;
	}	

    system("pause");
}

