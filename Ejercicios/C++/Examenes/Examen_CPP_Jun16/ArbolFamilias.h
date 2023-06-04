#ifndef ARBOLFAMILIAS_H
#define ARBOLFAMILIAS_H
#define MAX_FAMILIAS 5

#include "Familia.h"
#include "ConHijos.h"
#include "Miembro.h"


class ArbolFamilia{
    protected:
        int nFamilias;
        Familia* familia[MAX_FAMILIAS];


    public:
        ArbolFamilia();
        ArbolFamilia(const ArbolFamilia& arbol);
        ~ArbolFamilia();

        void anadirFamilia(Familia* f);
        void imprimir()const;
        int contarMenoresEdad(int edad)const;
        Miembro** getConyugesInicial(int& nMiembros, char inicial);
};


#endif