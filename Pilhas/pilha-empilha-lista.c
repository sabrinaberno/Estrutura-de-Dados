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