#include <stdio.h>
#include <math.h>  // Para usar sqrt()

int main() {
    double numero, resultado;

    printf("Ingrese un número para calcular su raíz cuadrada: ");
    scanf("%lf", &numero);

    if (numero < 0) {
        printf("Error: no se puede calcular la raíz cuadrada de un número negativo.\n");
    } else {
        resultado = sqrt(numero);
        printf("La raíz cuadrada de %.2f es %.2f\n", numero, resultado);
    }

    return 0;
}
