#include <stdio.h>

int main() {
    int contador = 0;
    int soma = 0;

    for (int i = 1; i <= 50; i++) {
        if (i % 2 != 0) {
            contador++;
            soma += i;
        }
    }

    printf("Quantidade de numeros impares entre 1 e 50: %d\n", contador);
    printf("Soma dos numeros impares: %d\n", soma);

    return 0;
}
