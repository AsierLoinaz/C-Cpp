#include "ConHijos.h"
#include "Familia.h"
#include "Miembro.h"
#include <iostream>
#include <string.h>

using namespace std;

ConHijos::ConHijos() : Familia(){
    this->nHijos = 0;
    this->hijos = new Miembro*[0];
}


ConHijos::ConHijos(const ConHijos& famConHijos) : Familia(famConHijos){
    this->nHijos = famConHijos.nHijos;
    this->hijos = new Miembro*[nHijos];

    for (int i = 0; i < nHijos; i++){
        this->hijos[i] = famConHijos.hijos[i];
    }
}
ConHijos::ConHijos(Miembro* conyugeH, Miembro* conyugeM) : Familia(conyugeH, conyugeM){
    this->nHijos = 0;
    this->hijos = new Miembro*[nHijos];
}

// ConHijos::ConHijos(int nHijos, Miembro** hijos){

// }
ConHijos::~ConHijos(){
    delete[] this->hijos;
}
    
void ConHijos::setHijo(Miembro* hijo, int pos){
    this->hijos[pos] = hijo;
}

Miembro* ConHijos::getHijo(int pos) const{
    return this->hijos[pos];
}

void ConHijos::setNumHijos(int numHijos){
    this->nHijos = numHijos;
    this->hijos = new Miembro*[numHijos];
}

int ConHijos::getNumHijos() const{
    return this->nHijos;
}

Miembro** ConHijos::getHijos() const{
    return this->hijos;
}

void ConHijos::imprimir() const{
    Familia::imprimir();
    cout << endl;

    cout << "HIJOS" << endl;
    for (int i = 0; i < this->nHijos; i++){
        cout << "Hijo " << i+1 << ": " << this->hijos[i]->toStr() << endl;
    }
    cout << "---" << endl;
}