#include <stdio.h>
#include <stdlib.h>

typedef struct fila { 
    int*dados; 
    int N, p, u; 
} fila;
// N = tamanho, P = próximo, U = último

int desenfileira (fila* f, int* y) {
    fila * aux = f -> p; // variável auxiliar para manipulação
    if (aux == NULL){
        return 0;
    } else{
        *y = aux->dados; 
        f->p = aux->p; // removendo 
        f->N = f->N-1;
               
        free (aux);
        return 1;
    }
}
