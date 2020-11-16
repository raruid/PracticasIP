#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

//void lee(float[], int utiles);

void lee(float vector[], int utiles){

	cout << "\nVamos a proceder con la introduccion de datos en tu vector..." << endl;

	for(int i = 0; i < utiles; i++){
		cout << "Introduce la posicion " << i + 1 << " del vector: ";
		cin >> vector[i];
	}

}

void imprime(float v[], int utiles);

int main(){

	const int DIM_VECTOR = 50; //Establezco una constante para la dimension del vector
	//float vector [DIM_VECTOR]; //Creo el vector con la dimension constante //
	//int utiles = 0; //Van a ser las las posiciones utiles del vector

	
	int dimension = 0; //Van a ser las las posiciones utiles del vector
	
	/*
	//Control de errores para que no introduzca unas utiles mayores que la dimension del vector, ni un numero negativo
	do{
		cout << "Elija la dimension de su vector, no puede ser mayor que 50, ni menor que 1: ";
		cin >> utiles;
	}while(utiles > 50 || utiles <= 0);
	*/

	//Control de errores para que no introduzca unas utiles mayores que la dimension del vector, ni un numero negativo
	do{
		cout << "Elija la dimension de su vector, no puede ser menor que 0: ";
		cin >> dimension;
	}while(dimension <= 0);

	float vector [dimension]; //Creo el vector con la dimension constante //

	lee(vector, dimension);
	imprime(vector, utiles);

    system("pause");
}

/**
@brief Funcion la cual recibira por parametros un vector y sus posiciones utiles, y las rellenara de los numeros que introduzcas 
@pre El vector debe estar inicializado con una dimension mayor que las utiles pasadas por referencia
@pos Las posiciones del vector correspondientes con las utiles, quedaran sobreescritas con los numeros introducidos por el usuario
@autor Raúl Ruiz Idáñez
**/
/*
void lee(float vector[], int utiles){

	cout << "\nVamos a proceder con la introduccion de datos en tu vector..." << endl;

	for(int i = 0; i < utiles; i++){
		cout << "Introduce la posicion " << i + 1 << " del vector: ";
		cin >> vector[i];
	}

}
*/
/**
@brief Funcion la cual recibira por parametros un vector y sus posiciones utiles, e imprimira estas por pantalla
@pre El vector debe estar sobreescrito en sus posiciones utiles para que esta funcion tenga sentido
@pos Las posiciones utiles del vector quedaran impresas por pantalla
@autor Raúl Ruiz Idáñez
**/

void imprime(float v[], int utiles){

	cout << "\nUna vez introducidos los datos, se imprimiran a continuacion.." << endl;

	for(int i = 0; i < utiles; i++){
		cout << "En la posicion " << i + 1 << " usted ha introducido " << v[i] << endl;
	}

}