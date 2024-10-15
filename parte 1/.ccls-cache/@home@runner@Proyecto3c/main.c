#include <stdio.h>

int main(void) {
  int x, y, z, b, w;


  // EJERCICIO 3

    printf("Ingrese x: \n");
    scanf("%d", &x);

    x = 5; 

    printf("x: %d \n", x);

    /*
    EJEMPLOS DE EJECUCION
    Ingrese x: 
    1
    x: 5 
    Ingrese x: 
    3
    x: 5
    Ingrese x: 
    7842
    x: 5
    */

    printf("Ingrese x: \n");
    scanf("%d", &x);

    printf("Ingrese y: \n");
    scanf("%d", &y);

    x = x + y;
    y = y + y;

    printf("x: %d \n", x);
    printf("y: %d \n", y);

    /*
    EJEMPLOS DE EJECUCION
    Ingrese x: 
    2
    Ingrese y: 
    5
    x: 7 
    y: 10

    Ingrese x: 
    5
    Ingrese y: 
    2
    x: 7 
    y: 4 
    
    Ingrese x: 
    100
    Ingrese y: 
    200
    x: 300 
    y: 400
    */

    // 1.c
    printf("Ingrese x: \n");
    scanf("%d", &x);

    printf("Ingrese y: \n");
    scanf("%d", &y);

    y = y + y;
    x = x + y;


    printf("x: %d \n", x);
    printf("y: %d \n", y);

    /*
    EJEMPLOS DE EJECUCION
    Ingrese x: 
    2
    Ingrese y: 
    5
    x: 7 
    y: 10

    Ingrese x: 
    5
    Ingrese y: 
    2
    x: 7 
    y: 4 
    
    Ingrese x: 
    100
    Ingrese y: 
    200
    x: 300 
    y: 400
    */

  return 0;
}