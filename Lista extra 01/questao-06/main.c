#include <stdio.h>

int main() {
    int quantidade;
    int soma = 0;
    int numero;

    printf("Digite a quantidade de numeros a serem somados: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);
        soma += numero;
    }

    printf("A soma de todos os %d numeros e: %d\n", quantidade, soma);

    return 0;
}

