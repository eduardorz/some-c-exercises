// ejercicio 4

#include <stdio.h>
#include <stdbool.h>
#define bool _Bool


struct triangulo {
    int l1;
    int l2;
    int l3;
};


struct caract_triangulo {
    bool es_equilatero;
    int perimetro;
};

struct caract_triangulo averiguar_caract(struct triangulo t);



int main() {
    struct triangulo Triangulo;

    printf("Ingrese lado 1 del triangulo: \n");
    scanf("%d",&Triangulo.l1);

    printf("Ingrese lado 2 del triangulo: \n");
    scanf("%d",&Triangulo.l2);

    printf("Ingrese lado 3 del triangulo: \n");
    scanf("%d",&Triangulo.l3);

    struct caract_triangulo resultado = averiguar_caract(Triangulo);


    if ( resultado.es_equilatero ) {
        printf("El triangulo es equilatero. \n");
        printf("El perimetro del triangulo es: %d \n", resultado.perimetro);
    } else {
        printf("El triangulo NO es equilatero. \n");
        printf("El perimetro del triangulo es: %d \n", resultado.perimetro);
    }
    
    return 0;
}

struct caract_triangulo averiguar_caract(struct triangulo t) {
    struct caract_triangulo resultado;

    // verifico si el triangulo es equilatero
    if ( t.l1 == t.l2 && t.l2 == t.l3 ) {
        resultado.es_equilatero = true;
    } else { 
        resultado.es_equilatero = false;
    }

    // calculo el perimetro

    resultado.perimetro = t.l1 + t.l2 + t.l3;

    return resultado;
}




/*
    EJEMPLOS DE EJECUCION
    Ingrese lado 1 del triangulo: 
    10
    Ingrese lado 2 del triangulo: 
    10
    Ingrese lado 3 del triangulo: 
    10
    El triangulo es equilatero. 
    El perimetro del triangulo es: 30


    Ingrese lado 1 del triangulo: 
    10
    Ingrese lado 2 del triangulo: 
    30
    Ingrese lado 3 del triangulo: 
    20
    El triangulo NO es equilatero. 
    El perimetro del triangulo es: 60
*/