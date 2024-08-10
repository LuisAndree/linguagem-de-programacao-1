#include <stdio.h>

void imprimirQuadradoPerfeito(int numero) {
    int quadrado = numero * numero;
    printf("O quadrado perfeito de %d e: %d\n", numero, quadrado);
}

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    imprimirQuadradoPerfeito(valor);

    return 0;
}
