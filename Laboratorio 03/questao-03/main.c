#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (fim > inicio) {
        while (!isalnum(str[inicio]) && inicio < fim) {
            inicio++;
        }
        while (!isalnum(str[fim]) && fim > inicio) {
            fim--;
        }

        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0;
        }

        inicio++;
        fim--;
    }

    return 1;
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;

    if (ehPalindromo(str)) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }

    return 0;
}
