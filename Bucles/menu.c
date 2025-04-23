#include <stdio.h>

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        // Mostrar menú
        printf("\n===== MENÚ DE OPERACIONES =====\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el primer número: ");
                scanf("%f", &num1);
                printf("Ingrese el segundo número: ");
                scanf("%f", &num2);
                resultado = num1 + num2;
                printf("Resultado de la suma: %.2f\n", resultado);
                break;
            case 2:
                printf("Ingrese el primer número: ");
                scanf("%f", &num1);
                printf("Ingrese el segundo número: ");
                scanf("%f", &num2);
                resultado = num1 - num2;
                printf("Resultado de la resta: %.2f\n", resultado);
                break;
            case 3:
                printf("Saliendo del programa. ¡Hasta luego!\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }

    } while (opcion != 3);

    return 0;
}
