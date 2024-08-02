#include <stdio.h>

#define MAX_OF_THREE(a, b, c) ((a) > (b) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))

int main() {
    int x = 10, y = 20, z = 15;

    printf("O maior entre %d, %d, e %d e %d\n", x, y, z, MAX_OF_THREE(x, y, z));

    return 0;
}

