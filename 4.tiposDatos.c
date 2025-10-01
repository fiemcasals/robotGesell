#include<stdio.h>

int main() {

    int entero = 5;
    float flotante = 5.99;
    char caracter = 'D';
    char cadena[] = "hola";

    printf("entero: %d\n", entero); // %d para enteros
    printf("flotante: %.2f\n", flotante); // %f para flotantes, .2 para limitar a 2 decimales
    printf("caracter: %c\n", caracter); // %c para caracteres
    printf("cadena: %s\n", cadena); // %s para cadenas

    return 0;
}