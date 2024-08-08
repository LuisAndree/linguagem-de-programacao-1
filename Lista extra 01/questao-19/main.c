#include <stdio.h>

int main() {
    int numero;
    int countDivisiveisPor3 = 0;

    printf("Digite numeros inteiros (digite um numero negativo para encerrar):\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        if (numero % 3 == 0) {
            countDivisiveisPor3++;
        }
    }

    printf("Quantidade de numeros divisiveis por 3: %d\n", countDivisiveisPor3);

    return 0;
}
