#include <stdio.h>

#define PRODUTO(x, y) ((x) * (y))

int main() {
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    int resultado = PRODUTO(a, b);

    printf("O produto de %d e %d e %d\n", a, b, resultado);

    return 0;
}
