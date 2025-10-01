#include <stdio.h>

int main() {
    const double PI = 3.141592653589793;  // constante, no se puede modificar
    double radio = 5.0;
    double area = PI * radio * radio;

    printf("Radio: %.2f\n", radio);
    printf("Area del circulo: %.4f\n", area);

    // Esto daría error si lo descomentas:
    // PI = 3.15;  // ❌ no se puede cambiar porque es const

    return 0;
}
