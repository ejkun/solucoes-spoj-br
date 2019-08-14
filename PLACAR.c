#include <stdio.h>
#include <string.h>

int main () {
    int k=1, n, placar, menor, i=0, j=0;
    char nome[21], reprovado[21];
    while (scanf("%d", &n)!=EOF && (n==0||n>1||n<100)) {
        i=0;
        menor=10000;
        reprovado[0]=' ';
        for (j=0; j<n; j++) {
            scanf("%s", nome);
            scanf("%d", &placar);
            if (placar<menor) {
                menor=placar;
                strcpy(reprovado, nome);
            }
            else {
                if (placar == menor && strcmp(nome, reprovado)>0)
                    strcpy(reprovado, nome);
            }
        }
        printf("Instancia %d\n%s\n\n", k++, reprovado);
    }
    return 0;
}
