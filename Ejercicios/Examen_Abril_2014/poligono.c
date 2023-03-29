#include <stdio.h>
#include <stdlib.h>
#include "poligono.h"

void imprimirPoligono(Poligono poli){
    for (int i = 0; i < poli.numVertices; i++){
        printf("Vertice %i = ", i); imprimirPunto(poli.vertices[i]);
    }
}

float perimetro(Poligono poli){
    float perim;

    for (int i = 1; i < poli.numVertices; i++ ){
        perim += distancia(poli.vertices[i], poli.vertices[i-1]);
    }

    perim += distancia(poli.vertices[0], poli.vertices[poli.numVertices-1]);

    return perim;
}

void liberar(Poligono* poli){
    for (int i = 0; i < poli->numVertices; i++){
        free(poli->vertices);
    }
    free(poli);
}

void anadirVertice(Poligono* poli, Punto v){
    int nVerticesOrig = poli->numVertices;
   
    Punto* temp = (Punto*) malloc((nVerticesOrig+1) * sizeof(Punto));
    for (int i = 0; i < poli->numVertices; i++){
        temp[i] = poli->vertices[i];
    }
  
    temp[nVerticesOrig] = v;
    
    
    
    free(poli->vertices);
    
    poli->numVertices++;
    poli->vertices = (Punto*) malloc(poli->numVertices * sizeof(Punto));
    // int i;
   // imprimirPunto(temp[poli->numVertices]);
    
    for (int j = 0; j < poli->numVertices; j++){
        
        poli->vertices[j] = temp[j];
//        imprimirPunto(poli->vertices[j]);
        free(&temp[j]);
    }
}

/// @brief Se copia en poli1 los datos de poli2
/// @param poli1 (puntero) 
/// @param poli2 
void copiarPoligono(Poligono* poli1, Poligono poli2){

    int nVertices = poli2.numVertices;
    free(poli1->vertices);
    poli1->numVertices = nVertices;
    poli1->vertices = (Punto*) malloc(nVertices * sizeof(Punto));
    for (int i = 0; i < nVertices; i++){
        poli1->vertices[i] = poli2.vertices[i];
    }
}