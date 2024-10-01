//Paso de parámetro por valor

#include <stdio.h>
void agregar(int a);
void agregarr();
int main() {

    int numero;
    printf("Escribe un numero:\n");
    scanf("%d", &numero);
    agregar(numero); //Paso por parametro no lo modifica
    printf("\nValor despues de la funcion por valor: %d", numero);
    agregarr(&numero);// Paso por refrencia SI modifica el valor
    printf("\nValor depues del paso por referencia: %d", numero);
    printf("\n");

    return 0;
}

void agregar(int a) {
    a += 10;
}
void agregarr(int *a){
    *a+=10;
}