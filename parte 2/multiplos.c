// EJERCICIO 8

#include <stdio.h>
#include <stdbool.h>
#define bool _Bool


bool todos_pares(int tam, int a[]);
bool existe_multiplo(int m, int tam, int a[]);

int main(){
    const int N = 4;
    int arreglo[N];
    int opcion, i = 0, M;

    while ( i < N ) {
        printf("Ingrese el elemento (%d) del arreglo: \n", i);
        scanf("%d", &arreglo[i]);
        i = i + 1;
    }
    
    
    printf("Seleccione una opcion: \n");
    printf("(1) -- DETERMINAR SI TODOS LOS ELEMENTOS DEL ARREGLO SON PARES. \n");
    printf("(2) -- DETERMINAR SI EXISTE EN EL ARREGLO UN MULTIPLO DE (M) \n");
    scanf("%d", &opcion);
    

    switch (opcion) {
        case 1:
            if (todos_pares(N, arreglo)){
                printf("Todos los elementos del arreglo son pares. \n");
            } else {
                printf("NO todos los elementos del arreglo son pares. \n");
            }
            break;

        case 2:
            printf("Ingrese un numero M: \n");
            scanf("%d", &M);

            if (existe_multiplo(M, N, arreglo)){
                printf("Si existe multiplo de M en el arreglo. \n");
            } else {
                printf("NO existe multiplo de M en el arreglo. \n");
            }
            break;
        
        default:
            printf("Opcion NO valida. \n");
            break;
    }

    return 0;
}

bool todos_pares(int tam, int a[]) {
    int i = 0;
    while ( i < tam ) {
        if ( a[i] % 2 != 0 ){
            return false;
        }
        i = i + 1;
    }
    return true;
}

bool existe_multiplo(int m, int tam, int a[]) {
    int i = 0;
    while ( i < tam ) {
        if ( a[i] % m == 0 ){
            return true;
        }
        i = i + 1;
    }
    return false;
}

/*
    EJEMPLOS DE EJECUCION

    Ingrese el elemento (0) del arreglo: 
    2
    Ingrese el elemento (1) del arreglo: 
    3
    Ingrese el elemento (2) del arreglo: 
    5
    Ingrese el elemento (3) del arreglo: 
    8
    Seleccione una opcion: 
    (1) -- DETERMINAR SI TODOS LOS ELEMENTOS DEL ARREGLO SON PARES. 
    (2) -- DETERMINAR SI EXISTE EN EL ARREGLO UN MULTIPLO DE (M) 
    1
    NO todos los elementos del arreglo son pares.



    Ingrese el elemento (0) del arreglo: 
    3
    Ingrese el elemento (1) del arreglo: 
    3
    Ingrese el elemento (2) del arreglo: 
    5
    Ingrese el elemento (3) del arreglo: 
    2
    Seleccione una opcion: 
    (1) -- DETERMINAR SI TODOS LOS ELEMENTOS DEL ARREGLO SON PARES. 
    (2) -- DETERMINAR SI EXISTE EN EL ARREGLO UN MULTIPLO DE (M) 
    2
    Ingrese un numero M: 
    5
    Si existe multiplo de M en el arreglo.
*/