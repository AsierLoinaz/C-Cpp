#ifndef POLIGONO_H_
#define POLIGONO_H_

#include "punto.h"

typedef struct 
{
   int numVertices;
   Punto* vertices;
}Poligono;

void imprimirPoligono(Poligono poli);
float perimetro(Poligono poli);
void liberar(Poligono* poli);
void anadirVertice(Poligono* poli, Punto v);
void copiarPoligono(Poligono* poli1, Poligono poli2);
#endif