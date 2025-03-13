#include <stdio.h>

int main(int argc, char const *argv[])
{
   printf("Ingrese los números que desea operar\n,");
   scanf("%d", &num_1);
   printf("Ingrese los números que desea operar\n",);
   scanf("%d", &num_2);

   printf("Elija Operación");
   printf("1. Suma\n2. Resta\n3. Multiplicación\n.4 División\n");
   scanf("%d", &operaciones);

   switch (operaciones)
   {
   case 1 : 
        Respuesta = num_1 + num_2;
        printf(Respuesta);
    break;
   case 2 :
         Respuesta = num_1 - num_2;
         printf(Respuesta);
    break;
   case 3 : 
       Respuesta = num_1 * num_2;
       printf(Respuesta);
   break;
  case 4 : 
      Respuesta = num_1 / num_2;
      printf(Respuesta);
   break;
   default: 
   printf("Operación no valida \n");
   break;
   }


    return 0;
}

