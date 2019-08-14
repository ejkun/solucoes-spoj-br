#include <stdio.h>

int main () {
    int N, L, C, n_copos=0, i;
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d %d", &L, &C);
        if (L>C) {
            n_copos+=C;
        }
    }
    printf("%d", n_copos);
    return 0;
}

