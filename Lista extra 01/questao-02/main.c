#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero %d � par.\n", numero);
    } else {
        printf("O numero %d � impar.\n", numero);
    }

    if (numero > 0) {
        printf("O numero %d � positivo.\n", numero);
    } else if (numero < 0) {
        printf("O numero %d � negativo.\n", numero);
    } else {
        printf("O numero � zero.\n");
    }

    return 0;
}

