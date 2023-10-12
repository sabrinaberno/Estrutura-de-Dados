#include <stdio.h>
#include <string.h>

void replace(char * string) {
    if (*string == '\0'){
        return;
    }
    if (*string == 'x') {
        printf("y");
    }  else {
        printf("%c", *string);
    }
    replace (string+1);
}

int main () {
    char string[81];

    scanf("%s", string);
    replace(string);
    printf("\n");
}