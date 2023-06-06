#include "Point3D.h"

Point3D::Point3D(float x, float y, float z): x(x), y(y), z(z) {};

Point3D Point3D::operator+(const Point3D& p) const
{
	Point3D result(this->x + p.x, this->y + p.y, this->z + p.z);
	return result;
}

Point3D& Point3D::operator+=(const Point3D& p)
{
	this->x += p.x;
	this->y += p.y;
	this->z += p.z;
	return *this;
}

Point3D Point3D::operator*(float i) const
{
	Point3D result(this->x * i, this->y * i, this->z * i);
	return result;
}

float Point3D::operator*(const Point3D& p) const
{
	return this->x * p.x + this->y * p.y + this->z * p.z;
}

istream& operator>>(istream& in, Point3D& p)
{
	cout << "X: ";
	cin >> p.x;
	cout << "Y: ";
	cin >> p.y;
	cout << "Z: ";
	cin >> p.z;
	return in;
}

ostream& operator<<(ostream& out, const Point3D& p)
{
	out << "(" << p.getX() << ", " << p.getY() << ", " << p.getZ() << ")";
	return out;
}
