#include "ruta.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace estructuras;

/// @brief Constructor de punto.
/// @param nombre
/// @param x 
/// @param y 
/// @param sig 
Punto::Punto(char* nombre, int x, int y, Punto sig){
    this->nombre = new char[strlen(nombre) + 1];
    strcpy(this->nombre, nombre);
    this->x = x;
    this->y = y;
    this->siguiente = new Punto(sig.nombre, sig.x, sig.y);
}


/// @brief Constructor vacio de punto. Por defecto x,y = 0,0
/// y lo demas null
Punto::Punto(){
    this->nombre = NULL;
    this->x = 0;
    this->y = 0;
    this->siguiente = NULL;
}

/// @brief Constructor de punto sin el siguiente Punto
/// @param nombre
/// @param x 
/// @param y 
Punto::Punto(char* nombre, int x, int y){
    this->nombre = new char[strlen(nombre)+1];
    strcpy(this->nombre, nombre);
    this->x = x;
    this->y = y;
    this->siguiente = NULL;
}

Punto::~Punto(){
    delete this->siguiente;
    delete[] this->nombre;
}

float Punto::distancia(Punto p2){
    return sqrt(((p2.x - this->x) * (p2.x - this->x)) + ((p2.y - this->y) * (p2.y - this->y)));
}

char* Punto::getNombre(){ return this->nombre; } 
int Punto::getX(){ return this->x; }
int Punto::getY(){ return this->y; }
Punto* Punto::getSiguiente(){ return this->siguiente; }

void Punto::setSiguiente(Punto p){ 
    Punto* nuevo = new Punto(p.getNombre(), p.getX(), p.getY());
    this->siguiente = nuevo;
 }

void Punto::setX(int x){
    this->x = x;
}
void Punto::setY(int y){
    this->y = y;
}


/// RUTA

Ruta::Ruta(){

}
Ruta::Ruta(int id, Punto inicial, Punto ultimo){
    this->id = id;
    this->inicial = new Punto(inicial.getNombre(), inicial.getX(), inicial.getY(), *inicial.getSiguiente());
    this->Final = new Punto(ultimo.getNombre(), ultimo.getX(), ultimo.getY(), *ultimo.getSiguiente());
}
Ruta::~Ruta(){

// TODO 
/*
    Idea en pseudocodigo con recursividad

        void liberarPuntos(Punto siguiente){
            if (siguiente.siguiente == null){
                delete siguiente;
            } else{
                liberarPuntos(siguiente)
            }
        }
*/
    
}

int Ruta::getId(){ return this->id; }
void Ruta::setId(int id){ this->id = id; }
Punto* Ruta::getInicial(){return this->inicial; }
void Ruta::setInicial(Punto p){}// TODO 
Punto* Ruta::getFinal(){ return this->Final; }
void Ruta::setFinal(Punto p){} // TODO;

/// @brief Añade un nuevo punto a la ruta y lo pone en la ultima posicion
/// @param p 
void Ruta::anyadirPunto(Punto p){

    Punto* nuevo = new Punto(p.getNombre(), p.getX(), p.getY());

    if (this->inicial == NULL){
        this->inicial = nuevo;
    } 
    else {
     this->Final->setSiguiente(*nuevo);
    }

    this->Final = nuevo;
}


