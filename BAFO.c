#include <stdio.h>

int main () {
	int R=0, A=0, B=0, i=0, n=1, aldo, beto;
	scanf("%d", &R);
	while (R) {
        aldo=0;
        beto=0;
		printf("Teste %d\n", n++);
		for (i=0; i<R; i++) {
			scanf("%d %d", &A, &B);
            aldo+=A;
            beto+=B;
		}
		if (aldo>beto)
            printf("Aldo\n");
        else
            printf("Beto\n");
		printf("\n");
		scanf("%d", &R);
	}
	return 0;
}
