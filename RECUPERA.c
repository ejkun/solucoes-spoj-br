#include <stdio.h>

int main () {
	int n, k=1, soma, num, a, resultado;
	while (scanf("%d", &n)!=EOF) {
		soma=0;
		a=0;
		resultado=0;
		printf("Instancia %d\n", k++);
		if (n==0)
			a=-1;
		while (n--) {
			scanf("%d", &num);
			if (num==soma && a==0) {
				resultado=num;
				a=-1;
			}
			soma+=num;
		}
		if (a==-1)
			printf("%d\n", resultado);
		else
			printf("nao achei\n");
	}
	return 0;
}