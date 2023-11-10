#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{ 
    int*v; 
    int N, topo; 
} pilha;

int empilha (pilha*p, int x){

    if (p->topo == p->N){
        p->v = realloc(p->v, 2*p-> N*(sizeof(int)));
        p->N *= 2;
    }

    p->v[p->topo] = x;
    p->topo++;
    return 1;
}

int desempilha (pilha*p, int *y){

    if (p->topo == 0){
        return 0;
    }

    p->topo--;
    *y = p->v[p->topo];
    return 1;
}