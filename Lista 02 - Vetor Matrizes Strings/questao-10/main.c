#include <stdio.h>

void bubbleSort(double vetor[], int n) {
    int i, j;
    double temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    double vetor[10];
    int i;

    printf("Digite 10 numeros reais:\n");
    for (i = 0; i < 10; i++) {
        scanf("%lf", &vetor[i]);
    }

    bubbleSort(vetor, 10);

    printf("Vetor ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2lf ", vetor[i]);
    }
    printf("\n");

    return 0;
}

