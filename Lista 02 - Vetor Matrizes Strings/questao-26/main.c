#include <stdio.h>

void converterParaMaiusculas(char *str) {
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = 0;

    converterParaMaiusculas(string);

    printf("String em letras maiusculas: %s\n", string);

    return 0;
}

