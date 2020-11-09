#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std; 

//Prototipo
void stats(float m[4][4], float res[2]);
  
//// 
int test();//indica que la funcion test esta mas abajo
int main(){ 
		test();
		cout<<"Correcto"<<endl;
		system("pause");
		return 0;
}

//Funcion
void stats(float m[4][4], float res[2]){

	float sumaElementos = 0;
	float contador = 0;
	float media = 0;
	float varianza = 0;
	float desviacionTipica = 0;

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			sumaElementos += m[i][j];
			contador++;
		}
	}
	
	media = sumaElementos / contador;
	sumaElementos = 0;
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			sumaElementos += pow(m[i][j] - media, 2);
		}
	}
	
	varianza = sumaElementos / contador;
	desviacionTipica = sqrt(varianza);

	res[0] = media;
	res[1] = desviacionTipica;
}

//funcion de test
 
int test(){
	
	float m[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	float st[2];
	stats(m,st);
	assert( fabs( st[0]-2.5)<1e-3  && fabs(st[1]-1.11803)<1e-3);
	return 0;
}	


