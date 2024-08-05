#include <stdio.h>

void exibir_histograma_temperaturas(int temperaturas[], int tamanho) {
    char* dias[] = {"D", "S", "T", "Q", "Q", "S", "S"};
    for (int i = 0; i < tamanho; i++) {
        printf("%s: ", dias[i]);
        for (int j = 0; j < temperaturas[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int temperaturas[] = {26, 28, 21, 29, 30, 27, 26};
    int tamanho = sizeof(temperaturas) / sizeof(temperaturas[0]);
    exibir_histograma_temperaturas(temperaturas, tamanho);
    return 0;
}
