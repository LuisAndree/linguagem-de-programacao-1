#include <stdio.h>

int main() {
    int vetor[100];
    int i = 0, numero = 1;

    while (i < 100) {
        if (numero % 7 != 0 && numero % 10 != 7) {
            vetor[i] = numero;
            i++;
        }
        numero++;
    }

    printf("Os 100 primeiros numeros naturais que nao sao multiplos de 7 e nao terminam com 7:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
