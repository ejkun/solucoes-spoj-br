#include <stdio.h>

int main () {
    int m, result, n=1, i, x;
    while (scanf("%d", &m)==1 && m) {
        result=0;
        for (i=0; i<m; i++) {
            scanf("%d", &x);
            result+=x;
        }
        printf("Teste %d\n%d\n\n", n++, result);
    }
}
