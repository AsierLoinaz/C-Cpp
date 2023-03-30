#include <stdio.h>
#include <string.h>
#include "producto.h"
#include "carrito.h"
#define ruta "productos.txt";

void leerProductos(Producto* productos[], char* fichero);

int main(void)
{
	Producto p1; p1.ref=1; strcpy(p1.nombre,"Platanos"); p1.precio=12.0;
	Producto p2; p2.ref=2; strcpy(p2.nombre,"Solomillo"); p2.precio=32.2;
	Producto p3; p3.ref=3; strcpy(p3.nombre,"Chocolate"); p3.precio=25.5;
	Producto p4; p4.ref=4; strcpy(p4.nombre,"Rodaballo"); p4.precio=35.4;
	Producto p5; p5.ref=5; strcpy(p5.nombre,"Cereales"); p5.precio=10.5;

	imprimirProducto(p1);

	Producto* comprados[] = {&p1, &p2, &p3, &p4, &p5};
// PARTE 1

	Compra c1 = {p1, 4}; 
	printf("Compra antes de modificacion\n"); 
	imprimirCompra(c1); 
	modificarCompra(&c1, 5);
	printf("Compra despues de modificacion\n"); 
	imprimirCompra(c1);

// Parte 2

	

	Carrito c;
	int cants[5] = {2, 4, 2, 1, 5};
	Producto productos[5] = {p1, p2, p3, p4, p5}; // Intentar quitar luego
	crearCarrito(&c, productos, cants, 5); 
	imprimirTicket(c, 5);

	// TODO devolverCarrito(&c);
	// PARTE 3
	printf("Platanos modificados\n"); 
	modificarCarrito(&c, 1, 6, 5);
	imprimirTicket(c, 5);

	leerProductos(comprados, "productos.txt");
	for (int i = 0; i < 5; i++){
		imprimirProducto(*comprados[i]);
	}



	return 0;
}

void leerProductos(Producto* productos[], char* fichero){

	FILE* file = fopen(fichero, "r");
	for (int i = 0; i < 5; i++){
		fscanf(file, "%i %15s %f", &productos[i]->ref, &productos[i]->nombre, &productos[i]->precio);
		 // ! fscanf no lee espacios en blanco. 
		 // ! %15 es un string de 15 caracteres como maximo
	}
}
