#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std; 

//Prototipo de la funcion
float max(float v1[], int utiles);

//// 
int test();//indica que la funcion test esta mas abajo
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
float max(float v[], int utiles){
	
	float maximo; 
	cout << maximo << endl;
	//= v[0];	

	for(int i = 0; i < utiles; i++){

		if(v[i] > maximo){
			maximo = v[i];
		}
	}

	return maximo;
}

//funcion de test
int test(){
	int errors=0;


	//test 1(all positive)
	float vec[6]={1,2,30,4,5,6};
	if(  max(vec,6)!=30 ) errors++;

	//test 2(all negative)
	float vec2[6]={-1,-2,-30,-4,-5,-6};
	if(  max(vec2,6)!=-1 ) errors++;

	//test 3 bigger
	float vec3[11]={-1,-2,-30,-4,-5,-6,1,2,5,6,10};
	if(  max(vec3,11)!=10 ) errors++;

	return errors;
}	


