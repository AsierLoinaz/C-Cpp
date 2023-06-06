#include "Figura.h"
#include "Punto.h"
#include "Circulo.h"
#include <iostream>
#include <string.h>

#define PI 3.1416
using namespace std;

Circulo::Circulo(char* nombre, Punto centro, float radio) : Figura(nombre){
    this->radio = radio;
    this->centro = centro;
}

Circulo::Circulo(const Circulo& cir) : Figura(cir){
    this->centro = cir.centro;
    this->radio = cir.radio;
}

Circulo::~Circulo(){}

float Circulo::getPerimetro(){
    return (2 * this->radio * PI);
}

void Circulo::imprimir(){
    Figura::imprimir();
    cout << "Centro: "; 
    this->centro.imprimir();
    cout << "Radio: " << this->radio << endl;
}
