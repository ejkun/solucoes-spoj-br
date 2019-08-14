#include <stdio.h>

int main () {
	int n, x, y, divisax, divisay;
	while (scanf("%d", &n) && n!=0) {
		scanf("%d %d", &divisax, &divisay);
		while (n--) {
			scanf("%d %d", &x, &y);
			if (x==divisax || y==divisay)
				printf("divisa\n");
			if (x>divisax && y>divisay)
				printf("NE\n");
			if (x<divisax && y>divisay)
				printf("NO\n");
			if (x<divisax && y<divisay)
				printf("SO\n");
			if (x>divisax && y<divisay)
				printf("SE\n");
		}
	}
	return 0;
}