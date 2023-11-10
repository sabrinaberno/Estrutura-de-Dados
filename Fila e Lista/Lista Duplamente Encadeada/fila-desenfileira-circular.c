#include <stdio.h>
#include <stdlib.h>

typedef struct fila { 
    int*dados; 
    int N, p, u; 
} fila;

int desenfileira (fila* f, int* y) {
    if (f == NULL) {
        return 0; // Queue is empty
    }

    *y = f->dados[f->p]; 
    f->p = (f->p + 1) % f->N; 
    f->N--; 

    if (f == NULL) {
        f->u = -1; // Reset `u` to indicate an empty queue
    }
    return 1;
}
