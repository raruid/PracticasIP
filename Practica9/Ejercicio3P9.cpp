#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char **argv){

	if(argc == 2){
		string fechaCompleta = argv[1];	
		string fechaS;
		int fecha = 0;
		
		for(int i = 6; i < fechaCompleta.size(); i++){
			fechaS += fechaCompleta[i];
		}
	
		fecha = stof(fechaS);

		if(fecha%4 == 0 && fecha%100 != 0 ||fecha%400 == 0){
				cout << "El año de tu nacimiento es bisiesto!" << endl;
		}else{
				cout << "El año de tu nacimiento no es bisiesto." << endl;
		}
	}else{
		cout << "Introduce una fecha valida " << endl;
	}

    system("pause");
}

