#include <stdio.h>

int main() {
    const char *nombre = "Juan"; // puntero a char constante
    printf("Nombre: %s\n", nombre);

    // nombre[0] = 'P';   // ❌ error: el contenido es constante
    nombre = "Pedro";     // ✅ permitido: cambiamos a otro string

    printf("Nuevo nombre: %s\n", nombre);
    return 0;
}
