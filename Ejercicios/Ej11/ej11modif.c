#include <stdio.h>
#include <stdlib.h>



typedef struct 
{
    int x;
    int y;
} Point;

void escalar(int a[], Point* p[], int size);
void printPoints(Point* p[], int size);

int main(){

    int a[] = {1, 2, 4};

    Point p1 = {1, 2};
    Point p2 = {3, 4};
    Point p3 = {2, 2};

    Point **p = (Point**) malloc(3 * sizeof(Point*)); // ! Ahora es un array de punteros a point

    // * Ahora hay que hacer un malloc por cada elemento del array de punteros y asignar los valores

    p[0] = (Point*) malloc(sizeof(Point));
    p[0]->x = 1; // Así accedemos a los valores x e y
    p[0]->y = 2;

    p[1] = (Point*) malloc(sizeof(Point));
    p[1]->x = 3;
    p[1]->y = 4;

    p[2] = (Point*) malloc(sizeof(Point));
    p[2]->x = 4;
    p[2]->y = 4;



    printPoints(p, 3);

    escalar(a, p, 3);
    printf("\n"); 

    printPoints(p, 3);

    for (int i = 0; i < 3; i++){ // Hacer free para cada elemento del array de punteros
        free(p[i]);
        p[i] = NULL;
    }

    free(p); p = NULL; // Hacer free del array 


//! Hay que hacer primero el free de cada elemento y luego del array
    return 0;
}

/// @brief Escala los puntos por el valor correspondiente en el array de enteros
/// @param a array de enteros (escalares)
/// @param p array de punteros a puntos
/// @param size de los arrays (el mismo)
void escalar(int a[], Point* p[], int size){
    size = 3;

    for (int i = 0; i < size; i++){
        p[i]->x *= a[i];
        p[i]->y *= a[i];

     //   p++;
    }

}
/// @brief Imprime todos los puntos de un array como (x, y)
/// @param p array de punteros a puntos
/// @param size del array
void printPoints(Point* p[], int size){ 

    for (int i = 0; i < size; i++){    
    printf("(%i, %i)\n", p[i]->x, p[i]->y); }
}