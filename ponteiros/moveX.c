#include<stdio.h>

void moveX (char *string){
    if (*string == '\0'){
        
    }  // condição de parada
    else if (*string == 'x'){
        moveX(string + 1);
        printf("%c", *string);
    } 
    else {
        printf("%c", *string);
        moveX(string + 1);
    }
}

int main () {
    char input[100];
    scanf("%s", input);
    moveX(input);
    return 0;
}