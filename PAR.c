#include <stdio.h>

int main() {
  int N, i, A, B, n = 1;
  char nome1[11], nome2[11];

  while (scanf("%d", &N)==1 && N) {
    scanf(" %s %s", nome1, nome2);

    printf("Teste %d\n", n++);
    for (i=0; i<N; i++) {
      scanf("%d %d", &A, &B);
      printf("%s\n", ((B+A)%2 == 0 ? nome1 : nome2));
    }
    printf("\n");
  }

  return 0;
}

