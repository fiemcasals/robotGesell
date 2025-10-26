#include <stdio.h>

// Definición de la estructura
struct Persona {
    char nombre[50];
    int edad;
    float altura;
    float peso;
};

int main() {
    int n;//guarda un valor aleatorio por defecto

    printf("¿Cuántas personas desea registrar? ");
    scanf("%d", &n);

    struct Persona personas[n];  // Arreglo de estructuras

    // Cargar datos
    for (int i = 0; i < n; i++) {
        printf("\nPersona %d:\n", i + 1);

        printf("Nombre: ");
        scanf("%s", personas[i].nombre);

        printf("Edad: ");
        scanf("%d", &personas[i].edad);

        printf("Altura (en metros): ");
        scanf("%f", &personas[i].altura);

        printf("Peso (en kg): ");
        scanf("%f", &personas[i].peso);
    }

    // Mostrar datos
    printf("\n--- Lista de personas registradas ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nPersona %d:\n", i + 1);
        printf("Nombre: %s\n", personas[i].nombre);
        printf("Edad: %d\n", personas[i].edad);
        printf("Altura: %.2f m\n", personas[i].altura);
        printf("Peso: %.2f kg\n", personas[i].peso);
    }

    return 0;
}
