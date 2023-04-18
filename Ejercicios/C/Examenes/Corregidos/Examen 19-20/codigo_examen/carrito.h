#ifndef CARRITO_H
#define CARRITO_H

#include "producto.h"

typedef struct {
    Producto producto;
    int cantidad;
} Compra;

typedef struct {
    Compra* compras;
    int num_compras;
    float importe_total;
} Carrito;

void modificarCompra(Compra* c, int cant);
void imprimirCompra(const Compra* c);

void crearCarrito(Carrito* c, Producto* prods, int* cants, int tamanyo);
void imprimirTicket(const Carrito* c);
void devolverCarrito(Carrito* c);
void modificarCarrito(Carrito* carrito, int ref, int cant);


#endif
