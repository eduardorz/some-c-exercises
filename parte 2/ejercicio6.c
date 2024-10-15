// EJERCICIO 6

#include <stdio.h>

void pedir_arreglo(int n_max, int a[]);

void imprimir_arreglo(int n_max, int a[]);

int main(){
    int longitud;

    printf("Ingrese la longitud del arreglo: \n");
    scanf("%d", &longitud);

    int arreglo[longitud];

    pedir_arreglo(longitud, arreglo);
    imprimir_arreglo(longitud, arreglo);

}

void pedir_arreglo(int n_max, int a[]){
    int i = 0;
    while ( i < n_max ) {
        printf("Ingrese el valor (%d) del arreglo \n", i);
        scanf("%d", &a[i]);
        i++;
    }
}

void imprimir_arreglo(int n_max, int a[]){
    printf("[ ");
    int i = 0;
    while ( i < n_max) {
        printf("%d ", a[i]);
        i = i + 1;
    }
    printf("]");
    printf("\n");
}

/*
    EJEMPLOS DE EJECUCION

    Ingrese la longitud del arreglo: 
    5
    Ingrese el valor (0) del arreglo 
    2
    Ingrese el valor (1) del arreglo 
    6
    Ingrese el valor (2) del arreglo 
    7
    Ingrese el valor (3) del arreglo 
    4
    Ingrese el valor (4) del arreglo 
    9
    [ 2 6 7 4 9 ]
*/