// Utilizar ña funcio fopen(), para determinar si existe un archivo de texto (.txt) o no

/*
fopen(nombre archivo, modo);

    nombre archivo = cadena ... Contiene el identificador externo del archivo
    modo = cadena           ... Contiene el modo en que va a ser tratado el archivo

*/

#include <stdio.h>

int main() {
    FILE *fd;
    char *direccion = "/home/george/ubuntu/token.txt";

    fd = fopen(direccion, "r"); // "r" = read -> leer

    if (fd == NULL)
    {
        printf("El archivo no existe\n");
    }else {
        printf("Se encontro el Archivo\n");
        printf("Su ubicacion es: %s\n", direccion);
    }
    
}