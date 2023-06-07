#ifndef CREADOR_H
#define CREADOR_H
#include "Persona.h"
#include "Video.h"

class Creador : public Persona{

private:
    Video* videosPublicados;
    int nVideosPublicados;

public:
    Creador(char* nickName, int edad);
    // Creador(const Creador& c);
    virtual ~Creador();

    int getNumVideos();
    Video* getVideosPublicados();

    void publicarVideo(const Video& v);
    virtual void imprimirInfo();



};


#endif