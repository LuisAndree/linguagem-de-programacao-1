#include <stdio.h>

int contaMaioresQue10(int matriz[4][4]) {
    int contador = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    return contador;
}

int main() {
    int matriz[4][4];

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int quantidadeMaioresQue10 = contaMaioresQue10(matriz);

    printf("A quantidade de valores maiores que 10 na matriz e: %d\n", quantidadeMaioresQue10);

    return 0;
}

