#include <stdbool.h>
#include <stdio.h>

bool pedir_booleano(char name);
void imprimir_booleano(bool x, char name);

int main(void) {
  bool booleano;
  booleano = pedir_booleano('p');
  imprimir_booleano(booleano, 'p');
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
    printf("valor de la variable %c: falso \n", name);
  }
}

/*
  EJEMPLOS DE EJECUCION
  > ./entradas_bool
  Ingrese un valor booleano para la variable p: 
  5
  valor de la variable p: verdadero 
  > ./entradas_bool
  Ingrese un valor booleano para la variable p: 
  0
  valor de la variable p: falso 
*/