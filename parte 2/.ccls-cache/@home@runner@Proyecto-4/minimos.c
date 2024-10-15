// EJERCICIO 10

#include <stdio.h>

int minimo_pares(int tam, int a[]);
int minimo_impares(int tam, int a[]);
int minimo(int tam, int a[]);


int main() {
    const int N = 4;
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
    
    printf("El minimo par del arreglo ingresado: %d \n", minimo_pares(N, arreglo));
    printf("El minimo impar del arreglo ingresado: %d \n", minimo_impares(N, arreglo));
    printf("El minimo elemento del arreglo ingresado: %d \n", minimo(N, arreglo));


}

int minimo_pares(int tam, int a[]) {                      
    int i = 0, val_minimo = -1;

    while ( i < tam ) {
        if (a[i] % 2 == 0) {
            if (val_minimo == -1 || a[i] < val_minimo) {
                val_minimo = a[i];
            }
            
        }
        i = i + 1;
    }
    
    return val_minimo;
}

int minimo_impares(int tam, int a[]) {                      
    int i = 0, val_minimo = -1;

    while ( i < tam ) {
        if (a[i] % 2 != 0) {
            if (val_minimo == -1 || a[i] < val_minimo) {
                val_minimo = a[i];
            }
            
        }
        i = i + 1;
    }
    
    return val_minimo;
}

int minimo(int tam, int a[]){
    if (minimo_pares(tam, a) < minimo_impares(tam, a)) {
        return minimo_pares(tam, a);
    } else {
        return minimo_impares(tam, a);
    }
    
}


/*
    EJEMPLOS DE EJECUCION

    Ingrese el elemento (0) del arreglo: 
    2
    Ingrese el elemento (1) del arreglo: 
    4
    Ingrese el elemento (2) del arreglo: 
    5
    Ingrese el elemento (3) del arreglo: 
    6
    El arreglo inicial: 
    [ 2 4 5 6 ] 
    El minimo par del arreglo ingresado: 2 
    El minimo impar del arreglo ingresado: 5 
    El minimo elemento del arreglo ingresado: 2



    Ingrese el elemento (0) del arreglo: 
    6
    Ingrese el elemento (1) del arreglo: 
    4
    Ingrese el elemento (2) del arreglo: 
    2
    Ingrese el elemento (3) del arreglo: 
    5
    El arreglo inicial: 
    [ 6 4 2 5 ] 
    El minimo par del arreglo ingresado: 2 
    El minimo impar del arreglo ingresado: 5 
    El minimo elemento del arreglo ingresado: 2 

*/