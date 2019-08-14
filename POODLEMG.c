#include <stdio.h>
#include <stdlib.h>

int main () {
	int N=1, P=1, nletras[100], i, j;
	for (i=0; N!=0 && P!=0; i++) {
		scanf("%d %d", &N, &P);
		nletras[i]=(N!=0 && P!=0)?((N%P==0)?N/P:(N/P)+1):-1;
	}
	for (i=0; nletras[i]!=-1; i++) {
		printf("P");
		nletras[i]=(nletras[i]<6)?2:(nletras[i]>20)?16:nletras[i]-4;
		for (j=0; j<nletras[i]; j++)
			printf("o");
		printf("dle\n");
	}
	return 0;
}
