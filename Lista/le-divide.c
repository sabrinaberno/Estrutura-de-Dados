#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void divide_lista(celula*l, celula*l1, celula*l2) {
    
    for (l = l->prox; l != NULL; l = l->prox) {
        if (l->dado % 2 == 0) {
            l2->prox = l;
            l2 = l2->prox;
        } else {
            l1->prox = l;
            l1 = l1->prox;
        }
    }

    l1 -> prox = NULL;
    l2 -> prox = NULL;
}