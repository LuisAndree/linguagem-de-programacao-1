#include <stdio.h>

int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int year;

    printf("Digite um ano: ");
    scanf("%d", &year);

    if (is_leap_year(year)) {
        printf("%d e um ano bissexto\n", year);
    } else {
        printf("%d nao e um ano bissexto\n", year);
    }

    return 0;
}

