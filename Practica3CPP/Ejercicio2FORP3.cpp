#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	//Declaracion de variables
	double numero = 0;
	double mayor = 0;

	//Explicacion del programa y pedida del primer dato
	cout << "Hola!, este programa te pedira numeros hasta que le introduzcas un numero menor que 0, al terminar te imprimira el numero mayor introducido" << endl;
	cout << "Introduceme numeros venga, estoy preparado: " << endl;	
	cin >> numero;

	//Esquema if de control de errores, clasifica si el primer numero introducido es mayor que 0 o no, si lo es seguira pidiendo numeros al usuario, si no lo es terminara notificando al usuario que no ha introducido ningun dato
	if(numero > 0){
		//Esquema for cuya condicion hace que se repita el bucle mientras el numero introducido sea mayor o igual que 0
		for(int i = 0; numero >= 0; i++){
			cin >> numero;
			
			//Si el numero introducido es mayor que la variable 'mayor', esta se sobreescribira con el numero numero mayor
			if(numero > mayor){
				mayor = numero;
			}
		}
		//Al final sacara por pantalla el numero mayor
		cout << "El numero mayor introducido es: " << mayor << endl;		

	}else{
		cout << "Usted no ha introducido ningun numero, gracias por usar mi programa" << endl;
	}

    system("pause");
}

