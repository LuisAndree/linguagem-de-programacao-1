#include <stdio.h>

int main() {
    int num1, num2;
    int maior, menor, diferenca;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }

    diferenca = maior - menor;

    printf("A diferenca entre o maior e o menor valor e: %d\n", diferenca);

    return 0;
}
