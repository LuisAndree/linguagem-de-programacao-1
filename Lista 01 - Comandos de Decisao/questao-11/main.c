
#include <stdio.h>

int main() {
    printf("Usando for:\n");
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Usando while:\n");
    int j = 1;
    while (j <= 100) {
        printf("%d ", j);
        j++;
    }
    printf("\n\n");

    printf("Usando do while:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 100);
    printf("\n");

    return 0;
}
