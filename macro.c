#include <stdio.h>

// Macro para calcular el cuadrado de un número
#define SQUARE(x) ((x) * (x))

// Función inline para calcular el cubo de un número
static inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num = 5;
    int square_result = SQUARE(num);
    int cube_result = cube(num);

    printf("Cuadrado de %d: %d\n", num, square_result);
    printf("Cubo de %d: %d\n", num, cube_result);

    return 0;
}
