#include <stdio.h>

typedef struct celula {
	int dado;
	struct celula *prox;
} celula;

void imprime(celula *le) {
	for(celula *aux = le -> prox; aux != NULL; aux = aux -> prox){
		printf("%d ->", aux->dado);
	}
	printf(" NULL\n");
}

void imprime_rec (celula *le){
	celula *aux = le -> prox;
	if(aux != NULL){
		printf("%d ->", aux->dado);
		return imprime_rec(le -> prox);
	}
	printf(" NULL\n");
	return;
}