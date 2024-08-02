#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int contaPrimosAbaixoDeN(int N) {
    int contador = 0;
    for (int i = 2; i < N; i++) {
        if (ehPrimo(i)) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int N;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    int quantidadePrimos = contaPrimosAbaixoDeN(N);

    printf("A quantidade de numeros primos abaixo de %d e %d.\n", N, quantidadePrimos);

    return 0;
}


