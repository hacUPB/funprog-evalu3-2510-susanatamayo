#include <stdio.h>

// Declaración de la función
int maximo(int a, int b);

int main() {
    int num1, num2, mayor;

    // Solicitar los números al usuario
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    // Llamar a la función y guardar el resultado
    mayor = maximo(num1, num2);

    // Mostrar el resultado
    printf("El número mayor es: %d\n", mayor);

    return 0;
}

// Definición de la función
int maximo(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
