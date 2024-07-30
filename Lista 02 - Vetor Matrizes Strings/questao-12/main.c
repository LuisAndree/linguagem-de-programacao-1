#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j, X;
    int encontrado = 0;

    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o valor a ser buscado na matriz: ");
    scanf("%d", &X);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] == X) {
                printf("Valor encontrado na linha %d e coluna %d\n", i, j);
                encontrado = 1;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }

    if (!encontrado) {
        printf("Valor nao encontrado na matriz.\n");
    }

    return 0;
}

