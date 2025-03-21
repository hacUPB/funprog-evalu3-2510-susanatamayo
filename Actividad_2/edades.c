#include <stdio.h>

int main() {
    int edad;

    // Solicitar la edad al usuario
    printf("Por favor, ingresa tu edad: ");
    scanf("%d", &edad);

    // Condicional para verificar la mayoría de edad
    if (edad >= 18) {
        printf("Eres mayor de edad.\n");
    } else {
        printf("Eres menor de edad.\n");
    }

    return 0;
}
