#include <stdio.h>

unsigned long long int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido. Por favor, digite um numero inteiro positivo.\n");
    } else {
        unsigned long long int resultado = fatorial(n);
        printf("O fatorial de %d e %llu.\n", n, resultado);
    }

    return 0;
}

