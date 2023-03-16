#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    float x;
    float y;
} Point;



int main(){
    
    Point p1 = {4, 2};
    Point p2 = {2.2, 3};
    Point p3 = {5, 0.2};

    Point puntos[] = {p1, p2, p3};

    const int arrSize = sizeof(puntos) / sizeof(puntos[0]); // Sacamos el numero de elementos del array

    FILE* fichero = fopen("binario.bin", "wb"); 

    fputc(arrSize, fichero); // * Escribimos en la primera linea el size del array
    fwrite(puntos, sizeof(Point), arrSize, fichero); // Escribir el array

    fclose(fichero);


    return 0;
}