#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

struct Alumno{
	string nombre;
	string apellido1;
	string apellido2;
	string dni;
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
//Prototipo de funciones para ficheros
bool guarda(string ruta_fichero, Alumno v[], int util_a);
int lee(string ruta_fichero, Alumno v[], int util_a);
//Prototipos de funciones complementarias
int devuelvePosicionAlumno(Alumno alumnos[], int utiles);
void pulsaParaContinuar();
void alumnoNoEncontrado();
bool compruebaDni(string dni);

int main(int argc, char **argv){

	Alumno alumnos[100];
	int util_alumno = 0;
	int opcion = 0;

	

	if(argc != 2){	
		cout << "Especifica el nombre del fichero" << endl;
	}else{

		util_alumno = lee(argv[1], alumnos, util_alumno) -1;
		cout << "Util alumno vale: " << util_alumno << endl;

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
	}

	guarda(argv[1], alumnos, util_alumno);

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

		cout << "\nIntroduzca el nombre de tu alumno: ";
		cin >> a.nombre;
		cout << "\nIntroduzca el primer apellido de tu alumno: ";
		cin >> a.apellido1;
		cout << "\nIntroduzca el segundo apellido de tu alumno: ";
		cin >> a.apellido2;

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
				alumnos[pos_alumno].nombre = alumnos[utiles - 1].nombre;
				alumnos[pos_alumno].apellido1 = alumnos[utiles - 1].apellido1;
				alumnos[pos_alumno].apellido2 = alumnos[utiles - 1].apellido2;
				alumnos[pos_alumno].dni = alumnos[utiles - 1].dni;
				alumnos[pos_alumno].edad = alumnos[utiles - 1].edad;
				alumnos[pos_alumno].nota = alumnos[utiles - 1].nota;
			}

			alumnos[utiles - 1].nombre = "";
			alumnos[utiles - 1].apellido1 = "";
			alumnos[utiles - 1].apellido2 = "";
			alumnos[utiles - 1].dni = "";
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
		cout << "\nIntroduzca el nuevo nombre de tu alumno: ";
		cin >> alumnos[pos_alumno].nombre;
		cout << "\nIntroduzca el primer apellido de tu alumno: ";
		cin >> alumnos[pos_alumno].apellido1;
		cout << "\nIntroduzca el segundo apellido de tu alumno: ";
		cin >> alumnos[pos_alumno].apellido2;
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
			cout << "Nombre: " << alumnos[i].nombre << endl;
			cout << "Primer Apellido: " << alumnos[i].apellido1 << endl;
			cout << "Segundo Apellido: " << alumnos[i].apellido2 << endl;
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
			cout << "Nombre: " << alumnos[pos_alumno].nombre << endl;
			cout << "Primer Apellido: " << alumnos[pos_alumno].apellido1 << endl;
			cout << "Segundo Apellido: " << alumnos[pos_alumno].apellido2 << endl;
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

	string dni_alumno;
	int posicion = -1;
	bool correcto = false;

	cout << "Tenemos " << utiles << " alumnos en la base de datos" << endl;
	
	do{
		cout << "Dime su dni y te lo buscare: ";
		cin >> dni_alumno; 
		if(compruebaDni(dni_alumno) == true){
			correcto == true;
		}
	}while(correcto == false);

	for(int i = 0; i < utiles; i++){
		if(alumnos[i]. dni == dni_alumno){
			posicion = i;
		}
	}

	return posicion;
}

bool compruebaDni(string dni){

	char vector_letras[24] = {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B' , 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'};
	bool correcto = false;
	int numeroCompleto = 0;
	int posicion = 0;
	string numeroDNI;
	char letra;

	for(int i = 0; i < 8; i++){
		numeroDNI[i] = dni[i];
	}

	numeroCompleto = stoi(numeroDNI);

	posicion = numeroCompleto % 23;

	if(vector_letras[posicion] == dni[8]){
		correcto = true;
	}else if(tolower(vector_letras[posicion]) == dni[8]){
		correcto = true;
	}

	return correcto;
}

bool guarda(string ruta_fichero, Alumno v[], int util_a){

	bool correcto = true;

	if(util_a != 0){
		ofstream fs;
		fs.open(ruta_fichero);
		for(int i = 0; i < util_a; i++){
			fs << v[i].nombre << endl;
			fs << v[i].apellido1 << endl;
			fs << v[i].apellido2 << endl;
			fs << v[i].dni << endl;
			fs << v[i].edad << endl;
			fs << v[i].nota << endl;
		}
		fs.close();
	}
	

	return correcto;
}
int lee(string ruta_fichero, Alumno v[], int util_a){

	ifstream is;
	is.open(ruta_fichero);
	int num_alum = 0;
	//if(!is.eof()){
		while(!is.eof()){
			Alumno a;
			is >> a.nombre;
			cout << "El nombre es: " << a.nombre << endl;
			is >> a.apellido1;
			cout << "El apellido es: " << a.apellido1 << endl;
			is >> a.apellido2;
			cout << "El apellido2 es: " << a.apellido2 << endl;
			is >> a.dni;
			cout << "El dni es: " << a.dni << endl;
			is >> a.edad;
			cout << "El edad es: " << a.edad << endl;
			is >> a.nota;
			cout << "El nota es: " << a.nota << endl;
			v[num_alum] = a;
			num_alum++;
		}
	//}
	is.close();

	return num_alum;
}

void pulsaParaContinuar(){

	string intro;

	cout << "\nPulsa una tecla para continuar.." << endl;
	cin >> intro;
	
}

void alumnoNoEncontrado(){
	cout << "Alumno no encontrado" << endl;
}