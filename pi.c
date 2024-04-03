#include <stdio.h>
#define PI 3.14159265359

int main() {
    float radio, area;

    // Solicitar al usuario que ingrese el radio del círculo
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);

    // Calcular el área del círculo
    area = PI * radio * radio;

    // Mostrar el resultado
    printf("El área del círculo con radio %.2f es: %.2f\n", radio, area);

    return 0;
}
