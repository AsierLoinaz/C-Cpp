#include "persona.h"
#include <iostream>


int main(){
    float notas[] = {10, 2, 7};
    Alumno* a = new Alumno(20, "Juan", 3, notas);
    a->diHola();
    return 0;
}