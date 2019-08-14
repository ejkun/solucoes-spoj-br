#include <stdio.h>

int main () {
    float A, G, Ra, Rg;
    scanf("%f %f %f %f", &A, &G, &Ra, &Rg);
    if ((G/Rg)>(A/Ra))
        printf("A");
    else
        printf("G");
    return 0;
}
