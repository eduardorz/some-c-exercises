#include <stdio.h>
#include <assert.h>

void hola_hasta(int n);


int main(void){
    int n;

    printf("Ingrese un numero n: \n");
    scanf("%d", &n);

    assert(n > 0); 

    hola_hasta(n);
    
}

void hola_hasta(int n){
    int i = 0;
    while (i < n){
        printf("Hola \n");
        i = i + 1;
    }
}


/*
    EJEMPLOS DE EJECUCION
    Ingrese un numero n: 
    10
    Hola 
    Hola 
    Hola 
    Hola 
    Hola 
    Hola 
    Hola 
    Hola 
    Hola 
    Hola
*/