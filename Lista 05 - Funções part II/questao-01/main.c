#include <stdio.h>

#define IS_ODD(x) ((x) % 2)

int main() {
    int num1 = 5;
    int num2 = 4;

    printf("O numero %d e %s\n", num1, IS_ODD(num1) ? "impar" : "par");
    printf("O numero %d e %s\n", num2, IS_ODD(num2) ? "impar" : "par");

    return 0;
}
