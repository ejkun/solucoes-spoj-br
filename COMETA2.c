#include <stdio.h>

int main () {
    int atual;
    scanf("%d", &atual);
    printf("%d", 76-((atual-1986)%76)+atual );
    return 0;
}