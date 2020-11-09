#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//Prototipo
void multiplica(float m[4][4], float m2[4][4], float m3[4][4]);
 
//// 
int test();//indica que la funcion test esta mas abajo
int main(){ 
		test();
		cout<<"Correcto"<<endl;
		system("pause");
		return 0;
}

//FUNCION
void multiplica(float m[4][4], float m2[4][4], float m3[4][4]){

	float multiplicacion = 0;
	float resultado = 0;

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			resultado = 0;
			for(int k = 0; k < 4; k++){
				cout << "Resultado en k vale: " << resultado << endl;
				multiplicacion = m[i][j] * m2[k][j];
				resultado += multiplicacion;
			}
			cout << "Resultado en k vale: " << resultado << endl;
			m3[i][j] = resultado;
		}	
	}

}

//funcion de test
bool iguales(float m[4][4],float m2[4][4]){
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++)
				if (m[i][j]!=m2[i][j]) return false;
		return true;
}
int test(){
	
	float m[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	float id[4][4]={ {1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
	float res[4][4];
	multiplica(m,id,res);
	assert(iguales(m,res));
	return 0;
}	


