#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;

 bool compruebadni(string dni){

	char vector_letras[24] = {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B' , 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'};
	bool correcto = false;
	int numeroCompleto = 0;
	int posicion = 0;
	string numeroDNI;
	char letra;

	for(int i = 0; i < 8; i++){
		numeroDNI[i] = dni[i];
	}

	numeroCompleto = stoi(numeroDNI);

	posicion = numeroCompleto % 23;

	if(vector_letras[posicion] == dni[8]){
		correcto = true;
	}else if(tolower(vector_letras[posicion]) == dni[8]){
		correcto = true;
	}

	return correcto;
}

int main(){
    if( compruebadni("12345678")!=false){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("12345678Z")!=true){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("12345678z")!=true){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("12345678X")!=false){
        cout<<"Error 4"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("87654321X")!=true){
        cout<<"Error 5"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("87654321a")!=false){
        cout<<"Error 6"<<endl;
        return EXIT_FAILURE;
    }


    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}


