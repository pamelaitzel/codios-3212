#include <stdio.h>
#include <stdlib.h>

struct NodoArbol {
    int dato;
    struct NodoArbol *izquierdo;
    struct NodoArbol *derecho;
};

struct NodoArbol *crearNodo(int dato) {
    struct NodoArbol *nuevoNodo = (struct NodoArbol*)malloc(sizeof(struct NodoArbol));
    nuevoNodo->dato = dato;
    nuevoNodo->izquierdo = NULL;
    nuevoNodo->derecho = NULL;
    return nuevoNodo;
}

int main() {
    struct NodoArbol *raiz = crearNodo(1);
    raiz->izquierdo = crearNodo(2);
    raiz->derecho = crearNodo(3);
    // Puedes seguir construyendo el árbol y realizando operaciones sobre él
    // No olvides liberar la memoria cuando hayas terminado de usar el árbol
    return 0;
}
