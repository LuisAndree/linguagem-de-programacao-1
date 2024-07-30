#include <stdio.h>

#define TAMANHO 3

void lerMatriz(int matriz[TAMANHO][TAMANHO], const char* nome) {
    printf("Digite os elementos da matriz %s (3x3):\n", nome);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarMatrizes(int A[TAMANHO][TAMANHO], int B[TAMANHO][TAMANHO], int C[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            C[i][j] = 0;
            for (int k = 0; k < TAMANHO; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[TAMANHO][TAMANHO], B[TAMANHO][TAMANHO], C[TAMANHO][TAMANHO];

    lerMatriz(A, "A");
    lerMatriz(B, "B");

    multiplicarMatrizes(A, B, C);

    printf("\nMatriz A:\n");
    imprimirMatriz(A);

    printf("\nMatriz B:\n");
    imprimirMatriz(B);

    printf("\nMatriz C (A * B):\n");
    imprimirMatriz(C);

    return 0;
}

