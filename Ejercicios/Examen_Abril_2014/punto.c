/*
 * Punto.c
 *
 *  Created on: 22/04/2014
 *      Author: perallos
 */

#include "punto.h"
#include <stdio.h>
#include <math.h>


void imprimirPunto(Punto p)
{
	printf("(%i, %i)\n", p.x, p.y);
}
/// @brief Calcula la distancia entre dos puntos
/// @param p1 
/// @param p2 
/// @return 
float distancia(Punto p1, Punto p2){
	float coordX = (p2.x-p1.x)*(p2.x-p1.x);
	float coordY = (p2.y-p1.y)*(p2.y-p1.y);
	return (sqrt(coordX+coordY));
}

/// @brief realiza un desplazamiento relativo de ambos puntos (p1, p2), incrementando las coordenadas X e Y de ambos en las unidades contenidas en el tercer y cuarto argumento (x, y).
/// @param p1 
/// @param p2 
/// @param x 
/// @param y 
void trasladarXY(Punto* p1, Punto* p2, int x, int y){
	p1->x += x;
	p2->x += x;
	p1->y += y;
	p2->y += y;
}