#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>

class Figura{

private:
    static int nFiguras;

protected:
    char* nombre;

public:
    Figura(char* nombre);
    Figura(const Figura& f);

    virtual ~Figura();
    char* getNombre()const;
    virtual float getPerimetro() = 0;
    virtual void imprimir()const;
    static int getNumFiguras();
};



#endif