#ifndef __NODO__H
#define __NODO__H

#include <stdio.h>
#include <stdlib,h>
#include <stddef.h>
#include <stdbool.h>

typedef struct Nodo Nodo;

Nodo{
    void *info;
    Nodo *sig;
    Nodo *ant;
};

Nodo *nodo_crear(void *info, size_t size);
void nodo_eliminar(Nodo *nodo);
bool nodo_actualizar(void *info, size_t size);
#endif