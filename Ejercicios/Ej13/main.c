#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(){
    

    char c[] = "Hola mundo";

    char c2[] = "ey";

    int length = getLength(c);
    printf("Funcion length: %i\n", length); 

    printf("Funcion print\n"); 
    printCharArray(c);
    printf("\n"); 
    printCharArray(c2);

   char* cloned = cloneArray(c);
   printf("\nFuncion clonar\n"); 
   printCharArray(cloned);
    

    free(cloned);

    char* str = (char*) malloc((getLength(c) + getLength(c2) + 1) * sizeof(char));
   
    copiar(str, c);
    printf("\nFuncion copiar\n%s", str); 
    concatenar(str, c2);
    printf("\nFuncion concat\n%s", str); 

    free(str);

    return 0;
}