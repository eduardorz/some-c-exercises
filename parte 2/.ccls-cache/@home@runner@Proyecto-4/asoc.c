// EJERCICIO 14

#include <stdio.h>
#include <stdbool.h>
#define bool _Bool
#define N 4

typedef char clave_t;
typedef int valor_t;

struct asoc {
    clave_t clave;
    valor_t valor;
};

bool asoc_existe      (int tam, struct asoc a[], clave_t c);
void pedir_arreglo    (int n_max, struct asoc a[]);
void imprimir_arreglo (int n_max, struct asoc a[]);


int main() {
    struct asoc a[N];

    pedir_arreglo(N, a);
    imprimir_arreglo(N, a);

    clave_t clave_a_chequear;
    printf("Ingrese la clave que desea buscar: \n");
    scanf(" %c", &clave_a_chequear);

    if (asoc_existe(N, a, clave_a_chequear)) {
        printf("La clave %c existe en el arreglo \n",clave_a_chequear);
    } else {
        printf("La clave %c NO existe en el arreglo \n",clave_a_chequear);
    }
    
    return 0;
}


bool asoc_existe(int tam, struct asoc a[], clave_t c) {
    int i = 0;
    while (i < tam) {
        if (a[i].clave == c) {
            return true;
        }
        i = i + 1;
    }
    return false;
}


void pedir_arreglo(int n_max, struct asoc a[]) {
  int i = 0;
  while (i < n_max) {
    printf("Ingrese la clave (%d) del arreglo \n", i);
    scanf(" %c", &a[i].clave);

    printf("Ingrese el valor (%d) del arreglo \n", i);
    scanf("%d", &a[i].valor);

    i++;
  }
  printf("\n");
}

void imprimir_arreglo(int n_max, struct asoc a[]) {
  printf("El arreglo obtenido: \n");
  printf("\n");
  int i = 0;
  while (i < n_max) {
    printf("  CLAVE: %c ", a[i].clave);
    printf("  VALOR: %d ", a[i].valor);
    printf("\n");
    i = i + 1;
  }
  printf("\n");
}



/*
    EJEMPLOS DE EJECUCION
    Ingrese la clave (0) del arreglo 
    a
    Ingrese el valor (0) del arreglo 
    4
    Ingrese la clave (1) del arreglo 
    x
    Ingrese el valor (1) del arreglo 
    7
    Ingrese la clave (2) del arreglo 
    g
    Ingrese el valor (2) del arreglo 
    2
    Ingrese la clave (3) del arreglo 
    t
    Ingrese el valor (3) del arreglo 
    6

    El arreglo obtenido: 

    CLAVE: a   VALOR: 4 
    CLAVE: x   VALOR: 7 
    CLAVE: g   VALOR: 2 
    CLAVE: t   VALOR: 6 

    Ingrese la clave que desea buscar: 
    t
    La clave t existe en el arreglo



    Ingrese la clave (0) del arreglo 
    g
    Ingrese el valor (0) del arreglo 
    6
    Ingrese la clave (1) del arreglo 
    r
    Ingrese el valor (1) del arreglo 
    2
    Ingrese la clave (2) del arreglo 
    u
    Ingrese el valor (2) del arreglo 
    9
    Ingrese la clave (3) del arreglo 
    h
    Ingrese el valor (3) del arreglo 
    5

    El arreglo obtenido: 

    CLAVE: g   VALOR: 6 
    CLAVE: r   VALOR: 2 
    CLAVE: u   VALOR: 9 
    CLAVE: h   VALOR: 5 

    Ingrese la clave que desea buscar: 
    q
    La clave q NO existe en el arreglo
*/
