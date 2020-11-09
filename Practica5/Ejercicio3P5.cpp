#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

//Prototipos
void fijaValorAleatorio(int v[], int utiles /**, int max**/);
void imprime(int v[], int utiles);

int main(){

	int DIM_VECTOR = 50; //Dimension total del vector
	int vector[DIM_VECTOR]; //Se crea el vector con la dimension 
	int utiles = 0; //Utiles del vector
	
	//Control de errores para limitar la introduccion de las utiles del vector
	do{
		cout << "Introduce la dimension de tu vector, debe ser un numero positivo menor que 50: ";
		cin >> utiles;
	}while(utiles < 1 || utiles > 50);

	//Llamada a las funciones
	fijaValorAleatorio(vector, utiles);
	imprime(vector, utiles);

    system("pause");
}

/**
@brief Asigna valores aleatorios al vector
@pre El vector debe estar inicializado con una dimension y las utiles ser mayor que 0
@pos El vector quedara sobreescrito en sus posiciones utiles, con valores aleatorios
@autor Raúl Ruiz Idáñez
**/

void fijaValorAleatorio(int v[], int utiles /**, int max**/){

	int secs = time(0);
	srand(secs);

	for(int i = 0; i < utiles; i++){

		v[i] = rand()%100;		

	}
}

/**
@brief Funcion que imprimira el vector a traves de sus posiciones utiles
@pre El vector debe estar creado y con al menos una de sus utiles introducida para que la funcion tenga utilidad
@pos El vector quedara impreso por pantalla
@autor Raúl Ruiz Idáñez
**/

void imprime(int v[], int utiles){

	cout << "Impresion del vector aleatorio.." << endl;

	for(int i = 0; i < utiles; i++){
		cout << "En la posicion del vector " << i + 1 << " esta el siguiente numero: " << v[i] << endl;
	}

}
