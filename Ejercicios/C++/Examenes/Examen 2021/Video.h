#ifndef VIDEO_H
#define VIDEO_H

class Video{

private: 
    char* nombre;
    int duracion;
    int likes;

public:
    Video();
    Video(char* nombre, int duracion);
    Video(const Video& v);
    ~Video();

    char* getNombre()const;
    int getLikes()const;
    int getDuracion()const;

    void setNombre(char* nombre);
    void setLikes(int likes);
    void setDuracion(int duracion);

    void meGusta();
    void imprimirInfo()const;
};


#endif