#include "Point.h"

Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

void Point::setX(float x)
{
	this->x = x;
}

void Point::setY(float y)
{
	this->y = y;
}

float Point::getX() const
{
	//this->x = 8; //no podemos modificar el objeto (ni llamar a un método no-const sobre el) porque el método es const
	return x;
}

float Point::getY() const
{
	return y;
}

void Point::sumar(const Point &p)
{
	this->x += p.x;
	this->y += p.y;
	//p.x += p.x; // si por error hacemos esto el compilador nos avisa
}

