#include <stdio.h>

int main () {
	int N, i;
	scanf("%d", &N);
	if (N!=0) {
		for (i=(N-1); i>0; i--) {
			N=N*i;
		}
	}
	else {
	N=1;
	}
	printf("%d", N);
	return 0;
}
