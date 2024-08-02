#include <stdio.h>

#define MAIOR_QUE(x, y) ((x) > (y))

int main() {
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    if (MAIOR_QUE(x, y)) {
        printf("%d e maior que %d\n", x, y);
    } else {
        printf("%d nao e maior que %d\n", x, y);
    }

    return 0;
}
