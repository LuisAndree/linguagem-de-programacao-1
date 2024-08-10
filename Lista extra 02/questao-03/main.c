#include <stdio.h>

void Menor(int a, int b, int c) {
    int menor = a;

    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }

    printf("O menor valor e: %d\n", menor);
}

int main() {
    int valor1, valor2, valor3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    Menor(valor1, valor2, valor3);

    return 0;
}
