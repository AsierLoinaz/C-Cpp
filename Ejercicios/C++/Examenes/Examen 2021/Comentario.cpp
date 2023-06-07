#include "Comentario.h"
#include <iostream>
#include <string.h>

using namespace std;

Comentario::Comentario(){
    this->texto = NULL;
    this->nombre_video = NULL;
}

Comentario::Comentario(char* nombre_video, char* texto){
    this->nombre_video = new char[strlen(nombre_video) + 1];
    this->texto = new char[strlen(texto) + 1];
    strcpy(this->nombre_video, nombre_video);
    strcpy(this->texto, texto);
}
Comentario::Comentario(const Comentario& c){
    this->nombre_video = new char[strlen(c.nombre_video) + 1];
    this->texto = new char[strlen(c.texto) + 1];
    strcpy(this->nombre_video, c.nombre_video);
    strcpy(this->texto, c.texto);

}
Comentario::~Comentario(){
    delete[] this->nombre_video;
    delete[] this->texto;
}

char* Comentario::getNombreVideo()const { return this->nombre_video; }
char* Comentario::getComentario()const { return this->texto; }

void* Comentario::setNombreVideo(const char* nombre_video){
    strcpy(this->nombre_video, nombre_video);
}
void* Comentario::setComentario(const char* texto){
    strcpy(this->texto, texto);
}

void Comentario::imprimir()const{
    cout << "Video comentado: " << this->nombre_video << endl;
    cout << "Texto : " << this->texto << endl;
}