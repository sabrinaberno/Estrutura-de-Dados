#include<stdio.h>
#include <string.h>

int result;

int soma(char* input) {

    if (*input == '\0'){
        return result;
    } else{
        result += *input -'0';
        soma(input+1);
    }  
}

int main () {
    char input[1000];

    scanf("%s", input);
    printf("%d", soma(input));
}