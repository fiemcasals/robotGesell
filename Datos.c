#include<stdio.h>

int main(){
    int entero = 19;
    float flotantedecimal = 1.6081;
    char caracter = 'F';
    char cadenastring [] = "Hola, en prueba";

    printf("Entero: %d\n", entero); //%d enteros
    printf("Flotante: %f\n", flotantedecimal); //%f flotantes
    printf("Flotante 2: %2.f\n", flotantedecimal); //%2.f flotantes hasta 2 decimales
    printf("Caracter: %c\n", caracter); //%c caracteres
    printf("Cadena: %s\n", cadenastring);//%s cadenas o strings

    return 0;

}