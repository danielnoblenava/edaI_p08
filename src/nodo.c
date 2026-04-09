#include "nodo.h"

Nodo *nodo_crear(void *info, size_t size){
    Nodo* new = (Nodo*)malloc(sizeof(Nodo));
    new->sig = new->ant = NULL;
    new->info = malloc(size);
    memcpy(new->info, info, size);
    return new;
}


void nodo_eliminar(Nodo *nodo){
    if(!nodo){
        if(nodo->ant == NULL && nodo->sig == NULL){
            free(nodo->info);
            free(nodo);
        }
    }else{
        printf("\nEl nodo no se puede borrar");
    }
}


bool nodo_actualizar(Nodo *nodo, void *info, size_t size){
    nodo->info = realloc(nodo->info, size);
    if(!nodo->info ) return false;
    memcpy(nodo->info, info, size);
}

