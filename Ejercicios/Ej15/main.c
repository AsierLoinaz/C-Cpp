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
    char respuesta;

    char menu[] = "1. Introducir asignatura\n"
    "2. Mostrar listado\n"
    "3. Calcular media\n"
    "Pulsar q para salir\n"; 

    printf("%s", menu);
    fgets(input, 10, stdin);
    sscanf(input, "%s", &respuesta);
    return(respuesta);
}

void introducir(Asignatura asignaturas[], int size){
    char inputId[5];
    char inputNota[5];

    int id;
    float nota;

    printf("Introduce el id de la asignatura:\n"); 
    fgets(inputId, 5, stdin);
    sscanf(inputId, "%d", &id);

    printf("\nIntroduce la nota de la asignatura:\n");
    fgets(inputNota, 5, stdin);
    sscanf(inputNota, "%.2f", &nota);

    Asignatura a = {id, nota}; 

    asignaturas[size + 1] = a;


}
/// @brief Imprime la lista de las asignaturas
/// @param asignaturas 
/// @param size del array 
void mostrarLista(Asignatura asignaturas[], int size){
    printf("Mostrando lista de asignaturas...\n"); 
    for (int i = 0; i < size; i++){
        printf("Id: %i, Nota: %f\n", asignaturas[i].id, asignaturas[i].nota); 
    }
}

void calcularMedia();


int main(){

    Asignatura asignaturas[5];
    int numAsignaturas = 0;

    char input = MostrarMenu(); // Input del usuario


    switch (input)
    {
    case '1':
        if (numAsignaturas > 5){
            printf("No se pueden introducir mas asignaturas, ya hay 5.\n"); 
        } else{
        introducir(&asignaturas, numAsignaturas);}
        break;
    case '2':
        mostrarLista(asignaturas, numAsignaturas);
        break;
    case '3':
       // calcularMedia();
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

