#ifndef CONHIJOS_H
#define CONHIJOS_H

#include "Familia.h"
#include "Miembro.h"

class ConHijos : public Familia{

private:
    int nHijos;
    Miembro** hijos; // array a punteros a miembro


public:

    ConHijos();
    ConHijos(const ConHijos& famConHijos);
    ConHijos(Miembro* conyugeH, Miembro* conyugeM);
    // ConHijos(int nHijos, Miembro** hijos);
    virtual ~ConHijos();
    
    void setHijo(Miembro* hijo, int pos);
    Miembro* getHijo(int pos) const;

    void setNumHijos(int numHijos);
    int getNumHijos() const;

    Miembro** getHijos() const;

    virtual void imprimir() const;
    virtual int contarMenores(int edad)const;


};


#endif