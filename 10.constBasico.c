#include <stdio.h>

int main() {
    const int x = 10;  // x es constante, no se puede modificar

    printf("El valor de x es %d\n", x);

    // Esto da error si lo descomentas:
    // x = 20;  // ❌ error: assignment of read-only variable

    return 0;
}
