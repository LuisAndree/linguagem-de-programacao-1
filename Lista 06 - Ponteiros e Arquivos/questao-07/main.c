#include <stdio.h>  // 1. Inclui a biblioteca padrão de entrada e saída, necessária para funções como printf, scanf, fopen, fprintf e fclose.
#include <stdlib.h> // 2. Inclui a biblioteca padrão de utilidades, necessária para funções como exit e também algumas funções de manipulação de arquivos.

// Função principal do programa
int main(void)
{
    // Declara um ponteiro para um arquivo. Esse ponteiro será usado para manipular o arquivo.
    FILE *pont_arq;

    // Declara um array de caracteres para armazenar a palavra que será lida do usuário.
    char palavra[20];

    // Abre o arquivo "arquivo_palavra.txt" no modo de escrita ("w"). Se o arquivo não existir, ele será criado.
    pont_arq = fopen("arquivo_palavra.txt", "w");

    // Verifica se houve erro na abertura do arquivo. Se o ponteiro pont_arq for NULL, a abertura falhou.
    if(pont_arq == NULL)
    {
        // Informa o usuário que houve um erro ao abrir o arquivo.
        printf("Erro na abertura do arquivo!");
        // Retorna 1 para indicar que houve um erro na execução do programa.
        return 1;
    }

    // Solicita ao usuário que digite uma palavra para gravar no arquivo.
    printf("Escreva uma palavra para testar gravacao de arquivo: ");
    // Lê a palavra digitada pelo usuário e armazena no array 'palavra'.
    scanf("%s", palavra);

    // Escreve a palavra digitada pelo usuário no arquivo, usando o ponteiro pont_arq.
    fprintf(pont_arq, "%s", palavra);

    // Fecha o arquivo. É importante fechar o arquivo para garantir que todos os dados sejam gravados corretamente e liberar recursos.
    fclose(pont_arq);

    // Informa ao usuário que os dados foram gravados com sucesso no arquivo.
    printf("Dados gravados com sucesso!");

    // Aguarda o usuário pressionar uma tecla antes de fechar o programa. (Nota: `getch` é uma função da biblioteca conio.h, que não está incluída aqui. Pode causar erro de compilação se não for incluída)
    getch();
    return(0); // Retorna 0 para indicar que o programa foi executado com sucesso.
}
