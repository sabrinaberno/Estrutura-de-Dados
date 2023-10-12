#include <stdio.h>
#include <string.h>

int pares(char *string, int inicio, int qtd_pares) {

	if (string[inicio] == '\0' || string[inicio+2] == '\0' ) {
        return qtd_pares;
    } // tamanho insuficiente

	if (string[inicio] == string[inicio + 2])  {
        qtd_pares ++;
    } 
    inicio ++;
    return pares(string, inicio, qtd_pares);
}

int main() {
	char input[201];

	scanf("%s", input);

	printf("%d\n", pares(input, 0, 0));

	return 0;
}