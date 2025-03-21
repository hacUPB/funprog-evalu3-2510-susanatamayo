#include <stdio.h>

int main() {
    float calificacion;

    // Pedir al usuario que ingrese la calificación
    printf("Ingresa la calificación (0-5): ");
    scanf("%f", &calificacion);

    // Evaluar la calificación con if-else if-else
    if (calificacion < 0 || calificacion > 5) {
        printf("Calificación fuera de rango. Debe estar entre 0 y 5.\n");
    } else if (calificacion >= 0 && calificacion < 2) {
        printf("Insuficiente\n");
    } else if (calificacion >= 2 && calificacion < 3) {
        printf("Aceptable\n");
    } else if (calificacion >= 3 && calificacion < 4) {
        printf("Notable\n");
    } else if (calificacion >= 4 && calificacion <= 5) {
        printf("Sobresaliente\n");
    }

    return 0;
}
