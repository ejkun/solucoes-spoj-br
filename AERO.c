#include <stdio.h>
#include <string.h>

aeroportos[101];

int main () {
	int A=1, V=1, i, X, Y, n=1, qtd_maior=0;
	while (scanf("%d %d", &A, &V)==2 && (A!=0 || V!=0)) {
		memset(aeroportos, 0, sizeof(aeroportos));
		while (V-- > 0) {
			scanf("%d %d", &X, &Y);
			aeroportos[X]++;
			aeroportos[Y]++;
		}
		qtd_maior=aeroportos[1];
		for (i=2; i<=A; i++) {
			if (aeroportos[i]>qtd_maior)
				qtd_maior=aeroportos[i];		
		}
		printf("Teste %d\n", n++);
		for (i=1; i<=A; i++) {
			if (aeroportos[i]==qtd_maior)
				printf("%d ", i);
		}			
		printf("\n\n");
	}
	return 0;
}


