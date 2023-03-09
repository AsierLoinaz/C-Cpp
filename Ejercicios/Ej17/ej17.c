#include <stdio.h>
#include <stdlib.h>


#define X 4
#define Y 5


void printMatrix1(int a[X][Y]);
void printMatrix2(int* b[X]);
void printMatrix3(int** c);

int main(){
    // * EJ 17a
    int a[X][Y];    // Full estatica

    for (int i = 0; i < X; i++){
        for (int j = 0; j < Y; j++){
            a[i][j] = rand();
        }
    }
    printf("Parte a\n"); 
    printMatrix1(a);
    printf("\n"); 

    
    // * Ej 17b

    int* b[X];
    for (int i = 0; i < X; i++){
        b[i] = malloc(Y * sizeof(int));
       
    }

    for (int i = 0; i < X; i++){
        for (int j = 0; j < Y; j++){
            b[i][j] = rand();
        }
    }

    printf("Parte b\n"); 
    printMatrix2(b);
    printf("\n"); 

// * Liberar b
    for (int i = 0; i < X; i++){
        free(b[i]);
    }
   
    printf("\n"); 

// * Ej 17c
    int** c = (int **)malloc(X * sizeof(int*));

    for (int i = 0; i < X; i++){
        c[i] = (int*)malloc(Y * sizeof(int));
    }

    for (int i = 0; i < X; i++){
        for (int j = 0; j < Y; j++){
            c[i][j] = rand();
            
        }
    }
    printf("Parte c\n"); 
    printMatrix3(c);

    for (int i = 0; i < X; i++){
        free(c[i]);
    }
    free(c);

    return 0;
}

/// @brief Imprime una matriz en memoria estatica
/// @param a como a[X][Y]
void printMatrix1(int a[X][Y]){

    int linea = 0;

    for (int i = 0; i < X; i++){
        printf("\n");
        for (int j = 0; j < Y; j++){
            
            printf("[%i]", a[i][j]);

        }
    }
}

/// @brief Imprime matriz en memoria dinamica y estatica
/// @param b como int* b[X]
void printMatrix2(int* b[X]){


    int linea = 0;

    for (int i = 0; i < X; i++){
        printf("\n"); 
        for (int j = 0; j < Y; j++){
            
            printf("[%i]", b[i][j]);

        }
    }
    


}

/// @brief Imprime matriz en memoria dinamica
/// @param c  como int**
void printMatrix3(int** c){
    

    for (int i = 0; i < X; i++){
        printf("\n");
        for (int j = 0; j < Y; j++){
            
            printf("[%i]", c[i][j]);

        }
    }
}