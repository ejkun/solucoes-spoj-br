#include <stdio.h>

int main () {
    int x1, y1, x2, y2, n=1, x, y, N, i, meteoros;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    while (x1!=0 && y1!=0 && x2!=0 && y2!=0) {
        meteoros=0;
        scanf("%d", &N);
        for (i=0; i<N; i++) {
            scanf("%d %d", &x, &y);
            if ((x>=x1 && x<=x2)&&(y<=y1 && y>=y2))
                meteoros++;
        }
        printf("Teste %d\n%d\n\n", n++, meteoros);
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    }
    return 0;
}
