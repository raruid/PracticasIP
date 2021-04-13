#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char **argv){

	string numerosMediaS[argc];
	float numerosMedia[argc-1];
	float resultadoSum = 0;
	float media = 0;

	for(int i = 0; i < argc; i++){
		numerosMediaS[i] = argv[i];
		cout << argv[0] << endl;
		//resultadoSum += numerosMedia[i];
	}

	for(int i = 0; i < argc - 1; i++){
		numerosMedia[i] = stof(numerosMediaS[i+1]);
		resultadoSum += numerosMedia[i];
	}

	media = resultadoSum / (argc - 1);

	cout << "El resultado de la media de los " << argc - 1 << " numeros que has introducido es: " << media << endl;

    system("pause");
}

