#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;

    printf("Digite 10 numeros:\n");

    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("A soma de todos os 10 numeros e: %d\n", soma);

    return 0;
}
