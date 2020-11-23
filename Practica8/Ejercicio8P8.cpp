#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;
 
int find(string a, string b){

	int posicion = -1;
	bool salir = false;

	for (int i = 0; i < a.size() && salir == false; i++){
		if(a[i] == b[0]){
			posicion = i;
			salir = true;
		}
	}

	return posicion;
}

int main(){
    if( find("12345678","123")!=0){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( find("12345678","hola")!=-1){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( find("Juan Perez","Perez")!=5){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }
    if( find("Juan Perez Perez","Perez")!=5){
        cout<<"Error 5"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}


