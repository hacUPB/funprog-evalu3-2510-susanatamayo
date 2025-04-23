/* Una variable llamada promedio
La función calcula el promedio de los tres números y escribe el resultado utilizando el puntero
El resultado usando el punto
El promedio se imprime en la función principal */

#include <stdio.h>
#include <math.h>

void prom(float, float, float, float*); 

int main(int argc,char const *argv[])
{ float  num1, num2, num3, prom;
  printf ("ingrese dato 1: \n ");
  scanf("%f", &num1);
  printf ("ingrese dato 2: \n ");
  scanf("%f", &num2);
  printf ("ingrese dato 3: \n ");
  scanf("%f", &num3);

  promedio(num1, num2, num3, &promedio);
  return 0;
}
void promedio(float dato1, float dato2, float dato3, float *prom) // Definición de la función. 
{ 
   (*prom) = (dato1 + dato2 + dato3) / 3.0;
 }