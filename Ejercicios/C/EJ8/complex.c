#include "complex.h"

#include <stdio.h>

void imprimir(Complex c){
    printf("(%.2f, %.2f)\n", c.real, c.im); 
}

Complex suma(Complex c1, Complex c2){
    Complex c3 = {c1.real + c2.real, c1.im + c2.im};
    return c3;
}

void restarMal(Complex c1, Complex c2){
    c1.real -= c2.real;
    c1.im -= c2.im;
} 

void restar(Complex *c1, Complex *c2){
    c1->real -= c2->real;
    c1->im -= c2->im;
}

void imprimir2(Complex c){
    if (c.im > 0){
        printf("%.2f + %.2fi\n", c.real, c.im); 
    } else if (c.im < 0){
                printf("%.2f - %.2fi\n", c.real, c.im); 
    } else{
        printf("%.2f\n", c.real); 
    }
}

Complex sumMalloc(Complex c1, Complex *c2){
    Complex nuevo = {c1.real + (*c2).real, c1.im + (*c2).im};
    return nuevo;
}