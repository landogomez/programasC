//Escribe un programa en el cual se soliciten al usuario 2 valores (alamcenadas en 2 variabñles)
// y mediante una funcion* que no devuelva ningun valor y que utilice paso por referencia, se calcule:
// a) El resultado de elevar el primero a la potencia que indique el segundo
// b) La division del valor obtenido en el inciso a y el primer valor ingresado
// Ejemplo: si el usuario ingresa 8 y 4 
// a) 8⁴ = 4096
// b) 4096 / 8 = 512

#include <stdio.h>
#include <math.h>

void funcion(int *a, int *b);

int main() {

    int a,b;
    printf("Dme dos valores:");
    scanf("%d %d", &a,&b);

    funcion(&a, &b);

    printf("\nLos valores son: %d\t %d", a,b);
    
}

void funcion(int *a, int *b) {
    int r1;
    r1 = pow(*a,*b);
    *b = r1 / *a;
    *a = r1;

}