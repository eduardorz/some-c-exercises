#include <stdbool.h>
#include <stdio.h>

bool pedir_booleano(char name);
void imprimir_booleano(bool x, char name);

int main(void) {
  int x, y, z, m;

  printf("EJERCICIO 6.c \n");

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
    imprimir_booleano(true, 'v');
  } else {
    m = y;
    imprimir_booleano(false, 'v');
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

bool pedir_booleano(char name) {
  bool x;
  int a;
  printf("Ingrese un valor booleano para la variable %c: \n", name);
  scanf("%d", &a);
  x = a;
  return x;
}

void imprimir_booleano(bool x, char name) {
  if (x) {
    printf("valor de la variable %c: verdadero \n", name);
  } else {
    printf("valor de la variable %c: false \n", name);
  }
}

/*
  EJEMPLOS DE EJECUCION
  > ./ejercicio6c
  EJERCICIO 6.c 
  Ingrese x: 
  5
  Ingrese y: 
  4
  Ingrese m: 
  6
  Ingrese z: 
  8
  valor de la variable v: false 
  x: 5 
  y: 4 
  z: 8 
  m: 4
*/