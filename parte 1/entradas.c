#include <stdio.h>

int pedir_entero(char name) {
  int x;
  printf("Ingrese un valor entero para la variable %c: ", name);
  scanf("%d", &x);
  return x;
}

void imprimir_entero(int x, char name) {
  printf("El valor entero que ingresaste para la variable %c es: %d", name, x);
}

int main(void) {
  imprimir_entero(pedir_entero('g'), 'g');
  return 0;
}

/*
  EJEMPLOS DE EJECUCION
  > ./entradas
  Ingrese un valor entero para la variable g: 5
  El valor entero que ingresaste para la variable g es: 5
*/