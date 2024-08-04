#include <stdio.h>
#include <stdlib.h>

void lerArquivoTexto() {
    FILE *pont_arq;
    char linha[256];

    pont_arq = fopen("dados.txt", "r");

    if (pont_arq == NULL) {
        printf("Erro na abertura do arquivo texto!\n");
        return;
    }

    printf("Conteudo do arquivo texto:\n");
    while (fgets(linha, sizeof(linha), pont_arq)) {
        printf("%s", linha);
    }

    fclose(pont_arq);
}

void lerArquivoBinario() {
    FILE *pont_arq;
    int numero;

    pont_arq = fopen("dados.bin", "rb");

    if (pont_arq == NULL) {
        printf("Erro na abertura do arquivo binario!\n");
        return;
    }

    printf("Conteudo do arquivo binario:\n");
    while (fread(&numero, sizeof(int), 1, pont_arq)) {
        printf("%d\n", numero);
    }

    fclose(pont_arq);
}

int main(void) {
    lerArquivoTexto();

    printf("\n");

    lerArquivoBinario();

    return 0;
}

