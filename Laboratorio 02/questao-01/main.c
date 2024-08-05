#include <stdio.h>
#include <string.h>

#define MAX_PALAVRAS 100
#define MAX_COMPRIMENTO 100

void inverter_palavra(char palavra[]) {
    int comprimento = strlen(palavra);
    for (int i = 0; i < comprimento / 2; i++) {
        char temp = palavra[i];
        palavra[i] = palavra[comprimento - i - 1];
        palavra[comprimento - i - 1] = temp;
    }
}

int main() {
    char palavras[MAX_PALAVRAS][MAX_COMPRIMENTO];
    int n;

    printf("Quantas palavras deseja armazenar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite a palavra %d: ", i + 1);
        scanf("%s", palavras[i]);
    }

    printf("\nQuantidade de caracteres em cada palavra:\n");
    for (int i = 0; i < n; i++) {
        printf("%s: %lu caracteres\n", palavras[i], strlen(palavras[i]));
    }

    printf("\nPalavras invertidas:\n");
    for (int i = 0; i < n; i++) {
        char palavra_invertida[MAX_COMPRIMENTO];
        strcpy(palavra_invertida, palavras[i]);
        inverter_palavra(palavra_invertida);
        printf("%s\n", palavra_invertida);
    }

    return 0;
}
