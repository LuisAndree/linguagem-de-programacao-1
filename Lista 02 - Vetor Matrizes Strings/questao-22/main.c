#include <stdio.h>

int contarVogais(const char *str) {
    int contador = 0;
    char c;

    while ((c = *str++) != '\0') {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contador++;
        }
    }

    return contador;
}

int main() {
    char nome[100];

    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = 0;

    int numeroDeVogais = contarVogais(nome);

    printf("O nome digitado tem %d vogais.\n", numeroDeVogais);

    return 0;
}
