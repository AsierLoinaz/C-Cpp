#include "Punto.h"
#include "Punto3D.h"
#include <iostream>
using namespace std;


int main(void)
{
	Punto *array[5];

	Punto p(1,2);
	array[0]=&p;

	array[0] = new Punto(1,2);
	array[1] = new Punto3D(1,2,3);
	array[2] = new Punto(4,5);
	array[3] = new Punto3D(4,5,6);
	array[4] = new Punto(7,8);
	for(int i=0;i<5; i++)
	{
		array[i]->visualizar();
		cout << endl;
	}

	Punto3D p3da(1,2,3);
	Punto3D p3db(4,5,6);

	Punto3D p3dr = p3da * p3db;
	cout << endl;
	p3dr.visualizar();
	cout << endl;

	p3dr*2*3;
	p3dr.visualizar();
	cout << endl;

	for(int i=0;i<5; i++)
	{
		delete array[i];
	}

	return 0;
}
