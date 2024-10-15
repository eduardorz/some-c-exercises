#include <stdio.h>

int main(void) {
  int i;

  printf("Ingrese i: \n");
  scanf("%d", &i);

  while (i != 0) {
    i = 0;
  }

  printf("i: %d \n", i);

  return 0;
}

/*
  EJEMPLOS DE EJECUCION
  > ./ejercicio5a2
  Ingrese i: 
  45789
  i: 0 
*/