#include <stdio.h>

void calculaEstatisticas(int vetor[], int tamanho, int *maior, int *menor, float *media) {
    *maior = vetor[0];
    *menor = vetor[0];
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
        soma += vetor[i];
    }

    *media = (float)soma / tamanho;
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int maior, menor;
    float media;
    calculaEstatisticas(vetor, n, &maior, &menor, &media);

    printf("Maior valor: %d\n", menor);
    printf("Menor valor: %d\n", maior);
    printf("Media dos valores: %.2f\n", media);

    return 0;
}

