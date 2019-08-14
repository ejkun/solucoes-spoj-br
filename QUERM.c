#include <stdio.h>

int main(){
        int n; //Número de participantes da festa.
        int i; //Controle do vetor;
        int cont = 1;
        int vetor;
        int ganhador;
        scanf("%d", &n);
        while(n!=0){
                //Ler número dos bilhetes.
                        for(i = 1; i <=n; i++){
                                scanf("%d", &vetor);
                                if (vetor==i) ganhador=vetor;
                        }
                        printf("Teste %d\n", cont);
                        printf("%d\n", ganhador);
                        printf("\n");
                        cont++;
                        scanf("%d", &n);
        }
        return 0;
} 