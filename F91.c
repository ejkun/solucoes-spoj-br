#include <stdio.h>

int f91(int n) {
	if (n<=100)
		return 91;
	if (n>=101)
		return n-10;
}

int main () {
	int n, i;
	while (scanf("%d", &n)==1 && n)
		printf("f91(%d) = %d\n", n, f91(n));
	return 0;
}


