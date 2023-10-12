// crt_strstr.c

#include <string.h>
#include <stdio.h>

int primeiraSubString (char *string, char *sub){
    char *posicao;

    if (*string == '\0') {
        return -1;
    } else {
        posicao = strstr( string, sub ); 

        if ( posicao != NULL ){
            return (int)(posicao - string +1 );
        } else {
            return -1;
        }
    }
}

int ultimaSubString (char *string, char *sub, int ultPos){
    char *posicao;

    if (*string == '\0' || strlen(string) < strlen(sub)) {
        return ultPos;
    } else {
        posicao = strstr( string, sub +1); 

        if ( posicao != NULL ){

            int novaUltPos = (int)(posicao - string +1 );
            ultimaSubString(string + ultPos, sub, novaUltPos);
            return ultPos;
        } 

        return ultPos;
    }
}

int main( ) {
    char sub[101];
    char string[100];


    scanf( "%s", string );
    scanf( "%s", sub );
    
    int primeiraPosicao = primeiraSubString (string, sub);
    printf ("%d\n", primeiraPosicao);

    if (primeiraPosicao != -1) {

    }

    int ultimaPosicao =  ultimaSubString (string + primeiraPosicao, sub, primeiraPosicao);
    printf("%d\n", ultimaPosicao);
    
    printf("%d\n", strlen(sub));
    int distancia = (ultimaPosicao + strlen(sub)) - primeiraPosicao ;
    printf("%d\n", distancia);
    return 0;
}