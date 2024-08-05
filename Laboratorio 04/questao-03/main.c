#include <stdio.h>
#include <string.h>

struct Atleta {
    char nome[50];
    int idade;
    char modalidade[50];
};

void cadastrarAtleta(struct Atleta *atleta) {
    printf("Digite o nome do atleta: ");
    fgets(atleta->nome, 50, stdin);
    atleta->nome[strcspn(atleta->nome, "\n")] = 0;

    printf("Digite a idade do atleta: ");
    scanf("%d", &atleta->idade);
    getchar();

    printf("Digite a modalidade do atleta: ");
    fgets(atleta->modalidade, 50, stdin);
    atleta->modalidade[strcspn(atleta->modalidade, "\n")] = 0;
}

void imprimirDados(struct Atleta atleta) {
    printf("\nDados do Atleta:\n");
    printf("Nome: %s\n", atleta.nome);
    printf("Idade: %d\n", atleta.idade);
    printf("Modalidade: %s\n", atleta.modalidade);
}

int main() {
    struct Atleta atleta;
    cadastrarAtleta(&atleta);
    imprimirDados(atleta);

    return 0;
}
