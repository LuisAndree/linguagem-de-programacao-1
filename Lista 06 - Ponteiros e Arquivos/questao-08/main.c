#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *pont_arq;

    pont_arq = fopen("dados.txt", "w");

    if (pont_arq == NULL) {
        printf("Erro na abertura do arquivo!");
        return 1;
    }

    for (int i = 1; i <= 100; i++) {
        fprintf(pont_arq, "%d\n", i);
    }

    fclose(pont_arq);

    printf("Dados gravados com sucesso!\n");

    return 0;
}
