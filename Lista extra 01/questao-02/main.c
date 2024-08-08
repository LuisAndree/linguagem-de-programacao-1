#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero %d é par.\n", numero);
    } else {
        printf("O numero %d é impar.\n", numero);
    }

    if (numero > 0) {
        printf("O numero %d é positivo.\n", numero);
    } else if (numero < 0) {
        printf("O numero %d é negativo.\n", numero);
    } else {
        printf("O numero é zero.\n");
    }

    return 0;
}

