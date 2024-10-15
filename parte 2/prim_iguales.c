// EJERCICIO 11

#include <stdio.h>

int prim_iguales(int tam, int a[]);

int main(){
    int N = 0;

    printf("Ingrese un tamaño N para el arreglo: \n");
    scanf("%d", &N);

    int i = 0, arreglo[N];

    while (i < N) {
        printf("Ingrese el elemento (%d) del arreglo: \n", i);
        scanf("%d", &arreglo[i]);
        i = i + 1;
    }

    i = 0;
    printf("El arreglo inicial: \n");
    printf("[ ");

    while ( i < N ) {
        printf("%d ", arreglo[i]);
        i = i + 1;
    }
    printf("] \n");

    printf("La cantidad de los primeros elementos iguales del arreglo: %d \n", prim_iguales(N, arreglo));

}

int prim_iguales(int tam, int a[]){
    int longitud = 1, i = 0, j = 1;

    while (i < tam) {
        if (a[i] == a[j]) {
            longitud = longitud + 1;
        } else {
            break;
        }
        i = i + 1;
        j = j + 1;
    }
    
    return longitud;
}

/*
    EJEMPLOS DE EJECUCION

    Ingrese un tamaño N para el arreglo: 
    8
    Ingrese el elemento (0) del arreglo: 
    2
    Ingrese el elemento (1) del arreglo: 
    2
    Ingrese el elemento (2) del arreglo: 
    2
    Ingrese el elemento (3) del arreglo: 
    2
    Ingrese el elemento (4) del arreglo: 
    2
    Ingrese el elemento (5) del arreglo: 
    2
    Ingrese el elemento (6) del arreglo: 
    4
    Ingrese el elemento (7) del arreglo: 
    5
    El arreglo inicial: 
    [ 2 2 2 2 2 2 4 5 ] 
    La cantidad de los primeros elementos iguales del arreglo: 6
*/

