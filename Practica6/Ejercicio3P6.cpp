#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//Prototipo
float trace(float m[4][4]);
 
//// 
int test();//indica que la funcion test esta mas abajo
int main(){ 
		test();
		cout<<"Correcto"<<endl;
		system("pause");
		return 0;
}

//Funcion
float trace(float m[4][4]){

	float sumaTraza = 0;

	for(int i = 0; i < 4; i++){
		sumaTraza += m[i][i];
	}

	return sumaTraza;
}

//funcion de test
int test(){
	
	float m[4][4]={ {1,2,3,4},
							{1,2,3,4},
							{1,2,3,4},
							{1,2,3,4}};
	assert( trace(m)== 10 );
	return 0;
}	


