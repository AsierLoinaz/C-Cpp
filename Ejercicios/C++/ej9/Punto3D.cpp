#include "Punto.h"
#include "Punto3D.h"
#include <iostream>

using namespace std;

Punto3D::Punto3D(float x, float y, float z) : Point(x, y){
    this->z = z;
}

Punto3D::Punto3D(const Punto3D& p3d) : Point(p3d){
    this->z = p3d.z;

}

void Punto3D::print()const{
    Point::print();
    cout << "\b, " << this->z;
}

Punto3D::~Punto3D(){}

Punto3D Punto3D::operator*(const Punto3D& p){
    return Punto3D(this->x * p.x, this->y * p.y, this->z * p.z);
}
Punto3D& Punto3D::operator*(int escalar){
    this->x *= escalar;
    this->y *= escalar;
    this->z *= escalar;

    return *this;
}


Punto3D& Punto3D::operator+=(const Punto3D& p){
    this->x += p.x;
    this->y += p.y;
    this->z += p.z;

    return *this;
}


istream& operator>>(istream& in,  Punto3D& p){
    cout << "X" << endl;
    in >> p.x;
    cout << "Y" << endl;
    in >> p.y;
    cout << "Z" << endl;
    in >> p.z;
    return in;
}
ostream& operator<<(ostream& out, const Punto3D& p){
    out << "Y: " << p.y << endl;
    out << "X: " << p.x << endl;
    out << "Z: " << p.z << endl;
    return out;
}
    