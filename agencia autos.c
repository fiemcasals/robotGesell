#include<stdio.h>
typedef struct {
    int id;
    char marca[50];
    char modelo[50];
    int anio;
} automovil;

int main() {
    int opcion;

    printf("CARGA DE DATOS DE AUTOMOVILES\n");
    printf("INGRESE 1 PARA CARGAR DATOS\n");
    printf("INGRESE 0 PARA SALIR\n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1: {
            automovil auto1;

            printf("Ingrese ID del automovil: ");
            scanf("%d", &auto1.id);

            printf("Ingrese marca del automovil: ");
            scanf("%s", auto1.marca);

            printf("Ingrese modelo del automovil: ");
            scanf("%s", auto1.modelo);

            printf("Ingrese anio del automovil: ");
            scanf("%d", &auto1.anio);

            printf("\nDATOS DEL AUTOMOVIL CARGADO:\n");
            printf("ID: %d\n", auto1.id);
            printf("Marca: %s\n", auto1.marca);
            printf("Modelo: %s\n", auto1.modelo);
            printf("Anio: %d\n", auto1.anio);
            break;
        }
        case 0:
            printf("Saliendo del programa.\n");
            break;
        default:
            printf("Opcion no valida.\n");
    }

    return 0;
}