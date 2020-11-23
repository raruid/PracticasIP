#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;

//Funciones
int espacios(string cad){

	int contador = 0;

	for(int i = 0; i < cad.size(); i++){
		if(cad[i] == ' '){
			contador++;
		}

	}

	return contador;
}

int main(){
    if( espacios("hola como estas")!=2){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( espacios("hola como estas ")!=3){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( espacios(" hola como estas ")!=4){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }
    if( espacios("holacomoestas")!=0){
        cout<<"Error 4"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}

