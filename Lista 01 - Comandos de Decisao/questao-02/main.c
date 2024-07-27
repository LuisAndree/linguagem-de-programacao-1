#include <stdio.h>

int main() {
    int numero1, numero2;
    int maior, diferenca;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        maior = numero1;
        diferenca = numero1 - numero2;
    } else {
        maior = numero2;
        diferenca = numero2 - numero1;
    }

    printf("O maior numero e: %d\n", maior);
    printf("A diferenca entre os numeros e: %d\n", diferenca);

    return 0;
}
