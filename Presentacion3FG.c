#include <stdio.h>
#include <string.h>

int main(){
    char nombre [100];

    printf("Ingresar nombre y apellido: ");

    //Lee desde la entrada estandar y lo guarda, sizeof asegura el limite de caracrteres.
    if(fgets(nombre, sizeof(nombre), stdin) != NULL)

    //Eliminar salto de linea
    char *p = strchr(nombre, '\n'); //Busca el salto de linea, el enter.
    if (p) *p = '\0'; //Lo reemplaza por un caracter nulo.

    printf("Hola %s\n", nombre);



}