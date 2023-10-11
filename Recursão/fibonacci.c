#include <stdio.h>
long int num[81];

long int fibonacci(int n){
    long int result;
    if (num[n] != 0){
        return num[n];
    } // verificar se o número é repetido

    if (n == 1 || n == 2) {
        return(1);
    }

    num[n] = fibonacci(n-1) + fibonacci(n-2);
    return(num[n]);
}