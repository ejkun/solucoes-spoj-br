#include <stdio.h>

int main () {
	int N=0, J=0, Z=0, A=0, i=0, n=1;
	scanf("%d", &N);
	while (N>0 && N<101) {
        A=0;
		printf("Teste %d\n", n++);
		for (i=0; i<N; i++) {
			scanf("%d %d", &J, &Z);
			A+=J-Z;
			printf("%d\n", A);
		}
		printf("\n");
		scanf("%d", &N);
	}
	return 0;
}
