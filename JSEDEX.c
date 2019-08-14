#include <stdio.h>

int main () {
	int N, A, L, P;
	scanf("%d", &N);
	scanf("%d %d %d", &A, &L, &P);
	if (N<=A && N<=L && N<=P)
		printf("S");
	else
		printf("N");
	return 0;
}

