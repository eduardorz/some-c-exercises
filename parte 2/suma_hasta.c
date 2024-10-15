// EJERCICIO 3

#include <stdio.h>

int suma_hasta(int n);

int main(void){
    int n, suma;

    
    printf("Ingrese un numero n: \n");
    scanf("%d", &n);

    while (n < 0) {
        printf("ERROR: el numero ingresado no es valido \n");
        printf("Ingrese un numero n: \n");
        scanf("%d", &n);
    }
     
    suma = suma_hasta(n);

    printf("La suma de los primeros %d numeros naturales es: %d \n", n, suma);

}

int suma_hasta(int n){
    int suma = 0;
    int i = 0;
    while (i <= n){
        suma = suma + i;
        i = i + 1;
    }
    return suma;
}


/*
    EJEMPLOS DE EJECUCION

    Ingrese un numero n: 
    5
    La suma de los primeros 5 numeros naturales es: 15

    Ingrese un numero n: 
    4
    La suma de los primeros 4 numeros naturales es: 10

    Ingrese un numero n: 
    10
    La suma de los primeros 10 numeros naturales es: 55
*/