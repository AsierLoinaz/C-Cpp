#include "Punto.h"
#include <iostream>
using namespace std;

Punto::Punto() {
	this->x=0;
	this->y=0;
}

Punto::Punto(int x, int y) {
	this->x=x;
	this->y=y;
}

Punto::~Punto() {
}

int Punto::getX() {
	return x;
}

int Punto::getY() {
	return y;
}

void Punto::setX(int x) {
	this->x = x;
}

void Punto::setY(int y) {
	this->y = y;
}


void Punto::visualizar()
{
	cout << " x=" << x;
	cout << " y=" << y;
}
