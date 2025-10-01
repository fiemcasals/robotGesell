#include <stdio.h>

// Función auxiliar: imprime un entero en binario de 4 bits (para este ejemplo)
void printBin(int num) {
    for (int i = 3; i >= 0; i--) {
        printf("%d", (num >> i) & 1); // desplazamos y aplicamos AND con 1
    }
}

int main() {
    // ----------------------
    // Operadores bit a bit
    // ----------------------
    printf("\nOperadores Bit a Bit:\n");
    int m = 6, n = 3; // 6 = 0110 en binario, 3 = 0011 en binario

    printf("m = %d -> ", m); printBin(m); printf("\n");
    printf("n = %d -> ", n); printBin(n); printf("\n\n");

    // AND
    printf("m & n = %d -> ", m & n);
    printBin(m); printf(" AND "); printBin(n); printf(" = "); printBin(m & n); printf("\n");

    // OR
    printf("m | n = %d -> ", m | n);
    printBin(m); printf(" OR  "); printBin(n); printf(" = "); printBin(m | n); printf("\n");

    // XOR
    printf("m ^ n = %d -> ", m ^ n);
    printBin(m); printf(" XOR "); printBin(n); printf(" = "); printBin(m ^ n); printf("\n");

    // NOT
    printf("~m = %d -> ", ~m);
    printf("NOT "); printBin(m); printf(" = ... (depende del tamaño del entero, complemento a 2)\n");

    // Desplazamiento a la izquierda
    printf("m << 1 = %d -> ", m << 1);
    printBin(m); printf(" <<1 = "); printBin(m << 1); printf("\n");

    // Desplazamiento a la derecha
    printf("m >> 1 = %d -> ", m >> 1);
    printBin(m); printf(" >>1 = "); printBin(m >> 1); printf("\n");

    return 0;
}
