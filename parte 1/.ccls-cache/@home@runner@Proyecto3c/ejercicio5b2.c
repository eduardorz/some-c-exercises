#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int x, res;
  int i = 2;
  res = true;

  printf("Ingrese x: \n");
  scanf("%d", &x);

  while (i < x && res) {
    res = res && ((x % i) != 0);
    i = i + 1;
    printf("ESTADO %d: x = %d, i = %d, res = %d \n", i, x, i, res);
  }

  return 0;
}

/*
  EJEMPLOS DE EJECUCION
  > ./ejercicio5b2
  Ingrese x: 
  10
  ESTADO 3: x = 10, i = 3, res = 0 
  > ./ejercicio5b2
  Ingrese x: 
  100
  ESTADO 3: x = 100, i = 3, res = 0 
*/