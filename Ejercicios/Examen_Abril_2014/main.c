/*
 * main.c
 *
 *  Created on: 22/04/2014
 *      Author: perallos
 */

#include "punto.h"
#include "poligono.h"
#include <stdio.h>
#include <stdlib.h>



int main(void) // Extra
{
	// Punto p1 = {1,2};
	// Punto p2 = {3, 4};	
	// printf("Valores inciales\n"); 
	// imprimirPunto(p1);
	// imprimirPunto(p2);
	// printf("Distancia antes de trasladar\n"); 
	// float dist = distancia(p1, p2);

	// printf("Distancia = %.2f\n", dist); 

	// printf("Distancia despues de trasladar\n"); 
	// trasladarXY(&p1, &p2, 5, 6);
	// dist = distancia(p1, p2);
	// printf("Distancia = %.2f\n", dist); 

	// printf("Valores despues de trasladar\n"); 
	// imprimirPunto(p1);
	// imprimirPunto(p2);

	// float perim = perimetro(polig);
	// printf("%.3f\n", perim);

	Punto v0 = {1, 2};
	Punto v1 = {3,4};
	Punto v2 = {5,6};
	Punto v3 = {7, 8};
	Punto v4 = {3, 19};
	Punto v5 = {1, 1};

	int nVertices = 4;
	Punto* vertices = malloc(nVertices * sizeof(Punto));
	vertices[0] = v0; vertices[1] = v1; vertices[2] = v2; vertices[3] = v3;
	Poligono polig = {nVertices, vertices};

	int nVertices2 = 5;
	Punto* vertices2 = malloc(nVertices2 * sizeof(Punto));
	vertices2[0] = v0; vertices2[1] = v1; vertices2[2] = v2; vertices2[3] = v3; vertices2[4] = v4; 
	Poligono polig2 = {nVertices2, vertices2};

	// printf("Polig1\n"); 
	// imprimirPoligono(polig);
	// printf("Polig2\n"); 
	// imprimirPoligono(polig2);
	// printf("Polig1 despues de copiar en el polig2\n"); 
	// copiarPoligono(&polig, polig2);



	// imprimirPoligono(polig);



//	printf("Polig2\n");
//	imprimirPoligono(polig2); 
	anadirVertice(&polig2, v5);
//	printf("Polig2 tras anadir v5\n");
//	imprimirPoligono(polig2); 


 
	
	return 0;
}
