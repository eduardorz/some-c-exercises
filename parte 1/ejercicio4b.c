#include <stdio.h>

int main(void) {
  int x, y, z, m;

  printf("EJERCICIO 4.b \n");

  printf("Ingrese x: \n");
  scanf("%d", &x);

  printf("Ingrese y: \n");
  scanf("%d", &y);

  printf("Ingrese m: \n");
  scanf("%d", &m);

  printf("Ingrese z: \n");
  scanf("%d", &z);

  if (x < y) {
    m = x;
  } else {
    m = y;
  }

  if (m >= z) {
    m = z;
  }

  printf("x: %d \n", x);
  printf("y: %d \n", y);
  printf("z: %d \n", z);
  printf("m: %d \n", m);

  return 0;
}

/*
  EJEMPLOS DE EJECUCION
  > ./ejercicio4b
  EJERCICIO 4.b 
  Ingrese x: 
  5
  Ingrese y: 
  7
  Ingrese m: 
  6
  Ingrese z: 
  2
  x: 5 
  y: 7 
  z: 2 
  m: 2 
*/