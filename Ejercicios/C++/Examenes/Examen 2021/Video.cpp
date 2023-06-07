#include "Video.h"
#include <iostream>
#include <string.h>

using namespace std;

Video::Video(){
    this->duracion = 0;
    this->likes = 0;
    this->nombre = NULL;
}

Video::Video(char* nombre, int duracion){
    this->duracion = duracion;
    this->likes = 0;
    this->nombre = new char[strlen(nombre) + 1];
    strcpy(this->nombre, nombre);
}


Video::Video(const Video& v){
    this->duracion = v.duracion;
    this->likes = v.likes;
    this->nombre = new char[strlen(v.nombre) + 1];
    strcpy(this->nombre, v.nombre);
}

Video::~Video(){ delete[] this->nombre; }

char* Video::getNombre()const { return this->nombre; }
int Video::getLikes()const { return this->likes; }
int Video::getDuracion()const { return this->duracion; }

void Video::setNombre(char* nombre) { strcpy(this->nombre, nombre); }
void Video::setLikes(int likes) { this->likes = likes; }
void Video::setDuracion(int duracion) { this->duracion = duracion; }

void Video::meGusta() { this->likes++; }

void Video::imprimirInfo()const{
    cout << "Nombre: " << this->nombre << endl;
    cout << "Duracion: " << this->duracion << " seg" << endl;
    cout << "Likes: " << this->likes << endl;

}