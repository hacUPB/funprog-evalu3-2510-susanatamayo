#include <stdio.h>

// Declaración de la función
void imprimirMensaje(const char mensaje[]);

int main() {
    // Llamada a la función con un mensaje
    imprimirMensaje("¡Hola desde la función personalizada!");
    return 0;
}

// Definición de la función
void imprimirMensaje(const char mensaje[]) {
    printf("%s\n", mensaje);
}
