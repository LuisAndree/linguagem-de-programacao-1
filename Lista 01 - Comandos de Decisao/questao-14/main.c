#include <stdio.h>
#include <limits.h>

int main() {
    int N, i, numero;
    int menor = INT_MAX;
    int maior = INT_MIN;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("A quantidade de numeros deve ser maior que zero.\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);

        if (numero < menor) {
            menor = numero;
        }
        if (numero > maior) {
            maior = numero;
        }
    }

    printf("O menor valor lido e: %d\n", menor);
    printf("O maior valor lido e: %d\n", maior);

    return 0;
}
