#include <stdio.h>
#include <stdlib.h>
#include "censo.h"
#include <string.h>

/// @brief Calcula cuantas personas son menores de la edad indicada
/// @param ap array de personas 
/// @param tamanyo del array
/// @param edad con la que comparar
/// @return numero de personas menores que la edad
int cuantasPersonas(Persona* ap, int tamanyo, int edad){

    int menores = 0;
    for (int i = 0; i < tamanyo; i++){
        if (ap[i].edad < edad){
            menores++;
        }
    }
    return menores;
}


/// @brief Busca las personas menores de 30
/// @param ap array de personas
/// @param tamanyo del array
/// @return un GrupoPersonas con las menores a 30
GrupoPersonas recuperarJovenes(Persona* ap, int tamanyo){
    GrupoPersonas gp;
    float media = 0;
    gp.num = cuantasPersonas(ap, tamanyo, 30); // sacar cuantos menores de 30 hay
    gp.personas = (Persona*) malloc(gp.num * sizeof(Persona));
    int contador = 0;
    for (int i = 0; i < tamanyo; i++)
    {
        if (ap[i].edad < 30){
            gp.personas[contador] = ap[i];
            media += ap[i].edad;
            contador++;
        }
    }
    gp.edadMedia = media / gp.num;

    return gp;   
}

/// @brief Busca la persona mas joven del array
/// @param ap array de personas
/// @param tamanyo del array
/// @return Puntero a la persona mas joven
Persona* recuperarYogurin(Persona* ap, int tamanyo){

    Persona* menor = (Persona*) malloc(sizeof(Persona));
    menor = &ap[0];

    for (int i = 0; i < tamanyo; i++)
    {
        if (ap[i].edad < menor->edad){
            menor = &ap[i];
        }
    }

    return menor;
    
}

/// @brief Cuenta el numero de personas cuyo nombre empieza por la letra recibida
/// @param ap array de personas
/// @param tamanyo del array
/// @param letra con la que tiene que coincidir
/// @return 
int cuantosNombres(Persona* ap, int tamanyo, char letra){

    int coinciden = 0;
    for (int i = 0; i < tamanyo; i++){
        if (ap[i].nombre[0] == letra){
            coinciden++;
        }
    }
    return coinciden;
}

/// @brief Listado de nombres que empiezan por una letra
/// @param ap array de personas
/// @param tamanyo del array
/// @param letra por la que empieza el nombre
/// @return array de strings (doble puntero de char)
char** listadoNombres(Persona* ap, int tamanyo, char letra){
    
    char** lista;
    int j = 0;
    int coinciden = cuantosNombres(ap, tamanyo, letra);
    lista = (char**) malloc(sizeof(char*) * coinciden);
    for (int i = 0; i < tamanyo; i++){
        if (ap[i].nombre[0] == letra){
            lista[j] = (char*) malloc(sizeof(char));
            strcpy(lista[j], ap[i].nombre);
            j++;
        }
    }
    return lista;


}