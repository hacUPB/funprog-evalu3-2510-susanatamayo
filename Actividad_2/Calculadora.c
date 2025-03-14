#include <stdio.h>

int main(int argc, char const *argv[])

{
    float num1, num2, resultado ;
    char operaciones; 
    do{
    
   printf("Ingrese los numeros que desea operar\n");
   scanf("%d", &num1);
   printf("Ingrese los numeros que desea operar\n");
   scanf("%d", &num2);
   printf("Elija Operacion");
   printf("1. Suma\n2. Resta\n3. Multiplicacion\n.4 Division\n 5. Para salir ponga ? \n");
   setbuf(stdin, NULL);
   scanf("%d", &operaciones);

   switch (operaciones)
   {
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
   } 
    }
   while (operaciones != '?');
   
    return 0;
}

