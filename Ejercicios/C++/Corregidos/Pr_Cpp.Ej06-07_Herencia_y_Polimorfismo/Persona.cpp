#include "Persona.h"
#include <string.h>

#include <iostream>
using namespace std;

Persona::Persona(const char *nombre, int edad)
{
	cout << "Constructor Persona" << endl;
	this->nombre = new char[strlen(nombre) + 1];
	strcpy(this->nombre, nombre);
	this->edad = edad;
}

Persona::Persona(const Persona& p)
{
	cout << "Constructor Copia Persona" << endl;
	this->nombre = new char[strlen(p.nombre) + 1];
	strcpy(this->nombre, p.nombre);
	this->edad = p.edad;
}

Persona::~Persona()
{
	cout << "Destructor Persona" << endl;
	delete[] nombre;
}

const char* Persona::getNombre()
{
	return this->nombre;
}

int Persona::getEdad()
{
	return this->edad;
}

void Persona::diHola()
{
	cout << "Hola, Persona" << endl;
}

void Persona::diAdios()
{
	cout << "Adios, Persona" << endl;
}
