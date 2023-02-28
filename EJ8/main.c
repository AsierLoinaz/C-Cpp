// EJ 8-9

#include <stdio.h>
#include "complex.h"
#include <stdlib.h>

int main(){
	Complex c1 = {1, 2};
	Complex c2 = {4, 1};
	Complex c3 = suma(c1, c2);

	imprimir(c1);
	imprimir(c2);
	printf("Se va a sumar c1 + c2\n"); 
	imprimir(c3);

	printf("Se va a restar mal c1 - c2\n"); 
	restarMal(c1, c2);
	imprimir(c1);

	printf("Se va a restar bien c3 - c1\n"); 
	restar(&c3, &c1);
	imprimir(c3);

	printf("c3 escrito de otra manera es:\t"); 
	imprimir2(c3);

	// Ejercicio 10
	Complex* c4 = (Complex*) malloc(sizeof(Complex));

	(*c4).real = 1;
	(*c4).im = 1;

	Complex c5 = sumMalloc(c1, c4);
	imprimir(c5);

	restar(&c5, c4);

	imprimir(c5);

	free(c4);
	c4 = NULL;

	return 0;
}


