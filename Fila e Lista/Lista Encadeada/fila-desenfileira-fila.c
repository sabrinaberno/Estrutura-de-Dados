#include <stdio.h>
#include <stdlib.h>

typedef struct celula{ 
    int dado; 
    struct celula*prox; 
}celula;

int desenfileira(celula *f, int* y) {
    celula * aux = f -> prox; // variável auxiliar para manipulação
    if (aux == NULL){
        return 0;
    } else{
        *y = aux->dado; 
        f->prox = aux->prox; // removendo 
        free (aux);
        return 1;
    }
}