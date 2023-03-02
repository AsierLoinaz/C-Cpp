#include "operaciones.h"

float suma(float a, float b){
    return a + b;
}

float resta(float a, float b){
    return a - b;
}

int mult(int a, int b){

    int result = 0;
    int i = 0;

    for (i = 0; i < b; i++){
        result += a;
    }

    return result;    
}

int pot(int a, int b){
    int result = 1;
    int i = 0;

    for (i = 0; i < b; i++){
        result = mult(result, a);
    }
    return result;
    
}