#include "Figura.h"
#include <iostream>
#include <string.h>
using namespace std;

int Figura::nFiguras = 0;

Figura::Figura(char* nombre){
    this->nombre = new char[strlen(nombre) + 1];
    strcpy(this->nombre, nombre);
    nFiguras++;
}


Figura::Figura(const Figura& f){
    int largoNombre = strlen(f.getNombre() + 1);
    this->nombre = new char[largoNombre];
    strcpy(this->nombre, f.nombre);
    nFiguras++;
}

Figura::~Figura(){
    delete[] this->nombre;
    nFiguras--;
}

char* Figura::getNombre()const{
    return this->nombre;
}


/// @brief Imprime el nombre de la figura
void Figura::imprimir()const{
    cout << "NOMBRE: " << this->nombre << endl;
}

int Figura::getNumFiguras(){ return nFiguras; }
