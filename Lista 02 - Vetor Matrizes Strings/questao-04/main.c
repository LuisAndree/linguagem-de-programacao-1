#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int vetor[N];
    int resultado[N];
    int i, j, k = 0;
    bool repetido;

    printf("Digite %d numeros inteiros:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < N; i++) {
        repetido = false;
        for (j = 0; j < k; j++) {
            if (vetor[i] == resultado[j]) {
                repetido = true;
                break;
            }
        }
        if (!repetido) {
            resultado[k] = vetor[i];
            k++;
        }
    }

    printf("Vetor sem elementos repetidos:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}
