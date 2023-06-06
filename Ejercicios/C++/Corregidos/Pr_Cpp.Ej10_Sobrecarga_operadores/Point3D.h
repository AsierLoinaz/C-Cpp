#include <iostream>
using namespace std;

class Point3D
{
	float x, y, z;
	
public:
	Point3D() {}

	Point3D(float x, float y , float z);

	Point3D operator+(const Point3D& p) const;

	Point3D& operator+=(const Point3D& p);

	Point3D operator*(float i) const;

	float operator*(const Point3D& p) const;

	float getX() const { return x; }
	float getY() const { return y; }
	float getZ() const { return z; }

	friend istream& operator>>(istream& in, Point3D& p);
};

ostream& operator<<(ostream& out, const Point3D& p);
