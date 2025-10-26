#include <stdio.h>

int main() {
    int x = 10, y = 20;
    int * const ptr = &x;   // el puntero es constante

    printf("Valor: %d\n", *ptr);

    *ptr = 15;   // ✅ puedo modificar lo apuntado
    // ptr = &y; // ❌ error: el puntero no puede apuntar a otra variable

    return 0;
}
