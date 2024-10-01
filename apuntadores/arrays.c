#include <stdio.h>

void llenar(int array[], int dimension);
void imprimir(int array[], int d);
int main() {

    int miVector[5];
    llenar(miVector, 5);
    imprimir(miVector, 5);



    return 0;
}

void llenar(int array[], int dimension) {
    for (int i = 0; i <= dimension; i++)
    {
        printf("\nDame el valor [%d] del array", i);
        scanf("%d", &array[i]);
    }
    
}

void imprimir(int array[], int d) {
    for (int i = 0; i <= d; i++)
    {
        printf("%i\t", array[i]);
    }
    
}