#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Digite valores positivos para somar (digite um numero negativo para parar):\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        soma += numero;
    }

    printf("A soma dos valores positivos digitados e: %d\n", soma);

    return 0;
}
