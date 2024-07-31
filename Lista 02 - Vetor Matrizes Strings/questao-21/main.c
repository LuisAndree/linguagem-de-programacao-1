#include <stdio.h>

int calcularComprimento(const char *str) {
    int comprimento = 0;

    while (str[comprimento] != '\0') {
        comprimento++;
    }

    return comprimento;
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = 0;

    int comprimento = calcularComprimento(string);

    printf("O comprimento da string e: %d\n", comprimento);

    return 0;
}
