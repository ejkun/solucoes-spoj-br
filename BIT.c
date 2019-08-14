#include <stdio.h>

int main () {
	int V, I, J, K, L, n=1;
	scanf("%d", &V);
	while (V>0 && V<10001) {
		I=V/50;
		V-=I*50;
		J=V/10;
		V-=J*10;
		K=V/5;
		V-=K*5;
		L=V;
		printf("Teste %d\n", n);
		printf("%d %d %d %d\n", I, J, K, L);
		n++;
		scanf("%d", &V);
	}
	return 0;
}