#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;

void quita_espacios(string cad, string sinEspacios, int &long_real){

	long_real = 0;
	for(int i = 0; i < cad.size(); i++){
		if(cad[i] != ' '){
			sinEspacios[long_real] = cad[i];
			long_real++;
		}
	}

}

bool palindromo(string cad){

	bool esPalindromo = true;
	string sinEspacios;
	int long_real;

	quita_espacios(cad, sinEspacios, long_real);

	for(int i = 0; i < (long_real / 2) && (esPalindromo); i++){
		if(sinEspacios[i] != sinEspacios[long_real -1 -i]){
			esPalindromo = false;
		}
	}

	return esPalindromo;
}

int main(){
    if( palindromo("asddsa")==false){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( palindromo("xasddsa")==true){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( palindromo("acaso hubo buhos aca")==false){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}

