#include <stdio.h>

enum Meses {ENERO, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE};

int main() {
    enum Meses mes = MARZO;
    printf("Mes: %d\n", mes); // Imprime "2"
    return 0;
}
