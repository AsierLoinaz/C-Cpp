#include "Point3D.h"

int main()
{
	Point3D p1;
	cout << "Introduce el punto p1:" << endl;
	cin >> p1;

	Point3D p2;
	cout << "Introduce el punto p2:" << endl;
	cin >> p2;

	cout << p1 << " + " << p2 << " = " << p1 + p2 << endl;

	p1 += p2;

	float f;
	cout << "Introduce un numero: ";
	cin >> f;

	cout << p1 << " * " << f << " = " << p1 * f << endl;

	cout << p1 << " * " << p2 << " = " << p1 * p2 << endl;

	return 0;
}
