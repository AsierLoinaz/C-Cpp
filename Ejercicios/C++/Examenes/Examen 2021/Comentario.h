#ifndef COMENTARIO_H
#define COMENTARIO_H

class Comentario{

private:
    char* nombre_video;
    char* texto;

public:
    Comentario();
    Comentario(char* nombre_video, char* texto);
    Comentario(const Comentario& c);
    ~Comentario();

    char* getNombreVideo()const;
    char* getComentario()const;

    void* setNombreVideo(const char* nombre_video);
    void* setComentario(const char* texto);

    void imprimir()const;
};

#endif