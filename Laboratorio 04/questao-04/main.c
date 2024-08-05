#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nome[50];
    float nota;
} Registro;

void cadastrar(Registro *registros, int *count);
void exibirTodos(Registro *registros, int count);
void localizarRegistro(Registro *registros, int count);
void editarRegistro(Registro *registros, int count);
void excluirRegistro(Registro *registros, int *count);
void salvarRegistros(Registro *registros, int count);
void carregarRegistros(Registro *registros, int *count);

int main() {
    Registro registros[MAX];
    int count = 0;
    int opcao;

    carregarRegistros(registros, &count);

    do {
        printf("\nMenu:\n");
        printf("1 - Cadastro\n");
        printf("2 - Exibir todos os registros\n");
        printf("3 - Localizar registro\n");
        printf("4 - Editar registro\n");
        printf("5 - Excluir registro\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao) {
            case 1:
                cadastrar(registros, &count);
                break;
            case 2:
                exibirTodos(registros, count);
                break;
            case 3:
                localizarRegistro(registros, count);
                break;
            case 4:
                editarRegistro(registros, count);
                break;
            case 5:
                excluirRegistro(registros, &count);
                break;
            case 0:
                salvarRegistros(registros, count);
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}

void cadastrar(Registro *registros, int *count) {
    if (*count >= MAX) {
        printf("Limite de registros atingido!\n");
        return;
    }

    printf("Digite o nome: ");
    fgets(registros[*count].nome, 50, stdin);
    registros[*count].nome[strcspn(registros[*count].nome, "\n")] = 0;

    printf("Digite a nota: ");
    scanf("%f", &registros[*count].nota);
    getchar();

    (*count)++;
}

void exibirTodos(Registro *registros, int count) {
    printf("\nTodos os registros:\n");
    for (int i = 0; i < count; i++) {
        printf("Nome: %s, Nota: %.2f\n", registros[i].nome, registros[i].nota);
    }
}

void localizarRegistro(Registro *registros, int count) {
    char nome[50];
    printf("Digite o nome para localizar: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = 0;

    for (int i = 0; i < count; i++) {
        if (strcmp(registros[i].nome, nome) == 0) {
            printf("Registro encontrado: Nome: %s, Nota: %.2f\n", registros[i].nome, registros[i].nota);
            return;
        }
    }

    printf("Registro nao encontrado!\n");
}

void editarRegistro(Registro *registros, int count) {
    char nome[50];
    printf("Digite o nome para editar: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = 0;

    for (int i = 0; i < count; i++) {
        if (strcmp(registros[i].nome, nome) == 0) {
            printf("Digite a nova nota: ");
            scanf("%f", &registros[i].nota);
            getchar();
            printf("Registro atualizado!\n");
            return;
        }
    }

    printf("Registro nao encontrado!\n");
}

void excluirRegistro(Registro *registros, int *count) {
    char nome[50];
    printf("Digite o nome para excluir: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = 0;

    for (int i = 0; i < *count; i++) {
        if (strcmp(registros[i].nome, nome) == 0) {
            for (int j = i; j < *count - 1; j++) {
                registros[j] = registros[j + 1];
            }
            (*count)--;
            printf("Registro excluido!\n");
            return;
        }
    }

    printf("Registro nao encontrado!\n");
}

void salvarRegistros(Registro *registros, int count) {
    FILE *file = fopen("registros.bin", "wb");
    if (file == NULL) {
        printf("Erro ao abrir arquivo para salvar!\n");
        return;
    }

    fwrite(&count, sizeof(int), 1, file);
    fwrite(registros, sizeof(Registro), count, file);

    fclose(file);
}

void carregarRegistros(Registro *registros, int *count) {
    FILE *file = fopen("registros.bin", "rb");
    if (file == NULL) {
        printf("Arquivo de registros nao encontrado. Iniciando novo...\n");
        return;
    }

    fread(count, sizeof(int), 1, file);
    fread(registros, sizeof(Registro), *count, file);

    fclose(file);
}
