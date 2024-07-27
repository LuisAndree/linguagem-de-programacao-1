#include <stdio.h>

int main() {
    int N, i, numero;
    int maior = 0, contagem = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("A quantidade de numeros deve ser maior que zero.\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);

        if (i == 0 || numero > maior) {
            maior = numero;
            contagem = 1;
        } else if (numero == maior) {
            contagem++;
        }
    }

    printf("O maior valor lido e: %d\n", maior);
    printf("O maior valor foi lido %d vezes\n", contagem);

    return 0;
}
