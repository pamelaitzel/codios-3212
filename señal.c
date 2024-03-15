#include <stdio.h>
#include <signal.h>

void manejarSenal(int senal) {
    printf("Se recibió la señal %d\n", senal);
}

int main() {
    signal(SIGINT, manejarSenal);
    printf("Esperando la señal SIGINT (Ctrl+C)...\n");
    while (1) {
        // Esperar la señal
    }
    return 0;
}
