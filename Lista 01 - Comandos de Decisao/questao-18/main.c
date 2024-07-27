#include <stdio.h>

int main() {
    int num, a = 0, b = 1, next;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    printf("Sequencia de Fibonacci ate o primeiro numero superior a %d:\n", num);
    printf("%d ", a);

    if (num > 0) {
        printf("%d ", b);
    }

    next = a + b;

    while (next <= num) {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }

    printf("%d\n", next);

    return 0;
}

