#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	float notaPracticas = 0;
	float notaParcial = 0;
	float notaExamen = 0;
	float notaAlumno = 0;

	cout << "Hola, te voy a pedir tus difentes notas durante el curso para calcularte la nota final" << endl;

	cout << "Empecemos por tu nota de practicas: ";
	cin >> notaPracticas;

	cout << "Ahora tu nota del parcia: ";
	cin >> notaParcial;

	cout << "Y por ultimo tu nota del examen: ";
	cin >> notaExamen;

	notaAlumno = ((notaPracticas * 0.25) + (notaParcial * 0.25) + (notaExamen * 0.5));
	
	if(notaAlumno > 10 || notaAlumno < 0){
		cout << "Tu nota de " << notaAlumno << " no es posible, la proxima vez, introduzca datos correctos" << endl;
	}else if(notaAlumno < 5){
		cout << "Tu nota es de " << notaAlumno << ", habra que mejorar la proxima vez..." << endl;
	}else if(notaAlumno >= 5 && notaAlumno < 7){
		cout << "Tu nota es de " << notaAlumno << ", no esta mal, pero puedes hacer mas" << endl;
	}else if(notaAlumno >= 7 && notaAlumno <= 10){
		cout << "Tu nota es de " << notaAlumno << ", muy buena nota! sigue asi" << endl;
	}

    system("pause");
}

