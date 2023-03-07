#ifndef _FUNCIONES_H
#define _FUCIONES_H

/// @brief Imprime un array de caaracteres elemeto a elemento
/// @param st puntero a chars
void printCharArray(char *st);


/// @brief Obtiene la length de un array de chars
/// @param st puntero a chars
/// @return lenght del array
int getLength(char *st);

/// @brief clonar un array en otro
/// @param st array a clonar
/// @param sd array donde se clona
char* cloneArray(char* st);

/// @brief concatenar un array con otro
/// @param st primer array
/// @param sd segundo array
void concatenar(char* st, char* sd);

/// @brief Copiar una cadena de caracteres en otra
/// @param destino
/// @param origen
void copiar(char* destino, char* origen);

#endif