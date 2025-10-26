//¿Qué hace 'sizeof' en C?

//sizeof devuelve el tamaño en bytes que ocupa en memoria una variable o un tipo de dato.

//Sintaxis:
//sizeof(expresion)
//sizeof(tipo_de_dato)


//Ejemplos básicos


#include <stdio.h> //para operar con printf y sizeof, entre otros

int main() {
    printf("sizeof(char) = %zu\n", sizeof(char));   // normalmente 1 byte
    printf("sizeof(int)  = %zu\n", sizeof(int));    // ej: 4 bytes
    printf("sizeof(float) = %zu\n", sizeof(float)); // ej: 4 bytes
    printf("sizeof(double) = %zu\n", sizeof(double)); // ej: 8 bytes

    int x = 10;
    printf("sizeof(x) = %zu\n", sizeof(x));         // mismo que sizeof(int)

//Uso con arrays:  sizeof es muy útil con arrays, porque devuelve el tamaño total en bytes del arreglo completo.

    int numeros[10];
    printf("sizeof(numeros) = %zu\n", sizeof(numeros));         // ej: 40 si int=4 bytes
    printf("sizeof(numeros[0]) = %zu\n", sizeof(numeros[0]));   // ej: 4
    printf("Cantidad de elementos = %zu\n", sizeof(numeros) / sizeof(numeros[0]));

    return 0;
}