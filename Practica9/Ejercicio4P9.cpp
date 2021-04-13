#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv){

	float vectorNumeros[argc];
	int utiles_v = 0;
	int utiles_u = 0;
	float resultado = 0;

	for(int i = 0; i < argc; i++){
		if(i%2 != 0){
			vectorNumeros[utiles_v] = stoi(argv[i]);
			utiles_v++;
		}
	}

	resultado = vectorNumeros[0];
	for(int i = 0; i < argc; i++){
		if(i%2 == 0){
			if(argv[i] = "-sum"){
				resultado +=  vectorNumeros[utiles_u + 1];
				utiles_u++;
			}else if(argv[i] = "-mult"){
				resultado *= vectorNumeros[utiles_u + 1];
				utiles_u++;
			}else if(argv[i] = "-div"){
				resultado /= vectorNumeros[utiles_u + 1];
				utiles_u++;
			}else if(argv[i] = "-sqrt"){
				sqrt(resultado);
			}
		}
	}

	cout << "El resultado es: " << resultado << endl;

    system("pause");
}

