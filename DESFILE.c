#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int n, i, *vetor, cor, corMajoritaria, count;

	while (scanf("%d", &n) != EOF && n != 0) {
		cor = 0;
		count = 0;

		for (i=0; i<n; i++) {
			scanf("%d", &cor);
			if (count == 0) {
				corMajoritaria = cor;
			}

			if (cor == corMajoritaria) {
				count++;
			} else {
				count--;
			}
		}

		printf("%d\n",corMajoritaria);
	}

	return 0;
}