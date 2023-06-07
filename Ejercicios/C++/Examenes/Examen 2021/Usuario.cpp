#include "Comentario.h"
#include "Persona.h"
#include "Usuario.h"
#include <iostream>
#include <string.h>

using namespace std;


// TODO mirar si hay que cambiarlo
Usuario::Usuario(char* nickName, int edad) : Persona(nickName, edad) {
    this->numComentarios = 0;
    this->comentarios = NULL;
}

// TODO mirar si hay que cambiarlo
Usuario::Usuario(const Usuario& u) : Persona(u){
    this->numComentarios = 0;
    this->comentarios = NULL;
}
Usuario::~Usuario(){
    delete[] this->comentarios;
}

int Usuario::getNumComentarios()const { return this->numComentarios; }
Comentario* Usuario::getComentarios()const { return this->comentarios; }

void Usuario::publicarComentario(const Comentario& c){
    // Si no hay numero limitado de comentarios
    // cada comentario nuevo se añade a un array temporal y luego se copia al de comentarios

    if (this->numComentarios == 0){
        this->comentarios = new Comentario[1];
    } else{
        // Comentario* temp = new Comentario[this->numComentarios + 1];
        // for (int i = 0; i < this->numComentarios; i++){
        //     temp[i] = this->comentarios[i];
        // }
        // temp[numComentarios] = c;
        // // delete[] this->comentarios;
        // this->numComentarios++;
        // this->comentarios = new Comentario[numComentarios];

        // for (int i = 0; i < this->numComentarios; i++){
        //     this->comentarios[i] = temp[i];
        // }


        // delete[] temp;

        Comentario* temp = new Comentario[this->numComentarios];
        for (int i = 0; i < this->numComentarios; i++){
            temp[i] = comentarios[i];
        }
        // delete[] this->comentarios; // ! Borra temp no se porque
        this->comentarios = new Comentario[this->numComentarios + 1];
        for (int i = 0; i < this->numComentarios; i++){
            this->comentarios[i] = temp[i];
        }
       
     
    } 
    this->comentarios[this->numComentarios] = c;
    this->numComentarios++;
    cout << "Comentario se ha publicado" << endl;

}
void Usuario::imprimirInfo(){
    cout << "Usuario: " << this->nickName << endl;
    cout << "Edad: " << this->edad << endl;
    cout << "Comentarios publicados: " << endl;
    cout << "=======================" << endl;

    for (int i = 0; i < this->numComentarios; i++){
        this->comentarios[i].imprimir();
        cout << endl;
    }

    // cout << "Termino" << endl;
}