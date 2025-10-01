#include <stdio.h>

int main() {
    int a = 10, b = 3;

    // ----------------------
    // Operadores aritméticos
    // ----------------------
    printf("Aritméticos:\n");
    printf("a + b = %d\n", a + b); // suma
    printf("a - b = %d\n", a - b); // resta
    printf("a * b = %d\n", a * b); // multiplicación
    printf("a / b = %d\n", a / b); // división entera
    printf("a %% b = %d\n", a % b); // módulo (resto)
    
    // ----------------------
    // Operadores de asignación
    // ----------------------
    printf("\nAsignación:\n");
    int x = 5;
    x += 2; // x = x + 2
    printf("x += 2 -> %d\n", x);
    x -= 1; // x = x - 1
    printf("x -= 1 -> %d\n", x);
    x *= 3; // x = x * 3
    printf("x *= 3 -> %d\n", x);
    x /= 2; // x = x / 2
    printf("x /= 2 -> %d\n", x);
    x %= 4; // x = x % 4
    printf("x %%= 4 -> %d\n", x);

    // ----------------------
    // Operadores de comparación
    // ----------------------
    printf("\nComparación:\n");
    printf("a == b -> %d\n", a == b);
    printf("a != b -> %d\n", a != b);
    printf("a > b  -> %d\n", a > b);
    printf("a < b  -> %d\n", a < b);
    printf("a >= b -> %d\n", a >= b);
    printf("a <= b -> %d\n", a <= b);

    // ----------------------
    // Operadores lógicos
    // ----------------------
    printf("\nLógicos:\n");
    int c = 1, d = 0;
    printf("c && d -> %d\n", c && d); // AND
    printf("c || d -> %d\n", c || d); // OR
    printf("!c -> %d\n", !c);         // NOT

    // ----------------------
    // Incremento / Decremento
    // ----------------------
    printf("\nIncremento / Decremento:\n");
    int y = 5;
    printf("y   = %d\n", y);
    printf("y++ = %d\n", y++); // post-incremento
    printf("Ahora y = %d\n", y);
    printf("++y = %d\n", ++y); // pre-incremento
    printf("y-- = %d\n", y--); // post-decremento
    printf("Ahora y = %d\n", y);
    printf("--y = %d\n", --y); // pre-decremento

    // ----------------------
    // Operadores bit a bit
    // ----------------------
   
    //ver 15.operadoresBitBit.c

    return 0;
}
