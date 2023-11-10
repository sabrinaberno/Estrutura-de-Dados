#include<stdio.h>
#include<string.h>

int existeSub (char *string, char *sub){
  char *posicao;

    if (*string == '\0') {
        return -1;
    } else {
        posicao = strstr( string, sub );
        
        if ( posicao != NULL )
            return 0;

        return -1;
    }
}

int primeiraSub (char *string, char *sub){
  char *posicao;

    if (existeSub(string,sub) != 0) {
        return -1;
    } else {
        posicao = strstr( string, sub ); 

        if ( posicao != NULL ){
            return (int)(posicao - string);
        } 

        return -1;
    }
}

int ultimaSub (char *string, char *sub, int index){

    if(existeSub(string, sub) == 0){
        return index;
    }

    return ultimaSub(--string, sub, --index);
}

int main(){

  char string[101];
  char sub[101];

  scanf("%s", string);
  scanf("%s", sub);

  int primeiroIndex = primeiraSub(string, sub);

  if (primeiroIndex != -1){

    int ultimoIndex = ultimaSub(&string[strlen(string)], sub, strlen(string));
    printf("%d\n", ultimoIndex - primeiroIndex + strlen(sub));
  
  }else{
    printf("0\n");
  }

  return 0;
}