#include <stdio.h>

int main() {
    float nota, suma = 0;
    int cantidad = 0;
    
    while (1) {
        printf("Ingrese una calificación (o -1 para finalizar): ");
        if (scanf("%f", &nota) != 1) {
            printf(" Error: Entrada no válida. Ingrese un número.\n");
            while (getchar() != '\n'); 
            continue;
        }
        
        if (nota == -1) {
            break;
        }
        
        if (nota >= 0.0 && nota <= 5.0) {
            suma += nota;
            cantidad++;
        } else {
            printf(" Error: La nota debe estar entre 0.0 y 5.0\n");
        }
    }
    
    if (cantidad > 0) {
        printf("\nCantidad de calificaciones ingresadas: %d\n", cantidad);
        printf("Promedio de notas: %.2f\n", suma / cantidad);
    } else {
        printf("\nNo se ingresaron calificaciones válidas.\n");
    }
    
    return 0;