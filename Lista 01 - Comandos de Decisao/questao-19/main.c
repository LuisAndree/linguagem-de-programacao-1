#include <stdio.h>

int ehPrimo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

unsigned long long fatorial(int num) {
    unsigned long long fat = 1;
    for (int i = 2; i <= num; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int num;

    printf("Digite um numero inteiro maior que 0: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("O numero deve ser maior que 0.\n");
        return 1;
    }

    if (ehPrimo(num)) {
        unsigned long long resultado = fatorial(num);
        printf("O numero %d e primo.\n", num);
        printf("O fatorial de %d e %llu.\n", num, resultado);
    } else {
        printf("O numero %d nao e primo.\n", num);
    }

    return 0;
}

