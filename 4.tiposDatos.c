#include<stdio.h>

int main() {

    int entero = 5; //1, 54, 89
    float flotante = 5.99; //1.99, 2.50, 3.75
    char caracter = 'D';
    char cadena[] = "hola";

    printf("entero: %d\n", entero); // %d para enteros
    printf("flotante: %.2f\n", flotante); // %f para flotantes, .2 para limitar a 2 decimales
    printf("caracter: %c\n", caracter); // %c para caracteres
    printf("cadena: %s\n", cadena); // %s para cadenas

    return 0;
}