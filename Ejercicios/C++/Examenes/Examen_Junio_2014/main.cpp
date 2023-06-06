#include "Punto.h"
#include "Figura.h"
#include "Circulo.h"
#include "Poligono.h"

using namespace std;

void imprimirDetalleFigura(Figura &f)
{
	cout << "-----" << endl;
	f.imprimir();
	cout << "Perimetro: " << f.getPerimetro() << endl;

}

float sumarPerimetros(Figura * figuras[], int numFiguras)
{
	float perim = 0;
	for (int i = 0; i < numFiguras; i++){
		perim += figuras[i]->getPerimetro();
	}

	return perim;
}

int main(void)
{
	Circulo c1("Circulo1", Punto(1,2), 3);
	Circulo *c2 = new Circulo("Circulo2", Punto(2,1), 4);

	Punto vertices[] = {Punto(1,1), Punto(1,2), Punto(2,1)};
	Poligono *p1 = new Poligono("Triangulo", 3, vertices);

	// TAREA 4.1: Imprimir por pantalla el numero de figuras creadas
	cout << "Hay " << Figura::getNumFiguras() << " figuras creadas" << endl;

	// TAREA 4.2: Imprime el detalle de cada una de las figuras existentes
   imprimirDetalleFigura(c1);
   imprimirDetalleFigura(*c2);
   imprimirDetalleFigura(*p1);

	Figura* figuras[] = {&c1, c2, p1};

	// TAREA 4.3: Imprimir por pantalla la suma de los perimetros de las 3 figuras
	cout << "SUMA PERIMETROS = " << sumarPerimetros(figuras, Figura::getNumFiguras());

	return 0;
}
