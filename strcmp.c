#include<stdio.h>
#include<string.h> //para usar strcmp

int main() {

   
    //ejemplo yo solo quiero saludar a juan

    char nombre[100];

    printf("ingresa tu nombre: ");
    scanf("%s", nombre);//se usa %s para cuardar un string
       

    if (strcmp(nombre, "juan") == 0) { //strcmp compara dos strings, si son iguales devuelve 0
        printf("hola juan\n");
    } else {
        printf("no eres juan\n");
    }

    return 0;
}

/*
strcmp 
0→ las cadenas son iguales

<0 → la primera cadena es "menor" que la segunda (comparación lexicográfica, carácter por carácter)

>0 → la primera cadena es "mayor" que la segunda*/