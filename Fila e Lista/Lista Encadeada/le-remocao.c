#include <stdio.h>
#include <stdlib.h>

typedef struct celula{ 
    int dado; 
    struct celula*prox; 
}celula;


int remove_depois (celula*p) {
    if (p!= NULL && p->prox != NULL){
        //apontando para a celula anterior a que eu quero remover
        celula *aux = p->prox;
        int lixo = aux->dado;
        p->prox = aux->prox;
        free(aux);
        return lixo;
    }
}

void remove_elemento(celula*le,int x){
    celula *aux = le;
    celula *temp;

    while (aux->prox != NULL) {
        if (aux->prox->dado == x) {
            temp = aux->prox;
            aux->prox = temp->prox;
            free(temp);            
            return;
        }
        aux = aux->prox;
    }
}    

void remove_todos_elementos (celula*le,int x){
    celula *aux = le;
    celula *temp;

    while (aux->prox != NULL) {
        if (aux->prox->dado == x) {
            temp = aux->prox;
            aux->prox = temp->prox;
            free(temp);    
        } else {
            aux = aux->prox;
        }
    }
}
