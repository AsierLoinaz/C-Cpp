#include <stdio.h>
#include "carrito.h"
#include <stdlib.h>

void modificarCompra(Compra* c, int cant) {
    c->cantidad = cant;
}

void imprimirCompra(const Compra* c) {
    printf("Ref.%d %s %.2f x %d kg/ud\n", c->producto.referencia, c->producto.nombre, c->producto.precio, c->cantidad);
}


void crearCarrito(Carrito* c, Producto* prods, int* cants, int tamanyo) {
    c->num_compras = tamanyo;
    c->compras = malloc(sizeof(Compra) * tamanyo);
    c->importe_total = 0;

    for (int i = 0; i < tamanyo; ++i) {
        c->compras[i].producto = prods[i];
        c->compras[i].cantidad = cants[i];
        c->importe_total += prods[i].precio * cants[i];
    }
}

void imprimirTicket(const Carrito* c) {
    printf("TICKET\n------\n");

    for (int i = 0; i < c->num_compras; ++i) {
        imprimirCompra(&c->compras[i]);
    }

    printf("....................................\nTOTAL: %.2f euros\n", c->importe_total);
}

void devolverCarrito(Carrito* c) {
    free(c->compras);
}

void modificarCarrito(Carrito* carrito, int ref, int cant) {
    for (int i = 0; i < carrito->num_compras; ++i) {
        if (carrito->compras[i].producto.referencia == ref) {
            carrito->importe_total -= carrito->compras[i].producto.precio * carrito->compras[i].cantidad;
            modificarCompra(&carrito->compras[i], cant);
            carrito->importe_total += carrito->compras[i].producto.precio * carrito->compras[i].cantidad;
            break;
        }
    }
}

