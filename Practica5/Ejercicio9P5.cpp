#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std; 
 
//Prototipo
int divisores(int val, int div[], int utiles);

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
//Funcion
int divisores(int val, int div[], int utiles){

	int pos_util = 0;

	for(int i = 1; i <= val && pos_util < utiles; i++){
		if(val % i == 0){
			div[pos_util] = i;
			pos_util++; 
		}
	}

	return pos_util;
}

int test(){
	int errors=0;
	int vsize=5;
	int div[vsize];//crea el vector
	//llama a la funcion para el valor 10 
	int nd= divisores(10,div,vsize);
	//comprueba validez del resultado
	if (nd!=4 || div[0]!=1 || div[1]!=2 || div[2]!=5 || div[3]!=10) errors++;
	
	//ahora el 1
	nd= divisores(1,div,vsize);
	if (nd!=1 || div[0]!=1)  errors++;
	
	//ahora el 1
	nd= divisores(2,div,vsize);
	if (nd!=2 || div[0]!=1   || div[1]!=2   ) errors++;

	//ahora el 32824, tiene 16 divisores, pero no deberian calcularse mas de 5
	nd= divisores(32824,div,vsize);
	if (nd!=vsize || div[0]!=1   || div[1]!=2 || div[2]!=4 || div[3]!=8 || div[4]!=11    ) errors++;
 
 
 return errors;
}	


