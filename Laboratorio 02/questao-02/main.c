#include <stdio.h>

void desenhar_quadrado(int n, char s) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("%c", s);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    char s;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%d", &n);
    printf("Digite o simbolo para as bordas: ");
    scanf(" %c", &s);

    desenhar_quadrado(n, s);

    return 0;
}
