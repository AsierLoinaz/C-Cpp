
// Ejercicios 4-6. Crear la struct numero complejo, sacarlos por pantalla, suma, modulo y su size en bytes

#include <stdio.h>
#include <math.h>

typedef struct 
{
	float real;
	float im;
} Complex;


void printComplex(Complex c);
Complex sumComplex(Complex c1, Complex c2);
float module(Complex c);

int main(){

	Complex c1 ={4, -2};
	Complex c2 = {5, 2};
	Complex c3 = sumComplex(c1, c2);

	printComplex(c1);
	printComplex(c2);
	printComplex(c3);

	printf("%.2f\n", module(c3));
	printf("Size del complejo: %i, Size del float de su parte real: %i", sizeof(c3), sizeof(c3.real));
	return 0;
}




void printComplex(Complex c){
	printf("(%.1f, %.1f)\n", c.real, c.im); 
}

Complex sumComplex(Complex c1, Complex c2){
	Complex c = {c1.real + c2.real, c1.im + c2.im};
	return c;
}

float module(Complex c){
	return (sqrt(c.real * c.real + c.im * c.im));
}