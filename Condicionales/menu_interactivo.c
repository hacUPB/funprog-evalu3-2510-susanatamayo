#include <stdio.h>

int main() {
    int opcion;

    do {
        // Mostrar el menú
        printf("\n===== MENÚ PRINCIPAL =====\n");
        printf("1. Saludar\n");
        printf("2. Mostrar la fecha\n");
        printf("3. Calcular suma de dos números\n");
        printf("4. Mostrar mensaje motivador\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        // Evaluar la opción seleccionada
        switch (opcion) {
            case 1:
                printf("¡Hola! Espero que tengas un gran día.\n");
                break;
            case 2:
                printf("Hoy es un gran día para aprender C.\n"); 
                break;
            case 3: {
                float a, b;
                printf("Ingrese el primer número: ");
                scanf("%f", &a);
                printf("Ingrese el segundo número: ");
                scanf("%f", &b);
                printf("La suma es: %.2f\n", a + b);
                break;
            }
            case 4:
                printf("¡Sigue adelante! Cada línea de código te hace mejor programador.\n");
                break;
            case 5:
                printf("Saliendo del programa. ¡Hasta luego!\n");
                break;
            default:
                printf("Opción no válida. Intente nuevamente.\n");
        }

    } while (opcion != 5);

    return 0;
}
