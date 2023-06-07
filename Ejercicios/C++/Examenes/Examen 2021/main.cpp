#include <iostream>
#include "Persona.h"
#include "Comentario.h"
#include "Usuario.h"
#include "Creador.h"
#include "Video.h"


/* Descomentar una vez creadas las clases creador y usuario
#include "Creador.h"
#include "Usuario.h"
*/


using namespace std;


int main()
{
    //Descomentar una vez creadas las clases creador y usuario
    Creador* c1 = new Creador("Pablo", 46);
    Creador c2("Inaki", 38);


    Usuario* u1 = new Usuario("Alberto", 25);
    
    Video v1 = Video("Presentacion de la facultad de ingenieria", 600);
    Video v2 = Video("Presentacion DeustoTech", 400);
    Video v3 = Video("Gala de Investidura", 6000);
    Video v4 = Video("Presentacion de ForoTech", 200);


    c1->publicarVideo(v1);
    c1->publicarVideo(v2);
    c1->publicarVideo(v4);

    c2.publicarVideo(v3);


    Comentario com1 = Comentario("Presentacion de la facultad de ingenieria", "La presentacion esta realmente bien");
    Comentario com2 = Comentario("Presentacion DeustoTech", "Estaria mejor si la hicieran en ingles");

    // com1.imprimir();

    u1->publicarComentario(com1);
    u1->publicarComentario(com2);

    // u1->getComentarios()[0].imprimir();

    Persona* personas[3] = {c1, &c2, u1};

    // u1->getComentarios()[0].imprimir();


    for (int i = 0; i < 3; i++){
        personas[i]->imprimirInfo();
    }

    cout << "Suerte en el examen!" << endl << endl;


    return 0;
}
