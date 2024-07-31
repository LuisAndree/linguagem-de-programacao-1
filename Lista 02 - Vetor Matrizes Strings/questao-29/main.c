#include <stdio.h>
#include <ctype.h>
#include <string.h>

int ePalindromo(const char *str) {
    int esquerda = 0;
    int direita = strlen(str) - 1;

    while (esquerda < direita) {
        while (esquerda < direita && !isalnum((unsigned char)str[esquerda])) {
            esquerda++;
        }
        while (esquerda < direita && !isalnum((unsigned char)str[direita])) {
            direita--;
        }

        if (tolower((unsigned char)str[esquerda]) != tolower((unsigned char)str[direita])) {
            return 0;
        }
        esquerda++;
        direita--;
    }

    return 1;
}

int main() {
    char string[200];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = 0;

    if (ePalindromo(string)) {
        printf("A string e um palindromo.\n");
    } else {
        printf("A string nao e um palindromo.\n");
    }

    return 0;
}

