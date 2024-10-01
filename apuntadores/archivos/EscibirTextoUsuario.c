#include <stdio.h>

int main() {
    FILE* Archivo = fopen("Prueba.txt", "a");
    if(Archivo == NULL)
        printf("Error al intentar crear/acceder al archivo\n");
    else{
        char letra;
        //* Mientras que el usuario no presione enter
        while ((letra = getchar()) != '\n')
        {
            fputc(letra,Archivo); //! Escribe lo que digite el Usuario
        }
    }
    fclose(Archivo);

    return 0;
}