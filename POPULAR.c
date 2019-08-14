#include <stdio.h>
#include <stdlib.h>

int main () {
    int *vetor, n, i, N, maior=0, j;
    while (scanf("%d", &n) && n) {
        maior=0;
        vetor = (int *) calloc(sizeof(int), n);
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                scanf("%d", &N);
                vetor[j]+=N;
                if (vetor[j]>maior) maior=vetor[j];
            }
        }
        printf("%d\n", maior);
    }
    return 0;
}
