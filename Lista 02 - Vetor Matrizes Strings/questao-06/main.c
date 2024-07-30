#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetor3[20];
    int i;

    printf("Digite 10 numeros inteiros para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 10 numeros inteiros para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 10; i++) {
        vetor3[2 * i] = vetor1[i];
        vetor3[2 * i + 1] = vetor2[i];
    }

    printf("Vetor resultante:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}
