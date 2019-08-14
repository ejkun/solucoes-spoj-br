#include <stdio.h>
#include <stdlib.h>

int onze(char num[]) {
	int i, par=0, impar=0;
	for (i=0; num[i]!='\0'; i++) {
		if ((i+1)%2==0) {
			switch (num[i]) {
				case '1':
					par+=1;
					break;
				case '2': 
					par+=2;
					break;
				case '3':
					par+=3;
					break;
				case '4': 
					par+=4;
					break;
				case '5': 
					par+=5;
					break;
				case '6': 
					par+=6;
					break;
				case '7': 
					par+=7;
					break;
				case '8':
					par+=8;
					break;
				case '9':
					par+=9;
					break;
			}
		}
		else {
			switch (num[i]) {
				case '1':
					impar+=1;
					break;
				case '2': 
					impar+=2;
					break;
				case '3':
					impar+=3;
					break;
				case '4': 
					impar+=4;
					break;
				case '5': 
					impar+=5;
					break;
				case '6': 
					impar+=6;
					break;
				case '7': 
					impar+=7;
					break;
				case '8':
					impar+=8;
					break;
				case '9':
					impar+=9;
					break;
			}
		}
	}
	if ((impar%11)==(par%11))
		return 1;
	else
		return 0;
}
	
int main () {
	char num[1001];
	while (scanf("%s", num) && (num[0]!='0' || num[1]!='\0')) {
		printf((onze(num))?("%s is a multiple of 11.\n"):("%s is not a multiple of 11.\n"), num);
	}
	return 0;
}


