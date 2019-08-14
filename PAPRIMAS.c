#include <stdio.h>

int eh_primo(int n) {
	int i;
	for (i=2; i<=n/2; i++) {
		if (n%i == 0) {
			return 0;
		}
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	char palavra[30];
	int soma, i;

	while (scanf("%s", palavra) != EOF) {
		soma = 0;
		for (i=0; palavra[i] != '\0'; i++) {
			soma += palavra[i]-96 + (palavra[i] <= 'Z')*58;
		}
		printf("It is %sa prime word.\n", (eh_primo(soma)?"":"not "));
	}

	return 0;
}