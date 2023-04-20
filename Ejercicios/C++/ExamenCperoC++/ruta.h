#ifndef RUTA_H
#define RUTA_H

namespace estructuras{

    class Punto
    {
    private:
        char* nombre;
        int x;
        int y;
        Punto* siguiente;
        /* data */
    public:
        Punto();
        Punto(char* nombre, int x, int y);
        Punto(char* nombre, int x, int y, Punto sig);
        ~Punto();
        float distancia(Punto p2);
        char* getNombre();
        int getX();
        int getY();
        Punto* getSiguiente();
        void setSigiente(Punto p);

    
    };
    


    class Ruta
    {
    private:
        int id;
        Punto* inicial;
        Punto* Final;
    public:
        Ruta();
        Ruta(int id, Punto inicial, Punto Final);
        ~Ruta();
        int getId();
        void setId();
        Punto* getInicial();
        void setInicial();
        Punto* getFinal();
        void setFinal(Punto p);
        void anyadirPunto(Punto p);
    };
    


}


#endif
