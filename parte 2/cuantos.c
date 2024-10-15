// EJERCICIO 12

#include <stdio.h>
#define N 4
struct comp_t {
  int menores;
  int iguales;
  int mayores;
};

struct comp_t cuantos(int tam, int a[], int elem);
void pedir_arreglo(int n_max, int a[]);
void imprimir_arreglo(int n_max, int a[]);

int main() {
  int elemento;

  printf("Ingrese un elemento del cual comparar valores en el arreglo: \n");
  scanf("%d", &elemento);

  int arreglo[N];

  pedir_arreglo(N, arreglo);
  imprimir_arreglo(N, arreglo);

  struct comp_t resultado;
  resultado = cuantos(N, arreglo, elemento);

  printf("Cantidad de elementos menores a %d en el arreglo: %d \n", elemento,
         resultado.menores);
  printf("Cantidad de elementos iguales a %d en el arreglo: %d \n", elemento,
         resultado.iguales);
  printf("Cantidad de elementos mayores a %d en el arreglo: %d \n", elemento,
         resultado.mayores);
}

struct comp_t cuantos(int tam, int a[], int elem) {
  struct comp_t cantidades;

  int i = 0;
  cantidades.menores = 0;
  cantidades.iguales = 0;
  cantidades.mayores = 0;

  while (i < tam) {
    if (a[i] < elem) {
      cantidades.menores = cantidades.menores + 1;
    } else if (a[i] == elem) {
      cantidades.iguales = cantidades.iguales + 1;
    } else {
      cantidades.mayores = cantidades.mayores + 1;
    }
    i = i + 1;
  }

  return cantidades;
}

void pedir_arreglo(int n_max, int a[]) {
  int i = 0;
  while (i < n_max) {
    printf("Ingrese el valor (%d) del arreglo \n", i);
    scanf("%d", &a[i]);
    i++;
  }
}

void imprimir_arreglo(int n_max, int a[]) {
  printf("El arreglo inicial: \n");
  printf("[ ");
  int i = 0;
  while (i < n_max) {
    printf("%d ", a[i]);
    i = i + 1;
  }
  printf("]");
  printf("\n");
}

/*
  EJEMPLOS DE EJECUCION
  Ingrese un elemento del cual comparar valores en el arreglo: 
  5
  Ingrese el valor (0) del arreglo 
  2
  Ingrese el valor (1) del arreglo 
  2
  Ingrese el valor (2) del arreglo 
  5
  Ingrese el valor (3) del arreglo 
  9
  El arreglo inicial: 
  [ 2 2 5 9 ]
  Cantidad de elementos menores a 5 en el arreglo: 2 
  Cantidad de elementos iguales a 5 en el arreglo: 1 
  Cantidad de elementos mayores a 5 en el arreglo: 1 


  Ingrese un elemento del cual comparar valores en el arreglo: 
  7
  Ingrese el valor (0) del arreglo 
  10
  Ingrese el valor (1) del arreglo 
  8
  Ingrese el valor (2) del arreglo 
  9
  Ingrese el valor (3) del arreglo 
  7
  El arreglo inicial: 
  [ 10 8 9 7 ]
  Cantidad de elementos menores a 7 en el arreglo: 0 
  Cantidad de elementos iguales a 7 en el arreglo: 1 
  Cantidad de elementos mayores a 7 en el arreglo: 3 
*/