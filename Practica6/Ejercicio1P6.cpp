#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//Prototipo
int find(float m[4][4], float val);
 
//// 
int test();//indica que la funcion test esta mas abajo
int main(){ 
		test();
		cout<<"Correcto"<<endl;
		system("pause");
		return 0;

}

int find(float m[4][4], float val){

	int repeticiones = 0;

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){			
			if(m[i][j] == val){
				repeticiones++;
			}
		}
	}

	return repeticiones;
}

//funcion de test
int test(){
	
	float m[4][4]={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	assert(  find(m,1 )==4);
	assert(  find(m,2 )==4);
	assert(  find(m,-1 )==0);
	return 0;
}	


