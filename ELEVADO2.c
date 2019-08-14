#include <stdio.h>

int main () {
    int leituras, capacidade, no_elevador=0, entrada, saida;
    char c='N';
    scanf("%d %d", &leituras, &capacidade);
    while ((leituras--)>0) {
        scanf("%d %d", &saida, &entrada);
        no_elevador+=(entrada-saida);
        if (no_elevador>capacidade) c='S';
    }
    printf("%c\n", c);
    return 0;
}
