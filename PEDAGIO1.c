#include <stdio.h>

int main () {
    int L, D, K, P, total;
    scanf("%d %d", &L, &D);
    scanf("%d %d", &K, &P);
    total = (K*L) + (L/D)*P;
    printf("%d", total);
    return 0;
}

