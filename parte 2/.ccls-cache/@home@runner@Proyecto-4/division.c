// EJERCICIO 5

#include <stdio.h>

struct div_t {
    int cociente;
    int resto;
};


struct div_t division(int x, int y){
    struct div_t resultado;

    if ( y == 0 ){
        resultado.cociente = 0;
        resultado.resto    = 0;
    } else {
        resultado.cociente = x / y;
        resultado.resto    = x % y;
    }

    return resultado;
}


int main(void){
    int dividendo, divisor;

    printf("Ingrese el diviendo: \n");
    scanf("%d", &dividendo);

    printf("Ingrese el divisor: \n");
    scanf("%d", &divisor);


    if ( divisor == 0 ){
        printf("ERROR: La division por cero (0) NO está definida. \n");
    } else {
        struct div_t resultado = division(dividendo, divisor);
        printf("Cociente: %d \n", resultado.cociente);
        printf("Resto: %d \n", resultado.resto);

    }

    return 0;
}



/*
    EJEMPLOS DE EJECUCION

    Ingrese el diviendo: 
    10
    Ingrese el divisor: 
    5 
    Cociente: 2 
    Resto: 0

    Ingrese el diviendo: 
    20
    Ingrese el divisor: 
    3
    Cociente: 6 
    Resto: 2 

    Ingrese el diviendo: 
    46
    Ingrese el divisor: 
    0
    ERROR: La division por cero (0) NO está definida.
*/