#include <stdio.h>

// Función para calcular el factorial de un número de manera recursiva
unsigned long long factorial(unsigned int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    unsigned int n = 20;
    unsigned long long result = factorial(n);
    printf("Factorial de %u es %llu\n", n, result);
    return 0;
}
