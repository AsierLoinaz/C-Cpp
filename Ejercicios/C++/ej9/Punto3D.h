#ifndef PUNTO3D_H
#define PUNTO3D_H
#include "Punto.h"
#include <iostream>

class Punto3D : public Point{

protected:
    float z;
public:
    Punto3D(float x, float y, float z);
    Punto3D(const Punto3D& p3d);
    virtual ~Punto3D();
    virtual void print()const;
    Punto3D operator*(const Punto3D& p);
    Punto3D& operator*(int escalar);
    Punto3D& operator+=(const Punto3D& p);


   friend istream& operator>>(istream& in,  Punto3D& p);
   friend ostream& operator<<(ostream& out, const Punto3D& p);
    
    
};

#endif