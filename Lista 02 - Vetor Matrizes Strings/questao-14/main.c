#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int soma_diagonal_principal = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        soma_diagonal_principal += matriz[i][i];
    }

    printf("Soma dos elementos da diagonal principal: %d\n", soma_diagonal_principal);

    return 0;
}

