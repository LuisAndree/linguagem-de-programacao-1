#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

float divisao(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Erro: Divisao por zero.\n");
        return 0;
    }
}

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("A soma dos valores e: %d\n", soma(valor1, valor2));
    printf("A subtracao do primeiro valor pelo segundo e: %d\n", subtracao(valor1, valor2));
    printf("A multiplicacao dos valores e: %d\n", multiplicacao(valor1, valor2));
    if (valor2 != 0) {
        printf("A divisao do primeiro valor pelo segundo e: %.2f\n", divisao(valor1, valor2));
    }

    return 0;
}
