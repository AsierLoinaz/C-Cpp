#include "Point.h"

#include <iostream>
using namespace std;

int main()
{
	Point p1(2, 3);
	Point *p2 = new Point(1,2);

	p1.setX(3); //llamada a metodo no-const sobre objeto no-const
	cout << "El valor de X es: " << p1.getX() << endl; //llamada a metodo const sobre objeto no-const

	p2->sumar(p1);
	cout << "El valor de X es: " << p2->getX() << endl; //llamada a metodo const sobre objeto no-const

	const Point &pConst = p1;

	cout << "El valor de X es: " << pConst.getX() << endl; //llamada a metodo const sobre objeto const
	//pConst.setX(5); //Error. No podemos llamar un metodo no-const sobre un objeto const
}




