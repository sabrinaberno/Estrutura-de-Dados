#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

typedef struct no { 
    int dado; 
    struct no*esq,*dir; 
}no;

void em_ordem(no*raiz) {
   if(raiz){
        em_ordem(raiz->esq);
        printf("%d ", raiz->dado);
        em_ordem(raiz->dir);
    }
}
