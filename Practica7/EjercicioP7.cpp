#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

struct Alumno{
	int dni = 0;
	int edad = 0;
	float nota = 0;
};

//Prototipos de las funciones del programa
void menu();
void aniadirAlumno(Alumno alumnos[], int &utiles);
void eliminarAlumno(Alumno alumnos[], int &utiles);
void modificarAlumno(Alumno alumnos[], int utiles);
void imprimeAlumnos(Alumno alumnos[], int utiles);
void imprimeUnAlumno(Alumno alumnos[], int utiles);
//Prototipos de funciones complementarias
int devuelvePosicionAlumno(Alumno alumnos[], int utiles);
void pulsaParaContinuar();
void alumnoNoEncontrado();

int main(){

	Alumno alumnos[10];
	int util_alumno = 0;
	
	int opcion = 0;

	do{

		menu();
	
		cout << "Por favor, seleccione una opcion: ";

		cin >> opcion;

		switch(opcion){

		case 1: 
			aniadirAlumno(alumnos, util_alumno);break;
		case 2: 
			eliminarAlumno(alumnos, util_alumno);break;
		case 3: 
			imprimeAlumnos(alumnos, util_alumno);break;
		case 4: 
			imprimeUnAlumno(alumnos, util_alumno);break;
		case 5: 
			modificarAlumno(alumnos, util_alumno);break;
	
		}
	}while(opcion != 6);

	cout << "\nGracias por usar la base de datos, le esperamos pronto! :D" << endl;

    system("pause");
}

void menu(){

	cout << "\nBIENVENIDO AL MENU DE LA BASE DE DATOS DE ALUMNOS" << endl;

	cout << "\n[1] Crear un alumno " << endl;
	cout << "[2] Eliminar alumno " << endl;
	cout << "[3] Ver alumnos " << endl;
	cout << "[4] Visualizar un alumno " << endl;
	cout << "[5] Modificar alumno " << endl;
	cout << "[6] Salir " << endl;
	cout << "\n" << endl;

}

void aniadirAlumno(Alumno alumnos[], int &utiles){

	if(utiles == 9){
		cout << "\nNo hay mas espacio en la base de datos, lo siento, elimina alumnos!!" << endl;
	}else{
		Alumno a;

		cout << "\nIntroduzca el dni de tu alumno: ";
		cin >> a.dni;
		cout << "Introduzca su edad: ";
		cin >> a.edad;
		cout << "Introduzca su nota: ";
		cin >> a.nota;

		alumnos[utiles] = a;
		utiles++;

		cout << "\nAlumno insertado correctamente!" << endl;
	}
	
	pulsaParaContinuar();
}

void eliminarAlumno(Alumno alumnos[], int &utiles){

	if(utiles == 0){
		cout << "\nLo siento, la base de datos de alumnos esta vacia, no se pueden eliminar alumnos." << endl;
	}else{
		int pos_alumno = 0;

		pos_alumno = devuelvePosicionAlumno(alumnos, utiles);

		if(pos_alumno != -1){
			if(utiles > 1){
				alumnos[pos_alumno].dni = alumnos[utiles - 1].dni;
				alumnos[pos_alumno].edad = alumnos[utiles - 1].edad;
				alumnos[pos_alumno].nota = alumnos[utiles - 1].nota;
			}

			alumnos[utiles - 1].dni = 0;
			alumnos[utiles - 1].edad = 0;
			alumnos[utiles - 1].nota = 0;

			utiles--;

		cout << "\nAlumno eliminado correctamente!" << endl;

		}else{
			alumnoNoEncontrado();
		}
	}
	pulsaParaContinuar();
}

void modificarAlumno(Alumno alumnos[], int utiles){

	int pos_alumno = 0;

	pos_alumno = devuelvePosicionAlumno(alumnos, utiles);

	if(pos_alumno != -1){
		cout << "\nIntroduzca el nuevo dni de tu alumno: ";
		cin >> alumnos[pos_alumno].dni;
		cout << "Introduzca su nueva edad: ";
		cin >> alumnos[pos_alumno].edad;
		cout << "Introduzca su nueva nota: ";
		cin >> alumnos[pos_alumno].nota;

		cout << "\nAlumno modificado correctamente!" << endl;

	}else{
		alumnoNoEncontrado();
	}
	pulsaParaContinuar();
}

void imprimeAlumnos(Alumno alumnos[], int utiles){

	if(utiles == 0){
		cout << "\nActualmente no hay alumnos en la base de datos: " << endl;
	}else{
		for(int i = 0; i < utiles; i++){
			cout << "\nAlumno " << i + 1 << endl;
			cout << "Dni: " << alumnos[i].dni << endl;
			cout << "Edad: " << alumnos[i].edad << endl;
			cout << "Edad: " << alumnos[i].nota << endl;
		}
	}

	pulsaParaContinuar();
}

void imprimeUnAlumno(Alumno alumnos[], int utiles){

	int pos_alumno = 0;

	if(utiles == 0){
		cout << "\nActualmente no hay alumnos en la base de datos" << endl;
	}else{
		pos_alumno = devuelvePosicionAlumno(alumnos, utiles);
		if(pos_alumno != -1){
			cout << "\nAlumno " << pos_alumno + 1 << endl;
			cout << "Dni: " << alumnos[pos_alumno].dni << endl;
			cout << "Edad: " << alumnos[pos_alumno].edad << endl;
			cout << "Edad: " << alumnos[pos_alumno].nota << endl;
		}else{
			alumnoNoEncontrado();
		}
	}

	pulsaParaContinuar();
}

int devuelvePosicionAlumno(Alumno alumnos[], int utiles){

	int dni_alumno = 0;
	int posicion = -1;

	cout << "Tenemos " << utiles << " alumnos en la base de datos" << endl;
	cout << "Dime su dni y te lo buscare: ";
	cin >> dni_alumno; 

	for(int i = 0; i < utiles; i++){
		if(alumnos[i]. dni == dni_alumno){
			posicion = i;
		}
	}

	return posicion;
}

void pulsaParaContinuar(){

	string intro;

	cout << "\nPulsa una tecla para continuar.." << endl;
	cin >> intro;
	
}

void alumnoNoEncontrado(){
	cout << "Alumno no encontrado" << endl;
}