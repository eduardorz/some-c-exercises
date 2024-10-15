#include <stdio.h>

int main(void) {
  int x, y;
  printf("EJERCICIO 4.a \n");
  printf("Ingrese x: \n");
  scanf("%d", &x);
  printf("Ingrese y: \n");
  scanf("%d", &y);
  if (x >= y) {
    x = 0;
  } else {
    x = 2;
  }

  printf("x: %d \n", x);
  return 0;
}

/*
  EJEMPLOS DE EJECUCION
  > ./ejercicio4a
  EJERCICIO 4.a 
  Ingrese x: 
  5
  Ingrese y: 
  2
  x: 0 
  > ./ejercicio4a
  EJERCICIO 4.a 
  Ingrese x: 
  2
  Ingrese y: 
  5
  x: 2
*/