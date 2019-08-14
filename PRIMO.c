#include <stdio.h>

int main () {
    int N, i, retorno=0;
    scanf("%d", &N);
    if (N<0)
        N=-N;
    for (i=1; i<=N; i++) {
        if (N%i==0) {
            retorno++;
        }
    }
    if (retorno==2)
        printf("sim\n");
    else
        printf("nao\n");
    return 0;
}