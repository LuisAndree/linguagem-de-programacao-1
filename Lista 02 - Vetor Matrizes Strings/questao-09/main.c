#include <stdio.h>
#include <stdbool.h>

int main() {
    int x[5], y[5];
    int soma[5], produto[5];
    int diferenca[5], intersecao[5], uniao[10];
    int i, j, k_diferenca = 0, k_intersecao = 0, k_uniao = 0;
    bool encontrado;

    printf("Digite 5 numeros inteiros para o vetor x:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &x[i]);
    }

    printf("Digite 5 numeros inteiros para o vetor y:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &y[i]);
    }

    // Calcula a soma e o produto
    for (i = 0; i < 5; i++) {
        soma[i] = x[i] + y[i];
        produto[i] = x[i] * y[i];
    }

    // Calcula a diferenca
    for (i = 0; i < 5; i++) {
        encontrado = false;
        for (j = 0; j < 5; j++) {
            if (x[i] == y[j]) {
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            diferenca[k_diferenca] = x[i];
            k_diferenca++;
        }
    }

    // Calcula a intersecao
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (x[i] == y[j]) {
                intersecao[k_intersecao] = x[i];
                k_intersecao++;
                break;
            }
        }
    }

    // Calcula a uniao
    for (i = 0; i < 5; i++) {
        uniao[k_uniao] = x[i];
        k_uniao++;
    }
    for (i = 0; i < 5; i++) {
        encontrado = false;
        for (j = 0; j < 5; j++) {
            if (y[i] == x[j]) {
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            uniao[k_uniao] = y[i];
            k_uniao++;
        }
    }

    printf("Soma: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", soma[i]);
    }
    printf("\n");

    printf("Produto: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", produto[i]);
    }
    printf("\n");

    printf("Diferenca: ");
    for (i = 0; i < k_diferenca; i++) {
        printf("%d ", diferenca[i]);
    }
    printf("\n");

    printf("Intersecao: ");
    for (i = 0; i < k_intersecao; i++) {
        printf("%d ", intersecao[i]);
    }
    printf("\n");

    printf("Uniao: ");
    for (i = 0; i < k_uniao; i++) {
        printf("%d ", uniao[i]);
    }
    printf("\n");

    return 0;
}
