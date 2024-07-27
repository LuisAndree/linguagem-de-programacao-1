#include <stdio.h>

int main() {
    int N, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    printf("Os numeros de 0 ate %d em ordem inversa sao:\n", N);
    for (i = N; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}
