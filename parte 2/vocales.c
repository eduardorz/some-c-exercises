// EJERCICIO 4

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define bool _Bool

bool es_vocal(char letra);
char pedir_caracter();

int main(void){
    char letra;
    letra = pedir_caracter();

    if ( es_vocal(letra) ){
        printf("El caracter ingresado ES VOCAL \n");
    } else {
        printf("El caracter ingresado NO ES VOCAL \n");
    }

}

char pedir_caracter(){
    char letra_cualquiera;
    printf("Ingrese un caracter: \n");
    scanf("%c", &letra_cualquiera);
    char letra = tolower(letra_cualquiera);
    return letra;
}

bool es_vocal(char letra) {
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        return true;
    }
    return false;
}

/*
    EJEMPLOS DE EJECUCION

    Ingrese un caracter: 
    e
    El caracter ingresado ES VOCAL

    Ingrese un caracter: 
    x
    El caracter ingresado NO ES VOCAL
*/