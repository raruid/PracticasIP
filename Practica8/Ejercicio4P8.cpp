#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;

bool esVocal(char c){

	bool esVocal = false;

	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
		esVocal = true;
	}else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
		esVocal = true;
	}

	return esVocal;
}

int vocales(string cad){

	int contador = 0;

	for(int i = 0; i < cad.size(); i++){
		if(esVocal(cad[i]) == true){
			contador++;
		}
	}

	return contador;
} 

int main(){
    if( vocales("HOLA COMO ESTAS")!=6){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }

    if( vocales("hola como Estas")!=6){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }

    if( vocales("xbnmsmnbx  nssmn")!=0){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}
