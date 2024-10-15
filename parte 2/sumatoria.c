// EJERCICIO 7

#include <stdio.h>

int sumatoria(int tam, int a[]);

int main(){
    const int N = 4;
    int arreglo[N];
    
    for (int i = 0; i < N; i++)
    {
        printf("Ingrese el elemento (%d) del arreglo: \n", i);
        scanf("%d", &arreglo[i]);
    }

    int suma = sumatoria(N, arreglo);

    printf("La sumatoria de los elementos del arreglo es: %d \n", suma);
    
}

int sumatoria(int tam, int a[]){
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma = suma + a[i];
    }
    return suma;
}


/*
    EJEMPLOS DE EJECUCION

    Ingrese el elemento (0) del arreglo: 
    3
    Ingrese el elemento (1) del arreglo: 
    5
    Ingrese el elemento (2) del arreglo: 
    8
    Ingrese el elemento (3) del arreglo: 
    2
    La sumatoria de los elementos del arreglo es: 18


    Ingrese el elemento (0) del arreglo: 
    10
    Ingrese el elemento (1) del arreglo: 
    10
    Ingrese el elemento (2) del arreglo: 
    20
    Ingrese el elemento (3) del arreglo: 
    30
    La sumatoria de los elementos del arreglo es: 70
*/