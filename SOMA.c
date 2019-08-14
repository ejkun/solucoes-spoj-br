#include <stdio.h>

int main () {
	int N, i, X, soma=0;
	scanf("%d", &N);
	for (i=0; i<N; i++) {
		scanf("%d", &X);
		soma+=X;
	}
	printf("%d", soma);
	return 0;
}
