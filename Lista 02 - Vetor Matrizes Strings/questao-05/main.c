#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int vetor[N];

    printf("Digite %d numeros inteiros:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < N; i++) {
        if (ehPrimo(vetor[i])) {
            vetor[i] = 0;
        } else {
            printf("Elemento %d nao eh primo.\n", vetor[i]);
        }
    }

    printf("Vetor modificado:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
