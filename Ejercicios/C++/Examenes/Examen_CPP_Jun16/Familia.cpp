#include <iostream>
#include "Familia.h"
#include <string.h>

using namespace std;


Familia::Familia(){
    this->conyugeH = new Miembro();
    this->conyugeM = new Miembro();
}



Familia::Familia(Miembro* conyugeH, Miembro* conyugeM){

    this->conyugeH = conyugeH;
    this->conyugeM = conyugeM;

}


Familia::Familia(const Familia& familia){

    this->conyugeH = familia.conyugeH;
    this->conyugeM = familia.conyugeM;

}

Familia::~Familia(){

}


Miembro* Familia::getConyugeH() const{
    return this->conyugeH;
}

Miembro* Familia::getConyugeM() const{
    return this->conyugeM;
}

void Familia::setConyugeH(Miembro* conyugeH){
    this->conyugeH = conyugeH;
}
void Familia::setConyugeM(Miembro* conyugeM){
    this->conyugeM = conyugeM;
}

char* Familia::getNombre() const{
    if (this->conyugeH == NULL | this->conyugeM == NULL){
        return NULL;
    }

    char* apellidoH = strchr(this->conyugeH->getNombre(),' ');
    char* apellidoM = strchr(this->conyugeM->getNombre(),' ');

    int largo = strlen(apellidoH+1) + strlen(apellidoM+1) + 4; // +4 para espacio - espacio \0

    char* nombre = new char[largo];
    strcpy(nombre, apellidoH+1);
    strcat(nombre, " - ");
    strcat(nombre, apellidoM+1);
    return nombre;
}
void Familia::imprimir() const{

    cout << "---" << endl;
    cout << "FAMILIA: " << this->getNombre() << endl;
    cout << "Marido: " << this->conyugeM->toStr() << endl;
    cout << "Mujer: " << this->conyugeH->toStr() << endl;
    cout << "---" << endl;


}