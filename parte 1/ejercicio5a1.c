#include <stdio.h>

int main(void) {
  int i;

  printf("Ingrese i: \n");
  scanf("%d", &i);

  while (i != 0) {
    i = i - 1;
  }

  printf("i: %d \n", i);

  return 0;
}

/*
  EJEMPLOS DE EJECUCION
  > ./ejercicio5a1
  Ingrese i: 
  45
  i: 0 
*/