// EJERCICIO EXTRA

#include <stdio.h>
#include <stdbool.h>

bool es_capicua(int arreglo[], int longitud);

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

    if (es_capicua(arreglo, N)) {
        printf("El arreglo ingresado es capicua. \n");
    } else {
        printf("El arreglo ingresado NO es capicua. \n");
    }
    

}

bool es_capicua(int arreglo[], int longitud) {
    int inicio = 0;
    int fin = longitud - 1;

    while ( inicio < fin ) {
        if ( arreglo[inicio] != arreglo[fin] ){
            return false;
        }
        inicio = inicio + 1;
        fin = fin - 1;
    }

    return true;
}

/*
    EJEMPLOS DE EJECUCION
    Ingrese un tamaño N para el arreglo: 
    8
    Ingrese el elemento (0) del arreglo: 
    5
    Ingrese el elemento (1) del arreglo: 
    6
    Ingrese el elemento (2) del arreglo: 
    7
    Ingrese el elemento (3) del arreglo: 
    8
    Ingrese el elemento (4) del arreglo: 
    8
    Ingrese el elemento (5) del arreglo: 
    7
    Ingrese el elemento (6) del arreglo: 
    6
    Ingrese el elemento (7) del arreglo: 
    5
    El arreglo inicial: 
    [ 5 6 7 8 8 7 6 5 ] 
    El arreglo ingresado es capicua. 

    

    Ingrese un tamaño N para el arreglo: 
    6
    Ingrese el elemento (0) del arreglo: 
    1
    Ingrese el elemento (1) del arreglo: 
    2
    Ingrese el elemento (2) del arreglo: 
    3
    Ingrese el elemento (3) del arreglo: 
    4
    Ingrese el elemento (4) del arreglo: 
    5
    Ingrese el elemento (5) del arreglo: 
    6
    El arreglo inicial: 
    [ 1 2 3 4 5 6 ] 
    El arreglo ingresado NO es capicua.

*/
