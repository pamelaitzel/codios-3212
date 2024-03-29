#include <stdio.h>
#include <stdlib.h>

int main() {
    // Ejemplo de asignación dinámica de memoria para un arreglo de enteros
    int n = 5;
    int *arr = (int *)malloc(n * sizeof(int));

    // Uso del arreglo dinámico
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }

    // Liberar memoria
    free(arr);

    return 0;
}
