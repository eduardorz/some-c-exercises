// ejercicio 3

#include <stdio.h>
#include <stdbool.h>
#define bool _Bool
#define N 3

struct datos {
    bool esta_ordenado_asc;
    int maximo;
};

struct datos esta_ordenado_asc(int tam, int a[]);
void pedir_arreglo(int n_max, int a[]);
void imprimir_arreglo(int n_max, int a[]);

int main() {
    int arreglo[N];

    pedir_arreglo(N, arreglo);
    imprimir_arreglo(N, arreglo);

    struct datos resultado = esta_ordenado_asc(N, arreglo);

    if( resultado.esta_ordenado_asc ){
        printf("El arreglo SI ESTA ordenado de manera ascendente y %d es el maximo elemento. \n", resultado.maximo);
    } else {
        printf("El arreglo NO ESTA ordenado de manera ascendente y %d es el maximo elemento. \n", resultado.maximo);
    }

    return 0;
}

struct datos esta_ordenado_asc(int tam, int a[]){
    struct datos res;
    int i = 0, j = 1;
    res.esta_ordenado_asc = true;
    res.maximo = -1;

    while( i < tam ) {
        // verifico si el arreglo esta ordenado de forma ascendente
        if ( a[i] <= a[j] && res.esta_ordenado_asc == true ) {
            res.esta_ordenado_asc = true;
        } else {
            res.esta_ordenado_asc = false;
        }
        // busco el maximo del arreglo
        if(res.maximo == -1 || a[i] > res.maximo){
            res.maximo = a[i];
        }
        i = i + 1;
        j = j + 1;
    }
    return res;
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
    printf("%.d ", a[i]);
    i = i + 1;
  }
  printf("]");
  printf("\n");
}

/*
    EJEMPLOS DE EJECUCION
    Ingrese el valor (0) del arreglo 
    2
    Ingrese el valor (1) del arreglo 
    2
    Ingrese el valor (2) del arreglo 
    4
    El arreglo inicial: 
    [ 2 2 4 ]
    El arreglo SI ESTA ordenado de manera ascendente y 4 es el maximo elemento.



    Ingrese el valor (0) del arreglo 
    7
    Ingrese el valor (1) del arreglo 
    4
    Ingrese el valor (2) del arreglo 
    9
    El arreglo inicial: 
    [ 7 4 9 ]
    El arreglo NO ESTA ordenado de manera ascendente y 9 es el maximo elemento.



    Ingrese el valor (0) del arreglo 
    2
    Ingrese el valor (1) del arreglo 
    5
    Ingrese el valor (2) del arreglo 
    9
    El arreglo inicial: 
    [ 2 5 9 ]
    El arreglo SI ESTA ordenado de manera ascendente y 9 es el maximo elemento.



    Ingrese el valor (0) del arreglo 
    2
    Ingrese el valor (1) del arreglo 
    9
    Ingrese el valor (2) del arreglo 
    7
    El arreglo inicial: 
    [ 2 9 7 ]
    El arreglo NO ESTA ordenado de manera ascendente y 9 es el maximo elemento. 
*/