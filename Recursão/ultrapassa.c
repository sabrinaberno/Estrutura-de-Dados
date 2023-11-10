#include <stdio.h>

void ultrapassa (int *vetor, int limite, int contador, int soma){
    if (contador != 0) {
        soma += *vetor;
        
        if(soma > limite){
        ultrapassa(vetor+1, limite, contador - 1, 0);
        printf("%d\n", *vetor);
        }else{
        ultrapassa(vetor+1, limite, contador-1, soma);
        }
    } 
}

int main () {
    int vetor[1000];
    int contador=0;
    int limite = 0;

    scanf("%d", &vetor[0]);

    while(vetor[contador] != 0 ){
        contador++;
        scanf("%d", &vetor[contador]);
    }
    
    scanf("%d", &limite);

    ultrapassa(vetor, limite, contador, 0);

    return 0;

}