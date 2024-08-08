#include <stdio.h>

int main() {
    int n;

    printf("Digite o numero de termos da sequencia de Fibonacci que deseja gerar: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero de termos deve ser maior que zero.\n");
        return 1;
    }

    unsigned long long a = 0, b = 1, proximo;

    printf("Sequencia de Fibonacci:\n");

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%llu\n", a);
            continue;
        }
        if (i == 2) {
            printf("%llu\n", b);
            continue;
        }
        proximo = a + b;
        a = b;
        b = proximo;
        printf("%llu\n", proximo);
    }

    return 0;
}
