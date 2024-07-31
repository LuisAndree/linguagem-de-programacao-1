#include <stdio.h>

void removerVogais(char *str) {
    int i, j = 0;
    char c;

    for (i = 0; str[i] != '\0'; i++) {
        c = str[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = 0;

    removerVogais(string);

    printf("String sem vogais: %s\n", string);

    return 0;
}

