#include <stdio.h>

int main() {
    int numero = 10;
    int *pNumero;
    printf("Dato: %i",numero);
    printf("\nPosicion %p", &numero);

    pNumero = &numero; //&numero = posicion en memoria de numero
    printf("\nValor de la variable:");
    printf("\nDato: %i", numero);
    printf("\nDato: %i", *pNumero);

    printf("\nPosicion en memoria:");
    printf("\nPosicion: %p", &numero);
    printf("\nPosicion: %p\n", pNumero);

    return 0;
}