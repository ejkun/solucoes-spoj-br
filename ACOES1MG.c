#include <stdio.h>
#include <stdlib.h>

void divid(int N, int K, int *qtdpartes) 
{
	int p1, p2;
	if (N%2==0) 
	{
		p1=N/2;
		p2=N/2;
	}
	else {
		p1=N/2;
		p2=(N/2)+1;
	}
	if (p1<=K)
		(*qtdpartes)++;
	if (p2<=K)
		(*qtdpartes)++;
	if (p1>K)
		divid(p1, K, qtdpartes);
	if (p2>K)
		divid(p2, K, qtdpartes);
}

int main () {
	int N=1, K=1, qtdpartes=0;
	while (1)
	{
		scanf("%d %d", &N, &K);
		if (N!=0 && K!=0) 
		{
			if (N<K || N==K)
				qtdpartes=1;
			else {
				if (K==1)
					qtdpartes=N;
				else {
					if (N>K){
						divid (N, K, &qtdpartes);
					}
				}
			}
		}
		else
			break;
		printf("%d\n", qtdpartes);
		qtdpartes=0;
	}
	return 0;
}