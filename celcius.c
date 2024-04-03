#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Solicitar al usuario que ingrese la temperatura en grados Celsius
    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    // Convertir Celsius a Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Mostrar el resultado
    printf("%.2f grados Celsius equivalen a %.2f grados Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
