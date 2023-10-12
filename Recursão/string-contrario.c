#include <stdio.h>
#include <string.h>

void inverter(char *string, int tam){
    if (string[tam] == '\0'){
        return;
    } else {
        printf("%c", string[tam]);
        inverter(string, --tam);
    }

}

int main () {
    char string[501];

    scanf("%s", string);
    int tam = strlen(string);

    inverter(string, tam-1);
    printf("\n");
}