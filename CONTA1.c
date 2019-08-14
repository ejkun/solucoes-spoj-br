#include <stdio.h>

int main () {
    int consumo, total=7;
    scanf("%d", &consumo);
    if (consumo>100) {
        total+=((consumo-100)*5)+160;
    }
    else {
        if (consumo>30) {
            total+=((consumo-30)*2)+20;
        }
        else {
            if (consumo>10) {
                total+=((consumo-10)*1);
            }
        }
    }
    printf("%d", total);

    return 0;
}