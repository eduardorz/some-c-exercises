#include <stdio.h>

int main(void) {
  int x, y;
  int i = 0;

  printf("Ingrese x: \n");
  scanf("%d", &x);

  printf("Ingrese y: \n");
  scanf("%d", &y);

  while (x >= y) {
    x = x - y;
    i = i + 1;
    printf("ESTADO %d: x = %d, y = %d, i = %d \n", i, x, y, i);
  }

  printf("i: %d \n", i);

  return 0;
}

/*
  EJEMPLOS DE EJECUCION
    Ingrese x:
    20
    Ingrese y:
    2
    ESTADO 1: x = 18, y = 2, i = 1
    ESTADO 2: x = 16, y = 2, i = 2
    ESTADO 3: x = 14, y = 2, i = 3
    ESTADO 4: x = 12, y = 2, i = 4
    ESTADO 5: x = 10, y = 2, i = 5
    ESTADO 6: x = 8, y = 2, i = 6
    ESTADO 7: x = 6, y = 2, i = 7
    ESTADO 8: x = 4, y = 2, i = 8
    ESTADO 9: x = 2, y = 2, i = 9
    ESTADO 10: x = 0, y = 2, i = 10
    i: 10
*/