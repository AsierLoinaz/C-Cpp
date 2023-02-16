// Realizar un programa que pida al usuario letras hasta que se introduzca la
// letra 'q' y haga echo de ellas

#include <stdio.h>
#include <stdbool.h>
#include "caracteres.h"



void leerLetra();

int main(){
    
    printf("%s\n", isUpperCase('b') ? "true" : "false"); 
    printf("%s\n", isLowerCase('b') ? "true" : "false"); 
    printf("%s\n", isLetter('b') ? "true" : "false"); 
    
    printf("%c", toLowerCase('B'));

    return 0;
}



void leerLetra(){
    
    char letra;

    do
    {
        letra = getchar();
        if (letra != '\n'){
            printf("El char es: %c, en ASCII: %i\n", letra, letra);
            char mayus = letra-32;
            printf("En mayusqulas es: %c\n", mayus);
        }
    } while (letra != 'q');
    
}



