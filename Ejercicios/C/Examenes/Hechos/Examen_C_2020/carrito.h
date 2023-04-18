#ifndef CARRITO_H
#define CARRITO_H
#include "producto.h"


typedef struct 
{
    Producto p; // ! Solo un producto por compra
    int cantidad;

} Compra;

typedef struct 
{
    Compra* compras;
    float importe;
} Carrito;


void modificarCompra(Compra* c, int cantidad);

void imprimirCompra(Compra c);

void crearCarrito(Carrito* c, Producto prods[], int cants[], int size);

void imprimirTicket(Carrito c, int size);

void devolverCarrito(Carrito* c, int size);

void modificarCarrito(Carrito* c, int ref, int cant, int size);

#endif