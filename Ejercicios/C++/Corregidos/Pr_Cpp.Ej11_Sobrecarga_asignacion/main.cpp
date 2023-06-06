#include <iostream>
using namespace std;

#include "Alumno.h"

void printAlumno(Alumno alumno)
{
	cout << "* Alumno" << endl;
	cout << "\t*ID: " << alumno.getID() << endl;
	cout << "\t*Nombre: " << alumno.getNombre() << endl;
}

void printAlumnoRef(Alumno &alumno)
{
	cout << "* Alumno" << endl;
	cout << "\t*ID: " << alumno.getID() << endl;
	cout << "\t*Nombre: " << alumno.getNombre() << endl;
}

void printAlumnoP(Alumno * alumno)
{
	cout << "* Alumno" << endl;
	cout << "\t*ID: " << alumno->getID() << endl;
	cout << "\t*Nombre: " << alumno->getNombre() << endl;
}

int main()
{
	cout << "Variable automatica" << endl;
	Alumno a("Juan");
	cout << endl;
	cout << endl;

	cout << "Llamada a paso por referencia" << endl;
	printAlumnoRef(a); // No se hace una copia. No se llama al constructor copia.
	cout << endl;
	cout << endl;

	cout << "Llamada a paso por valor" << endl;
	printAlumno(a); //Se crea una copia automática. Se llama al constructor copia.
	cout << endl;
	cout << endl;

	cout << "Declaracion y asignacion -> copia. Variable automatica " << endl;
	Alumno b = a; //Se llama al constructor copia
	cout << endl;
	cout << endl;


	///////////////////////////// Uso del operador asignacion //////////////////////

	cout << "Declaración y posterior asignación" << endl;
	Alumno e("Otro alumno");
	e = b;
	cout << endl;
	cout << endl;

	///////////////////////////////////////////////////////////////////////////////

	cout << "LLamada explicita.  Variable automatica " << endl;
	Alumno c(b); //Se llama al constructor copia
	cout << endl;
	cout << endl;

	cout << "Llamada mediando paso de puntero" << endl;
	printAlumnoP(&c); //No se llama al constructor copia porque estamos pasando un puntero (direccion) al objeto
	cout << endl;
	cout << endl;

	cout << "Reserva mediante operador new" << endl;
	Alumno *d = new Alumno(c); //Se llama al constructor copia explicitamente
	cout << endl;
	cout << endl;

	cout << "Llamada mediando paso de puntero" << endl;
	printAlumnoP(d); //Tampoco se llama al constructor copia
	cout << endl;
	cout << endl;

	cout << "Borrado manual del objeto reservado utilizando operador delete" << endl;
	//delete d;

	cout << "Llamada a paso por referencia" << endl;
	printAlumnoRef(a); // No se hace una copia. No se llama al constructor copia.
	cout << endl;
	cout << endl;

	cout << "Eliminacion automatica de las variables no dinamicas" << endl;
	return 0;
}
