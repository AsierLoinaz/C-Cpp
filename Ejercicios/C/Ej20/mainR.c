#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    float x;
    float y;
} Point;



int main(){

    FILE* fichero = fopen("binario.bin", "rb"); 
    int size = fgetc(fichero);
    
    printf("%i\n", size); 

    Point puntos[size];

    fread(puntos, sizeof(Point), size, fichero);

    for (int i = 0; i < size; i++){
        printf("(%f, %f)\n", puntos[i].x, puntos[i].y); 
    }

    fclose(fichero);


    return 0;
}