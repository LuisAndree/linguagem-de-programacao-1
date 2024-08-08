#include <stdio.h>

int main() {
    printf("Numeros impares de 1 a 100:\n");

    for (int i = 1; i <= 100; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
