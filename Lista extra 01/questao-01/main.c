#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 5 == 0 && numero % 3 == 0) {
        printf("O numero %d e divisivel por 5 e por 3 ao mesmo tempo.\n", numero);
    } else {
        printf("O numero %d nao e divisivel por 5 e por 3 ao mesmo tempo.\n", numero);
    }

    return 0;
}
