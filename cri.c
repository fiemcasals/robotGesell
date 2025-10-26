#include <stdio.h>
#include <string.h> // para usar strcmp

int main() {

    char nombre[100];

printf("Ingresa tu nombre: "); 
scanf("%s", nombre);

if (strcmp(nombre, "Cristian") == 0) { // compara si el nombre es "Cristian"
    printf("¡Hola Cristian! Que gusto verte.\n");
} else {
    printf("Lo siento, este saludo es solo para Cristian.\n");
}

return 0;
}