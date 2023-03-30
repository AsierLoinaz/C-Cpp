#include <stdio.h>
#include <stdlib.h>
#include "censo.h"
#include "persona.h"
//#define EDAD_MIN 18

void crearInforme(GrupoPersonas gp, char* fichero);




int main(int argc, char const *argv[])
{
	int EDAD_MIN = 15;
	Persona personas[5];
	personas[0].nombre="Hodei"; personas[0].edad=6;
	personas[1].nombre="Anita"; personas[1].edad=41;
	personas[2].nombre="Aitor"; personas[2].edad=12;
	personas[3].nombre="Idoia"; personas[3].edad=31;
	personas[4].nombre="Maite"; personas[4].edad=24;

	imprimirPersona(personas[0]);
//	sscanf(argv[1], "%i", &EDAD_MIN);
	printf("Hay %i personas menores de %i urte\n", cuantasPersonas(personas, 5, EDAD_MIN), EDAD_MIN); 


	printf("Grupo de personas menores de 30:\n"); 

	GrupoPersonas menores30 = recuperarJovenes(personas, 5);
	for (int i = 0; i < menores30.num; i++){
		imprimirPersona(menores30.personas[i]);
	}
	printf("Media: %.2f\n", menores30.edadMedia); 

	printf("La persona mas joven es:\n");
	imprimirPersona(*recuperarYogurin(personas, 5));

	crearInforme(menores30, "censo.txt");

	printf("Cuantos empiezan por A: %i\n", cuantosNombres(personas, 5, 'A')); 
	printf("Personas que empieza por A:\n");
	char** lista = listadoNombres(personas, 5, 'A');
	int coinciden = cuantosNombres(personas, 5, 'A');
	for (int i = 0; i < coinciden; i++){
		printf("%s\n", lista[i]);  
	} 
	return 0;
}



/// @brief Escribe en un fichero los datos de un grupo de personas
/// @param gp grupo de personas cuyos datos queremos escribir
/// @param fichero ruta del fichero
void crearInforme(GrupoPersonas gp, char* fichero){

	FILE* file = fopen(fichero, "w");
	fprintf(file, "CENSO DE JOVENES\n"); fprintf(file, "----------------\n");

	for (int i = 0; i < gp.num; i++){
		fprintf(file, "[Nombre: %s, Edad: %i]\n", gp.personas[i].nombre, gp.personas[i].edad);
	}
	fprintf(file, "Media: %.2f", gp.edadMedia);
	fclose(file);
}