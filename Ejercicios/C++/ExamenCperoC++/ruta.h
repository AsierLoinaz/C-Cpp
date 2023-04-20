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
        void setX(int x);
        int getY();
        void setY(int y);
        Punto* getSiguiente();
        void setSiguiente(Punto p);

    
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
        void setId(int id);
        Punto* getInicial();
        void setInicial(Punto p);
        Punto* getFinal();
        void setFinal(Punto p);
        void anyadirPunto(Punto p);
    };
    


}


#endif
