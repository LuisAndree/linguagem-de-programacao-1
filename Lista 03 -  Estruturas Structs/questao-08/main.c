#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    union {
        float volume;
        float peso;
    } medida;
    char tipoMedida;
} ItemSupermercado;

int main() {
    ItemSupermercado item;

    printf("Digite o nome do item: ");
    fgets(item.nome, sizeof(item.nome), stdin);

    printf("Digite o preco do item: ");
    scanf("%f", &item.preco);

    printf("Digite 'V' para volume ou 'P' para peso: ");
    getchar(); //
    scanf("%c", &item.tipoMedida);

    if (item.tipoMedida == 'V') {
        printf("Digite o volume do item: ");
        scanf("%f", &item.medida.volume);
    } else if (item.tipoMedida == 'P') {
        printf("Digite o peso do item: ");
        scanf("%f", &item.medida.peso);
    } else {
        printf("Tipo de medida invalido\n");
        return 1;
    }

    printf("\nDados do item:\n");
    printf("Nome: %s", item.nome);
    printf("Preco: %.2f\n", item.preco);

    if (item.tipoMedida == 'V') {
        printf("Volume: %.2f\n", item.medida.volume);
    } else if (item.tipoMedida == 'P') {
        printf("Peso: %.2f\n", item.medida.peso);
    }

    printf("Tamanho ocupado na memoria pela estrutura: %zu bytes\n", sizeof(ItemSupermercado));

    return 0;
}

