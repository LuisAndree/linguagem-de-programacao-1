#include <stdio.h>

void converterParaMinusculas(char *str) {
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = 0;

    converterParaMinusculas(string);

    printf("String em letras minusculas: %s\n", string);

    return 0;
}
