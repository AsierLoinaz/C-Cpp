#include "Miembro.h"
#include "Familia.h"
#include "ConHijos.h"
#include "ArbolFamilias.h"

#include <iostream>
using namespace std;

int main()
{
	Miembro luis("Luis Diez", 60 /*a�os*/);
	Miembro marta("Marta Sanchez", 58);
	Miembro angel("Angel Diez", 32);
	Miembro laura("Laura Ponte", 30);
	Miembro hodei("Hodei Diez", 2);
	Miembro ana("Ana Diez", 7);
	Miembro pablo("Pablo Diez", 10);
	Miembro jon("Jon Pena", 40);
	Miembro maite("Maite Pazos", 35);

	// cout<< luis.toStr() << " os desea suerte en el examen." << endl;
	Familia f1 = Familia(&jon, &maite);

	f1.imprimir();
	
	cout << endl;
	cout << endl;

	ConHijos c1 = ConHijos(&angel, &laura);
	c1.setNumHijos(3);
	c1.setHijo(&hodei, 0);
	c1.setHijo(&ana, 1);
	c1.setHijo(&pablo, 2);
	// cout << f1.getNombre() << endl;
	c1.imprimir();



	



	return 0;
}
