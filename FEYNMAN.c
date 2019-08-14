#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, soma;

	while (scanf("%d", &n) && n!=0) {
		soma = 0;
		for (n; n>0; n--) {
			soma += n*n;
		}
		printf("%d\n", soma);
	}

	return 0;
}