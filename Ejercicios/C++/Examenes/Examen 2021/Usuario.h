#ifndef USUARIO_H
#define USUARIO_H
#include "Comentario.h"
#include "Persona.h"

class Usuario : public Persona{

private:
    Comentario* comentarios;
    int numComentarios;

public:
    Usuario(char* nickName, int edad);
    Usuario(const Usuario& u);
    ~Usuario();

    int getNumComentarios()const;
    Comentario* getComentarios()const;

    void publicarComentario(const Comentario& c);
    virtual void imprimirInfo();

};


#endif