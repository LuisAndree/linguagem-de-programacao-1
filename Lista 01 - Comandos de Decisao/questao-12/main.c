#include <stdio.h>

int main() {
    int N, i, numero;
    int soma = 0;
    float media;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("A quantidade de numeros deve ser maior que zero.\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);
        soma += numero;
    }

    media = (float)soma / N;

    printf("A media dos numeros e: %.2f\n", media);

    return 0;
}
