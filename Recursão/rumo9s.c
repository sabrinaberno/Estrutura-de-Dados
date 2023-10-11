#include<stdio.h>
#include <string.h>


int multi9(char* input, int soma) {

    if (*input == '\0'){
        return soma;
    } else{
        soma = (*input - '0') + multi9(input + 1, soma);
        return soma;
    }  
}

int grau9(int soma, int grau){
    char aux[1001];
    if (soma <= 9) {
        grau++;
        return grau;
    } else {
        sprintf(aux, "%d", soma);   
        return grau9(multi9(aux, 0), grau + 1);
    }
}

int main () {
    char input[1001];
    char num[1001];
    int soma;
    int grau = 0;

    while (scanf("%s", input) ) {
        if ( input[0] == '0') {
            break;
        }
        
        strcpy(num, input);
        soma = multi9(input, 0);

        if ( soma % 9 == 0){
            grau = grau9(soma, 0);
            printf("%s is a multiple of 9 and has 9-degree %d.\n", num, grau);
        } else {
            printf("%s is not a multiple of 9.\n", num);
        }
    }

    return 0;
}