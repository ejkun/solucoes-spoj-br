#include <stdio.h>

int main () {
    int n_medic, intervalo, maior, menor, n=1, i, soma, temperatura[10000];;
    while (scanf("%d %d", &n_medic, &intervalo)==2 && (n_medic!=0 || intervalo!=0)) {
        soma=0;
        for (i=0; i<intervalo; i++) {
            scanf("%d", &temperatura[i]);
            soma+=temperatura[i];
        }
        maior = menor = soma;
        for (; i<n_medic; i++) {
            scanf("%d", &temperatura[i]);
            soma = soma + temperatura[i] - temperatura[i-intervalo];
            if (soma>maior) maior=soma;
            if (soma<menor) menor=soma;
        }
        printf("Teste %d\n%d %d\n\n", n++, menor/intervalo, maior/intervalo);
    }
    return 0;
}
