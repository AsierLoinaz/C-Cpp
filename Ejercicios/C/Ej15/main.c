#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ASIGNATURAS 5
#define MAX_LINE 10

typedef struct 
{
    int id;
    char* nombre;
    float nota;
} Asignatura;

/// @brief Muestra el menu y recoge el caracter
/// @return respuesta del usuario (char)
char MostrarMenu(){

    char input[MAX_LINE];


    char menu[] = "1. Introducir asignatura\n"
    "2. Mostrar listado\n"
    "3. Calcular media\n"
    "Pulsar q para salir\n"; 

    printf("%s", menu);
    fgets(input, MAX_LINE, stdin); // * No hace falta sscanf porque ya es un char
    return (*input);
}

void introducir(Asignatura *asig){
    system("cls");
    char str[MAX_LINE];
    int id;
    float nota;

    printf("ID: \t");

//  * fgets(cadena en la que guardar, size, stdin)

    fgets(str, MAX_LINE, stdin);

//  * sscanf(cadena donde estaba la respuesta, formtao y tipo, direccion de la variable destino)
    sscanf(str, "%i", &id); // como es un int, hay que hacer cast con sscanf

    fflush(stdout);

    printf("Nota:\t");
    fgets(str, MAX_LINE, stdin);
    sscanf(str, "%f", &nota); 
    
    asig->id = id;
    asig->nota = nota;

// --------------------------------------------- Modificacion
    
    char* in_nombre = malloc((MAX_LINE) * sizeof(char));

    printf("Nombre:\t");
    fgets(str, MAX_LINE, stdin); // Esto coge el \n
    sscanf(str, "%s", in_nombre); // quita el \n

    int size = strlen(in_nombre);
    asig->nombre = malloc((size + 1) * sizeof(char)); // suma 1 al size para dejar el \0
    strcpy(asig->nombre, in_nombre); // strcyp(destino, origen)
    free(in_nombre);

   fflush(stdout);
   printf("\nSe ha guardado %s correctamente\n\n", asig->nombre); 

}


/// @brief Imprime la lista de las asignaturas
/// @param asignaturas 
/// @param size del array 
void mostrarLista(Asignatura asignaturas[], int size){
    system("cls");
    printf("Mostrando lista de asignaturas...\n"); 
    for (int i = 0; i < size; i++){
        printf("Id: %i, Nombre: %s,  Nota: %.2f\n", asignaturas[i].id, asignaturas[i].nombre, asignaturas[i].nota); 
    }
    printf("\n"); 
}


/// @brief Calcula la media de las asignaturas
/// @param asigs array de asignaturas 
/// @param size del array
/// @returns media
float calcularMedia(Asignatura asigs[], int size){
    system("cls");
    int suma = 0;

    for (int i = 0; i < size; i++)
    {
        suma += asigs[i].nota;
    }

    return ((float) suma / size);
    
}

/// @brief libera la memoria reservada de los nombres de las asignaturas
/// @param asigs array de asignaturas
/// @param size 
void liberarMemoria(Asignatura *asigs, int size){

    for (int i = 0; i < size; i++){
        free(asigs[i].nombre);
    }

}

int main(){

    Asignatura asignaturas[MAX_ASIGNATURAS];
    int numAsignaturas = 0;
    float media;
    char input; // Input del usuario

    do
    {
        input = MostrarMenu();

        switch (input)
        {
        case '1':
            if (numAsignaturas < 5){
                introducir(&asignaturas[numAsignaturas]); // pasar la direccion de la asignatura. 
                numAsignaturas++;
            } else{
                printf("Has llegado al limite de asignaturas (%i)\n\n", MAX_ASIGNATURAS); 
            }
            break;
        case '2':
            mostrarLista(asignaturas, numAsignaturas);
            break;
        case '3':
            media = calcularMedia(asignaturas, numAsignaturas);
            printf("La media es: %.2f\n\n", media); 
            break;
        default:
            break;
        }




    } while (input != 'q');
    
    liberarMemoria(asignaturas, numAsignaturas);

    return 0;
}

