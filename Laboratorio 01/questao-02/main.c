#include <stdio.h>
#include <string.h>

#define MAX_TEXTO 1000

void exibir_histograma_texto(char texto[]) {
    int ocorrencias[256] = {0};

    for (int i = 0; texto[i] != '\0'; i++) {
        ocorrencias[(unsigned char)texto[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (ocorrencias[i] > 0) {
            printf("%c: ", i);
            for (int j = 0; j < ocorrencias[i]; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
}

int main() {
    char texto[MAX_TEXTO];

    printf("Digite um texto: ");
    fgets(texto, MAX_TEXTO, stdin);

    texto[strcspn(texto, "\n")] = '\0';

    exibir_histograma_texto(texto);

    return 0;
}
