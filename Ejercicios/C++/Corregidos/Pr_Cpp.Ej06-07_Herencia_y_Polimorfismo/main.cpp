#include "Alumno.h"

#include <iostream>
using namespace std;

void printNotas(Alumno &a)
{
	for (int i = 0; i < a.getNumAsignaturas(); i++)
	{
		cout << a.getNota(i) << endl;
	}
}

void printPersonaRef(Persona &p)
{
	cout << "Nombre: " << p.getNombre() << endl;
	cout << "Edad: " << p.getEdad() << endl;
}

void printPersona(Persona p)
{
	cout << "Nombre: " << p.getNombre() << endl;
	cout << "Edad: " << p.getEdad() << endl;
}

int main()
{
	Persona *p1 = new Persona("Juanito", 15);
	Alumno *a = new Alumno("Pepito", 16, 5);
	a->setNota(0, 8.0f);
	a->setNota(1, 5.0f);
	a->setNota(2, 6.0f);
	a->setNota(3, 7.0f);
	a->setNota(4, 9.0f);

	Persona *p2 = a;

	printPersonaRef(*p2); //pasamos una referencia a una persona
	printNotas(*(Alumno*)p2); // pasamos una referencia a un alumno

	printPersona(*a); //Solo copia la parte de persona

	cout << "Llamada a metodo polimorfico" << endl;
	p2->diHola();

	cout << "Llamada a metodo NO polimorfico" << endl;
	p2->diAdios();

	delete p1;
	delete p2; // El destructor es polimorfico y se llama de forma correcta empezando por Alumno
	return 0;
}



