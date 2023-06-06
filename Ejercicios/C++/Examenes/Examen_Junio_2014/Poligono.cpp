#include "Figura.h"
#include "Punto.h"
#include "Poligono.h"
#include <iostream>
#include <string.h>

using namespace std;

Poligono::Poligono(char* nombre, int nVertices, Punto* vertices) : Figura(nombre){
    this->numVertices = nVertices;
    this->vertices = new Punto[nVertices];
    for (int i = 0; i < nVertices; i++){
        this->vertices[i] = vertices[i];
    }
}

Poligono::Poligono(const Poligono& pol) : Figura(pol){
    this->numVertices = pol.numVertices;
    this->vertices = new Punto[numVertices];

    for (int i = 0; i < this->numVertices; i++){
        this->vertices[i] = pol.vertices[i];
    }

}
Poligono::~Poligono(){
    delete[] this->vertices;
}

float Poligono::getPerimetro(){
    float perimetro = 0;
    perimetro += this->vertices[0].distancia(this->vertices[numVertices - 1]); // Distancia del primero y el ultimo

    for (int i = 1; i < this->numVertices; i++){
        perimetro += this->vertices[i].distancia(this->vertices[i - 1]);
    }

    return perimetro;
}

void Poligono::imprimir(){
    Figura::imprimir();
    for (int i = 0; i < this->numVertices; i++){
        cout << "Vertice " << i << "= ";
        this->vertices[i].imprimir(); 
    }
}