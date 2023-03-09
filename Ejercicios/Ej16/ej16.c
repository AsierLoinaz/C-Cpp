#include <stdio.h>
#include <stdlib.h>


typedef struct 
{
    int x;
    int y;
} Point;



int main(){
    // array de 5 x 4 x 3
    const int X = 5;
    const int Y = 4;
    const int Z = 3;
    
    Point*** PointsArr = (Point***) malloc(X * sizeof(Point**)); // Primero malloc para la dimension X. Puntero de 3 dimensiones
    for (int i = 0; i < X; i++){ // Recorremos toda la X
        PointsArr[i] = (Point**) malloc(Y * sizeof(Point*)); // Por cada i (X), malloc para la dimension Y. Puntero de 2 dimensiones
        for (int j = 0; j < Y; j++){ // Recorremos toda la Y
            PointsArr[i][j] = (Point*) malloc(Z * sizeof(Point)); // Por cada [i][j], malloc para la dimension Z. Ahora es solo un puntero
        }
    }


    PointsArr[2][3][1] = (Point) {3, 4};

    printf("El punto almacenado en memoria estatica es (%d, %d)\n", PointsArr[2][3][1].x, PointsArr[2][3][1].y);

   for (int i = 0; i < X; i++){
        for (int j = 0; j < Y; j++){
            free(PointsArr[i][j]); // Recorremos uno a uno y liberamos
        }
        free(PointsArr[i]); // liberamos toda la X
   }
   free(PointsArr); // liberamos el ultimo

    return 0;
}