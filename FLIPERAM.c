#include <stdio.h>
#include <stdlib.h>

int main () {
    int N, M, i, *x, maior=0, j, k;
    scanf("%d %d", &N, &M);
    x = malloc (sizeof(int)*N);
    for (i=0; i<N; i++) {
        scanf("%d", &x[i]);
    }
    for (j=0; j<M; j++) {
        k=0;
        for (i=0; i<N; i++) {
            if (x[i]>maior) {
                maior=x[i];
                k=i;
            }
        }
        printf("%d\n", maior);
        x[k]=0;
        maior=0;
    }
    return 0;
}
