#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

int gerarNumeroAleatorio() {
    return rand() % 20 + 1;
}

void imprimirMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[N][N];
    int matriz_triangular[N][N];
    int i, j;

    srand(time(NULL));

    printf("Matriz original 4x4:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matriz[i][j] = gerarNumeroAleatorio();
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (j > i) {
                matriz_triangular[i][j] = 0;
            } else {
                matriz_triangular[i][j] = matriz[i][j];
            }
        }
    }

    printf("\nMatriz triangular inferior:\n");
    imprimirMatriz(matriz_triangular);

    return 0;
}

