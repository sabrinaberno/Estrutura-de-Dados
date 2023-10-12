#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;


celula *busca (celula *le, int x){
    celula * aux = le->prox;
    for (aux; aux != NULL; aux = aux->prox){
        if (aux->dado == x){
            return aux;
        }
    }   
    return NULL;
}


celula *busca_rec(celula *le, int x) {

    if (le == NULL) {
        return NULL;
    } else {
        if (le->dado == x) {
            return le;
        } 
        return busca_rec (le->prox, x);
    }
    
}