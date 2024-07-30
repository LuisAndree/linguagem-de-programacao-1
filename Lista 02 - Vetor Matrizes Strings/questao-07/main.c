#include <stdio.h>

int main() {
    int vetor[15];
    int i, j, k = 0;
    int compacto[15];

    printf("Digite 15 numeros inteiros:\n");
    for (i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 15; i++) {
        if (vetor[i] != 0) {
            compacto[k] = vetor[i];
            k++;
        }
    }

    printf("Vetor compactado:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", compacto[i]);
    }
    printf("\n");

    return 0;
}

