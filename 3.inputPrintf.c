#include <stdio.h>

int main() {

    char nombre[100]; // si yo no defino a continuacion el nombre, debo especificar el tamanio del array
    printf("ingresa tu nombre: ");
    scanf("%s", nombre);//se usa %s para cuardar un string


    printf("\nhola %s\n", nombre);//se usa %s para imprimir un string

    return 0;
}