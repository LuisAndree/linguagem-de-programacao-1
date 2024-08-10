#include <stdio.h>

int Maior(int a, int b, int c) {
    int maior = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    return maior;
}

int main() {
    int valor1, valor2, valor3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    printf("O maior valor e: %d\n", Maior(valor1, valor2, valor3));

    return 0;
}
