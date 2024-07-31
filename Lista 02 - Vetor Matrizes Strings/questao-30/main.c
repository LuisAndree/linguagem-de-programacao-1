#include <stdio.h>
#include <string.h>
#include <ctype.h>

void lerString(char *str, int tamanhoMax) {
    printf("Digite a string (max %d caracteres): ", tamanhoMax - 1);
    fgets(str, tamanhoMax, stdin);
    str[strcspn(str, "\n")] = 0;
}

void imprimirTamanho(const char *str) {
    printf("O tamanho da string e: %lu\n", strlen(str));
}

void compararStrings(const char *str1, const char *str2) {
    int resultado = strcmp(str1, str2);
    if (resultado < 0) {
        printf("A string \"%s\" e menor que \"%s\".\n", str1, str2);
    } else if (resultado > 0) {
        printf("A string \"%s\" e maior que \"%s\".\n", str1, str2);
    } else {
        printf("As strings sao iguais.\n");
    }
}

void concatenarStrings(char *str1, const char *str2) {
    strcat(str1, str2);
    printf("String concatenada: %s\n", str1);
}

void imprimirReverso(const char *str) {
    int comprimento = strlen(str);
    printf("String reversa: ");
    for (int i = comprimento - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
}

void contarCaracter(const char *str, char caractere) {
    int contagem = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == caractere) {
            contagem++;
        }
    }
    printf("O caractere '%c' aparece %d vezes na string.\n", caractere, contagem);
}

void substituirCaractere(char *str, char c1, char c2) {
    char *ptr = strchr(str, c1);
    if (ptr != NULL) {
        *ptr = c2;
        printf("String apos substituicao: %s\n", str);
    } else {
        printf("O caractere '%c' nao foi encontrado na string.\n", c1);
    }
}

void verificarSubstring(const char *str1, const char *str2) {
    if (strstr(str1, str2) != NULL) {
        printf("A string \"%s\" e substring de \"%s\".\n", str2, str1);
    } else {
        printf("A string \"%s\" nao e substring de \"%s\".\n", str2, str1);
    }
}

void retornarSubstring(const char *str, int pos, int tamanho) {
    if (pos >= 0 && pos < strlen(str)) {
        printf("Substring: ");
        for (int i = pos; i < pos + tamanho && i < strlen(str); i++) {
            putchar(str[i]);
        }
        printf("\n");
    } else {
        printf("Posicao invalida.\n");
    }
}

int main() {
    char s1[21], s2[21];
    char caractere, c1, c2;
    int opcao, pos, tamanho;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Ler uma string S1\n");
        printf("2. Imprimir o tamanho da string S1\n");
        printf("3. Comparar a string S1 com uma nova string S2\n");
        printf("4. Concatenar a string S1 com uma nova string S2\n");
        printf("5. Imprimir a string S1 de forma reversa\n");
        printf("6. Contar quantas vezes um dado caractere aparece na string S1\n");
        printf("7. Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2\n");
        printf("8. Verificar se uma string S2 e substring de S1\n");
        printf("9. Retornar uma substring da string S1\n");
        printf("0. Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                lerString(s1, sizeof(s1));
                break;
            case 2:
                imprimirTamanho(s1);
                break;
            case 3:
                printf("Digite uma nova string S2: ");
                lerString(s2, sizeof(s2));
                compararStrings(s1, s2);
                break;
            case 4:
                printf("Digite uma nova string S2 para concatenar: ");
                lerString(s2, sizeof(s2));
                concatenarStrings(s1, s2);
                break;
            case 5:
                imprimirReverso(s1);
                break;
            case 6:
                printf("Digite o caractere a ser contado: ");
                scanf("%c", &caractere);
                getchar();
                contarCaracter(s1, caractere);
                break;
            case 7:
                printf("Digite o caractere a ser substituido (C1): ");
                scanf("%c", &c1);
                getchar();
                printf("Digite o novo caractere (C2): ");
                scanf("%c", &c2);
                getchar();
                substituirCaractere(s1, c1, c2);
                break;
            case 8:
                printf("Digite uma string S2 para verificar se e substring de S1: ");
                lerString(s2, sizeof(s2));
                verificarSubstring(s1, s2);
                break;
            case 9:
                printf("Digite a partir de qual posicao deve ser criada a substring: ");
                scanf("%d", &pos);
                printf("Digite o tamanho da substring: ");
                scanf("%d", &tamanho);
                retornarSubstring(s1, pos, tamanho);
                break;
            case 0:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}

