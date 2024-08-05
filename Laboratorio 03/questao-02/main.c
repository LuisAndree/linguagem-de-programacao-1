#include <stdio.h>

void substituirVogais(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        switch (str[i]) {
            case 'a':
            case 'A':
                str[i] = '1';
                break;
            case 'e':
            case 'E':
                str[i] = '2';
                break;
            case 'i':
            case 'I':
                str[i] = '3';
                break;
            case 'o':
            case 'O':
                str[i] = '4';
                break;
            case 'u':
            case 'U':
                str[i] = '5';
                break;
        }
        i++;
    }
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    substituirVogais(str);

    printf("String com vogais substituídas: %s\n", str);

    return 0;
}
