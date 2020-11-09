#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std; 
 
//Prototipo
int find(int val, int v[], int utiles);

int test();
int main(){ 
		int nerrors=test();
		if (nerrors==0){
			cout<<"Correcto "<<endl;
		}
		else{
			cout<<"Hay "<<nerrors<<" errores en el test"<<endl;
		}
		system("pause");
}

int find(int val, int v[], int utiles){

	int repeticiones = 0;

	for(int i = 0; i < utiles; i++){
		if(v[i] == val){
			repeticiones++;
		}
	}

	return repeticiones;
}

int test(){
	int errors=0;
	//llama a la funcion para el valor 10 
	int v1[10]={1,2,2,3,1,2,2,3,4,5};//crea el vector
	if ( find(1,v1,10)!=2) errors++;
	if ( find(10,v1,10)!=0) errors++;
	if ( find(2,v1,10)!=4) errors++;
	if ( find(-1,v1,10)!=0) errors++;
	 
 return errors;
}	


