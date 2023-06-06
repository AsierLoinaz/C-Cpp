#ifndef POLIGONO_H
#define POLIGONO_H
#include "Figura.h"
#include "Punto.h"

class Poligono : public Figura{

protected:
    int numVertices;
    Punto* vertices;

public:
    Poligono(char* nombre, int nVertices, Punto* vertices);
    Poligono(const Poligono& pol);
    virtual ~Poligono();

    virtual float getPerimetro();
    virtual void imprimir();
};


#endif