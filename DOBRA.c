#include <stdio.h>

int main () {
    int nvezes, n=1;
    while (scanf("%d", &nvezes)==1 && nvezes!=-1) {
        printf("Teste %d\n%d\n\n", n++, (((1<<nvezes)+1) * ((1<<nvezes)+1)));
    }
    return 0;
}
