#ifndef CIRCULO_H
#define CIRCULO_H
#include "Figura.h"
#include "Punto.h"


class Circulo : public Figura{

protected:
    float radio;
    Punto centro;

public:
    Circulo(char* nombre, Punto centro, float radio);
    Circulo(const Circulo& cir);
    virtual ~Circulo();

    virtual float getPerimetro();
    virtual void imprimir();

};

#endif