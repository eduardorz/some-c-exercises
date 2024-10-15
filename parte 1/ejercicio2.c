#include <stdio.h>

int main(void) {
  int x, y, z, b, w;

  // EJERCICIO 2
  printf("EJERCICIO 2: \n");

  printf("ingrese x: \n");
  scanf("%d", &x);

  printf("ingrese y: \n");
  scanf("%d", &y);

  printf("ingrese z: \n");
  scanf("%d", &z);

  printf("EXPRESION (1): x %% 4 == 0  =  %d \n",
         x % 4 == 0); // x = 4, 8 , 12, 16 ... (multiplos de 4)

  printf("EXPRESION (2): x + y == 0 && y - x == (-1) * z = %d \n",
         x + y == 0 && y - x == (-1) * z); // x = 4, y = (-4), z = 8

  printf("ingrese b: \n");
  scanf("%d", &b);

  printf("ingrese w: \n");
  scanf("%d", &w);

  printf("EXPRESION (3): not b && w  =  %d \n", !(b && w)); // b = 2, w = 4

  // SOLUCION: x = 4, y = (-4), z = 8, b = 2, w = 4

  /*
    EJEMPLOS DE EJECUCION
    EJERCICIO 2: 
    ingrese x: 
    4
    ingrese y: 
    -4
    ingrese z: 
    8
    EXPRESION (1): x % 4 == 0  =  1 
    EXPRESION (2): x + y == 0 && y - x == (-1) * z = 1 
    ingrese b: 
    2
    ingrese w: 
    4
    EXPRESION (3): not b && w  =  0
    */

    return 0;
  }