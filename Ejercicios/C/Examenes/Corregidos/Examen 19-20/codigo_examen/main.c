#include <stdio.h>

void leerProductos(Producto* productos[], char* fichero) {
    FILE* file = fopen(fichero, "r");
    if (!file) {
        perror("Error al abrir el archivo");
        return;
    }

    for (int i = 0; i < 5; ++i) {
        fscanf(file, "%d %15s %f", &productos[i]->referencia, productos[i]->nombre, &productos[i]->precio);
    }

    fclose(file);
}


int main() {
    // Inicializa los productos y el array de productos aquí (no proporcionado en el examen)

    // Crear una compra
    Compra compra1;
    compra1.producto = productos[1]; // Por ejemplo, seleccionamos el segundo producto
    compra1.cantidad = 3;

    // Imprimir información de la compra antes de la modificación
    printf("ANTES de la modificación de la compra...\n");
    imprimirCompra(&compra1);

    // Modificar la cantidad de la compra
    modificarCompra(&compra1, 0);

    // Imprimir información de la compra después de la modificación
    printf("DESPUÉS de la modificación de la compra...\n");
    imprimirCompra(&compra1);

     // Crear array de cantidades para los productos
    int cantidades[] = {1, 3, 5, 7, 9};

    // Crear carrito
    Carrito carrito;
    crearCarrito(&carrito, productos, cantidades, 5);

    // Imprimir ticket del carrito
    imprimirTicket(&carrito);

    // Modificar el carrito
    modificarCarrito(&carrito, 3, 0);

    // Imprimir ticket del carrito modificado
    imprimirTicket(&carrito);

    // Leer productos del archivo
    leerProductos(productos, "productos.txt");

    // Crear un carrito con los productos leídos del archivo
    Carrito carrito2;
    crearCarrito(&carrito2, productos, cantidades, 5);

    // Imprimir ticket del nuevo carrito
    imprimirTicket(&carrito2);

    // Liberar memoria
    devolverCarrito(&carrito);
    devolverCarrito(&carrito2);

    return 0;
}


}
