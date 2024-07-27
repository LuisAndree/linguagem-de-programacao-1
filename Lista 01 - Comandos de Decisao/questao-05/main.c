#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Digite um numero inteiro maior do que zero: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Numero invalido.\n");
        return 1;
    }

    while (numero > 0) {
        soma += numero % 10;
        numero /= 10;
    }

    printf("A soma dos algarismos e: %d\n", soma);

    return 0;
}
