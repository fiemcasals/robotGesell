#include <stdio.h>

int main() {
    int contador = 1;

    // Primer ejemplo: contar de 1 a 5
    printf("=== Conteo con while ===\n");
    while (contador <= 5) {
        printf("Iteracion %d\n", contador);
        contador++;
    }

    // Segundo ejemplo: pedir números hasta que el usuario ingrese 0
    printf("\n=== Ingreso de numeros (0 para salir) ===\n");
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    while (numero != 0) {
        printf("Ingresaste: %d\n", numero);
        printf("Ingrese otro numero (0 para salir): ");
        scanf("%d", &numero);
    }

    printf("Programa terminado.\n");
    return 0;
}
