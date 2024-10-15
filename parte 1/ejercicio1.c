#include <stdio.h>

int main(void) {
  int x, y, z;

  // EJERCICIO 1
  printf("EJERCICIO 1: \n");

  printf("ingrese el valor de x \n");
  scanf("%d", &x);

  printf("ingrese el valor de y \n");
  scanf("%d", &y);

  printf("ingrese el valor de z \n");
  scanf("%d", &z);

  printf("la expresion (1): x + y + 1 =  %d \n", x + y + 1);
  printf("la expresion (2): z * z + y * 45 - 15 * x =  %d \n",
         z * z + y * 45 - 15 * x);
  printf("la expresion (3): y - 2 == (x * 3 + 1) %% 5 =  %d \n",
         y - 2 == (x * 3 + 1) % 5);
  printf("la expresion (4): y / 2 * x =  %d \n", y / 2 * x);
  printf("la expresion (5): y < x * z =  %d \n", y < x * z);

  /*
  EJEMPLOS DE EJECUCION PARA X = 7, Y = 3, Z = 5

  ingrese el valor de x
  7
  ingrese el valor de y
  3
  ingrese el valor de z
  5
  la expresion (1): x + y + 1 =  11
  la expresion (2): z * z + y * 45 - 15 * x =  55
  la expresion (3): y - 2 == (x * 3 + 1) % 5 =  0
  la expresion (4): y / 2 * x =  7
  la expresion (5): y < x * z =  1


  EJEMPLOS DE EJECUCION PARA X = 1, Y = 10, Z = 8

  ingrese el valor de x
  1
  ingrese el valor de y
  10
  ingrese el valor de z
  8
  la expresion (1): x + y + 1 =  12
  la expresion (2): z * z + y * 45 - 15 * x =  499
  la expresion (3): y - 2 == (x * 3 + 1) % 5 =  0
  la expresion (4): y / 2 * x =  5
  la expresion (5): y < x * z =  0


  En la ultima expresion, resulta ser de tipo booleano,
  dado este caso donde la funcion devuelve enteros,
  el false es representado con el 0
  y el true es representado con el 1

  */
  return 0;
}