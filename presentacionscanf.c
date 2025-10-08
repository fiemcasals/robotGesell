#include<stdio.h>
#include<stdlib.h>

char nombre[30];
char apellido[30];

int main() {
    // Presentación simple
    printf("hola, ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Saludos %s, ahora ingrese su apellido\n", nombre);
    scanf("%s", apellido);
    printf("¡Mucho gusto %s %s!\n", nombre, apellido);
    system("pause");
    return 0;
}   
