#include "persona.h"
#include <string.h>
#include <iostream>


Persona::Persona(){
    this->edad = 20;
    this->nombre = new char[20];
    strcpy(this->nombre, "Gregory");
}

Persona::Persona(int edad, char* nombre){
    this->edad = edad;
    this->nombre = new char[strlen(nombre) + 1];
    strcpy(this->nombre, nombre);
}

Persona::Persona(const Persona &persona){
    this->edad = persona.edad;
    this->nombre = new char[strlen(persona.nombre) + 1];   
    strcpy(this->nombre, persona.nombre);
}

int Persona::getEdad(){
    return this->edad;
}

char* Persona::getNombre(){
    char* nombre;
    strcpy(nombre, this->nombre);
    return nombre;
}

Persona::~Persona(){
    delete[] this->nombre;
}

void Persona::diHola(){
    std::cout << "Ey, soy una persona" << std::endl;
}


Alumno::Alumno(int numAsignaturas, float* notas){
    this->numAsignaturas = numAsignaturas;
    this->notas = new float[numAsignaturas];
    for (int i = 0; i < this->numAsignaturas; i++){
        this->notas[i] = notas[i];
    }


}

Alumno::Alumno(const Alumno &al) : Persona(al) { // puedo llamar al constructor copia de persona pasandole el alumno 
    this->numAsignaturas = al.numAsignaturas;
        this->notas = new float[al.numAsignaturas];
        for (int i = 0; i < this->numAsignaturas; i++){
            this->notas[i] = al.notas[i];
        }
}


Alumno::Alumno(int edad, char* nombre, int numAsignaturas, float* notas) : Persona(edad, nombre) { //* Equivalente al constructor super

    this->numAsignaturas = numAsignaturas;
        this->notas = new float[numAsignaturas];
        for (int i = 0; i < this->numAsignaturas; i++){
            this->notas[i] = notas[i];
        }
}

Alumno::~Alumno(){
    delete[] this->notas;
}

void Alumno::diHola(){
    std::cout << "Ey, soy un universitario. A este truco lo llamo dejar la cararrera" << std::endl;
}
