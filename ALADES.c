#include <stdio.h>

int main(int argc, char const *argv[])
{
	int h1, m1, h2, m2;

	while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2) && (h1+h2+m1+m2) != 0) {
		printf("%d\n", 60*(h2-h1+((h2 < h1 || (h2 == h1 && m2 < m1))*24)) + m2 - m1);
	}

	return 0;
}