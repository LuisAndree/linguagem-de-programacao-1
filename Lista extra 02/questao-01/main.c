#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("A soma dos valores e: %d\n", soma(valor1, valor2));

    return 0;
}
