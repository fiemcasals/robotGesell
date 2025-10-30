#include <stdio.h>
#include <stdbool.h>

int main(){
    // --LIBROS--
    bool libro1comprado = true;
    bool libro1leido = true;
    bool libro1favorito = true;

    bool libro2comprado = true;
    bool libro2leido = true;
    bool libro2favorito = false;

    bool libro3comprado = false;
    bool libro3leido = false;
    bool libro3favorito = false;

    // 1 (true) o 0 (false)
    printf("Lei el libro 1 y 2: %d\n", libro1leido == libro2leido);
    printf("Tienen el mismo estado de lectura los libros 2 y 3: %d\n", libro2leido == libro3leido);

    // operador de desigualdad !=
    printf("Debo comprar el libro 3: %d\n", libro3comprado != true);

    // if
    if (libro1favorito){
        printf("El libro 1 es mi favorito\n");
    }

    if (libro2leido){
        printf("El libro 2 lo lei\n");
    }

    if (!libro3comprado){
        printf("No compre el libro 3\n");
    }
     
    //AND logico &&
    if (libro1comprado && libro1leido && libro1favorito){
        printf("El libro 1 lo compre, lo lei y es mi favorito\n");
    }
    
    //OR logico ||
    if (!libro1comprado || !libro2comprado || !libro3comprado){
        printf("Debo comprar al menos un libro\n");
    }
}