#include <stdio.h>

int main() {
    int numeros[10];
    int i, maior, menor, posicao_maior, posicao_menor;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = menor = numeros[0];
    posicao_maior = posicao_menor = 0;

    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
            posicao_maior = i;
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
            posicao_menor = i;
        }
    }

    printf("Maior valor: %d, Posicao: %d\n", maior, posicao_maior);
    printf("Menor valor: %d, Posicao: %d\n", menor, posicao_menor);

    return 0;
}
