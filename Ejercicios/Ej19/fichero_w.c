#include <stdio.h>
#include <stdlib.h>

#define N 9
#define modoLectura "w"

int main(){
    
    FILE* fichero = fopen("numeros.txt", modoLectura);
    printf("Escribiendo %i numeros\n", N+1); 
    for (int i = 0; i < N; i++){

// !    fputc mete el caracter ascii, fprintf permite definir el formato

       // fputc(i + 48, fichero); 
       // fputc('\n', fichero);
       
        fprintf(fichero, "%i\n", i);

    }

    fclose(fichero);
    return 0;
}