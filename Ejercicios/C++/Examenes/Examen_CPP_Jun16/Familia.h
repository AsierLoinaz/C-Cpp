#ifndef FAMILIA_H
#define FAMILIA_H

#include "Miembro.h"

class Familia{

protected:
    Miembro* conyugeH;
    Miembro* conyugeM;

public:

    Familia(); // Constructor vacio
    Familia(Miembro* conyugeH, Miembro* conyugeM);
    Familia(const Familia& familia);
    virtual ~Familia(); // por herencia
    

    Miembro* getConyugeH() const;
    Miembro* getConyugeM() const;

    void setConyugeH(Miembro* conyugeH);
    void setConyugeM(Miembro* conyugeM);

    char* getNombre() const;
    virtual void imprimir() const ;


};


#endif
