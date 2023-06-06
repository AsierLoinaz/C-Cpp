#include "Punto.h"
#include "Punto3D.h"
#include <iostream>
using namespace std;

Punto3D::Punto3D(): Punto() {
	this->z=0;
}

Punto3D::Punto3D(int x, int y, int z): Punto(x,y) {
	this->z=z;
}

Punto3D::~Punto3D() {
}

int Punto3D::getZ()
{
	return z;
}

void Punto3D::setZ(int z)
{
	this->z=z;
}

void Punto3D::visualizar()
{
	Punto::visualizar();
	cout << " z=" << z;
}

Punto3D Punto3D::operator*(Punto3D& p)
{
	Punto3D r(this->getX()*p.getX(), this->getY()*p.getY(), this->getZ()*p.getZ());
	return r;
}

Punto3D& Punto3D::operator*(int n)
{
	this->setX(this->getX()*n);
	this->setY(this->getY()*n);
	this->setZ(this->getZ()*n);

	return *this;
}
