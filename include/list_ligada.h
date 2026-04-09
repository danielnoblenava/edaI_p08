#ifndef __LIST_LIGADA_H__
#define __LIST_LIGADA_H__

#include "nodo.h"

typedef struct Dlista Dlista;

struct Dlista{
    Nodo* head;
    Nodo* tail;
};

Dlista* lista_crear();
bool lista_insertar_vacia(Dlista *l, void *info, size_t size);
bool lista_insertar_inicio(Dlista *l, void *info, size_t size);
bool lista_insertar_fin(Dlista *l, void *info, size_t size);
bool lista_insertar_x_pos(Dlista *l, int pos, void *info, size_t size);