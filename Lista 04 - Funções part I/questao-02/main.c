#include <stdio.h>

int perfeito(int num) {
    int soma = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    if (soma == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (perfeito(numero)) {
        printf("%d e um numero perfeito.\n", numero);
    } else {
        printf("%d nao e um numero perfeito.\n", numero);
    }

    return 0;
}
