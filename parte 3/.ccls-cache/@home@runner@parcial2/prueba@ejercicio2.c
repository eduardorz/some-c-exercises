// ejercicio 2

#include <stdio.h>

int pedir_entero(char name);
void imprimir_entero(int x, char name);


int main() {
    // {Pre: x = X, y = Y, z = Z, Y > X, X > 0}
    int x, y, z, aux_x, aux_y, aux_z;

    x = pedir_entero('x');
    y = pedir_entero('y');
    z = pedir_entero('z');
    

    if( x <= y ){
        aux_x = y * z;
        aux_y = z + y + x;
        aux_z = x + y;
        x = aux_x;
        y = aux_y;
        z = aux_z;
    } else {
        aux_x = y;
        y = z;
        z = x;
        x = aux_x;
    }

    // {Pos: (X≤Y ∧ (x=Y*Z ∧ y=Z+Y+X ∧ z=X+Y)) ∨ (X>Y ∧ (x=Y ∧ y=Z ∧ z=X))}

    imprimir_entero(pedir_entero('x'), 'x');
    imprimir_entero(pedir_entero('y'), 'y');
    imprimir_entero(pedir_entero('z'), 'z');

    return 0;
}

int pedir_entero(char name) {
  int x;
  printf("Ingrese un valor entero para la variable %c: ", name);
  scanf("%d", &x);
  return x;
}

void imprimir_entero(int x, char name) {
  printf("El valor entero que ingresaste para la variable %c es: %d", name, x);
}