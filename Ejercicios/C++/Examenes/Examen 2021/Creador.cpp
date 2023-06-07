#include "Creador.h"
#include "Persona.h"
#include "Video.h"
#include <iostream>
#include <string.h>

#define MAX_VIDEOS 5
using namespace std;

Creador::Creador(char* nickName, int edad) : Persona(nickName, edad) {
    this->videosPublicados = new Video[MAX_VIDEOS];
    this->nVideosPublicados = 0;
}

Creador::~Creador(){
    delete[] this->videosPublicados;
}

int Creador::getNumVideos() { return this->nVideosPublicados; }
Video* Creador::getVideosPublicados() { return this->videosPublicados; }

void Creador::publicarVideo(const Video& v){
    if (this->nVideosPublicados >= MAX_VIDEOS){
        cout << "Error: El creador " << this->nickName << "no puede publicar mas videos" << endl;
        return; 
    }

    this->videosPublicados[this->nVideosPublicados] = v;
    this->nVideosPublicados++;
}
void Creador::imprimirInfo(){
    cout << "Creador: " << this->nickName << endl;
    cout << "Edad: " << this->edad << endl;
    cout << "Videos publicados:" << endl;
    cout << "=================" << endl;
    for (int i = 0; i < this->nVideosPublicados; i++){
        this->videosPublicados[i].imprimirInfo();
    }
}