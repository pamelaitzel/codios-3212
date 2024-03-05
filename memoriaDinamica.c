#include <stdio.h>
#include <stdlib.h>

int main() {
    int *puntero = (int*)malloc(sizeof(int));
    *puntero = 42;
    printf("Valor almacenado: %d\n", *puntero);
    free(puntero);
    return 0;
}
