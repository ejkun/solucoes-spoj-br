#include <stdio.h>

int main () {
	int N, i, saida=0, velocidade, tempo;
	scanf("%d", &N);
	for (i=0; i<N; i++) {
		scanf("%d %d", &tempo, &velocidade);
		saida+=tempo*velocidade;
	}
	
	printf("%d", saida);
	return 0;
}


