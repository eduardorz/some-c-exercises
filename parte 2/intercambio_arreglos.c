// EJERCICIO 9

#include <stdio.h>


void intercambiar (int a[], int i, int j);

int main(){
    const int N = 4;
    int i = 0, arreglo[N], pos1, pos2;

    while ( i < N ){
        printf("Ingrese elemento (%d) del arreglo: \n", i);
        scanf("%d", &arreglo[i]);
        i = i + 1;
    }

    printf("Ingrese la posición (1) del arreglo que desea permutar: \n");
    scanf("%d", &pos1);
    while ( pos1 < 0 || pos1 >= N ){
        printf("Ingrese la posición (1) del arreglo que desea permutar: \n");
        scanf("%d", &pos1);
    }

    printf("Ingrese la posición (2) del arreglo que desea permutar: \n");
    scanf("%d", &pos2);
    while ( pos2 < 0 || pos2 >= N ){
        printf("Ingrese la posición (2) del arreglo que desea permutar: \n");
        scanf("%d", &pos2);
    }

    i = 0;
    printf("El arreglo inicial: \n");
    printf("[ ");

    while ( i < N ) {
        printf("%d ", arreglo[i]);
        i = i + 1;
    }
    printf("] \n");

    intercambiar(arreglo, pos1, pos2);
    i = 0;
    printf("El arreglo modificado: \n");
    printf("[ ");

    while ( i < N ) {
        printf("%d ", arreglo[i]);
        i = i + 1;
    }
    printf("] \n");

}

void intercambiar (int a[], int i, int j){
    int aux;
    aux = a[i];
    a[i] = a[j];
    a[j] = aux;
}

/*
    EJEMPLOS DE EJECUCION
    Ingrese elemento (0) del arreglo: 
    2
    Ingrese elemento (1) del arreglo: 
    4
    Ingrese elemento (2) del arreglo: 
    6
    Ingrese elemento (3) del arreglo: 
    8
    Ingrese la posición (1) del arreglo que desea permutar: 
    1
    Ingrese la posición (2) del arreglo que desea permutar: 
    2
    El arreglo inicial: 
    [ 2 4 6 8 ] 
    El arreglo modificado: 
    [ 2 6 4 8 ]


    Ingrese elemento (0) del arreglo: 
    8
    Ingrese elemento (1) del arreglo: 
    8
    Ingrese elemento (2) del arreglo: 
    6
    Ingrese elemento (3) del arreglo: 
    7
    Ingrese la posición (1) del arreglo que desea permutar: 
    -2
    Ingrese la posición (1) del arreglo que desea permutar: 
    78
    Ingrese la posición (1) del arreglo que desea permutar: 
    1
    Ingrese la posición (2) del arreglo que desea permutar: 
    -89
    Ingrese la posición (2) del arreglo que desea permutar: 
    2
    El arreglo inicial: 
    [ 8 8 6 7 ] 
    El arreglo modificado: 
    [ 8 6 8 7 ]
*/