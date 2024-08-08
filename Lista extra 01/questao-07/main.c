#include <stdio.h>

int main() {
    int a, b, c;
    int maior1, maior2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        maior1 = a;
        maior2 = (b >= c) ? b : c;
    } else if (b >= a && b >= c) {
        maior1 = b;
        maior2 = (a >= c) ? a : c;
    } else {
        maior1 = c;
        maior2 = (a >= b) ? a : b;
    }

    printf("A soma dos dois maiores valores e: %d\n", maior1 + maior2);

    return 0;
}

