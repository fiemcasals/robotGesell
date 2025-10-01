#include <stdio.h>
#include <stdbool.h>  // habilita bool, true, false
#include <string.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 5;

    // expresiones lógicas: devuelven 1 (true) o 0 (false)
    bool r1 = (a == b);   // false 
    bool r2 = (a == c);   // true
    bool r3 = (b > a);    // true

    printf("a == b: %d\n", r1); // imprime 0
    printf("a == c: %d\n", r2); // imprime 1
    printf("b > a : %d\n", r3); // imprime 1

    //para verificar si son distintos
    printf("a != b: %d\n", (a != b)); // imprime 1

    // uso en if
    if (r2) {
        printf("a es igual a c\n");
    }

    // lógica compuesta
    bool r4 = (r2 && r3);  // true && true = true
    printf("a==c Y b>a -> %d\n", r4);

    //para evaluar or
    bool r5 = (r1 || r3);  // false || true = true
    printf("esto va a imprimir verdadero si alguna de las dos es verdadera, %d o %d -> %d\n", r1, r3, (r1||r3));


    return 0;
}