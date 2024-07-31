#include <stdio.h>

int compararStrings(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }

    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int main() {
    char string1[100];
    char string2[100];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = 0;

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = 0;

    int resultado = compararStrings(string1, string2);

    if (resultado < 0) {
        printf("A primeira string e menor que a segunda.\n");
    } else if (resultado > 0) {
        printf("A primeira string e maior que a segunda.\n");
    } else {
        printf("As strings sao iguais.\n");
    }

    return 0;
}
