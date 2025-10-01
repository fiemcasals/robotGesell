#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    // Ejemplo de condicionales
    if (numero > 0) {
        printf("El numero es positivo.\n");
    } else if (numero == 0) {   // equivalente a "elif" en Python
        printf("El numero es cero.\n");
    } else {
        printf("El numero es negativo.\n");
    }

    return 0;
}
