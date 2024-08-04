#include <stdio.h>  // 1. Inclui a biblioteca padr�o de entrada e sa�da, necess�ria para fun��es como printf, scanf, fopen, fprintf e fclose.
#include <stdlib.h> // 2. Inclui a biblioteca padr�o de utilidades, necess�ria para fun��es como exit e tamb�m algumas fun��es de manipula��o de arquivos.

// Fun��o principal do programa
int main(void)
{
    // Declara um ponteiro para um arquivo. Esse ponteiro ser� usado para manipular o arquivo.
    FILE *pont_arq;

    // Declara um array de caracteres para armazenar a palavra que ser� lida do usu�rio.
    char palavra[20];

    // Abre o arquivo "arquivo_palavra.txt" no modo de escrita ("w"). Se o arquivo n�o existir, ele ser� criado.
    pont_arq = fopen("arquivo_palavra.txt", "w");

    // Verifica se houve erro na abertura do arquivo. Se o ponteiro pont_arq for NULL, a abertura falhou.
    if(pont_arq == NULL)
    {
        // Informa o usu�rio que houve um erro ao abrir o arquivo.
        printf("Erro na abertura do arquivo!");
        // Retorna 1 para indicar que houve um erro na execu��o do programa.
        return 1;
    }

    // Solicita ao usu�rio que digite uma palavra para gravar no arquivo.
    printf("Escreva uma palavra para testar gravacao de arquivo: ");
    // L� a palavra digitada pelo usu�rio e armazena no array 'palavra'.
    scanf("%s", palavra);

    // Escreve a palavra digitada pelo usu�rio no arquivo, usando o ponteiro pont_arq.
    fprintf(pont_arq, "%s", palavra);

    // Fecha o arquivo. � importante fechar o arquivo para garantir que todos os dados sejam gravados corretamente e liberar recursos.
    fclose(pont_arq);

    // Informa ao usu�rio que os dados foram gravados com sucesso no arquivo.
    printf("Dados gravados com sucesso!");

    // Aguarda o usu�rio pressionar uma tecla antes de fechar o programa. (Nota: `getch` � uma fun��o da biblioteca conio.h, que n�o est� inclu�da aqui. Pode causar erro de compila��o se n�o for inclu�da)
    getch();
    return(0); // Retorna 0 para indicar que o programa foi executado com sucesso.
}
