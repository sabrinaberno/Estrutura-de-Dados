#include<stdio.h>

int f91 (int N){
    if (N > 100){
        return N-10;
    } else {
        return f91(f91(N+11));
    }
}

int main () {
    int N;
    scanf("%d", &N);
    while ( N != 0) {
        printf("f91(%d) = %d\n", N, f91(N) );
        scanf("%d", &N);
    }

    return 0;
}