#include <stdio.h>

/*
Un puntero a un archivo es un puntero a una informacion, que define varias cosas sobre el, incluyendo el nombre,
el estado y la posicion actual del archivo. En esencia identifica un archivo especifico y utliza la secuencia asociada
para dirigir el funcionamiento de las funciones de E/S con buffer.
Un puntero a un archivo es una variable de tipo puntero al tipo FILE que se define en STDIO.H
Un programa nevesita utilizar punteros a archivos para leer o escribir en los mismos.
Para obtener una variable de este tipo se utliza una secuencia como esta: FILE *F;
*/

int main() {
    //Creamos el apuntador * y lo igualamos a lo que devuelva fopen
    //! Recuerda que el archivo no existe y se creará automaticamente

    FILE *Archivo = fopen("Prueba.txt", "a");
    //? Verificacion (NULL es el macro para la memoria nula)

    if (Archivo == NULL)
    {
        printf("ERROR al intentar crear/acceder al archivo");
    }else{
        //* Definimos un texto y lo escribimos en el archivo
        char Texto[] = "hola mundo";
        fprintf(Archivo,"%s",Texto);
    }

    // Pase lo que pase cerramos el archivo
    fclose(Archivo);

    return 0;
    
}