#include "Alumno.h"

#include <iostream>
using namespace std;

Alumno::Alumno(const char *nombre, int edad, int numAsignaturas): Persona(nombre, edad)
{
	cout << "Constructor Alumno" << endl;
	this->numAsignaturas = numAsignaturas;
	this->notas = new float[numAsignaturas];
}

Alumno::Alumno(const Alumno &a) : Persona(a)
{
	cout << "Constructor Copia Alumno" << endl;
	this->numAsignaturas = a.numAsignaturas;
	this->notas = new float[a.numAsignaturas];

	for (int i = 0; i < this->numAsignaturas; i++)
	{
		this->notas[i] = a.notas[i];
	}
}

Alumno::~Alumno()
{
	cout << "Destructor Alumno" << endl;
	delete[] notas;
}

void Alumno::setNota(int i, float nota)
{
	this->notas[i] = nota;
}

float Alumno::getNota(int i)
{
	return this->notas[i];
}

int Alumno::getNumAsignaturas()
{
	return this->numAsignaturas;
}


void Alumno::diHola()
{
	cout << "Hola, Alumno" << endl;
}

void Alumno::diAdios()
{
	cout << "Adios, Alumno" << endl;
}

