#ifndef CENSO_H
#define CENSO_H
#include "persona.h"


typedef struct
{
    int num;
    Persona* personas;
    float edadMedia;

}GrupoPersonas;

int cuantasPersonas(Persona* ap, int tamanyo, int edad);
GrupoPersonas recuperarJovenes(Persona* ap, int tamanyo);
Persona* recuperarYogurin(Persona* ap, int tamanyo);
int cuantosNombres(Persona* ap, int tamanyo, char letra);
char** listadoNombres(Persona* ap, int tamanyo, char letra);
#endif