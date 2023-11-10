#include <stdio.h>
#include <stdlib.h>

typedef struct celula{ 
    int dado; 
    struct celula*prox; 
}celula;

int empilha(celula*p, int x) {
    celula * topo = malloc(sizeof (celula));
    topo->dado = x;
    topo->prox = p->prox;
    p->prox = topo;
}

int desempilha(celula*p, int* y) {
    celula * aux = malloc(sizeof (celula));
    aux = p->prox;
    
    if (aux == NULL){
        return 0;
    } 

    *y = aux->dado;
    p->prox = aux->prox;
    free(aux);
    return 1;
}