#include <stdio.h>

int main() {
    float numeros[10];
    float quadrados[10];
    int i;

    printf("Digite 10 numeros reais:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        quadrados[i] = numeros[i] * numeros[i];
    }

    printf("\nVetor original:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }

    printf("\n\nVetor dos quadrados:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", quadrados[i]);
    }

    printf("\n");

    return 0;
}
