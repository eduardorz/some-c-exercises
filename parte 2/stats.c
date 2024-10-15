// EJERCICIO 13
#include <stdio.h>
#define N 4


struct datos_t {
  float maximo;
  float minimo;
  float promedio;
};

struct datos_t stats(int tam, float a[]);
void pedir_arreglo(int n_max, float a[]);
void imprimir_arreglo(int n_max, float a[]);


int main(){
  // ejercicio 4
  printf("El minimo elemento del arreglo: %.2f \n", resultado.minimo);
  printf("El maximo elemento del arreglo: %.2f \n", resultado.maximo);
  printf("El promedio del arreglo: %.2f \n", resultado.promedio);

  return 0;
}

struct datos_t stats(int tam, float a[]){
  struct datos_t resultados;

  int i = 0;
  float suma = 0;

  resultados.minimo = a[0];
  resultados.maximo = a[0];

  while (i < tam){
    if (a[i] < resultados.minimo) {
        resultados.minimo = a[i];
    } else if (a[i] > resultados.maximo ) {
        resultados.maximo = a[i];
    }
    suma = suma + a[i];
    i = i + 1;
  }

  resultados.promedio = suma / tam;


  return resultados;
}

void pedir_arreglo(int n_max, float a[]) {
  int i = 0;
  while (i < n_max) {
    printf("Ingrese el valor (%d) del arreglo \n", i);
    scanf("%f", &a[i]);
    i++;
  }
}

void imprimir_arreglo(int n_max, float a[]) {
  printf("El arreglo inicial: \n");
  printf("[ ");
  int i = 0;
  while (i < n_max) {
    printf("%.2f ", a[i]);
    i = i + 1;
  }
  printf("]");
  printf("\n");
}


/*
  EJEMPLOS DE EJECUCION

  Ingrese el valor (0) del arreglo 
  8
  Ingrese el valor (1) del arreglo 
  1
  Ingrese el valor (2) del arreglo 
  3
  Ingrese el valor (3) del arreglo 
  5
  El arreglo inicial: 
  [ 8.00 1.00 3.00 5.00 ]
  El minimo elemento del arreglo: 1.00 
  El maximo elemento del arreglo: 8.00 
  El promedio del arreglo: 4.25



  Ingrese el valor (0) del arreglo 
  2
  Ingrese el valor (1) del arreglo 
  4
  Ingrese el valor (2) del arreglo 
  10
  Ingrese el valor (3) del arreglo 
  8
  El arreglo inicial: 
  [ 2.00 4.00 10.00 8.00 ]
  El minimo elemento del arreglo: 2.00 
  El maximo elemento del arreglo: 10.00 
  El promedio del arreglo: 6.00
*/