#include <stdio.h>

int main() {
    int  opciones;

    do {
        printf("Bienvenido a la Calculadora de Ingeniería \n Por favor, selecciona una opción:");
        printf( " 1. Calcular Ley de Ohm \n 2. Calcular Factor de Potencia \n 3. Calcular Resistencia de un Conductor \n 4. Calcular Valor de la Resistencia para un LED \n5. Salir");
        scanf("%d", &opciones);
        case 1 : 
        resultado = num1 + num2;
        printf("El resultado es: %d \n ", resultado);
    break;
   case 2 :
        resultado = num1 - num2;
         printf("El resultado es: %d \n ", resultado);
    break;
   case 3 : 
       resultado = num1 * num2;
       printf("El resultado es: %d \n ", resultado);
   break;
  case 4 : 
      resultado = num1 / num2;
      printf("El resultado es: %d \n ", resultado);
   break;
   default: 
   printf("Operación no valida \n");
   break;
    } while ();

    return 0;
}