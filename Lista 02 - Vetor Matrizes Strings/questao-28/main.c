#include <stdio.h>
#include <ctype.h>

void criptografarCesar(char *str) {
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (isalpha(c)) {
            char offset = isupper(c) ? 'A' : 'a';
            str[i] = (c - offset + 3) % 26 + offset;
        }
    }
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = 0;

    criptografarCesar(string);

    printf("String codificada: %s\n", string);

    return 0;
}
