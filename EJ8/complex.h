#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct 
{
    float real;
	float im;
} Complex;

void imprimir(Complex c);

Complex suma(Complex c1, Complex c2);

void restarMal(Complex c1, Complex c2); 

void restar(Complex *c1, Complex *c2);

void imprimir2(Complex c);

Complex sumMalloc(Complex c1, Complex *c2);



#endif