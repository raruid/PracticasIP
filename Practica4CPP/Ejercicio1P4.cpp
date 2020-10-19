#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

//Prototipo de la funcion definida mas abajo

bool espar(int numero);

int main(){
	
	//Declaracion de variables
	int numero = 0;
	bool par = false;
	
	//Pedida de datos al usuario
	cout << "Introduce un numero y te dire si es par o no: ";
	cin >> numero;

	//La variable booleana par la asignamos a la funcion, ya que esta ultima devolvera true o false segun sea el numero par o impar 
	par = espar(numero);

	//Si la variable par es true, saca por pantalla que si es par, si no es par, ejecutara el else y sacara por pantalla que no es par
	if(par == true){
		cout << "El numero " << numero << " es par" << endl; 
	}else{
		cout << "El numero " << numero << " no es par" << endl;
	}

    system("pause");
}

/**
@brief funcion la cual comprobara si el numero es par o impar
@pre la variable numero debe ser un numero entero valido
@pos la funcion devolvera un booleano {(true, si el numero introducido es par),(false, si el numero introducido es impar)}
@autor Raúl Ruiz Idáñez
**/

bool espar(int numero){

	//Variable local, que devolveremos en el return
	bool par = false;

	//If el cual, cuya condicion comprobara si es par o impar
	if(numero%2 == 0){
		par = true;
	}

	return par;
}
