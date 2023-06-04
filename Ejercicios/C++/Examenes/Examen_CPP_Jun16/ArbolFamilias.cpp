#include "ArbolFamilias.h"
#include "Miembro.h"
#include "Familia.h"
#include "ConHijos.h"
#include <iostream>
#include <string.h>

using namespace std;

/// @brief Crea un arbol con 0 familias y sin reservar memoria
ArbolFamilia::ArbolFamilia(){

    this->nFamilias = 0;

}
ArbolFamilia::ArbolFamilia(const ArbolFamilia& arbol){
    this->nFamilias = arbol.nFamilias;
    for (int i = 0; i < arbol.nFamilias; i++){
        this->familia[i] = arbol.familia[i];
    }
}


ArbolFamilia::~ArbolFamilia(){} // vacio porque no hacemos ningun new

void ArbolFamilia::anadirFamilia(Familia* f){

    this->familia[this->nFamilias] = f;
    this->nFamilias++;
   

}
void ArbolFamilia::imprimir()const{
    for (int i = 0; i < this->nFamilias; i++){
        this->familia[i]->imprimir();
    }
}

int ArbolFamilia::contarMenoresEdad(int edad)const{
    int menores = 0;
    for (int i = 0; i < this->nFamilias; i++){
        menores += this->familia[i]->contarMenores(edad);
    }
    return menores;
}



/// @brief devuelve el conjunto de cónyuges (miembros) de las distintas familias del árbol 
/// cuya primera letra del nombre coincide con el carácter pasado como segundo parámetro. 
/// Además, el método deja en la variable pasada como primer parámetro el número de miembros 
/// devuelto
/// @param nMiembros variable en la que se va a dejar el numero de miembros devuelto (referencia)
/// @param inicial del nombre de los conyuges
/// @return Array de punteros a miembro en forma de puntero a puntero
Miembro** ArbolFamilia::getConyugesInicial(int& nMiembros, char inicial){


    for (int i = 0; i < this->nFamilias; i++){
        if (this->familia[i] != NULL){
            
            if (this->familia[i]->getConyugeH()->getNombre()[0] == inicial) nMiembros++;
            if (this->familia[i]->getConyugeM()->getNombre()[0] == inicial) nMiembros++;

        }
    }
Miembro** miembros = new Miembro*[nMiembros];
int cuantos = 0;


for (int i = 0; i < this->nFamilias; i++){
        if (this->familia[i] != NULL){
            
            if (this->familia[i]->getConyugeH()->getNombre()[0] == inicial) {
                miembros[cuantos] = this->familia[i]->getConyugeH(); 
                cuantos++;
            }
            if (this->familia[i]->getConyugeM()->getNombre()[0] == inicial) {
                miembros[cuantos] = this->familia[i]->getConyugeM(); 
                cuantos++;
            }
            

        }
    }

return miembros;

}