#include <stdio.h>

int main() {
    int inicio, fim, i, soma = 0;

    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o valor final do intervalo: ");
    scanf("%d", &fim);

    if (inicio > fim) {
        printf("Intervalo de valores invalido\n");
        return 1;
    }

    for (i = inicio; i <= fim; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("Soma dos impares neste intervalo: %d\n", soma);

    return 0;
}
