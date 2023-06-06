#include "Alumno.h"

#include <string.h>

#include <iostream>
using namespace std;

int Alumno::counter = 0;

Alumno::Alumno(const char *nombre)
{
	cout << "Construyendo Alumno" << endl;
	this->id = counter++;

	this->nombre = new char[strlen(nombre) + 1];
	strcpy(this->nombre, nombre);
}

Alumno::Alumno(const Alumno &a)
{
	cout << "Construyendo Alumno mediante copia" << endl;
	this->id = a.id;
	this->nombre = new char[strlen(a.nombre) + 1];
	strcpy(this->nombre, a.nombre);
}

Alumno& Alumno::operator=(const Alumno &a)
{
 	cout << "Construyendo Alumno mediante operator=" << endl;
        this->id = a.id;
        this->nombre = new char[strlen(a.nombre) + 1];
        strcpy(this->nombre, a.nombre);
	return *this;
}

Alumno::~Alumno()
{
	cout << "Destruyendo Alumno" << endl;

	delete[] nombre;
}

int Alumno::getID()
{
	return id;
}

char* Alumno::getNombre()
{
	return nombre;
}
