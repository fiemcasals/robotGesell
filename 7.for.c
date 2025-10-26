#include<stdio.h>

//vamos a generar listas
int main() {
    int lista[] = {1,2,3,4,5,6,7};

    //vamos a imprimir todos los elementos de la lista
    for(int i=0; i<7; i++){
        printf("el elemento %d de la lista es: %d\n", i, lista[i]);
    }
    
    //cambiamos los pasos de incrementos de for
    for (int i = 0; i <= 20; i += 5) {
        printf("%d ", i);  // imprime: 0 5 10 15 20
    }
    printf("\n");

    for (int i = 10; i > 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i > -11; i--) {
        printf("%d ", i);
    }
    printf("\n");

    //Podés dejar una sección vacía (se evalúa como siempre verdadera).
    for (int i = 0; ; i++) {
        if (i == 3) break;  // rompe el bucle
        printf("%d ", i);
    }
    printf("\n");

    //Se pueden omitir partes si ya están definidas antes o se hacen dentro del cuerpo.
    int i = 0;
    for ( ; i < 3; ) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    //Podés inicializar y actualizar más de una variable.
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i=%d, j=%d\n", i, j);
    }
    printf("\n");

    
    return 0;
}

