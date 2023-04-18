#include <stdio.h>
#include <stdlib.h>

#define modoLectura "r"

int main(){
    char c;
    int nlineas = 0;
    FILE* fichero = fopen("numeros.txt", modoLectura);
    
    
    while ((c = fgetc(fichero)) != EOF){ // ! PARENTESIS
        if (c == '\n'){
            nlineas++;
        }

        putchar(c); // Imprime un char en pantalla 
    }

    printf("Hay %i lineas\n", nlineas);
    fclose(fichero);
    return 0;
}