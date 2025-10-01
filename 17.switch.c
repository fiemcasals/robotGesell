#include <stdio.h>

int main() {
    int opcion;

    printf("Menu:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    switch (opcion) { //solo acepta int o char
        case 1:
            printf("Eligio SUMAR\n");
            break;
        case 2:
            printf("Eligio RESTAR\n");
            break;
        case 3:
            printf("Eligio MULTIPLICAR\n");
            break;
        case 4:
            printf("Eligio DIVIDIR\n");
            break;
        default: // si no coincide con ningún caso
            printf("Opcion invalida\n");
            break;
    }

    return 0;
}

