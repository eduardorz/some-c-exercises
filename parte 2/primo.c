// EJERCICIO 15

#include <stdio.h>
#include <stdbool.h>
#define bool _Bool

bool es_primo(int n);
int nesimo_primo(int N);

int main(){
    int n;

    printf("Ingrese un numero N positivo: \n");
    scanf("%d", &n);

    while (n < 0) {
        printf("ERROR: el numero debe ser positivo \n");
        printf("Vuelva a ingresar un numero N positivo: \n");
        scanf("%d", &n);
    }
    
    printf("El n-esimo primo es: %d \n", nesimo_primo(n));

    return 0;
}

bool es_primo(int n) {
    if (n <= 1) {
        return false;
    }

    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
        }
        i = i + 1;
    }
    
    return true;
}

int nesimo_primo(int N){
    if (N <= 0) {
        return -1;
    }

    int primo = 2;
    int i = 0;

    while (i < N) {
        if (es_primo(primo)) {
            i = i + 1;
            if (i == N) {
                return primo;
            }
            
        }
        primo = primo + 1;
    }
    
    return -1;
}


/*
    EJEMPLOS DE EJECUCION
    Ingrese un numero N positivo: 
    15
    El n-esimo primo es: 47


    Ingrese un numero N positivo: 
    -5
    ERROR: el numero debe ser positivo 
    Vuelva a ingresar un numero N positivo: 
    -20
    ERROR: el numero debe ser positivo 
    Vuelva a ingresar un numero N positivo: 
    3
    El n-esimo primo es: 5 

*/