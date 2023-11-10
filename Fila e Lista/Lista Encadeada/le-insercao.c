#include <stdio.h>
#include <stdlib.h>

typedef struct celula{ 
    int dado; 
    struct celula*prox; 
}celula;

void insere_inicio (celula* le, int x) {
    celula * aux = malloc(sizeof (le));
    aux->dado = x;
    aux->prox = le->prox;
    le->prox = aux;
}

void insere_antes(celula*le,int x,int y){
    celula *aux = le;
    celula * celula_inserir = malloc(sizeof (celula));

    celula_inserir->dado = x;
    celula_inserir->prox = NULL;


    while (aux->prox != NULL) {
        if (aux->prox->dado == y) {
            celula_inserir->prox = aux->prox;
            aux->prox = celula_inserir;
            return;
        }
        aux = aux->prox;
    }

    aux->prox = celula_inserir;
}      
