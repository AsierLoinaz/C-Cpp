#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int id;
    float nota;
} Asignatura;

/// @brief Muestra el menu y recoge el caracter
/// @return respuesta del usuario (char)
char MostrarMenu(){

    char input[10];

    char menu[] = "1. Introducir asignatura\n"
    "2. Mostrar listado\n"
    "3. Calcular media\n"
    "Pulsar q para salir"; 

    printf("%s", menu);
    fgets(input, 10, stdin);
    return(*input);
}

Asignatura introducir();

void mostrarLista();

void calcularMedia();


int main(){

    Asignatura asignaturas[5];

    char input = MostrarMenu(); // Input del usuario

    switch (input)
    {
    case '1':
        introducir();
        break;
    case '2':
        mostrarLista();
        break;
    case '3':
        calcularMedia();
        break;
    case 'q':
        break;
    default:
        printf("Opcion no valida.\n");
        input = MostrarMenu();
        break;
    }

    

    return 0;
}

