#include "list_ligada.h"

bool lista_insertar_vacia(Dlista *l, void *info, size_t size){
    Nodo *new = nodo_crear(info, size);
    l->head = new;
    l->tail = new;
    return true;
}

bool lista_insertar_inicio(Dlista *l, void *info, size_t size){
    if(!l) return false;
    Nodo *nuevo = nodo_crear(info, size);
    nuevo->sig = l->head;
    l->head->ant = nuevo;
    l->head = nuevo;
    return true;
}

bool lista_insertar_fin(Dlista *l, void *info, size_t size){
    if(!l) return false;
    Nodo *nuevo = nodo_crear(info, size);
    nuevo->ant = l->tail;
    l->tail->sig = nuevo;
    l->tail = nuevo;
    return true;
}

bool Dlista_es_vacia(Dlista *l){
    if(l->head == NULL) return true;
    return false;
}
bool lista_insertar_x_pos(Dlista *l, int pos, void *info, size_t size){
    if(!l) return false;
    if(Dlista_es_vacia(l)) Dlista_insertar_inicio(l, info, s);
     
}