#include <stdio.h>
#include <ctype.h>

void converteParaMaiusculas(char str[]) {
    for (int i = 0; i < 20 && str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char str[21];

    printf("Digite uma string de tamanho ate 20: ");
    fgets(str, 21, stdin);

    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    converteParaMaiusculas(str);

    printf("String convertida: %s\n", str);

    return 0;
}

