#include "funciones.h"
#include <stdlib.h>
#include <stdio.h>

/// @brief Imprime un array de caaracteres elemeto a elemento
/// @param st puntero a chars
void printCharArray(char *st){
    
    char c;
    for (int i = 0; i < getLength(st); i++)
    {
        c = st[i];
        printf("%c ", c); 
    }
    
    
}


/// @brief Obtiene la length de un array de chars
/// @param st puntero a chars
/// @return length del array. 
/// @note no incluye el \0
int getLength(char *st){
    int length = 0;

    while (st[length] != '\0'){
        length++;
    }
    return length;
}

/// @brief clonar un array en otro
/// @param st array a clonar
/// @return el array 
char* cloneArray(char* st){

    int length = getLength(st);
    // ! Si lo defininimos en memoria estática, al salir de la función se pierder la variable
    // char newString[length+1];

    // * Usar memoria dinámica
 //  * funciona no se por que


    char* newString = (char*) malloc((length + 1) * sizeof(char));

    int i = 0;

    while (st[i] != '\0')
    {
        newString[i] = st[i];
        i++;
    }

    newString[i] = '\0';
    return newString;
    

}

/// @brief concatenar un array con otro
/// @param st primer array
/// @param sd segundo array
void concatenar(char* st, char* sd){

    while (*st != '\0') // recorrer todo st
    {
        st++;
    }

    copiar(st, sd);   

}

/// @brief Copiar una cadena de caracteres en otra
/// @param destino
/// @param origen
void copiar(char* destino, char* origen){

    int i = 0;

    while (origen[i] != '\0')
    {
        destino[i] = origen[i];
        i++;
    }

    destino[i] = '\0';
}