#include <stdio.h>

int main() {
    printf("Numero\tQuadrado\n");
    printf("------------------\n");

    for (int i = 1; i <= 15; i++) {
        printf("%d\t%d\n", i, i * i);
    }

    return 0;
}
