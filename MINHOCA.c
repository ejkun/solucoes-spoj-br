#include <stdio.h>
#define MAXCOLUMN 100
#define MAXROW 100

int main () {
    int campo[MAXROW][MAXCOLUMN], linhas, colunas, atual=0, resultado=0, i, j;
    scanf("%d %d", &linhas, &colunas);
    for (i=0; i<linhas; i++) {
        for (j=0; j<colunas; j++) {
            scanf("%d", &campo[i][j]);
        }
    }
    for (i=0; i<linhas; i++) {
        atual=0;
        for (j=0; j<colunas; j++) {
            atual+=campo[i][j];
        }
        if (atual>resultado) resultado=atual;
    }
    for (i=0; i<colunas; i++) {
        atual=0;
        for (j=0; j<linhas; j++) {
            atual+=campo[j][i];
        }
        if (atual>resultado) resultado=atual;
    }
    printf("%d\n", resultado);
    return 0;
}
