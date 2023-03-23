#include <stdio.h>
#include <stdlib.h>
#include "carrito.h"

/// @brief Modifica la compra, asignandole la cantidad pasada por parametro
/// @param Compra puntero a la compra para modificar
/// @param cantidad 
void modificarCompra(Compra* c, int cantidad){

    (*c).cantidad = cantidad;
}

void imprimirCompra(Compra c){
    Producto p = c.p;
    
    // imprimirProducto(p);
    // printf("\b\b x %i kg/ud", c.cantidad); 

    printf("Ref.%i  %s \t %.2f x %i kg/ud\n", p. ref, p.nombre, p.precio, c.cantidad);
}

/// @brief Crea un carrito a partir de los parametros
/// @param c Puntero a Carrito vacio 
/// @param prods Array de productos
/// @param cants Array de cantidades
/// @param size de los arrays de productos y cantidades
void crearCarrito(Carrito* c, Producto prods[], int cants[], int size){
    float importe = 0;
    /*
    Compras es un array dinamico. Por cada producto, una compra.
    Asignamos a c.compras memoria para el numero de compras (productos) que se van a hacer
    */

    c->compras = (Compra*) malloc(size * sizeof(Compra)); 

    for (int i = 0; i < size; i++){
        importe += prods[i].precio * cants[i];
        Compra comp = {prods[i], cants[i]}; // Crear iterativamente una nueva compra
        c->compras[i] = comp; // incluir esa compra al carrito


    }

    c->importe = importe;

}
/// @brief Imprime el ticker del carrito
/// @param Carrito
/// @param size numero de compras que tiene el carrito
void imprimirTicket(Carrito c, int size){

    printf("TICKET\n"); 
    printf("------\n"); 

    for (int i = 0; i < size; i++)
    {
        imprimirCompra(c.compras[i]); 
    }
    printf("....................................\n"); 
    printf("TOTAL: %.2f euros\n", c.importe); 

}

/// @brief Libera la memoria de las compras del carrito
/// @param Carrito puntero al carrito
/// @param size numero de compras
void devolverCarrito(Carrito* c, int size){

    free(c->compras); // TODO no se si esta bien

}

void modificarCarrito(Carrito* c, int ref, int cant, int size){

    for (int i = 0; i < size; i++){
        if (c->compras[i].p.ref == ref){
            Compra* compModificar = &c->compras[i];

            // Restar el precio actual
           c->importe -= compModificar->cantidad * compModificar->p.precio;
            modificarCompra(compModificar, cant);
            c->compras[i] = *compModificar;
            // Sumar el nuevo precio
           c->importe += compModificar->cantidad * compModificar->p.precio;
        }
    }
    
}