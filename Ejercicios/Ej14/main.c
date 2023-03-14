#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PARAM_CONFIG "-configFile"

int main(int argc, char const *argv[])
{
    printf("Numero de argumentos extra: %i\n", argc-1); // * El primer elemento de argv es siempre el nombre del .exe

    if (argc == 1){
        printf("No has introducido ningun argumento extra\n"); 
    }
    else{
    printf("Los argumentos son:\n");
    for (int i = 1; i < argc; i++){
        printf("%s\n", argv[i]); 
    }}  

    // Comparar el primer argumento con la constante CONFIG_FILE
    if (strcmp(argv[1], PARAM_CONFIG) == 0){
        printf("Fichero de configuracion establecido\n"); 
    }

    return 0;
}
