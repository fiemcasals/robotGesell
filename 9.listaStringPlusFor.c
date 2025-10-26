#include <stdio.h>

int main() {
    // En C, un string es en realidad un "array de caracteres"
    // Usamos * (puntero) porque un string se representa como 
    // la dirección de memoria del primer carácter.
    // Por eso un string es "char *" (puntero a char).

    // Creamos una lista (array) de strings:
    const char *nombres[] = { //yo dentro de los corchetes pongo la cantidad de elementos o lo dejo vacio para que lo calcule automaticamente
        "Juan",
        "Maria",
        "Pedro",
        "Ana",
        "Luis"
    };

    // Calculamos cuántos elementos tiene la lista:
    int cantidad = sizeof(nombres) / sizeof(nombres[0]);

    // Acceso directo a una posición fija:
    printf("El segundo nombre en la lista es: %s\n", nombres[1]);

    // Recorrer toda la lista con un for:
    printf("Lista completa de nombres:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("nombres[%d] = %s\n", i, nombres[i]);
    }

    return 0;
}
